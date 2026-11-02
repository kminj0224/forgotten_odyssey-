/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fee98  Symbol: Hero5 */

/* Hero5::Hero5() */

Hero5 * __thiscall Hero5::Hero5(Hero5 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000feecc + 0xfeeaa);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


