/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139850  Symbol: reverse */

/* cocos2d::CCEaseBackOut::reverse() */

void __thiscall cocos2d::CCEaseBackOut::reverse(CCEaseBackOut *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseBackIn::actionWithAction(pCVar1);
  return;
}


