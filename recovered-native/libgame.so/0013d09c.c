/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d09c  Symbol: startWithTarget */

/* cocos2d::CCRotateTo::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCRotateTo::startWithTarget(CCRotateTo *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float __x;
  float __y;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = (**(code **)(*(int *)param_1 + 0x20))(param_1);
  *(undefined4 *)(this + 0x30) = uVar1;
  __aeabi_fcmpgt(uVar1,0);
  fmodf(__x,__y);
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x30));
  uVar1 = DAT_0013d110;
  *(undefined4 *)(this + 0x34) = uVar2;
  iVar3 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = __subsf3(uVar2,DAT_0013d108);
    *(undefined4 *)(this + 0x34) = uVar1;
  }
  uVar1 = *(undefined4 *)(this + 0x34);
  iVar3 = __aeabi_fcmplt(uVar1,DAT_0013d114);
  if (iVar3 != 0) {
    uVar1 = __addsf3(uVar1,DAT_0013d108);
    *(undefined4 *)(this + 0x34) = uVar1;
  }
  return;
}


