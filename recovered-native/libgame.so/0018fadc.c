/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fadc  Symbol: FUN_0018fadc */

undefined4 * FUN_0018fadc(int param_1)

{
  undefined4 *__s;
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0018fb50 + 0x18fae8;
  __s = (undefined4 *)(***(code ***)(iVar2 + DAT_0018fb54))(0x20);
  if (__s == (undefined4 *)0x0) {
    FUN_0018f77c(iVar2 + DAT_0018fb58);
    return (undefined4 *)0x0;
  }
  memset(__s,0,0x20);
  iVar1 = FUN_00189cd8();
  __s[4] = iVar1;
  if (iVar1 == 0) {
LAB_0018fb26:
    (***(code ***)(iVar2 + DAT_0018fb5c))(__s);
    __s = (undefined4 *)0x0;
  }
  else {
    __s[3] = param_1;
    if (param_1 == 0) {
      __s[5] = 0;
    }
    else {
      iVar1 = FUN_00189c50(4000);
      __s[5] = iVar1;
      if (iVar1 == 0) goto LAB_0018fb26;
      FUN_001a39f0(param_1,iVar1,0);
    }
    __s[1] = 0;
    __s[2] = 0;
    *__s = 0;
    __s[6] = 0;
  }
  return __s;
}


