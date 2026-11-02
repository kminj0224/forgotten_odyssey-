/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101ef4  Symbol: Monster5120 */

/* Monster5120::Monster5120() */

Monster5120 * __thiscall Monster5120::Monster5120(Monster5120 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00101f28 + 0x101f06);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


