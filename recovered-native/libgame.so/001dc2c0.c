/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc2c0  Symbol: FUN_001dc2c0 */

int FUN_001dc2c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc320 + 0x1dc2d4);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc324 + 0x1dc304),DAT_001dc328 + 0x1dc308,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


