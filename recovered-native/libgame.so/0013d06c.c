/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d06c  Symbol: startWithTarget */

/* cocos2d::CCMoveBy::startWithTarget(cocos2d::CCNode*) */

undefined8 cocos2d::CCMoveBy::startWithTarget(CCNode *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x3c);
  CCMoveTo::startWithTarget(param_1);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  return uVar1;
}


