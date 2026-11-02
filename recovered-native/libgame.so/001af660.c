/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af660  Symbol: FUN_001af660 */

void FUN_001af660(int param_1)

{
  FUN_001af57c(param_1,1);
  FUN_001af57c(param_1,0);
  jpeg_free_small(param_1,*(undefined4 *)(param_1 + 4),0x54);
  *(undefined4 *)(param_1 + 4) = 0;
  jpeg_mem_term(param_1);
  return;
}


