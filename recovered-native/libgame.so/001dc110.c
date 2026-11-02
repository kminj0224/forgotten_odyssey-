/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dc110  Symbol: FUN_001dc110 */

int FUN_001dc110(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001dc170 + 0x1dc124);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001dc174 + 0x1dc154),DAT_001dc178 + 0x1dc158,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


