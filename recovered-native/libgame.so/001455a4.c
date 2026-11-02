/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001455a4  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCScene*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCScene*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCScene*>::~CCMutableArray(CCMutableArray<cocos2d::CCScene*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


