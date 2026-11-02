/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000edb64  Symbol: ~Hero_Main_Layer */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Hero_Main_Layer::~Hero_Main_Layer() */

Hero_Main_Layer * __thiscall Hero_Main_Layer::~Hero_Main_Layer(Hero_Main_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(_FUN_000edb98 + 0xedb6e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


