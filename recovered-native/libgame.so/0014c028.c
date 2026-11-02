/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c028  Symbol: ~CCTransitionFade */

/* cocos2d::CCTransitionFade::~CCTransitionFade() */

CCTransitionFade * __thiscall cocos2d::CCTransitionFade::~CCTransitionFade(CCTransitionFade *this)

{
  *(int *)this = *(int *)(DAT_0014c040 + 0x14c032) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


