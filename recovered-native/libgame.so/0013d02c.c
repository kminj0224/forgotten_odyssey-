/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d02c  Symbol: startWithTarget */

/* cocos2d::CCMoveTo::startWithTarget(cocos2d::CCNode*) */

undefined8 cocos2d::CCMoveTo::startWithTarget(CCNode *param_1)

{
  undefined4 *puVar1;
  int *in_r1;
  undefined8 uVar2;
  CCNode *local_18;
  int *local_14;
  
  local_18 = param_1;
  local_14 = in_r1;
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,(CCNode *)in_r1);
  puVar1 = (undefined4 *)(**(code **)(*in_r1 + 0x38))(in_r1);
  *(undefined4 *)(param_1 + 0x34) = *puVar1;
  *(undefined4 *)(param_1 + 0x38) = puVar1[1];
  __subsf3(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34));
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  *(CCNode **)(param_1 + 0x3c) = local_18;
  *(int **)(param_1 + 0x40) = local_14;
  return CONCAT44(local_14,local_18);
}


