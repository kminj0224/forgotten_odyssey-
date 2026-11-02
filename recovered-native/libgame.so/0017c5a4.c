/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c5a4  Symbol: FUN_0017c5a4 */

void FUN_0017c5a4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0017c604 + 0x17c5b0;
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = FUN_001795e0();
    if (iVar1 == 0) {
      FUN_00179430(0,iVar3 + DAT_0017c608);
      FUN_0017934c(param_1);
    }
    else {
      FUN_0017934c(param_1);
      if (param_3 != 0) {
        uVar2 = FUN_00193d34(param_3);
        *(undefined4 *)(iVar1 + 4) = uVar2;
      }
      *(int *)(iVar1 + 0xc) = param_2;
      *(int *)(iVar1 + 0x10) = param_2;
      iVar3 = FUN_0019c49c(param_2);
      *(int *)(iVar1 + 0x14) = param_2 + iVar3;
      FUN_0017bfa0(param_1,iVar1);
    }
  }
  return;
}


