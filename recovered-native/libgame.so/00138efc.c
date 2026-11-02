/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138efc  Symbol: reverse */

/* cocos2d::CCEaseElasticInOut::reverse() */

void __thiscall cocos2d::CCEaseElasticInOut::reverse(CCEaseElasticInOut *this)

{
  CCActionInterval *pCVar1;
  float extraout_s0;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseInOut::actionWithAction(pCVar1,extraout_s0);
  return;
}


