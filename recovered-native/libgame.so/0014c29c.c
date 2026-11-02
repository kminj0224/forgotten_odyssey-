/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c29c  Symbol: ~CCTransitionRotoZoom */

/* cocos2d::CCTransitionRotoZoom::~CCTransitionRotoZoom() */

CCTransitionRotoZoom * __thiscall
cocos2d::CCTransitionRotoZoom::~CCTransitionRotoZoom(CCTransitionRotoZoom *this)

{
  *(int *)this = *(int *)(DAT_0014c2b4 + 0x14c2a6) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


