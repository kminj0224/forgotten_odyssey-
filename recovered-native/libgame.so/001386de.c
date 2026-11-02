/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001386de  Symbol: reverse */

/* cocos2d::CCActionEase::reverse() */

void __thiscall cocos2d::CCActionEase::reverse(CCActionEase *this)

{
  CCActionInterval *pCVar1;
  
  pCVar1 = (CCActionInterval *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  actionWithAction(pCVar1);
  return;
}


