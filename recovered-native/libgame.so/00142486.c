/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142486  Symbol: stopAllActions */

/* cocos2d::CCNode::stopAllActions() */

void cocos2d::CCNode::stopAllActions(void)

{
  CCObject *pCVar1;
  
  pCVar1 = (CCObject *)CCActionManager::sharedManager();
  CCActionManager::removeAllActionsFromTarget(pCVar1);
  return;
}


