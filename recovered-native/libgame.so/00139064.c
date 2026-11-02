/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139064  Symbol: reverse */

/* cocos2d::CCEaseSineOut::reverse() */

void __thiscall cocos2d::CCEaseSineOut::reverse(CCEaseSineOut *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  CCEaseSineIn::actionWithAction(pCVar1);
  return;
}


