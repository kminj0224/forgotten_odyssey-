/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016aec  Symbol: __cxa_get_globals_fast */

void * __cxa_get_globals_fast(void)

{
  void *pvVar1;
  
  if (*(char *)(DAT_00016b2c + 0x16b00) == '\0') {
    return (void *)(DAT_00016b30 + 0x16b10);
  }
  pvVar1 = pthread_getspecific(*(pthread_key_t *)(DAT_00016b2c + 0x16afc));
  return pvVar1;
}


