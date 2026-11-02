/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019b2e4  Symbol: FUN_0019b2e4 */

undefined4
FUN_0019b2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019b358 + 0x19b2f0;
  FUN_0017c498();
  if ((param_4 == 0) || (iVar1 = FUN_001a3e20(param_4), iVar1 == 1)) {
    iVar1 = FUN_001a4238(iVar3 + DAT_0019b35c);
    if (iVar1 == 0) {
      iVar1 = FUN_001a4238(iVar3 + DAT_0019b360,0);
    }
  }
  else {
    iVar1 = FUN_001a4238(param_4);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  iVar3 = FUN_0018fa4c(param_1,iVar1);
  uVar2 = 0;
  if (iVar3 != 0) {
    FUN_0019ae7c(iVar3,param_2,param_3,param_4,param_5);
    uVar2 = FUN_001906f8(iVar3);
  }
  return uVar2;
}


