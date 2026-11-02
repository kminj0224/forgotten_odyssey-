/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137a80  Symbol: sphericalRadius */

/* cocos2d::CCOrbitCamera::sphericalRadius(float*, float*, float*) */

void __thiscall
cocos2d::CCOrbitCamera::sphericalRadius
          (CCOrbitCamera *this,float *param_1,float *param_2,float *param_3)

{
  CCCamera *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float __x;
  float fVar8;
  float __x_00;
  float __x_01;
  float __x_02;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [2];
  
  this_00 = (CCCamera *)(**(code **)(**(int **)(this + 0x18) + 0x5c))();
  CCCamera::getEyeXYZ(this_00,&local_30,&local_2c,&local_28);
  CCCamera::getCenterXYZ(this_00,&local_24,&local_20,local_1c);
  uVar1 = __subsf3(local_30,local_24);
  uVar2 = __subsf3(local_2c,local_20);
  uVar3 = __subsf3(local_28,local_1c[0]);
  uVar4 = __mulsf3(uVar1,uVar1);
  uVar5 = __mulsf3(uVar2,uVar2);
  uVar6 = __mulsf3(uVar3,uVar3);
  uVar5 = __addsf3(uVar4,uVar5);
  uVar4 = __addsf3(uVar5,uVar6);
  fVar8 = sqrtf(__x);
  sqrtf(fVar8);
  iVar7 = __aeabi_fcmpeq();
  if (iVar7 != 0) {
    uVar5 = 0x34000000;
  }
  iVar7 = __aeabi_fcmpeq(uVar4,0);
  if (iVar7 != 0) {
    uVar4 = 0x34000000;
  }
  fVar8 = (float)__divsf3(uVar3,uVar4);
  acosf(__x_00);
  *param_2 = fVar8;
  iVar7 = __aeabi_fcmplt(uVar1,0);
  if (iVar7 == 0) {
    fVar8 = (float)__divsf3(uVar2,uVar5);
    asinf(__x_02);
  }
  else {
    uVar1 = __divsf3(uVar2,uVar5);
    asinf(__x_01);
    fVar8 = (float)__subsf3(DAT_00137b78,uVar1);
  }
  *param_3 = fVar8;
  uVar1 = CCCamera::getZEye();
  fVar8 = (float)__divsf3(uVar4,uVar1);
  *param_1 = fVar8;
  return;
}


