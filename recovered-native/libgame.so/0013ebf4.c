/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ebf4  Symbol: purgeSharedManager */

/* cocos2d::CCActionManager::purgeSharedManager() */

void __thiscall cocos2d::CCActionManager::purgeSharedManager(CCActionManager *this)

{
  CCScheduler *this_00;
  
  this_00 = (CCScheduler *)CCScheduler::sharedScheduler();
  CCScheduler::unscheduleUpdateForTarget(this_00,(CCObject *)this);
  if (*(CCObject **)(DAT_0013ec14 + 0x13ec08) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(DAT_0013ec14 + 0x13ec08));
  }
  return;
}


