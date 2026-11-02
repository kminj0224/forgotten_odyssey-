/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001424de  Symbol: scheduleUpdateWithPriority */

/* cocos2d::CCNode::scheduleUpdateWithPriority(int) */

void __thiscall cocos2d::CCNode::scheduleUpdateWithPriority(CCNode *this,int param_1)

{
  CCScheduler *this_00;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::scheduleUpdateForTarget
            (this_00,(CCObject *)this,param_1,(bool)((byte)this[0x70] ^ 1));
  return;
}


