/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172a28  Symbol: png_malloc_default */

void * png_malloc_default(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = malloc(param_2);
  }
  return pvVar1;
}


