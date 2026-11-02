/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a5f8  Symbol: ~CCTransitionPageTurn */

/* cocos2d::CCTransitionPageTurn::~CCTransitionPageTurn() */

CCTransitionPageTurn * __thiscall
cocos2d::CCTransitionPageTurn::~CCTransitionPageTurn(CCTransitionPageTurn *this)

{
  *(int *)this = *(int *)(DAT_0014a610 + 0x14a602) + 8;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


