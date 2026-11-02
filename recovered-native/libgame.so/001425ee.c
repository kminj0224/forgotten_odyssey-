/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001425ee  Symbol: pauseSchedulerAndActions */

/* cocos2d::CCNode::pauseSchedulerAndActions() */

void __thiscall cocos2d::CCNode::pauseSchedulerAndActions(CCNode *this)

{
  CCScheduler *this_00;
  CCObject *pCVar1;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::pauseTarget(this_00,(CCObject *)this);
  pCVar1 = (CCObject *)CCActionManager::sharedManager();
  CCActionManager::pauseTarget(pCVar1);
  return;
}


