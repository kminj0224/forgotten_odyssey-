/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018bdf4  Symbol: FUN_0018bdf4 */

void FUN_0018bdf4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0018be68 + 0x18bdfe;
  if (param_1 != 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x50);
    }
    if (*(int *)(iVar1 + DAT_0018be6c + 4) != 0) {
      if (**(code ***)(iVar1 + DAT_0018be70) != (code *)0x0) {
        (***(code ***)(iVar1 + DAT_0018be70))(param_1);
      }
    }
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) == 2)) {
      FUN_001942e8(*(int *)(param_1 + 0x20),param_1);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0018bb84();
    }
    if ((*(int *)(param_1 + 8) != 0) && ((iVar2 == 0 || (iVar2 = FUN_0019ccb4(iVar2), iVar2 == 0))))
    {
      (***(code ***)(iVar1 + DAT_0018be74))(*(undefined4 *)(param_1 + 8));
    }
    (***(code ***)(iVar1 + DAT_0018be74))(param_1);
  }
  return;
}


