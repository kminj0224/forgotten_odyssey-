/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010505c  Symbol: ~Level_Bar */

/* Level_Bar::~Level_Bar() */

Level_Bar * __thiscall Level_Bar::~Level_Bar(Level_Bar *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00105090 + 0x105066);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


