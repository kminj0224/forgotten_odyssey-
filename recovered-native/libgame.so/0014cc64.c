/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014cc64  Symbol: CCTransitionTurnOffTiles */

/* cocos2d::CCTransitionTurnOffTiles::CCTransitionTurnOffTiles() */

CCTransitionTurnOffTiles * __thiscall
cocos2d::CCTransitionTurnOffTiles::CCTransitionTurnOffTiles(CCTransitionTurnOffTiles *this)

{
  int iVar1;
  
  CCTransitionScene::CCTransitionScene((CCTransitionScene *)this);
  iVar1 = *(int *)(DAT_0014cc88 + 0x14cc74);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x10c) = iVar1 + 0x104;
  return this;
}


