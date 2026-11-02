/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104fe8  Symbol: ~Level */

/* Level::~Level() */

Level * __thiscall Level::~Level(Level *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0010501c + 0x104ff2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


