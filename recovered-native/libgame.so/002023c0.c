/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002023c0  Symbol: __cxa_get_globals_fast */

void * __cxa_get_globals_fast(void)

{
  void *pvVar1;
  
  if (*(char *)(DAT_00202400 + 0x2023d4) == '\0') {
    return (void *)(DAT_00202404 + 0x2023e4);
  }
  pvVar1 = pthread_getspecific(*(pthread_key_t *)(DAT_00202400 + 0x2023d0));
  return pvVar1;
}


