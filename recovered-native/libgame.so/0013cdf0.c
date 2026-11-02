/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cdf0  Symbol: startWithTarget */

/* cocos2d::CCScaleTo::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCScaleTo::startWithTarget(CCScaleTo *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = (**(code **)(*(int *)param_1 + 0x28))(param_1);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar1 = (**(code **)(*(int *)param_1 + 0x30))(param_1);
  *(undefined4 *)(this + 0x38) = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x34));
  *(undefined4 *)(this + 0x44) = uVar2;
  uVar1 = __subsf3(*(undefined4 *)(this + 0x40),uVar1);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


