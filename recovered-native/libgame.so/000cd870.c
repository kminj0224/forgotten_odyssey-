/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cd870  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCSpriteFrame*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


