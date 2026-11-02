/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168a84  Symbol: png_sig_cmp */

void png_sig_cmp(int param_1,uint param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_00168ae0;
  iVar3 = DAT_00168adc + 0x168a90;
  local_1c = **(int **)(iVar3 + DAT_00168ae0);
  local_24 = *(undefined4 *)(iVar3 + DAT_00168ae4);
  local_20 = ((undefined4 *)(iVar3 + DAT_00168ae4))[1];
  if (param_3 < 9) {
    if (param_3 != 0) goto LAB_00168aa8;
  }
  else {
    param_3 = 8;
LAB_00168aa8:
    if (param_2 < 8) {
      if (8 < param_3 + param_2) {
        param_3 = 8 - param_2;
      }
      iVar2 = memcmp((void *)(param_1 + param_2),(void *)((int)&local_24 + param_2),param_3);
      goto LAB_00168ac8;
    }
  }
  iVar2 = -1;
LAB_00168ac8:
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


