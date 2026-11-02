/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013e880  Symbol: actionsWithArray */

/* cocos2d::CCSpawn::actionsWithArray(cocos2d::CCArray*) */

CCFiniteTimeAction * cocos2d::CCSpawn::actionsWithArray(CCArray *param_1)

{
  CCFiniteTimeAction *pCVar1;
  CCFiniteTimeAction *pCVar2;
  uint uVar3;
  uint uVar4;
  
  pCVar1 = (CCFiniteTimeAction *)CCArray::objectAtIndex(param_1,0);
  for (uVar4 = 1; uVar3 = CCArray::count(param_1), uVar4 < uVar3; uVar4 = uVar4 + 1) {
    pCVar2 = (CCFiniteTimeAction *)CCArray::objectAtIndex(param_1,uVar4);
    pCVar1 = (CCFiniteTimeAction *)actionOneTwo(pCVar1,pCVar2);
  }
  return pCVar1;
}


