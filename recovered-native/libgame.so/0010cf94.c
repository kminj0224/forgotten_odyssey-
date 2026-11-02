/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010cf94  Symbol: onExit */

/* New_UI::onExit() */

void __thiscall New_UI::onExit(New_UI *this)

{
  cocos2d::CCSpriteFrameCache::removeSpriteFrames
            (**(CCSpriteFrameCache ***)(DAT_0010cfc4 + 0x10cf9e));
  cocos2d::CCSpriteFrameCache::removeSpriteFrames
            (**(CCSpriteFrameCache ***)(DAT_0010cfc8 + 0x10cfaa));
  cocos2d::CCObject::release(*(CCObject **)(this + 0x124));
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


