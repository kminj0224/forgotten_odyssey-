/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001905a4  Symbol: FUN_001905a4 */

undefined4 FUN_001905a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_001905ec + 0x1905b0;
  if ((param_1 == 0) ||
     ((iVar1 = FUN_0019c3dc(param_1,iVar3 + DAT_001905f0,6,param_4,param_4), iVar1 != 0 &&
      (iVar3 = FUN_0019c3dc(param_1,iVar3 + DAT_001905f4,7), iVar3 != 0)))) {
    uVar2 = FUN_001905fc(param_1,param_2,param_3);
  }
  else {
    FUN_00190594(DAT_001905f8,param_1);
    uVar2 = 0;
  }
  return uVar2;
}


