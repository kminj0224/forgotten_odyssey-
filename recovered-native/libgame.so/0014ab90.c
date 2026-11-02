/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ab90  Symbol: initScenes */

/* cocos2d::CCTransitionSlideInR::initScenes() */

void __thiscall cocos2d::CCTransitionSlideInR::initScenes(CCTransitionSlideInR *this)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 local_20;
  CCPoint aCStack_18 [12];
  
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  piVar2 = *(int **)(this + 0xfc);
  pcVar1 = *(code **)(*piVar2 + 0x3c);
  uVar3 = __subsf3(local_20,0x3f000000);
  CCPoint::CCPoint(aCStack_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar1)(piVar2,aCStack_18);
  return;
}


