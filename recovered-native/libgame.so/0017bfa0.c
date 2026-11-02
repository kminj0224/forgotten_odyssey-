/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017bfa0  Symbol: FUN_0017bfa0 */

int FUN_0017bfa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0017c000 + 0x17bfac;
  if ((param_2 == 0) || (param_1 == 0)) {
LAB_0017bfe8:
    iVar2 = -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 <= *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x2c) = iVar1 << 1;
      iVar2 = (***(code ***)(iVar2 + DAT_0017c004))(*(undefined4 *)(param_1 + 0x30),iVar1 << 3);
      *(int *)(param_1 + 0x30) = iVar2;
      if (iVar2 == 0) {
        FUN_00179430(param_1,0);
        FUN_00179898(param_2);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) / 2;
        goto LAB_0017bfe8;
      }
    }
    *(int *)(*(int *)(param_1 + 0x28) * 4 + *(int *)(param_1 + 0x30)) = param_2;
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x24) = param_2;
    *(int *)(param_1 + 0x28) = iVar2 + 1;
  }
  return iVar2;
}


