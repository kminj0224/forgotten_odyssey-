/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020010c  Symbol: FUN_0020010c */

int FUN_0020010c(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 < *(uint *)(iVar1 + -0xc)) {
    if (-1 < *(int *)(iVar1 + -4)) {
      FUN_001fff60();
      iVar1 = *param_1;
    }
    return iVar1 + param_2 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_00200150 + DAT_00200150);
}


