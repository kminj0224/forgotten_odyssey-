/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ae5e  Symbol: action */

/* cocos2d::CCTransitionMoveInL::action() */

void cocos2d::CCTransitionMoveInL::action(void)

{
  int in_r0;
  CCPoint *pCVar1;
  float in_s0;
  float fVar2;
  float in_s1;
  CCPoint aCStack_10 [8];
  
  pCVar1 = *(CCPoint **)(in_r0 + 0x104);
  fVar2 = (float)CCPoint::CCPoint(aCStack_10,in_s0,in_s1);
  CCMoveTo::actionWithDuration(fVar2,pCVar1);
  return;
}


