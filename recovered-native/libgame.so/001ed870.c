/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed870  Symbol: FUN_001ed870 */

int * FUN_001ed870(int *param_1,int param_2,undefined4 param_3,undefined *param_4,size_t param_5)

{
  FUN_001ed6f8();
  if (param_5 == 0) {
    return param_1;
  }
  if (param_5 != 1) {
    memcpy((void *)(*param_1 + param_2),param_4,param_5);
    return param_1;
  }
  *(undefined *)(*param_1 + param_2) = *param_4;
  return param_1;
}


