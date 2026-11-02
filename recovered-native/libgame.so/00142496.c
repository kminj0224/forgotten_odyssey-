/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142496  Symbol: stopAction */

/* cocos2d::CCNode::stopAction(cocos2d::CCAction*) */

void cocos2d::CCNode::stopAction(CCAction *param_1)

{
  CCAction *pCVar1;
  
  pCVar1 = (CCAction *)CCActionManager::sharedManager();
  CCActionManager::removeAction(pCVar1);
  return;
}


