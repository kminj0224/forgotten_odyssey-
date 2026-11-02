/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ad54  Symbol: setFlipX */

/* cocos2d::CCSprite::setFlipX(bool) */

void __thiscall cocos2d::CCSprite::setFlipX(CCSprite *this,bool param_1)

{
  if (this[0x1c4] != (CCSprite)param_1) {
    this[0x1c4] = (CCSprite)param_1;
    setTextureRectInPixels(this,(CCRect *)(this + 0x13c),(bool)this[0x14c],(CCSize *)(this + 0x68));
  }
  return;
}


