/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149264  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCLayer*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCLayer*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCLayer*>::~CCMutableArray(CCMutableArray<cocos2d::CCLayer*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


