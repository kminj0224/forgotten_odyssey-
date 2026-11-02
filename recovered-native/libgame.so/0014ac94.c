/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ac94  Symbol: initScenes */

/* cocos2d::CCTransitionMoveInL::initScenes() */

void __thiscall cocos2d::CCTransitionMoveInL::initScenes(CCTransitionMoveInL *this)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  CCPoint aCStack_18 [12];
  
  CCDirector::sharedDirector();
  uVar3 = CCDirector::getWinSize();
  piVar1 = *(int **)(this + 0xfc);
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  CCPoint::CCPoint(aCStack_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(piVar1,aCStack_18);
  return;
}


