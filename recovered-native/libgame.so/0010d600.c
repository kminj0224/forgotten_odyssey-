/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010d600  Symbol: ~New_UI_MONEY */

/* New_UI_MONEY::~New_UI_MONEY() */

New_UI_MONEY * __thiscall New_UI_MONEY::~New_UI_MONEY(New_UI_MONEY *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0010d634 + 0x10d60a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


