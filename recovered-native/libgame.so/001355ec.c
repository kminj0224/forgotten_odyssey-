/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001355ec  Symbol: ~CCTimer */

/* cocos2d::CCTimer::~CCTimer() */

CCTimer * __thiscall cocos2d::CCTimer::~CCTimer(CCTimer *this)

{
  ~CCTimer(this);
  operator_delete(this);
  return this;
}


