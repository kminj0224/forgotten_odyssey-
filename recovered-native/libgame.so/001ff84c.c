/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff84c  Symbol: FUN_001ff84c */

int * FUN_001ff84c(int *param_1,int param_2,undefined4 param_3,wchar_t *param_4,size_t param_5)

{
  FUN_001ff6cc();
  if (param_5 == 0) {
    return param_1;
  }
  if (param_5 != 1) {
    wmemcpy((wchar_t *)(*param_1 + param_2 * 4),param_4,param_5);
    return param_1;
  }
  *(wchar_t *)(*param_1 + param_2 * 4) = *param_4;
  return param_1;
}


