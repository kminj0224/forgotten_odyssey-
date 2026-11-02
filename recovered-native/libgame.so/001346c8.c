/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001346c8  Symbol: onExit */

/* StageClear::onExit() */

void __thiscall StageClear::onExit(StageClear *this)

{
  cocos2d::CCSpriteFrameCache::removeSpriteFrames(*(CCSpriteFrameCache **)(this + 0x110));
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


