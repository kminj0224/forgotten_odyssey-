/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c3d8  Symbol: ~CCTransitionFlipX */

/* cocos2d::CCTransitionFlipX::~CCTransitionFlipX() */

CCTransitionFlipX * __thiscall
cocos2d::CCTransitionFlipX::~CCTransitionFlipX(CCTransitionFlipX *this)

{
  *(int *)this = *(int *)(DAT_0014c3f0 + 0x14c3e2) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


