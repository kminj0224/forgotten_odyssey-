/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155584  Symbol: ~CCString */

/* cocos2d::CCString::~CCString() */

CCString * __thiscall cocos2d::CCString::~CCString(CCString *this)

{
  *(int *)this = *(int *)(DAT_001555ac + 0x155590) + 8;
  FUN_001edf58(this + 0x14);
  FUN_001ed6b8(this + 0x14);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


