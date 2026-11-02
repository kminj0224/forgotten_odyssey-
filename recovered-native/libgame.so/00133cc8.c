/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133cc8  Symbol: onExit */

/* MainOption::onExit() */

void __thiscall MainOption::onExit(MainOption *this)

{
  CCSpriteFrameCache *this_00;
  
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(this_00,(char *)(DAT_00133cec + 0x133cd6))
  ;
  **(undefined **)(DAT_00133cf0 + 0x133ce2) = 0;
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


