/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101ebc  Symbol: Monster5110 */

/* Monster5110::Monster5110() */

Monster5110 * __thiscall Monster5110::Monster5110(Monster5110 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101ef0 + 0x101ece);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


