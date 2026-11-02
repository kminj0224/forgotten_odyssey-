/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001397b0  Symbol: reverse */

/* cocos2d::CCEaseBounceIn::reverse() */

void __thiscall cocos2d::CCEaseBounceIn::reverse(CCEaseBounceIn *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseBounceOut::actionWithAction(pCVar1);
  return;
}


