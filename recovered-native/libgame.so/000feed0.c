/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000feed0  Symbol: Hero6 */

/* Hero6::Hero6() */

Hero6 * __thiscall Hero6::Hero6(Hero6 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000fef04 + 0xfeee2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


