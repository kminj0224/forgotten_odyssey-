/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c318  Symbol: ~CCTransitionZoomFlipY */

/* cocos2d::CCTransitionZoomFlipY::~CCTransitionZoomFlipY() */

CCTransitionZoomFlipY * __thiscall
cocos2d::CCTransitionZoomFlipY::~CCTransitionZoomFlipY(CCTransitionZoomFlipY *this)

{
  *(int *)this = *(int *)(DAT_0014c330 + 0x14c322) + 8;
  CCTransitionSceneOriented::~CCTransitionSceneOriented((CCTransitionSceneOriented *)this);
  return this;
}


