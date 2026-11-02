/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139498  Symbol: reverse */

/* cocos2d::CCEaseElasticIn::reverse() */

void __thiscall cocos2d::CCEaseElasticIn::reverse(CCEaseElasticIn *this)

{
  CCActionInterval *pCVar1;
  float extraout_s0;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseElasticOut::actionWithAction(pCVar1,extraout_s0);
  return;
}


