/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ce70  Symbol: startWithTarget */

/* cocos2d::CCBezierTo::startWithTarget(cocos2d::CCNode*) */

undefined8 cocos2d::CCBezierTo::startWithTarget(CCNode *param_1)

{
  CCNode *in_r1;
  undefined8 uVar1;
  CCNode *local_18;
  CCNode *local_14;
  
  local_18 = param_1;
  local_14 = in_r1;
  CCBezierBy::startWithTarget((CCBezierBy *)param_1,in_r1);
  __subsf3(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x44));
  uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x48));
  CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  *(CCNode **)(param_1 + 0x34) = local_18;
  *(CCNode **)(param_1 + 0x38) = local_14;
  __subsf3(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x44));
  uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  *(CCNode **)(param_1 + 0x3c) = local_18;
  *(CCNode **)(param_1 + 0x40) = local_14;
  __subsf3(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x44));
  uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x48));
  CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  *(CCNode **)(param_1 + 0x2c) = local_18;
  *(CCNode **)(param_1 + 0x30) = local_14;
  return CONCAT44(local_14,local_18);
}


