/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017218  Symbol: __cxa_get_globals_fast */

void * __cxa_get_globals_fast(void)

{
  void *pvVar1;
  
  if (*(char *)(DAT_00017258 + 0x1722c) == '\0') {
    return (void *)(DAT_0001725c + 0x1723c);
  }
  pvVar1 = pthread_getspecific(*(pthread_key_t *)(DAT_00017258 + 0x17228));
  return pvVar1;
}


