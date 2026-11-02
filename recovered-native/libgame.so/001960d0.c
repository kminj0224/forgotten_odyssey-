/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001960d0  Symbol: FUN_001960d0 */

undefined4 * FUN_001960d0(undefined4 param_1)

{
  undefined4 *__s;
  int iVar1;
  
  iVar1 = DAT_0019610c + 0x1960dc;
  __s = (undefined4 *)(***(code ***)(iVar1 + DAT_00196110))(0x3c);
  if (__s == (undefined4 *)0x0) {
    FUN_00195c00(param_1,iVar1 + DAT_00196114);
  }
  else {
    memset(__s,0,0x3c);
    __s[7] = 1;
    __s[8] = 1;
    *__s = 0;
  }
  return __s;
}


