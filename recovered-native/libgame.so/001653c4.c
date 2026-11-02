/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001653c4  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTMXLayerInfo*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTMXLayerInfo*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTMXLayerInfo*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTMXLayerInfo*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


