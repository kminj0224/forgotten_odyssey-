/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c5b90  Symbol: FUN_001c5b90 */

int FUN_001c5b90(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_001c5bb4 + 0x1c5ba0);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_001c5b70();
  return *piVar2;
}


