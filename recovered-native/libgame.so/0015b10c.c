/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b10c  Symbol: setTexture */

/* cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCSprite::setTexture(CCSprite *this,CCTexture2D *param_1)

{
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  *(CCTexture2D **)(this + 0x124) = param_1;
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  updateBlendFunc(this);
  return;
}


