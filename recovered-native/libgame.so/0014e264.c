/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e264  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCMenuItem*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCMenuItem*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCMenuItem*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCMenuItem*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


