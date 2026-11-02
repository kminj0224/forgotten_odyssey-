/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013739e  Symbol: ~CCAction */

/* cocos2d::CCAction::~CCAction() */

CCAction * __thiscall cocos2d::CCAction::~CCAction(CCAction *this)

{
  ~CCAction(this);
  operator_delete(this);
  return this;
}


