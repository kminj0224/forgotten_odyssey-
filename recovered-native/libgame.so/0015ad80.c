/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ad80  Symbol: setFlipY */

/* cocos2d::CCSprite::setFlipY(bool) */

void __thiscall cocos2d::CCSprite::setFlipY(CCSprite *this,bool param_1)

{
  if (this[DAT_0015ada4] != (CCSprite)param_1) {
    this[DAT_0015ada4] = (CCSprite)param_1;
    setTextureRectInPixels(this,(CCRect *)(this + 0x13c),(bool)this[0x14c],(CCSize *)(this + 0x68));
  }
  return;
}


