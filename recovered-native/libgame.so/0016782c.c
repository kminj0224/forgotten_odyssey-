/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016782c  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTouchHandler*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTouchHandler*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


