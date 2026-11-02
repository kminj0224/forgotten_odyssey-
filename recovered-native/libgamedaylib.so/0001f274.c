/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f274  Symbol: __cxa_current_exception_type */

int __cxa_current_exception_type(void)

{
  int **ppiVar1;
  int *piVar2;
  
  ppiVar1 = (int **)__cxa_get_globals();
  piVar2 = *ppiVar1;
  if (piVar2 != (int *)0x0) {
    if (*(char *)((int)piVar2 + 0x27) == '\x01') {
      piVar2 = (int *)(*piVar2 + -0x78);
    }
    return *piVar2;
  }
  return 0;
}


