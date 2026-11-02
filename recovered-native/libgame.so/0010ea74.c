/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ea74  Symbol: New_UI_HERO_EXP */

/* New_UI_HERO_EXP::New_UI_HERO_EXP() */

New_UI_HERO_EXP * __thiscall New_UI_HERO_EXP::New_UI_HERO_EXP(New_UI_HERO_EXP *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010eab0 + 0x10ea86);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x110));
  return this;
}


