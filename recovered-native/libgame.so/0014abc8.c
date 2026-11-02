/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014abc8  Symbol: initScenes */

/* cocos2d::CCTransitionSlideInL::initScenes() */

void __thiscall cocos2d::CCTransitionSlideInL::initScenes(CCTransitionSlideInL *this)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 local_20;
  CCPoint aCStack_18 [12];
  
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  piVar1 = *(int **)(this + 0xfc);
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  uVar3 = __subsf3(local_20,0x3f000000);
  CCPoint::CCPoint(aCStack_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(piVar1,aCStack_18);
  return;
}


