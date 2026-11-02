/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ad86  Symbol: action */

/* cocos2d::CCTransitionSlideInB::action() */

void cocos2d::CCTransitionSlideInB::action(void)

{
  int in_r0;
  undefined4 in_r1;
  CCPoint *pCVar1;
  float fVar2;
  undefined8 uVar3;
  CCPoint aCStack_10 [8];
  
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  uVar3 = __subsf3(in_r1,0x3f000000);
  pCVar1 = *(CCPoint **)(in_r0 + 0x104);
  fVar2 = (float)CCPoint::CCPoint(aCStack_10,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  CCMoveBy::actionWithDuration(fVar2,pCVar1);
  return;
}


