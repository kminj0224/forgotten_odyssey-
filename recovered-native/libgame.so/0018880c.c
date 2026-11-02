/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018880c  Symbol: FUN_0018880c */

undefined4
FUN_0018880c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    FUN_0017c0fc();
    iVar1 = FUN_0018fbec(param_2,param_3,param_4,0);
    if (iVar1 != 0) {
      iVar2 = FUN_0017a148(param_1,iVar1,0);
      if (iVar2 != 0) {
        FUN_0017bfa0(param_1,iVar2);
        uVar3 = FUN_00188794(param_1,param_5,param_6,param_7,1);
        return uVar3;
      }
      FUN_0018ff94(iVar1);
    }
  }
  return 0;
}


