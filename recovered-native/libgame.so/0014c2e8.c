/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c2e8  Symbol: ~CCTransitionZoomFlipAngular */

/* cocos2d::CCTransitionZoomFlipAngular::~CCTransitionZoomFlipAngular() */

CCTransitionZoomFlipAngular * __thiscall
cocos2d::CCTransitionZoomFlipAngular::~CCTransitionZoomFlipAngular
          (CCTransitionZoomFlipAngular *this)

{
  *(int *)this = *(int *)(DAT_0014c300 + 0x14c2f2) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


