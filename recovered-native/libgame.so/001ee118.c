/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee118  Symbol: FUN_001ee118 */

int FUN_001ee118(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 < *(uint *)(iVar1 + -0xc)) {
    if (-1 < *(int *)(iVar1 + -4)) {
      FUN_001edf6c();
      iVar1 = *param_1;
    }
    return iVar1 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_001ee15c + DAT_001ee15c);
}


