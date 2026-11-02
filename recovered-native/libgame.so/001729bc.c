/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001729bc  Symbol: png_free_default */

void png_free_default(int param_1,void *param_2)

{
  if ((param_2 != (void *)0x0) && (param_1 != 0)) {
    free(param_2);
  }
  return;
}


