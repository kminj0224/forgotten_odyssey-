/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010d58c  Symbol: ~New_UI_MANA */

/* New_UI_MANA::~New_UI_MANA() */

New_UI_MANA * __thiscall New_UI_MANA::~New_UI_MANA(New_UI_MANA *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0010d5c0 + 0x10d596);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


