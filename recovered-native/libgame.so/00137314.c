/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137314  Symbol: ~CCFiniteTimeAction */

/* cocos2d::CCFiniteTimeAction::~CCFiniteTimeAction() */

CCFiniteTimeAction * __thiscall
cocos2d::CCFiniteTimeAction::~CCFiniteTimeAction(CCFiniteTimeAction *this)

{
  ~CCFiniteTimeAction(this);
  operator_delete(this);
  return this;
}


