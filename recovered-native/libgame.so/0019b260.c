/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019b260  Symbol: FUN_0019b260 */

void FUN_0019b260(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0019b2c0 + 0x19b26c;
  FUN_0017c498();
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0xd;
    if (*(int *)(param_2 + 0x2c) != 0) {
      FUN_0019ac5c(param_1,param_2,0);
    }
    for (iVar2 = *(int *)(param_2 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      FUN_0019ae7c(param_1,param_2,iVar2,param_3,param_4);
    }
    FUN_00190a68(param_1,iVar3 + DAT_0019b2c4);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}


