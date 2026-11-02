/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b852  Symbol: ~CCCallFuncN */

/* cocos2d::CCCallFuncN::~CCCallFuncN() */

CCCallFuncN * __thiscall cocos2d::CCCallFuncN::~CCCallFuncN(CCCallFuncN *this)

{
  ~CCCallFuncN(this);
  operator_delete(this);
  return this;
}


