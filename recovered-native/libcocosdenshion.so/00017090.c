/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017090  Symbol: uncaught_exception */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

int std::uncaught_exception(void)

{
  int iVar1;
  
  iVar1 = __cxa_get_globals();
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


