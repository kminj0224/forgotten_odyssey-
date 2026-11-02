/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d876  Symbol: FUN_0015d876 */

undefined8 FUN_0015d876(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_0015d82c(param_1,&local_14);
  if (iVar1 == 0) {
    if (local_14 != 0) {
      uVar2 = FUN_0018a130(0,param_1);
      uVar3 = FUN_0018a038(param_2);
      FUN_0018c194(local_14,uVar2);
      FUN_0018c194(uVar2,uVar3);
    }
  }
  else {
    FUN_0018c774(iVar1,param_2);
  }
  return CONCAT44(local_14,param_1);
}


