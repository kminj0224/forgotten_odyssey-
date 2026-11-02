/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179dd4  Symbol: FUN_00179dd4 */

void * FUN_00179dd4(void)

{
  void *__s;
  int iVar1;
  
  iVar1 = DAT_00179e18 + 0x179de0;
  __s = (void *)(***(code ***)(iVar1 + DAT_00179e1c))(0x1c0);
  if (__s == (void *)0x0) {
    FUN_00179430(0,iVar1 + DAT_00179e20);
  }
  else {
    memset(__s,0,0x1c0);
    iVar1 = FUN_00179afc(__s);
    if (iVar1 < 0) {
      FUN_00179908(__s);
      __s = (void *)0x0;
    }
  }
  return __s;
}


