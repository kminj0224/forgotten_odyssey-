/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e64a8  Symbol: ~MarketLayer */

/* MarketLayer::~MarketLayer() */

MarketLayer * __thiscall MarketLayer::~MarketLayer(MarketLayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000e64f4 + 0xe64b2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  KG_Remove_Memory();
  **(undefined4 **)(DAT_000e64f8 + 0xe64e0) = 0;
  **(undefined4 **)(DAT_000e64fc + 0xe64e8) = 0;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


