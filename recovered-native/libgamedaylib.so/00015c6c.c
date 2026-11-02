/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015c6c  Symbol: operator.delete */

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  free(param_1);
  return;
}


