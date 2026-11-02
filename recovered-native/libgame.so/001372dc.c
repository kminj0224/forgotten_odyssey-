/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001372dc  Symbol: ~CCAction */

/* cocos2d::CCAction::~CCAction() */

CCAction * __thiscall cocos2d::CCAction::~CCAction(CCAction *this)

{
  *(int *)this = *(int *)(DAT_001372f4 + 0x1372e6) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


