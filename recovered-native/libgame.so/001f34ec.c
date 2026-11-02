/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f34ec  Symbol: FUN_001f34ec */

int FUN_001f34ec(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001f354c + 0x1f3500));
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f3550 + 0x1f3530),
                         *(undefined4 *)(DAT_001f3554 + 0x1f3534),0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


