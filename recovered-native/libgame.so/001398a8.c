/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001398a8  Symbol: reverse */

/* cocos2d::CCEaseBackIn::reverse() */

void __thiscall cocos2d::CCEaseBackIn::reverse(CCEaseBackIn *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseBackOut::actionWithAction(pCVar1);
  return;
}


