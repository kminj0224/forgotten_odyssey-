/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142506  Symbol: unscheduleUpdate */

/* cocos2d::CCNode::unscheduleUpdate() */

void __thiscall cocos2d::CCNode::unscheduleUpdate(CCNode *this)

{
  CCScheduler *this_00;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::unscheduleUpdateForTarget(this_00,(CCObject *)this);
  return;
}


