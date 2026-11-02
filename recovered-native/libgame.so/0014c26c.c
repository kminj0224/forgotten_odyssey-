/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014c26c  Symbol: ~CCTransitionJumpZoom */

/* cocos2d::CCTransitionJumpZoom::~CCTransitionJumpZoom() */

CCTransitionJumpZoom * __thiscall
cocos2d::CCTransitionJumpZoom::~CCTransitionJumpZoom(CCTransitionJumpZoom *this)

{
  *(int *)this = *(int *)(DAT_0014c284 + 0x14c276) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


