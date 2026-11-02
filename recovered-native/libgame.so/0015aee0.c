/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015aee0  Symbol: setOpacity */

/* cocos2d::CCSprite::setOpacity(unsigned char) */

void __thiscall cocos2d::CCSprite::setOpacity(CCSprite *this,uchar param_1)

{
  this[0x104] = (CCSprite)param_1;
  if (this[DAT_0015af08] != (CCSprite)0x0) {
    (**(code **)(*(int *)this + 0xf4))(this,this + 0x1c0);
  }
  updateColor(this);
  return;
}


