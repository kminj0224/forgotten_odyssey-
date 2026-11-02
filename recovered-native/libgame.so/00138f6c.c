/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138f6c  Symbol: reverse */

/* cocos2d::CCEaseExponentialOut::reverse() */

void __thiscall cocos2d::CCEaseExponentialOut::reverse(CCEaseExponentialOut *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseExponentialIn::actionWithAction(pCVar1);
  return;
}


