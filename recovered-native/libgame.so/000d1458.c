/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d1458  Symbol: ~InventoryLayer */

/* InventoryLayer::~InventoryLayer() */

InventoryLayer * __thiscall InventoryLayer::~InventoryLayer(InventoryLayer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000d148c + 0xd1462);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


