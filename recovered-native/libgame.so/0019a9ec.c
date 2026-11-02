/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019a9ec  Symbol: FUN_0019a9ec */

undefined4
FUN_0019a9ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    FUN_0017c498();
    iVar1 = FUN_0018fbec(param_1,param_2,param_3,0);
    if (iVar1 != 0) {
      iVar2 = FUN_001974d0();
      if (iVar2 == 0) {
        FUN_0018ff94(iVar1);
      }
      else {
        iVar3 = FUN_0017a148(iVar2,iVar1,0);
        if (iVar3 != 0) {
          FUN_0017bfa0(iVar2,iVar3);
          uVar4 = FUN_0019a7a8(iVar2,param_4,param_5,param_6,0);
          return uVar4;
        }
        FUN_0018ff94(iVar1);
        FUN_00179908(iVar2);
      }
    }
  }
  return 0;
}


