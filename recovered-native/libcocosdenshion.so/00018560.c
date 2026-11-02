/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018560  Symbol: __verbose_terminate_handler */

/* WARNING: Removing unreachable block (ram,0x000185fc) */
/* WARNING: Removing unreachable block (ram,0x00018654) */
/* WARNING: Removing unreachable block (ram,0x0001869c) */
/* WARNING: Removing unreachable block (ram,0x0001866c) */
/* WARNING: Removing unreachable block (ram,0x00018674) */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar2 = DAT_000186f4 + 0x18588;
  if (*(char *)(DAT_000186f0 + 0x18578) == '\0') {
    *(char *)(DAT_000186f0 + 0x18578) = '\x01';
    iVar1 = __cxa_current_exception_type();
    if (iVar1 == 0) {
      fwrite((void *)(DAT_00018708 + 0x18698),1,0x2d,(FILE *)(*(int *)(iVar2 + DAT_000186f8) + 0xa8)
            );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = *(char **)(iVar1 + 4);
    if (*__s == '*') {
      __s = __s + 1;
    }
    __cxa_demangle(__s,0,0);
    iVar2 = *(int *)(iVar2 + DAT_000186f8);
    fwrite((void *)(DAT_000186fc + 0x185f0),1,0x30,(FILE *)(iVar2 + 0xa8));
    fputs(__s,(FILE *)(iVar2 + 0xa8));
    fwrite((void *)(DAT_00018700 + 0x1861c),1,2,(FILE *)(iVar2 + 0xa8));
    __cxa_rethrow();
  }
  fwrite((void *)(DAT_00018704 + 0x18650),1,0x1d,(FILE *)(*(int *)(iVar2 + DAT_000186f8) + 0xa8));
                    /* WARNING: Subroutine does not return */
  abort();
}


