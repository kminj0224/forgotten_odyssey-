/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d228  Symbol: png_create_write_struct_2 */

void png_create_write_struct_2
               (char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  __jmp_buf_tag *__env;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  char acStack_6c [80];
  int local_1c;
  
  iVar8 = DAT_0016d41c + 0x16d240;
  local_1c = **(int **)(iVar8 + DAT_0016d420);
  bVar1 = false;
  iVar2 = png_create_struct_2(1,param_6,param_5);
  uVar6 = DAT_0016d424;
  iVar3 = 0;
  if (iVar2 == 0) goto LAB_0016d32c;
  *(undefined4 *)(iVar2 + 800) = DAT_0016d424;
  *(undefined4 *)(iVar2 + 0x324) = uVar6;
  __env = (__jmp_buf_tag *)png_set_longjmp_fn(iVar2,*(undefined4 *)(iVar8 + DAT_0016d428),0x100);
  iVar3 = setjmp(__env);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  png_set_mem_fn(iVar2,param_5,param_6,param_7);
  png_set_error_fn(iVar2,param_2,param_3,param_4);
  if (param_1 != (char *)0x0) {
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
  }
  if (*(int *)(iVar2 + 0x130) << 0xe < 0) {
    if (param_1 != (char *)0x0) {
      cVar7 = *param_1;
      pcVar5 = (char *)png_get_header_ver(0);
      if (*pcVar5 == cVar7) {
        cVar7 = *param_1;
        if (cVar7 == '1') {
          cVar7 = param_1[2];
          iVar3 = png_get_header_ver(0);
          if (*(char *)(iVar3 + 2) != cVar7) goto LAB_0016d358;
          cVar7 = *param_1;
        }
        if ((cVar7 != '0') || (0x38 < (byte)param_1[2])) goto LAB_0016d2f8;
      }
LAB_0016d358:
      snprintf(acStack_6c,0x50,(char *)(iVar8 + DAT_0016d42c),param_1);
      png_warning(iVar2,acStack_6c);
    }
    uVar6 = png_get_header_ver(0);
    snprintf(acStack_6c,0x50,(char *)(iVar8 + DAT_0016d430),uVar6);
    png_warning(iVar2,acStack_6c);
    png_warning(iVar2,iVar8 + DAT_0016d434);
    bVar1 = true;
  }
LAB_0016d2f8:
  *(undefined4 *)(iVar2 + 0x174) = 0x2000;
  if (!bVar1) {
    uVar6 = png_malloc_warn(iVar2,*(undefined4 *)(iVar2 + 0x174));
    *(undefined4 *)(iVar2 + 0x170) = uVar6;
    if (*(int *)(iVar2 + 0x170) == 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    png_free(iVar2,*(undefined4 *)(iVar2 + 0x170));
    *(undefined4 *)(iVar2 + 0x170) = 0;
    png_destroy_struct_2(iVar2,param_7,param_5);
    iVar3 = 0;
  }
  else {
    png_set_write_fn(iVar2,0,0,0);
    png_set_filter_heuristics(iVar2,0,1,0,0);
    iVar3 = iVar2;
  }
LAB_0016d32c:
  if (local_1c == **(int **)(iVar8 + DAT_0016d420)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


