/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190060  Symbol: FUN_00190060 */

undefined4 FUN_00190060(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_001900c0 + 0x19006c;
  if ((param_1 == 0) || (iVar1 = FUN_00190014(), iVar1 != 0)) {
    uVar3 = (**(code **)(iVar2 + DAT_001900c8))(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_00193d34(param_1);
    if (iVar1 == 0) {
      uVar3 = 0;
      FUN_0018f77c(iVar2 + DAT_001900c4);
    }
    else {
      uVar3 = (**(code **)(iVar2 + DAT_001900c8))(iVar1,param_2,param_3);
      (***(code ***)(iVar2 + DAT_001900cc))(iVar1);
    }
  }
  return uVar3;
}


