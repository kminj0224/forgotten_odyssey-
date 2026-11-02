/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001609b0  Symbol: ~CCTexture2D */

/* cocos2d::CCTexture2D::~CCTexture2D() */

CCTexture2D * __thiscall cocos2d::CCTexture2D::~CCTexture2D(CCTexture2D *this)

{
  ~CCTexture2D(this);
  operator_delete(this);
  return this;
}


