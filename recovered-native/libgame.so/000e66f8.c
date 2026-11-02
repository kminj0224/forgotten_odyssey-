/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e66f8  Symbol: MarketLayer */

/* MarketLayer::MarketLayer() */

MarketLayer * __thiscall MarketLayer::MarketLayer(MarketLayer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_000e6750;
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar3 = iVar3 + 0xe6708;
  iVar2 = *(int *)(iVar3 + DAT_000e6754);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x13c;
  *(int *)(this + 0x104) = iVar2 + 0x178;
  iVar1 = DAT_000e6758;
  *(int *)(this + 0x100) = iVar2 + 0x16c;
  **(undefined4 **)(iVar3 + iVar1) = 0;
  **(undefined4 **)(iVar3 + DAT_000e675c) = 0;
  **(undefined4 **)(iVar3 + DAT_000e6760) = 0;
  **(undefined4 **)(iVar3 + DAT_000e6764) = 0;
  this[0x128] = (MarketLayer)0x0;
  *(undefined4 *)(this + 300) = 0;
  return this;
}


