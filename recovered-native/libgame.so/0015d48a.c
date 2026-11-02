/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d48a  Symbol: ccpRotateByAngle */

/* cocos2d::ccpRotateByAngle(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float) */

cocos2d * __thiscall
cocos2d::ccpRotateByAngle(cocos2d *this,CCPoint *param_1,CCPoint *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  __subsf3(*param_1,*param_2);
  uVar7 = __subsf3(param_1[1],param_2[1]);
  fVar6 = (float)CCPoint::CCPoint((CCPoint *)this,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar3 = in_r3;
  fVar6 = cosf(fVar6);
  sinf(fVar6);
  uVar5 = *(undefined4 *)this;
  uVar4 = *(undefined4 *)(this + 4);
  uVar1 = __mulsf3(uVar5,uVar3);
  uVar2 = __mulsf3(uVar4,in_r3);
  uVar1 = __subsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,*param_2);
  *(undefined4 *)this = uVar1;
  uVar1 = __mulsf3(uVar5,in_r3);
  uVar3 = __mulsf3(uVar4,uVar3);
  uVar3 = __addsf3(uVar1,uVar3);
  uVar3 = __addsf3(uVar3,param_2[1]);
  *(undefined4 *)(this + 4) = uVar3;
  return this;
}


