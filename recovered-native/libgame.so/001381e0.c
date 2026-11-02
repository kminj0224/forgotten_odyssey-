/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001381e0  Symbol: ~CCActionEase */

/* cocos2d::CCActionEase::~CCActionEase() */

CCActionEase * __thiscall cocos2d::CCActionEase::~CCActionEase(CCActionEase *this)

{
  *(int *)this = *(int *)(DAT_0013820c + 0x1381ea) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  *(int *)this = *(int *)(DAT_00138210 + 0x138200) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


