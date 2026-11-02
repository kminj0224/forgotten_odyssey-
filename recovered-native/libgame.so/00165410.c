/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165410  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTMXTilesetInfo*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTMXTilesetInfo*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTMXTilesetInfo*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTMXTilesetInfo*> *this)

{
  ~CCMutableArray(this);
  operator_delete(this);
  return this;
}


