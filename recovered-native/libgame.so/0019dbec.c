/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019dbec  Symbol: FUN_0019dbec */

void FUN_0019dbec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) && (iVar1 = FUN_0018a1a0(*(undefined4 *)(param_1 + 8)), iVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0x34);
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
      if (DAT_0019dc5c < iVar3) {
        iVar3 = -1;
      }
      *(short *)(iVar1 + 0x38) = (short)iVar3;
    }
    if (*(int *)(param_1 + 0xd8) == 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xd8) == 2) {
        iVar1 = *(int *)(iVar1 + 0x30);
      }
      else if (((iVar2 != 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
              (iVar1 = iVar2, *(int *)(iVar2 + 4) != 1)) {
        FUN_0018c31c();
        return;
      }
    }
    FUN_0018c194(iVar1);
  }
  return;
}


