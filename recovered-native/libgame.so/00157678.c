/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157678  Symbol: _saveImageToPNG */

/* cocos2d::CCImage::_saveImageToPNG(char const*, bool) */

undefined4 __thiscall cocos2d::CCImage::_saveImageToPNG(CCImage *this,char *param_1,bool param_2)

{
  short sVar1;
  short sVar2;
  FILE *__stream;
  __jmp_buf_tag *__env;
  int iVar3;
  void **__ptr;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void **ppvVar8;
  undefined4 uVar9;
  int local_20;
  int local_1c [2];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  __stream = fopen(param_1,(char *)(DAT_001578fc + 0x15768e));
  if (__stream == (FILE *)0x0) {
    return 0;
  }
  local_20 = png_create_write_struct(DAT_00157900 + 0x1576a4,0,0,0);
  if (local_20 == 0) {
    fclose(__stream);
    return 0;
  }
  local_1c[0] = png_create_info_struct();
  if (local_1c[0] == 0) {
    fclose(__stream);
    piVar6 = (int *)0x0;
LAB_001576ce:
    png_destroy_write_struct(&local_20,piVar6);
    return 0;
  }
  __env = (__jmp_buf_tag *)
          png_set_longjmp_fn(local_20,*(undefined4 *)(DAT_00157904 + 0x1576e0),0x100);
  iVar3 = setjmp(__env);
  if (iVar3 != 0) {
    fclose(__stream);
    png_destroy_write_struct(&local_20,local_1c);
    return 0;
  }
  png_init_io(local_20,__stream);
  if ((param_2) || (this[0x10] == (CCImage)0x0)) {
    sVar1 = *(short *)(this + 4);
    sVar2 = *(short *)(this + 6);
    uVar9 = 2;
  }
  else {
    sVar1 = *(short *)(this + 4);
    sVar2 = *(short *)(this + 6);
    uVar9 = 6;
  }
  png_set_IHDR(local_20,local_1c[0],(int)sVar1,(int)sVar2,8,uVar9,0,0,0);
  uVar9 = png_malloc(local_20,0x300);
  png_set_PLTE(local_20,local_1c[0],uVar9,0x100);
  png_write_info(local_20,local_1c[0]);
  png_set_packing(local_20);
  sVar1 = *(short *)(this + 6);
  __ptr = (void **)malloc((int)sVar1 << 2);
  if (__ptr == (void **)0x0) {
    fclose(__stream);
    png_destroy_write_struct(&local_20,local_1c);
    return 0;
  }
  if (this[0x10] == (CCImage)0x0) {
    ppvVar8 = __ptr;
    for (iVar3 = 0; iVar3 < *(short *)(this + 6); iVar3 = iVar3 + 1) {
      *ppvVar8 = (void *)(*(int *)(this + 0xc) + iVar3 * *(short *)(this + 4) * 3);
      ppvVar8 = ppvVar8 + 1;
    }
  }
  else {
    if (param_2) {
      pvVar4 = operator_new__((int)*(short *)(this + 4) * (int)sVar1 * 3);
      iVar3 = 0;
      if (pvVar4 == (void *)0x0) {
        fclose(__stream);
        piVar6 = local_1c;
        goto LAB_001576ce;
      }
      for (; iVar3 < *(short *)(this + 6); iVar3 = iVar3 + 1) {
        for (iVar7 = 0; iVar7 < *(short *)(this + 4); iVar7 = iVar7 + 1) {
          iVar5 = iVar3 * *(short *)(this + 4) + iVar7;
          *(undefined *)(iVar5 * 3 + (int)pvVar4) = *(undefined *)(iVar5 * 4 + *(int *)(this + 0xc))
          ;
          iVar5 = iVar3 * *(short *)(this + 4) + iVar7;
          *(undefined *)((int)pvVar4 + iVar5 * 3 + 1) =
               *(undefined *)(*(int *)(this + 0xc) + iVar5 * 4 + 1);
          iVar5 = iVar3 * *(short *)(this + 4) + iVar7;
          *(undefined *)((int)pvVar4 + iVar5 * 3 + 2) =
               *(undefined *)(*(int *)(this + 0xc) + iVar5 * 4 + 2);
        }
      }
      ppvVar8 = __ptr;
      for (iVar3 = 0; iVar3 < *(short *)(this + 6); iVar3 = iVar3 + 1) {
        *ppvVar8 = (void *)((int)pvVar4 + iVar3 * *(short *)(this + 4) * 3);
        ppvVar8 = ppvVar8 + 1;
      }
      png_write_image(local_20,__ptr);
      free(__ptr);
      operator_delete__(pvVar4);
      goto LAB_001578d6;
    }
    ppvVar8 = __ptr;
    for (iVar3 = 0; iVar3 < *(short *)(this + 6); iVar3 = iVar3 + 1) {
      *ppvVar8 = (void *)(*(int *)(this + 0xc) + iVar3 * *(short *)(this + 4) * 4);
      ppvVar8 = ppvVar8 + 1;
    }
  }
  png_write_image(local_20,__ptr);
  free(__ptr);
LAB_001578d6:
  png_write_end(local_20,local_1c[0]);
  png_free(local_20,uVar9);
  png_destroy_write_struct(&local_20,local_1c);
  fclose(__stream);
  return 1;
}


