/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d5968  Symbol: InventoryLayer */

/* InventoryLayer::InventoryLayer() */

InventoryLayer * __thiscall InventoryLayer::InventoryLayer(InventoryLayer *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000d59c4 + 0xd597a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x110));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x118));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x120));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x128));
  return this;
}


