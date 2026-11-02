/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc254  Symbol: FUN_001dc254 */

int FUN_001dc254(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc2b4 + 0x1dc268);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc2b8 + 0x1dc298),DAT_001dc2bc + 0x1dc29c,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


