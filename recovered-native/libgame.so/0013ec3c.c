/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ec3c  Symbol: init */

/* cocos2d::CCActionManager::init() */

undefined4 __thiscall cocos2d::CCActionManager::init(CCActionManager *this)

{
  CCScheduler *this_00;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::scheduleUpdateForTarget(this_00,(CCObject *)this,0,false);
  *(undefined4 *)(this + 0x14) = 0;
  return 1;
}


