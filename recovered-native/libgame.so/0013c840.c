/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c840  Symbol: ~CCSequence */

/* cocos2d::CCSequence::~CCSequence() */

CCSequence * __thiscall cocos2d::CCSequence::~CCSequence(CCSequence *this)

{
  *(int *)this = *(int *)(DAT_0013c86c + 0x13c84a) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


