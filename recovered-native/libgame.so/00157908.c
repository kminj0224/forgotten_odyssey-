/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157908  Symbol: _saveImageToJPG */

/* cocos2d::CCImage::_saveImageToJPG(char const*) */

void __thiscall cocos2d::CCImage::_saveImageToJPG(CCImage *this,char *param_1)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  FILE **ppFVar8;
  FILE **ppFVar9;
  
  iVar2 = DAT_00157a74;
  ppFVar8 = (FILE **)(&stack0xffffffec + DAT_00157a74);
  ppFVar9 = (FILE **)(&stack0xffffffec + DAT_00157a74);
  uVar5 = **(undefined4 **)(DAT_00157a70 + 0x157914);
  *(undefined4 **)(&stack0xfffffff0 + DAT_00157a74) = *(undefined4 **)(DAT_00157a70 + 0x157914);
  *(undefined4 *)(&stack0x00000230 + DAT_00157a74) = uVar5;
  if (param_1 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = jpeg_std_error(&stack0xfffffff8 + DAT_00157a74);
    *(undefined4 *)(&stack0x0000007c + iVar2) = uVar5;
    jpeg_CreateCompress(&stack0x0000007c + iVar2,0x50,0x1b0);
    __stream = fopen(param_1,(char *)(DAT_00157a78 + 0x157940));
    *ppFVar8 = __stream;
    if (__stream == (FILE *)0x0) {
      uVar5 = 0;
    }
    else {
      jpeg_stdio_dest(&stack0x0000007c + iVar2,__stream);
      *(int *)(&stack0x00000098 + iVar2) = (int)*(short *)(this + 4);
      *(int *)(&stack0x0000009c + iVar2) = (int)*(short *)(this + 6);
      *(undefined4 *)(&stack0x000000a0 + iVar2) = 3;
      *(undefined4 *)(&stack0x000000a4 + iVar2) = 2;
      jpeg_set_defaults(&stack0x0000007c + iVar2);
      jpeg_start_compress(&stack0x0000007c + iVar2,1);
      iVar1 = *(short *)(this + 4) * 3;
      if (this[0x10] == (CCImage)0x0) {
        while (*(uint *)(&stack0x00000180 + iVar2) < *(uint *)(&stack0x0000009c + iVar2)) {
          *(uint *)(&stack0xfffffff4 + iVar2) =
               *(int *)(this + 0xc) + iVar1 * *(uint *)(&stack0x00000180 + iVar2);
          jpeg_write_scanlines(&stack0x0000007c + iVar2,&stack0xfffffff4 + iVar2,1);
        }
      }
      else {
        pvVar3 = operator_new__((int)*(short *)(this + 6) * (int)*(short *)(this + 4) * 3);
        iVar7 = 0;
        if (pvVar3 == (void *)0x0) {
          jpeg_finish_compress(&stack0x0000007c + iVar2);
          jpeg_destroy_compress(&stack0x0000007c + iVar2);
          fclose(__stream);
          uVar5 = 0;
          goto LAB_00157a58;
        }
        for (; iVar7 < *(short *)(this + 6); iVar7 = iVar7 + 1) {
          for (iVar6 = 0; iVar6 < *(short *)(this + 4); iVar6 = iVar6 + 1) {
            iVar4 = iVar7 * *(short *)(this + 4) + iVar6;
            *(undefined *)(iVar4 * 3 + (int)pvVar3) =
                 *(undefined *)(iVar4 * 4 + *(int *)(this + 0xc));
            iVar4 = iVar7 * *(short *)(this + 4) + iVar6;
            *(undefined *)((int)pvVar3 + iVar4 * 3 + 1) =
                 *(undefined *)(*(int *)(this + 0xc) + iVar4 * 4 + 1);
            iVar4 = iVar7 * *(short *)(this + 4) + iVar6;
            *(undefined *)((int)pvVar3 + iVar4 * 3 + 2) =
                 *(undefined *)(*(int *)(this + 0xc) + iVar4 * 4 + 2);
          }
        }
        while (*(uint *)(&stack0x00000180 + iVar2) < *(uint *)(&stack0x0000009c + iVar2)) {
          *(void **)(&stack0xfffffff4 + iVar2) =
               (void *)((int)pvVar3 + iVar1 * *(uint *)(&stack0x00000180 + iVar2));
          jpeg_write_scanlines(&stack0x0000007c + iVar2,&stack0xfffffff4 + iVar2,1);
        }
        operator_delete__(pvVar3);
      }
      jpeg_finish_compress(&stack0x0000007c + iVar2);
      fclose(*ppFVar9);
      jpeg_destroy_compress(&stack0x0000007c + iVar2);
      uVar5 = 1;
    }
  }
LAB_00157a58:
  if (*(int *)(&stack0x00000230 + iVar2) == **(int **)(&stack0xfffffff0 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


