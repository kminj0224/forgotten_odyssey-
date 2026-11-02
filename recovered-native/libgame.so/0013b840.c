/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b840  Symbol: ~CCCallFuncND */

/* cocos2d::CCCallFuncND::~CCCallFuncND() */

CCCallFuncND * __thiscall cocos2d::CCCallFuncND::~CCCallFuncND(CCCallFuncND *this)

{
  ~CCCallFuncND(this);
  operator_delete(this);
  return this;
}


