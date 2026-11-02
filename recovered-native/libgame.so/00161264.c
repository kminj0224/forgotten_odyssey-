/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161264  Symbol: setTexture */

/* cocos2d::CCTextureAtlas::setTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCTextureAtlas::setTexture(CCTextureAtlas *this,CCTexture2D *param_1)

{
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  *(CCTexture2D **)(this + 0x2c) = param_1;
  return;
}


