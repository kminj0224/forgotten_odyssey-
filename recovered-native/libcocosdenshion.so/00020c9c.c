/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00020c9c  Symbol: FUN_00020c9c */

int FUN_00020c9c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 & 0x7fffffff;
  }
  else {
    uVar1 = uVar1 | 0x80000000;
  }
  return (int)param_1 + uVar1;
}


