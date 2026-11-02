/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fef78  Symbol: Hero9 */

/* Hero9::Hero9() */

Hero9 * __thiscall Hero9::Hero9(Hero9 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000fefac + 0xfef8a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


