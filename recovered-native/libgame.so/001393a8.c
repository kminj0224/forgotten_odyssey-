/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001393a8  Symbol: reverse */

/* cocos2d::CCEaseElasticOut::reverse() */

void __thiscall cocos2d::CCEaseElasticOut::reverse(CCEaseElasticOut *this)

{
  CCActionInterval *pCVar1;
  float extraout_s0;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseElasticIn::actionWithAction(pCVar1,extraout_s0);
  return;
}


