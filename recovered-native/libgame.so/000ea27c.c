/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea27c  Symbol: Hero_HeroEquip */

/* Hero_HeroEquip::Hero_HeroEquip() */

Hero_HeroEquip * __thiscall Hero_HeroEquip::Hero_HeroEquip(Hero_HeroEquip *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000ea2b0 + 0xea28e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


