/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f3558  Symbol: FUN_001f3558 */

int FUN_001f3558(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_001c60f4(*(undefined4 *)(DAT_001f35b8 + 0x1f356c));
  if (*(uint *)(*param_1 + 8) <= uVar1) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __dynamic_cast(iVar2,*(undefined4 *)(DAT_001f35bc + 0x1f359c),
                         *(undefined4 *)(DAT_001f35c0 + 0x1f35a0),0);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


