/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001511d4  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCRibbonSegment*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCRibbonSegment*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCRibbonSegment*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


