/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e860  Symbol: reverse */

/* cocos2d::CCSpawn::reverse() */

void __thiscall cocos2d::CCSpawn::reverse(CCSpawn *this)

{
  CCFiniteTimeAction *pCVar1;
  CCFiniteTimeAction *pCVar2;
  
  pCVar1 = (CCFiniteTimeAction *)(**(code **)(**(int **)(this + 0x2c) + 0x24))();
  pCVar2 = (CCFiniteTimeAction *)(**(code **)(**(int **)(this + 0x30) + 0x24))();
  actionOneTwo(pCVar1,pCVar2);
  return;
}


