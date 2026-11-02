/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ee44  Symbol: ~Tutorial_Layer */

/* Tutorial_Layer::~Tutorial_Layer() */

Tutorial_Layer * __thiscall Tutorial_Layer::~Tutorial_Layer(Tutorial_Layer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0011ee78 + 0x11ee4e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


