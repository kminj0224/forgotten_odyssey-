/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165378  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTMXObjectGroup*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTMXObjectGroup*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


