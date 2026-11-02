/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001390bc  Symbol: reverse */

/* cocos2d::CCEaseSineIn::reverse() */

void __thiscall cocos2d::CCEaseSineIn::reverse(CCEaseSineIn *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseSineOut::actionWithAction(pCVar1);
  return;
}


