/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018acd4  Symbol: FUN_0018acd4 */

size_t FUN_0018acd4(FILE *param_1,void **param_2)

{
  size_t sVar1;
  
  if ((param_2 == (void **)0x0) || (*param_2 == (void *)0x0)) {
    sVar1 = 0;
  }
  else {
    if (param_1 == (FILE *)0x0) {
      param_1 = (FILE *)(*(int *)(DAT_0018ad00 + 0x18acde + DAT_0018ad04) + 0x54);
    }
    sVar1 = fwrite(*param_2,1,(size_t)param_2[1],param_1);
  }
  return sVar1;
}


