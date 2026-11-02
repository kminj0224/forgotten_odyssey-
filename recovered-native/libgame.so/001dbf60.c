/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dbf60  Symbol: FUN_001dbf60 */

int FUN_001dbf60(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dbfc0 + 0x1dbf74);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dbfc4 + 0x1dbfa4),DAT_001dbfc8 + 0x1dbfa8,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


