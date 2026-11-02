/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001933bc  Symbol: FUN_001933bc */

int FUN_001933bc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else {
    FUN_00191900();
    iVar1 = FUN_00193158(param_1,param_2);
    if (iVar1 != 0) {
      FUN_00191900(param_1);
      iVar1 = FUN_00193258(param_1,param_2);
      if (iVar1 != 0) {
        FUN_00191900(param_1);
      }
    }
  }
  return iVar1;
}


