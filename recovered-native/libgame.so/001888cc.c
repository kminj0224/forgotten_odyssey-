/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001888cc  Symbol: FUN_001888cc */

undefined4
FUN_001888cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0017c0fc();
    iVar1 = FUN_0018fc0c(param_2,param_3,0);
    if (iVar1 != 0) {
      iVar2 = FUN_0017a148(param_1,iVar1,0);
      if (iVar2 != 0) {
        FUN_0017bfa0(param_1,iVar2);
        uVar3 = FUN_00188794(param_1,param_4,param_5,param_6,1);
        return uVar3;
      }
      FUN_0018ff94(iVar1);
    }
  }
  return 0;
}


