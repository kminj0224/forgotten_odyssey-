/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ae2a  Symbol: action */

/* cocos2d::CCTransitionSlideInL::action() */

void cocos2d::CCTransitionSlideInL::action(void)

{
  int in_r0;
  CCPoint *pCVar1;
  float fVar2;
  undefined8 uVar3;
  CCPoint aCStack_10 [8];
  
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  uVar3 = __subsf3(in_r0,0x3f000000);
  pCVar1 = *(CCPoint **)(in_r0 + 0x104);
  fVar2 = (float)CCPoint::CCPoint(aCStack_10,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  CCMoveBy::actionWithDuration(fVar2,pCVar1);
  return;
}


