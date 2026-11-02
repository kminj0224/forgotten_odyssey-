/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143770  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCAutoreleasePool*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCAutoreleasePool*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCAutoreleasePool*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCAutoreleasePool*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


