/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014256e  Symbol: unscheduleAllSelectors */

/* cocos2d::CCNode::unscheduleAllSelectors() */

void cocos2d::CCNode::unscheduleAllSelectors(void)

{
  CCObject *pCVar1;
  
  pCVar1 = (CCObject *)CCScheduler::sharedScheduler();
  CCScheduler::unscheduleAllSelectorsForTarget(pCVar1);
  return;
}


