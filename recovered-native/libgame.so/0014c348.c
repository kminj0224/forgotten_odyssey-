/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c348  Symbol: ~CCTransitionZoomFlipX */

/* cocos2d::CCTransitionZoomFlipX::~CCTransitionZoomFlipX() */

CCTransitionZoomFlipX * __thiscall
cocos2d::CCTransitionZoomFlipX::~CCTransitionZoomFlipX(CCTransitionZoomFlipX *this)

{
  *(int *)this = *(int *)(DAT_0014c360 + 0x14c352) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


