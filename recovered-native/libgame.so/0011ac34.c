/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ac34  Symbol: ~UI_Notice */

/* UI_Notice::~UI_Notice() */

UI_Notice * __thiscall UI_Notice::~UI_Notice(UI_Notice *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0011ac68 + 0x11ac3e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


