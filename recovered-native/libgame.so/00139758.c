/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139758  Symbol: reverse */

/* cocos2d::CCEaseBounceOut::reverse() */

void __thiscall cocos2d::CCEaseBounceOut::reverse(CCEaseBounceOut *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseBounceIn::actionWithAction(pCVar1);
  return;
}


