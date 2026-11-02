/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143724  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCObject*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCObject*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCObject*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCObject*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


