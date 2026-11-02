/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001609c4  Symbol: CCTexture2D */

/* cocos2d::CCTexture2D::CCTexture2D() */

CCTexture2D * __thiscall cocos2d::CCTexture2D::CCTexture2D(CCTexture2D *this)

{
  int iVar1;
  
  CCObject::CCObject((CCObject *)this);
  iVar1 = *(int *)(DAT_001609fc + 0x1609d6);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x20) = 0;
  CCSize::CCSize((CCSize *)(this + 0x24));
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (CCTexture2D)0x0;
  this[0x35] = (CCTexture2D)0x1;
  return this;
}


