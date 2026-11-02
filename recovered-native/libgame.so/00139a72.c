/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139a72  Symbol: startWithTarget */

/* cocos2d::CCStopGrid::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCStopGrid::startWithTarget(CCStopGrid *this,CCNode *param_1)

{
  CCGridBase *this_00;
  
  CCAction::startWithTarget((CCAction *)this,param_1);
  this_00 = (CCGridBase *)(**(code **)(**(int **)(this + 0x18) + 0x60))();
  if ((this_00 != (CCGridBase *)0x0) && (this_00[0x11] != (CCGridBase)0x0)) {
    CCGridBase::setActive(this_00,false);
  }
  return;
}


