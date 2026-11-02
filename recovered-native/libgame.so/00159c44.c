/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159c44  Symbol: ~CCSprite */

/* cocos2d::CCSprite::~CCSprite() */

CCSprite * __thiscall cocos2d::CCSprite::~CCSprite(CCSprite *this)

{
  ~CCSprite(this);
  operator_delete(this);
  return this;
}


