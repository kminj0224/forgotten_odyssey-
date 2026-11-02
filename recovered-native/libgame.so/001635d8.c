/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001635d8  Symbol: ~CCPointObject */

/* cocos2d::CCPointObject::~CCPointObject() */

CCPointObject * __thiscall cocos2d::CCPointObject::~CCPointObject(CCPointObject *this)

{
  *(int *)this = *(int *)(DAT_001635f0 + 0x1635e2) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


