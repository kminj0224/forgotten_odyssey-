/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fedf0  Symbol: Hero1 */

/* Hero1::Hero1() */

Hero1 * __thiscall Hero1::Hero1(Hero1 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000fee24 + 0xfee02);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  return this;
}


