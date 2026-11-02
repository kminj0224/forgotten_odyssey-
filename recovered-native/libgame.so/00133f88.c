/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133f88  Symbol: ~New_Game_Event */

/* New_Game_Event::~New_Game_Event() */

New_Game_Event * __thiscall New_Game_Event::~New_Game_Event(New_Game_Event *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00133fbc + 0x133f92);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


