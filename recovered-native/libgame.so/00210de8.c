/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00210de8  Symbol: __aeabi_fcmpge */

bool __aeabi_fcmpge(void)

{
  undefined in_ZR;
  undefined in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}


