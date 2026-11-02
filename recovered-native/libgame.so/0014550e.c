/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014550e  Symbol: resetDirector */

/* cocos2d::CCDirector::resetDirector() */

void __thiscall cocos2d::CCDirector::resetDirector(CCDirector *this)

{
  CCTouchDispatcher *this_00;
  CCActionManager *this_01;
  
  this_00 = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
  CCTouchDispatcher::removeAllDelegates(this_00);
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 0xb8))();
    (**(code **)(**(int **)(this + 0x44) + 0xdc))();
    CCObject::release(*(CCObject **)(this + 0x44));
  }
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  CCMutableArray<cocos2d::CCScene*>::removeAllObjects
            (*(CCMutableArray<cocos2d::CCScene*> **)(this + 0x50),true);
  (**(code **)(*(int *)this + 0x1c))(this);
  if (*(CCObject **)(this + 0x80) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x80));
  }
  CCLabelBMFont::purgeCachedData();
  CCAnimationCache::purgeSharedAnimationCache();
  CCSpriteFrameCache::purgeSharedSpriteFrameCache();
  this_01 = (CCActionManager *)CCActionManager::sharedManager();
  CCActionManager::purgeSharedManager(this_01);
  CCScheduler::purgeSharedScheduler();
  CCTextureCache::purgeSharedTextureCache();
  return;
}


