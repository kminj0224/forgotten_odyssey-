/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eb8e4  Symbol: ~Hero_HeroSkill */

/* Hero_HeroSkill::~Hero_HeroSkill() */

Hero_HeroSkill * __thiscall Hero_HeroSkill::~Hero_HeroSkill(Hero_HeroSkill *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000eb918 + 0xeb8ee);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


