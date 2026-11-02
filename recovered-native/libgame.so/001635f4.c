/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001635f4  Symbol: ~CCPointObject */

/* cocos2d::CCPointObject::~CCPointObject() */

CCPointObject * __thiscall cocos2d::CCPointObject::~CCPointObject(CCPointObject *this)

{
  ~CCPointObject(this);
  operator_delete(this);
  return this;
}


