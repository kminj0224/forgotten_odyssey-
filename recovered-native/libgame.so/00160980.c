/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160980  Symbol: ~CCTexture2D */

/* cocos2d::CCTexture2D::~CCTexture2D() */

CCTexture2D * __thiscall cocos2d::CCTexture2D::~CCTexture2D(CCTexture2D *this)

{
  *(int *)this = *(int *)(DAT_001609ac + 0x16098a) + 8;
  VolatileTexture::removeTexture(this);
  if (*(int *)(this + 0x20) != 0) {
    glDeleteTextures(1,this + 0x20);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


