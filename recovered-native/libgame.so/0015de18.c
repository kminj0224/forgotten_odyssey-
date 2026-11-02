/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015de18  Symbol: ccNextPOT */

/* cocos2d::ccNextPOT(unsigned long) */

int cocos2d::ccNextPOT(ulong param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1 >> 1 | param_1 - 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 | uVar1 >> 0x10) + 1;
}


