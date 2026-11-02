/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193d0c  Symbol: FUN_00193d0c */

int FUN_00193d0c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00191b94();
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_001933bc(iVar1,param_1);
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_001919b8(iVar1);
  }
  return 0;
}


