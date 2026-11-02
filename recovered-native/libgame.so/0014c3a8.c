/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c3a8  Symbol: ~CCTransitionFlipY */

/* cocos2d::CCTransitionFlipY::~CCTransitionFlipY() */

CCTransitionFlipY * __thiscall
cocos2d::CCTransitionFlipY::~CCTransitionFlipY(CCTransitionFlipY *this)

{
  *(int *)this = *(int *)(DAT_0014c3c0 + 0x14c3b2) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


