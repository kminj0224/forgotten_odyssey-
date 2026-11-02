/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cf30  Symbol: startWithTarget */

/* cocos2d::CCSkewTo::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCSkewTo::startWithTarget(CCSkewTo *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float __x;
  float __x_00;
  float __y;
  float __y_00;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = (**(code **)(*(int *)param_1 + 0x48))(param_1);
  *(undefined4 *)(this + 0x34) = uVar1;
  __aeabi_fcmpgt(uVar1,0);
  fmodf(__x,__y);
  *(undefined4 *)(this + 0x34) = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x34));
  uVar1 = DAT_0013cff8;
  *(undefined4 *)(this + 0x44) = uVar2;
  iVar3 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = __subsf3(uVar2,DAT_0013d000);
    *(undefined4 *)(this + 0x44) = uVar1;
  }
  uVar1 = *(undefined4 *)(this + 0x44);
  iVar3 = __aeabi_fcmplt(uVar1,DAT_0013cffc);
  if (iVar3 != 0) {
    uVar1 = __addsf3(uVar1,DAT_0013d000);
    *(undefined4 *)(this + 0x44) = uVar1;
  }
  uVar1 = (**(code **)(*(int *)param_1 + 0x50))(param_1);
  *(undefined4 *)(this + 0x38) = uVar1;
  __aeabi_fcmpgt(uVar1,0);
  fmodf(__x_00,__y_00);
  *(undefined4 *)(this + 0x38) = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x38));
  uVar1 = DAT_0013cff8;
  *(undefined4 *)(this + 0x48) = uVar2;
  iVar3 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = __subsf3(uVar2,DAT_0013d000);
    *(undefined4 *)(this + 0x48) = uVar1;
  }
  uVar1 = *(undefined4 *)(this + 0x48);
  iVar3 = __aeabi_fcmplt(uVar1,DAT_0013cffc);
  if (iVar3 != 0) {
    uVar1 = __addsf3(uVar1,DAT_0013d000);
    *(undefined4 *)(this + 0x48) = uVar1;
  }
  return;
}


