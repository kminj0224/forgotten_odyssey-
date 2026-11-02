/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014259a  Symbol: resumeSchedulerAndActions */

/* cocos2d::CCNode::resumeSchedulerAndActions() */

void __thiscall cocos2d::CCNode::resumeSchedulerAndActions(CCNode *this)

{
  CCScheduler *this_00;
  CCObject *pCVar1;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::resumeTarget(this_00,(CCObject *)this);
  pCVar1 = (CCObject *)CCActionManager::sharedManager();
  CCActionManager::resumeTarget(pCVar1);
  return;
}


