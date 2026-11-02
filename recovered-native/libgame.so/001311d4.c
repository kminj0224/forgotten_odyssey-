/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001311d4  Symbol: init */

/* Ending_Layer::init() */

int Ending_Layer::init(void)

{
  int iVar1;
  CCSpriteFrameCache *this;
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this,(char *)(DAT_001311f0 + 0x1311e8));
    iVar1 = 1;
  }
  return iVar1;
}


