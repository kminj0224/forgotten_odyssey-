/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144350  Symbol: ~CCObject */

/* cocos2d::CCObject::~CCObject() */

CCObject * __thiscall cocos2d::CCObject::~CCObject(CCObject *this)

{
  ~CCObject(this);
  operator_delete(this);
  return this;
}


