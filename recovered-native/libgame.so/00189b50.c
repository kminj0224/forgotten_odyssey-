/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189b50  Symbol: FUN_00189b50 */

void * FUN_00189b50(void)

{
  void *__s;
  int iVar1;
  
  iVar1 = DAT_00189b7c + 0x189b5a;
  __s = (void *)(***(code ***)(iVar1 + DAT_00189b80))(0x10);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar1 + DAT_00189b84);
  }
  else {
    memset(__s,0,0x10);
  }
  return __s;
}


