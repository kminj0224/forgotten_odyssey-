/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137b7c  Symbol: startWithTarget */

/* cocos2d::CCOrbitCamera::startWithTarget(cocos2d::CCNode*) */

undefined8 cocos2d::CCOrbitCamera::startWithTarget(CCNode *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCNode *in_r1;
  float in_r2;
  float in_r3;
  CCNode *local_14;
  float local_10;
  float local_c;
  
  local_14 = in_r1;
  local_10 = in_r2;
  local_c = in_r3;
  CCActionInterval::startWithTarget((CCActionInterval *)param_1,in_r1);
  sphericalRadius((CCOrbitCamera *)param_1,(float *)&local_14,&local_10,&local_c);
  iVar1 = __unordsf2(*(undefined4 *)(param_1 + 0x50));
  if (iVar1 != 0) {
    *(CCNode **)(param_1 + 0x50) = local_14;
  }
  iVar1 = __unordsf2(*(undefined4 *)(param_1 + 0x58));
  if (iVar1 != 0) {
    uVar2 = __mulsf3(local_10,DAT_00137be4);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  iVar1 = __unordsf2(*(undefined4 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    uVar2 = __mulsf3(local_c,DAT_00137be4);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  uVar3 = __mulsf3(*(undefined4 *)(param_1 + 0x58),DAT_00137be8);
  uVar2 = DAT_00137be8;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x60),uVar2);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  return CONCAT44(local_14,param_1);
}


