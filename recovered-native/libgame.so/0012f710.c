/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f710  Symbol: init */

/* Story_Layer::init() */

int Story_Layer::init(void)

{
  int iVar1;
  CCSpriteFrameCache *this;
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this,(char *)(DAT_0012f72c + 0x12f724));
    iVar1 = 1;
  }
  return iVar1;
}


