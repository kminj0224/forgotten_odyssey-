/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015c78  Symbol: operator.delete */

/* operator delete(void*, unsigned int) */

void operator_delete(void *param_1,uint param_2)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}


