/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c60f4  Symbol: FUN_001c60f4 */

int FUN_001c60f4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = FUN_0021100c(DAT_001c6128 + 0x1c6118,1);
    iVar1 = iVar1 + 1;
    *param_1 = iVar1;
  }
  return iVar1 + -1;
}


