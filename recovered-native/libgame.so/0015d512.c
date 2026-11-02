/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d512  Symbol: ccpLineIntersect */

/* cocos2d::ccpLineIntersect(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&, cocos2d::CCPoint const&, float*, float*) */

bool cocos2d::ccpLineIntersect
               (CCPoint *param_1,CCPoint *param_2,CCPoint *param_3,CCPoint *param_4,float *param_5,
               float *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  CCPoint CVar11;
  CCPoint CVar12;
  CCPoint CVar13;
  CCPoint CVar14;
  bool bVar15;
  
  CVar11 = *param_1;
  CVar12 = *param_2;
  iVar1 = __aeabi_fcmpeq(CVar11,CVar12);
  if ((iVar1 != 0) && (iVar1 = __aeabi_fcmpeq(param_1[1],param_2[1]), iVar1 != 0)) {
    return false;
  }
  CVar13 = *param_3;
  CVar14 = *param_4;
  iVar1 = __aeabi_fcmpeq(CVar13,CVar14);
  if ((iVar1 != 0) && (iVar1 = __aeabi_fcmpeq(param_3[1],param_4[1]), iVar1 != 0)) {
    return false;
  }
  uVar2 = __subsf3(CVar12,CVar11);
  CVar12 = param_1[1];
  uVar3 = __subsf3(param_2[1],CVar12);
  uVar4 = __subsf3(CVar14,CVar13);
  CVar14 = param_3[1];
  uVar5 = __subsf3(param_4[1],CVar14);
  uVar6 = __subsf3(CVar11,CVar13);
  uVar7 = __subsf3(CVar12,CVar14);
  uVar8 = __mulsf3(uVar5,uVar2);
  uVar9 = __mulsf3(uVar4,uVar3);
  uVar8 = __subsf3(uVar8,uVar9);
  uVar4 = __mulsf3(uVar4,uVar7);
  uVar5 = __mulsf3(uVar5,uVar6);
  fVar10 = (float)__subsf3(uVar4,uVar5);
  *param_5 = fVar10;
  uVar2 = __mulsf3(uVar2,uVar7);
  uVar3 = __mulsf3(uVar3,uVar6);
  fVar10 = (float)__subsf3(uVar2,uVar3);
  *param_6 = fVar10;
  iVar1 = __aeabi_fcmpeq(uVar8,0);
  if (iVar1 == 0) {
    fVar10 = (float)__divsf3(*param_5,uVar8);
    *param_5 = fVar10;
    fVar10 = (float)__divsf3(*param_6,uVar8);
    *param_6 = fVar10;
    bVar15 = true;
  }
  else {
    iVar1 = __aeabi_fcmpeq(*param_5,0);
    bVar15 = true;
    if (iVar1 == 0) {
      iVar1 = __aeabi_fcmpeq(fVar10,0);
      bVar15 = iVar1 != 0;
    }
  }
  return bVar15;
}


