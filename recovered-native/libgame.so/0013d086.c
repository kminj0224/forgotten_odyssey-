/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d086  Symbol: startWithTarget */

/* cocos2d::CCRotateBy::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCRotateBy::startWithTarget(CCRotateBy *this,CCNode *param_1)

{
  undefined4 uVar1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = (**(code **)(*(int *)param_1 + 0x20))(param_1);
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


