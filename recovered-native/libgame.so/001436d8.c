/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001436d8  Symbol: ~CCAutoreleasePool */

/* cocos2d::CCAutoreleasePool::~CCAutoreleasePool() */

CCAutoreleasePool * __thiscall
cocos2d::CCAutoreleasePool::~CCAutoreleasePool(CCAutoreleasePool *this)

{
  ~CCAutoreleasePool(this);
  operator_delete(this);
  return this;
}


