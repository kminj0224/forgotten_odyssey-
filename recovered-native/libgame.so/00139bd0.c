/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139bd0  Symbol: ~CCDeccelAmplitude */

/* cocos2d::CCDeccelAmplitude::~CCDeccelAmplitude() */

CCDeccelAmplitude * __thiscall
cocos2d::CCDeccelAmplitude::~CCDeccelAmplitude(CCDeccelAmplitude *this)

{
  *(int *)this = *(int *)(DAT_00139bfc + 0x139bda) + 8;
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  *(int *)this = *(int *)(DAT_00139c00 + 0x139bf0) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


