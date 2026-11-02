/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016c364  Symbol: png_create_read_struct_2 */

void png_create_read_struct_2
               (char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  __jmp_buf_tag *__env;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  char acStack_6c [80];
  int local_1c;
  
  iVar8 = DAT_0016c628 + 0x16c376;
  local_1c = **(int **)(iVar8 + DAT_0016c62c);
  bVar1 = false;
  iVar2 = png_create_struct_2(1,param_6,param_5);
  uVar6 = DAT_0016c630;
  iVar3 = 0;
  if (iVar2 == 0) goto LAB_0016c4a6;
  *(undefined4 *)(iVar2 + 800) = DAT_0016c630;
  *(undefined4 *)(iVar2 + 0x324) = uVar6;
  *(undefined4 *)(iVar2 + 0x328) = 0;
  __env = (__jmp_buf_tag *)png_set_longjmp_fn(iVar2,*(undefined4 *)(iVar8 + DAT_0016c634),0x100);
  iVar3 = setjmp(__env);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  png_set_mem_fn(iVar2,param_5,param_6,param_7);
  png_set_error_fn(iVar2,param_2,param_3,param_4);
  if (param_1 == (char *)0x0) {
    *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 0x20000;
    if (-1 < *(int *)(iVar2 + 0x130) << 0xe) goto LAB_0016c43e;
LAB_0016c4be:
    if (param_1 != (char *)0x0) {
      cVar7 = *param_1;
      pcVar5 = (char *)png_get_header_ver(0);
      if (*pcVar5 == cVar7) {
        cVar7 = *param_1;
        if (cVar7 == '1') {
          cVar7 = param_1[2];
          iVar3 = png_get_header_ver(0);
          if (*(char *)(iVar3 + 2) != cVar7) goto LAB_0016c4d2;
          cVar7 = *param_1;
        }
        if ((cVar7 != '0') || (0x38 < (byte)param_1[2])) goto LAB_0016c43e;
      }
LAB_0016c4d2:
      snprintf(acStack_6c,0x50,(char *)(iVar8 + DAT_0016c640),param_1);
      png_warning(iVar2,acStack_6c);
    }
    uVar6 = png_get_header_ver(0);
    snprintf(acStack_6c,0x50,(char *)(iVar8 + DAT_0016c644),uVar6);
    png_warning(iVar2,acStack_6c);
    png_warning(iVar2,iVar8 + DAT_0016c648);
    bVar1 = true;
  }
  else {
    iVar3 = 0;
    while( true ) {
      cVar7 = param_1[iVar3];
      iVar4 = png_get_header_ver(0);
      if (*(char *)(iVar4 + iVar3) != cVar7) {
        *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 0x20000;
      }
      iVar4 = png_get_header_ver(0);
      if (*(char *)(iVar4 + iVar3) == '\0') break;
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(iVar2 + 0x130) << 0xe < 0) goto LAB_0016c4be;
LAB_0016c43e:
    *(undefined4 *)(iVar2 + 0x174) = 0x2000;
    uVar6 = png_malloc_warn(iVar2,*(undefined4 *)(iVar2 + 0x174));
    *(undefined4 *)(iVar2 + 0x170) = uVar6;
    if (*(int *)(iVar2 + 0x170) == 0) {
      bVar1 = true;
    }
  }
  *(undefined4 *)(iVar2 + 0x158) = *(undefined4 *)(iVar8 + DAT_0016c638);
  *(undefined4 *)(iVar2 + 0x15c) = *(undefined4 *)(iVar8 + DAT_0016c63c);
  *(int *)(iVar2 + 0x160) = iVar2;
  if (!bVar1) {
    iVar3 = inflateInit_(iVar2 + 0x138,iVar8 + DAT_0016c64c,0x38);
    if (iVar3 == -4) {
LAB_0016c598:
      png_warning(iVar2,iVar8 + DAT_0016c654);
      bVar1 = true;
    }
    else if (iVar3 == -4 || iVar3 + 4 < 0 != SCARRY4(iVar3,4)) {
      if (iVar3 == -6) {
        png_warning(iVar2,iVar8 + DAT_0016c658);
        bVar1 = true;
      }
      else {
LAB_0016c56e:
        png_warning(iVar2,iVar8 + DAT_0016c650);
        bVar1 = true;
      }
    }
    else {
      if (iVar3 == -2) goto LAB_0016c598;
      if (iVar3 != 0) goto LAB_0016c56e;
    }
  }
  if (bVar1) {
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x170));
    *(undefined4 *)(iVar2 + 0x170) = 0;
    png_destroy_struct_2(iVar2,param_7,param_5);
    iVar3 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x144) = *(undefined4 *)(iVar2 + 0x170);
    *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x174);
    png_set_read_fn(iVar2,0,0);
    iVar3 = iVar2;
  }
LAB_0016c4a6:
  if (local_1c != **(int **)(iVar8 + DAT_0016c62c)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


