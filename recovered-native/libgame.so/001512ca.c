/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001512ca  Symbol: rotatePoint */

/* cocos2d::CCRibbon::rotatePoint(cocos2d::CCPoint const&, float) */

undefined8 cocos2d::CCRibbon::rotatePoint(CCPoint *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCPoint CVar3;
  undefined4 uVar4;
  undefined4 *in_r2;
  undefined4 in_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar7 = (float)CCPoint::CCPoint((CCPoint *)param_1);
  uVar5 = *in_r2;
  uVar4 = in_r3;
  fVar7 = cosf(fVar7);
  sinf(fVar7);
  uVar6 = in_r2[1];
  uVar1 = __mulsf3(uVar5,uVar4);
  uVar2 = __mulsf3(uVar6,in_r3);
  CVar3 = __subsf3(uVar1,uVar2);
  *param_1 = CVar3;
  uVar1 = __mulsf3(uVar5,in_r3);
  uVar4 = __mulsf3(uVar6,uVar4);
  CVar3 = __addsf3(uVar1,uVar4);
  param_1[1] = CVar3;
  return CONCAT44(uVar5,param_1);
}


