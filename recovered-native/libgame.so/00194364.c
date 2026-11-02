/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194364  Symbol: FUN_00194364 */

void FUN_00194364(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001943c4 + 0x19436e;
  if (param_1 != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x50);
    }
    if ((*(int *)(param_1 + 4) != 0) && ((iVar3 == 0 || (iVar1 = FUN_0019ccb4(iVar3), iVar1 == 0))))
    {
      (***(code ***)(iVar2 + DAT_001943c8))(*(undefined4 *)(param_1 + 4));
    }
    if ((*(int *)(param_1 + 0xc) != 0) &&
       ((iVar3 == 0 || (iVar3 = FUN_0019ccb4(iVar3), iVar3 == 0)))) {
      (***(code ***)(iVar2 + DAT_001943c8))(*(undefined4 *)(param_1 + 0xc));
    }
    (***(code ***)(iVar2 + DAT_001943c8))(param_1);
  }
  return;
}


