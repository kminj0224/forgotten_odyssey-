/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001974d0  Symbol: FUN_001974d0 */

void * FUN_001974d0(void)

{
  void *__s;
  int iVar1;
  
  iVar1 = DAT_00197514 + 0x1974dc;
  __s = (void *)(***(code ***)(iVar1 + DAT_00197518))(0x1c0);
  if (__s == (void *)0x0) {
    FUN_00195c00(0,iVar1 + DAT_0019751c);
  }
  else {
    memset(__s,0,0x1c0);
    iVar1 = FUN_00197340(__s);
    if (iVar1 < 0) {
      FUN_00195b9c(__s);
      __s = (void *)0x0;
    }
  }
  return __s;
}


