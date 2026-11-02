/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cee6  Symbol: startWithTarget */

/* cocos2d::CCJumpBy::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCJumpBy::startWithTarget(CCJumpBy *this,CCNode *param_1)

{
  undefined4 *puVar1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  puVar1 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
  *(undefined4 *)(this + 0x2c) = *puVar1;
  *(undefined4 *)(this + 0x30) = puVar1[1];
  return;
}


