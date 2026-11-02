/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001424ce  Symbol: numberOfRunningActions */

/* cocos2d::CCNode::numberOfRunningActions() */

void cocos2d::CCNode::numberOfRunningActions(void)

{
  CCObject *pCVar1;
  
  pCVar1 = (CCObject *)CCActionManager::sharedManager();
  CCActionManager::numberOfRunningActionsInTarget(pCVar1);
  return;
}


