/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149cd4  Symbol: ~CCLayer */

/* cocos2d::CCLayer::~CCLayer() */

CCLayer * __thiscall cocos2d::CCLayer::~CCLayer(CCLayer *this)

{
  ~CCLayer(this);
  operator_delete(this);
  return this;
}


