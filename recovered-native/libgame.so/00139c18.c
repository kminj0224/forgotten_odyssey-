/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139c18  Symbol: ~CCAccelDeccelAmplitude */

/* cocos2d::CCAccelDeccelAmplitude::~CCAccelDeccelAmplitude() */

CCAccelDeccelAmplitude * __thiscall
cocos2d::CCAccelDeccelAmplitude::~CCAccelDeccelAmplitude(CCAccelDeccelAmplitude *this)

{
  *(int *)this = *(int *)(DAT_00139c44 + 0x139c22) + 8;
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  *(int *)this = *(int *)(DAT_00139c48 + 0x139c38) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


