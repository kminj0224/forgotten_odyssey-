/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145fca  Symbol: setActive */

/* cocos2d::CCGridBase::setActive(bool) */

void __thiscall cocos2d::CCGridBase::setActive(CCGridBase *this,bool param_1)

{
  CCDirector *this_00;
  
  this[0x11] = (CCGridBase)param_1;
  if (!param_1) {
    this_00 = (CCDirector *)CCDirector::sharedDirector();
    CCDirector::setProjection(this_00,*(ccDirectorProjection *)(this_00 + 0x60));
  }
  return;
}


