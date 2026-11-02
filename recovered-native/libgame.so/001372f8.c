/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001372f8  Symbol: ~CCFiniteTimeAction */

/* cocos2d::CCFiniteTimeAction::~CCFiniteTimeAction() */

CCFiniteTimeAction * __thiscall
cocos2d::CCFiniteTimeAction::~CCFiniteTimeAction(CCFiniteTimeAction *this)

{
  *(int *)this = *(int *)(DAT_00137310 + 0x137302) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


