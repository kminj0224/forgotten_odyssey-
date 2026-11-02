/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014bfbc  Symbol: ~CCTransitionTurnOffTiles */

/* cocos2d::CCTransitionTurnOffTiles::~CCTransitionTurnOffTiles() */

CCTransitionTurnOffTiles * __thiscall
cocos2d::CCTransitionTurnOffTiles::~CCTransitionTurnOffTiles(CCTransitionTurnOffTiles *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014bfe0 + 0x14bfc6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x104;
  CCTransitionScene::~CCTransitionScene((CCTransitionScene *)this);
  return this;
}


