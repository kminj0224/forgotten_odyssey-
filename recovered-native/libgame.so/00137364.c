/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137364  Symbol: ~CCSpeed */

/* cocos2d::CCSpeed::~CCSpeed() */

CCSpeed * __thiscall cocos2d::CCSpeed::~CCSpeed(CCSpeed *this)

{
  *(int *)this = *(int *)(DAT_00137388 + 0x13736e) + 8;
  if (*(CCObject **)(this + 0x24) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x24));
  }
  CCAction::~CCAction((CCAction *)this);
  return this;
}


