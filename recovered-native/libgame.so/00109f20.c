/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00109f20  Symbol: Clear_Item_View_Layer */

/* Clear_Item_View_Layer::Clear_Item_View_Layer() */

Clear_Item_View_Layer * __thiscall
Clear_Item_View_Layer::Clear_Item_View_Layer(Clear_Item_View_Layer *this)

{
  CCSpriteFrameCache *this_00;
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00109f60 + 0x109f32);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_00109f64 + 0x109f58));
  return this;
}


