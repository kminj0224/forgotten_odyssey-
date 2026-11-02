/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120914  Symbol: ~Game_UI */

/* Game_UI::~Game_UI() */

Game_UI * __thiscall Game_UI::~Game_UI(Game_UI *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00120948 + 0x12091e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


