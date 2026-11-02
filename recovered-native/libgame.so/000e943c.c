/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e943c  Symbol: Hero_BaseSkill */

/* Hero_BaseSkill::Hero_BaseSkill() */

Hero_BaseSkill * __thiscall Hero_BaseSkill::Hero_BaseSkill(Hero_BaseSkill *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000e9470 + 0xe944e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


