/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138f10  Symbol: reverse */

/* cocos2d::CCEaseInOut::reverse() */

void __thiscall cocos2d::CCEaseInOut::reverse(CCEaseInOut *this)

{
  CCActionInterval *pCVar1;
  float extraout_s0;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  actionWithAction(pCVar1,extraout_s0);
  return;
}


