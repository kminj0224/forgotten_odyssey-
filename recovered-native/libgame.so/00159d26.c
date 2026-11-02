/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159d26  Symbol: setScaleY */

/* cocos2d::CCSprite::setScaleY(float) */

void __thiscall cocos2d::CCSprite::setScaleY(CCSprite *this,float param_1)

{
  CCNode::setScaleY((CCNode *)this,param_1);
  if ((this[0x128] != (CCSprite)0x0) && (this[0x119] == (CCSprite)0x0)) {
    this[0x119] = (CCSprite)0x1;
    this[0x118] = (CCSprite)0x1;
    if (this[0x11a] != (CCSprite)0x0) {
      (**(code **)(*(int *)this + 0x104))(this);
    }
  }
  return;
}


