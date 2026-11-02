/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00017d98  Symbol: __cxa_rethrow */

void __cxa_rethrow(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__cxa_get_globals();
  iVar2 = *piVar1;
  piVar1[1] = piVar1[1] + 1;
  if (iVar2 != 0) {
    if (((((*(char *)(iVar2 + 0x20) == 'G') && (*(char *)(iVar2 + 0x21) == 'N')) &&
         (*(char *)(iVar2 + 0x22) == 'U')) &&
        ((*(char *)(iVar2 + 0x23) == 'C' && (*(char *)(iVar2 + 0x24) == 'C')))) &&
       ((*(char *)(iVar2 + 0x25) == '+' &&
        ((*(char *)(iVar2 + 0x26) == '+' && (*(byte *)(iVar2 + 0x27) < 2)))))) {
      *(int *)(iVar2 + 0x14) = -*(int *)(iVar2 + 0x14);
    }
    else {
      *piVar1 = 0;
    }
    ___Unwind_Resume_or_Rethrow(iVar2 + 0x20);
    __cxa_begin_catch(iVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


