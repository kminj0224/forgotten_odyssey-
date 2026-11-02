/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138fc4  Symbol: reverse */

/* cocos2d::CCEaseExponentialIn::reverse() */

void __thiscall cocos2d::CCEaseExponentialIn::reverse(CCEaseExponentialIn *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseExponentialOut::actionWithAction(pCVar1);
  return;
}


