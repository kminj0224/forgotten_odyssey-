/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b808  Symbol: ~CCCallFuncN */

/* cocos2d::CCCallFuncN::~CCCallFuncN() */

CCCallFuncN * __thiscall cocos2d::CCCallFuncN::~CCCallFuncN(CCCallFuncN *this)

{
  *(int *)this = *(int *)(DAT_0013b820 + 0x13b812) + 8;
  CCCallFunc::~CCCallFunc((CCCallFunc *)this);
  return this;
}


