/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c890  Symbol: stop */

/* cocos2d::CCAnimate::stop() */

void __thiscall cocos2d::CCAnimate::stop(CCAnimate *this)

{
  if ((this[0x34] != (CCAnimate)0x0) && (*(CCSprite **)(this + 0x18) != (CCSprite *)0x0)) {
    CCSprite::setDisplayFrame(*(CCSprite **)(this + 0x18),*(CCSpriteFrame **)(this + 0x30));
  }
  CCAction::stop((CCAction *)this);
  return;
}


