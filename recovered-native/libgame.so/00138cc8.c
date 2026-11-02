/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138cc8  Symbol: reverse */

/* cocos2d::CCEaseRateAction::reverse() */

void __thiscall cocos2d::CCEaseRateAction::reverse(CCEaseRateAction *this)

{
  CCActionInterval *pCVar1;
  float fVar2;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  fVar2 = (float)__divsf3(0x3f800000,*(undefined4 *)(this + 0x30));
  actionWithAction(pCVar1,fVar2);
  return;
}


