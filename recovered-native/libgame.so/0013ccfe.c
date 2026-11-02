/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ccfe  Symbol: startWithTarget */

/* cocos2d::CCActionInterval::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCActionInterval::startWithTarget(CCActionInterval *this,CCNode *param_1)

{
  CCAction::startWithTarget((CCAction *)this,param_1);
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (CCActionInterval)0x1;
  return;
}


