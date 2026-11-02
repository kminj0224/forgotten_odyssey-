/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ac66  Symbol: initScenes */

/* cocos2d::CCTransitionMoveInR::initScenes() */

void __thiscall cocos2d::CCTransitionMoveInR::initScenes(CCTransitionMoveInR *this)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  CCPoint aCStack_18 [12];
  
  CCDirector::sharedDirector();
  uVar3 = CCDirector::getWinSize();
  piVar2 = *(int **)(this + 0xfc);
  pcVar1 = *(code **)(*piVar2 + 0x3c);
  CCPoint::CCPoint(aCStack_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar1)(piVar2,aCStack_18);
  return;
}


