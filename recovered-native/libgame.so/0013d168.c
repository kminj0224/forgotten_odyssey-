/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d168  Symbol: startWithTarget */

/* cocos2d::CCSequence::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCSequence::startWithTarget(CCSequence *this,CCNode *param_1)

{
  undefined4 uVar1;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = __divsf3(*(undefined4 *)(*(int *)(this + 0x2c) + 0x20),*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  return;
}


