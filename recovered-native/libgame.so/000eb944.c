/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eb944  Symbol: Hero_HeroSkill */

/* Hero_HeroSkill::Hero_HeroSkill() */

Hero_HeroSkill * __thiscall Hero_HeroSkill::Hero_HeroSkill(Hero_HeroSkill *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000eb978 + 0xeb956);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


