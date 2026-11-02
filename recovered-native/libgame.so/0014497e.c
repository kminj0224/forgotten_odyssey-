/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014497e  Symbol: ~CCDirector */

/* cocos2d::CCDirector::~CCDirector() */

CCDirector * __thiscall cocos2d::CCDirector::~CCDirector(CCDirector *this)

{
  ~CCDirector(this);
  operator_delete(this);
  return this;
}


