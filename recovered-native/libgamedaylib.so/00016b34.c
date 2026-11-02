/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016b34  Symbol: __cxa_get_globals */

undefined4 * __cxa_get_globals(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(DAT_00016bb8 + 93000) == '\0') {
    return (undefined4 *)(DAT_00016bbc + 0x16b58);
  }
  puVar1 = (undefined4 *)pthread_getspecific(*(pthread_key_t *)(DAT_00016bb8 + 0x16b44));
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1;
  }
  puVar1 = (undefined4 *)malloc(0xc);
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = pthread_setspecific(*(pthread_key_t *)(DAT_00016bc0 + 0x16b88),puVar1), iVar2 == 0)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


