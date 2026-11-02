/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d1404  Symbol: FUN_001d1404 */

void FUN_001d1404(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x7c) == 0;
  if (bVar1) {
    param_2 = param_2 | 1;
    *(uint *)(param_1 + 0x14) = param_2;
  }
  if (!bVar1) {
    *(uint *)(param_1 + 0x14) = param_2;
  }
  if ((param_2 & *(uint *)(param_1 + 0x10)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4828((int)&DAT_001d1438 + DAT_001d1438);
  }
  return;
}


