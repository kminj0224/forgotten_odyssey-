/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010eaec  Symbol: New_UI_BOSS_HP */

/* New_UI_BOSS_HP::New_UI_BOSS_HP() */

New_UI_BOSS_HP * __thiscall New_UI_BOSS_HP::New_UI_BOSS_HP(New_UI_BOSS_HP *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010eb28 + 0x10eafe);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x110));
  return this;
}


