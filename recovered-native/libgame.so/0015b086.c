/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b086  Symbol: displayedFrame */

/* cocos2d::CCSprite::displayedFrame() */

void __thiscall cocos2d::CCSprite::displayedFrame(CCSprite *this)

{
  CCSpriteFrame::frameWithTexture
            (*(CCTexture2D **)(this + 0x124),(CCRect *)(this + 0x13c),(bool)this[0x14c],
             (CCPoint *)(this + 0x158),(CCSize *)(this + 0x68));
  return;
}


