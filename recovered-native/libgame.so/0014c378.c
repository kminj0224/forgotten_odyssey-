/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c378  Symbol: ~CCTransitionFlipAngular */

/* cocos2d::CCTransitionFlipAngular::~CCTransitionFlipAngular() */

CCTransitionFlipAngular * __thiscall
cocos2d::CCTransitionFlipAngular::~CCTransitionFlipAngular(CCTransitionFlipAngular *this)

{
  *(int *)this = *(int *)(DAT_0014c390 + 0x14c382) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


