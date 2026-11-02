/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bff8  Symbol: ~CCTransitionCrossFade */

/* cocos2d::CCTransitionCrossFade::~CCTransitionCrossFade() */

CCTransitionCrossFade * __thiscall
cocos2d::CCTransitionCrossFade::~CCTransitionCrossFade(CCTransitionCrossFade *this)

{
  *(int *)this = *(int *)(DAT_0014c010 + 0x14c002) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


