/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af0b4  Symbol: jcopy_sample_rows */

void jcopy_sample_rows(int param_1,int param_2,int param_3,int param_4,int param_5,size_t param_6)

{
  int iVar1;
  
  if (0 < param_5) {
    iVar1 = 0;
    do {
      param_5 = param_5 + -1;
      memcpy(*(void **)(param_3 + param_4 * 4 + iVar1),*(void **)(param_1 + param_2 * 4 + iVar1),
             param_6);
      iVar1 = iVar1 + 4;
    } while (0 < param_5);
  }
  return;
}


