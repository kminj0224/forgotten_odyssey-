/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010e9fc  Symbol: New_UI_HERO_HP */

/* New_UI_HERO_HP::New_UI_HERO_HP() */

New_UI_HERO_HP * __thiscall New_UI_HERO_HP::New_UI_HERO_HP(New_UI_HERO_HP *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010ea38 + 0x10ea0e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x110));
  return this;
}


