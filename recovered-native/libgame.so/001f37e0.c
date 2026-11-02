/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f37e0  Symbol: FUN_001f37e0 */

int FUN_001f37e0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(DAT_001f3840 + 0x1f37f4);
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f3844 + 0x1f3824),DAT_001f3848 + 0x1f3828,0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


