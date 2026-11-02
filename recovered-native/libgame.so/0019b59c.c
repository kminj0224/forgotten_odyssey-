/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019b59c  Symbol: FUN_0019b59c */

undefined4 FUN_0019b59c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019b638 + 0x19b5a8;
  if ((param_2 == 0) || (param_1 == 0)) {
    return 0xffffffff;
  }
  FUN_0017c498();
  if (param_3 == 0) {
    FUN_0019b378(param_2,iVar3 + DAT_0019b63c);
  }
  else {
    iVar1 = FUN_001a3e20(param_3);
    if (iVar1 != *(int *)(param_2 + 0x4c)) {
      if (*(int *)(param_2 + 0x4c) != 1) {
        return 0xffffffff;
      }
      iVar1 = FUN_001a4238(param_3);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      FUN_0019b378(param_2,param_3);
      goto LAB_0019b5f8;
    }
  }
  iVar1 = FUN_001a4238(iVar3 + DAT_0019b644);
  if (iVar1 == 0) {
    iVar1 = FUN_001a4238(iVar3 + DAT_0019b640);
  }
LAB_0019b5f8:
  iVar3 = FUN_0018ff70(param_1,iVar1,0);
  uVar2 = 0;
  if (iVar3 != 0) {
    FUN_0019b260(iVar3,param_2,param_3,param_4);
    uVar2 = FUN_001906f8(iVar3);
  }
  return uVar2;
}


