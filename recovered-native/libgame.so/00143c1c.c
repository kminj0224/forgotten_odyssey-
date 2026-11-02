/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143c1c  Symbol: addObject */

/* cocos2d::CCPoolManager::addObject(cocos2d::CCObject*) */

void __thiscall cocos2d::CCPoolManager::addObject(CCPoolManager *this,CCObject *param_1)

{
  CCAutoreleasePool *this_00;
  
  this_00 = (CCAutoreleasePool *)getCurReleasePool(this);
  CCAutoreleasePool::addObject(this_00,param_1);
  return;
}


