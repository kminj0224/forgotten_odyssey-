/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002082bc  Symbol: __verbose_terminate_handler */

/* WARNING: Removing unreachable block (ram,0x00208358) */
/* WARNING: Removing unreachable block (ram,0x002083b0) */
/* WARNING: Removing unreachable block (ram,0x002083f8) */
/* WARNING: Removing unreachable block (ram,0x002083c8) */
/* WARNING: Removing unreachable block (ram,0x002083d0) */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar2 = DAT_00208450 + 0x2082e4;
  if (*(char *)(DAT_0020844c + 0x2082d4) == '\0') {
    *(char *)(DAT_0020844c + 0x2082d4) = '\x01';
    iVar1 = __cxa_current_exception_type();
    if (iVar1 == 0) {
      fwrite((void *)(DAT_00208464 + 0x2083f4),1,0x2d,
             (FILE *)(*(int *)(iVar2 + DAT_00208454) + 0xa8));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = *(char **)(iVar1 + 4);
    if (*__s == '*') {
      __s = __s + 1;
    }
    __cxa_demangle(__s,0,0);
    iVar2 = *(int *)(iVar2 + DAT_00208454);
    fwrite((void *)(DAT_00208458 + 0x20834c),1,0x30,(FILE *)(iVar2 + 0xa8));
    fputs(__s,(FILE *)(iVar2 + 0xa8));
    fwrite((void *)(DAT_0020845c + 0x208378),1,2,(FILE *)(iVar2 + 0xa8));
    __cxa_rethrow();
  }
  fwrite((void *)(DAT_00208460 + 0x2083ac),1,0x1d,(FILE *)(*(int *)(iVar2 + DAT_00208454) + 0xa8));
                    /* WARNING: Subroutine does not return */
  abort();
}


