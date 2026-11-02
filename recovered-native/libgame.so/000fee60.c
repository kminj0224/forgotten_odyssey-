/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fee60  Symbol: Hero3 */

/* Hero3::Hero3() */

Hero3 * __thiscall Hero3::Hero3(Hero3 *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000fee94 + 0xfee72);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


