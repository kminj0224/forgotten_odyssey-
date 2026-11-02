/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c8b40  Symbol: FUN_001c8b40 */

int * FUN_001c8b40(int *param_1)

{
  *param_1 = *(int *)(DAT_001c8b8c + 0x1c8b58) + 8;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_001c55c4(param_1);
  return param_1;
}


