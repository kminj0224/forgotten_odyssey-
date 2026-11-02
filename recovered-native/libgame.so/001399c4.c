/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001399c4  Symbol: ~CCAccelAmplitude */

/* cocos2d::CCAccelAmplitude::~CCAccelAmplitude() */

CCAccelAmplitude * __thiscall cocos2d::CCAccelAmplitude::~CCAccelAmplitude(CCAccelAmplitude *this)

{
  *(int *)this = *(int *)(DAT_001399f8 + 0x1399ce) + 8;
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 8))();
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(int *)this = *(int *)(DAT_001399fc + 0x1399ea) + 8;
  CCAction::~CCAction((CCAction *)this);
  return this;
}


