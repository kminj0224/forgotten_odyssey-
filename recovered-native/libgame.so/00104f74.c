/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104f74  Symbol: ~Game_Movey */

/* Game_Movey::~Game_Movey() */

Game_Movey * __thiscall Game_Movey::~Game_Movey(Game_Movey *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00104fa8 + 0x104f7e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


