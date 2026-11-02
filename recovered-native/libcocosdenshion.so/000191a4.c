/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000191a4  Symbol: FUN_000191a4 */

bool FUN_000191a4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  bVar1 = iVar2 < *(int *)(param_1 + 0x24);
  if (bVar1) {
    *(int *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) = param_2;
    *(int *)(param_1 + 0x20) = iVar2 + 1;
  }
  return bVar1;
}


