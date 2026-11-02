/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c2cc  Symbol: ~CCTransitionSceneOriented */

/* cocos2d::CCTransitionSceneOriented::~CCTransitionSceneOriented() */

CCTransitionSceneOriented * __thiscall
cocos2d::CCTransitionSceneOriented::~CCTransitionSceneOriented(CCTransitionSceneOriented *this)

{
  *(int *)this = *(int *)(DAT_0014c2e4 + 0x14c2d6) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


