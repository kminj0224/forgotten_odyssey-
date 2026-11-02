/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016306c  Symbol: ~CCTexturePVR */

/* cocos2d::CCTexturePVR::~CCTexturePVR() */

CCTexturePVR * __thiscall cocos2d::CCTexturePVR::~CCTexturePVR(CCTexturePVR *this)

{
  *(int *)this = *(int *)(DAT_0016309c + 0x163076) + 8;
  if ((*(int *)(this + 0x14) != 0) && (this[0x25] == (CCTexturePVR)0x0)) {
    glDeleteTextures(1,this + 0x14);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


