/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017e34  Symbol: __verbose_terminate_handler */

/* WARNING: Removing unreachable block (ram,0x00017ed0) */
/* WARNING: Removing unreachable block (ram,0x00017f28) */
/* WARNING: Removing unreachable block (ram,0x00017f70) */
/* WARNING: Removing unreachable block (ram,0x00017f40) */
/* WARNING: Removing unreachable block (ram,0x00017f48) */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  int iVar1;
  int iVar2;
  char *__s;
  
  iVar2 = DAT_00017fc8 + 0x17e5c;
  if (*(char *)(DAT_00017fc4 + 0x17e4c) == '\0') {
    *(char *)(DAT_00017fc4 + 0x17e4c) = '\x01';
    iVar1 = __cxa_current_exception_type();
    if (iVar1 == 0) {
      fwrite((void *)(DAT_00017fdc + 0x17f6c),1,0x2d,(FILE *)(*(int *)(iVar2 + DAT_00017fcc) + 0xa8)
            );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = *(char **)(iVar1 + 4);
    if (*__s == '*') {
      __s = __s + 1;
    }
    __cxa_demangle(__s,0,0);
    iVar2 = *(int *)(iVar2 + DAT_00017fcc);
    fwrite((void *)(DAT_00017fd0 + 0x17ec4),1,0x30,(FILE *)(iVar2 + 0xa8));
    fputs(__s,(FILE *)(iVar2 + 0xa8));
    fwrite((void *)(DAT_00017fd4 + 0x17ef0),1,2,(FILE *)(iVar2 + 0xa8));
    __cxa_rethrow();
  }
  fwrite((void *)(DAT_00017fd8 + 0x17f24),1,0x1d,(FILE *)(*(int *)(iVar2 + DAT_00017fcc) + 0xa8));
                    /* WARNING: Subroutine does not return */
  abort();
}


