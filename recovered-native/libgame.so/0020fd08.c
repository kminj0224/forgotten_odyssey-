/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020fd08  Symbol: __aeabi_idivmod */

void __aeabi_idivmod(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    FUN_0020fc34();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_ldiv0(param_1);
  return;
}


