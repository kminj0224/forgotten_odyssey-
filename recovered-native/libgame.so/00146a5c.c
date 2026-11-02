/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146a5c  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCKeypadHandler*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCKeypadHandler*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCKeypadHandler*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCKeypadHandler*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


