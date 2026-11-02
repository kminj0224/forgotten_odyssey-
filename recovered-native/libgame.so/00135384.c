/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135384  Symbol: ccDrawCubicBezier */

/* cocos2d::ccDrawCubicBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&, cocos2d::CCPoint const&, int) */

void cocos2d::ccDrawCubicBezier
               (CCPoint *param_1,CCPoint *param_2,CCPoint *param_3,CCPoint *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCDirector *pCVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  CCPoint CVar11;
  float __x;
  float __x_00;
  float __y;
  float __y_00;
  undefined8 uVar12;
  int local_40;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)operator_new__((param_5 + 1) * 8);
  puVar10 = puVar1;
  for (iVar8 = param_5; iVar8 != -1; iVar8 = iVar8 + -1) {
    CCPoint::CCPoint((CCPoint *)puVar10);
    puVar10 = puVar10 + 2;
  }
  local_40 = 0;
  uVar9 = 0;
  puVar10 = puVar1;
  while( true ) {
    if (param_5 <= local_40) break;
    uVar2 = __subsf3(0x3f800000,uVar9);
    powf(__x,__y);
    uVar3 = __mulsf3();
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar2 = __mulsf3(uVar2,DAT_00135588);
    uVar2 = __mulsf3(uVar2,uVar9);
    uVar2 = __mulsf3(uVar2,uVar9);
    uVar5 = __mulsf3(uVar9,uVar9);
    uVar5 = __mulsf3(uVar5,uVar9);
    uVar4 = __mulsf3(uVar4,DAT_00135588);
    uVar4 = __mulsf3(uVar4,uVar9);
    uVar6 = __mulsf3(uVar4,*param_2);
    uVar3 = __addsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar2,*param_3);
    uVar3 = __addsf3(uVar3,uVar6);
    uVar6 = __mulsf3(uVar5,*param_4);
    uVar3 = __addsf3(uVar3,uVar6);
    powf(__x_00,__y_00);
    uVar6 = __mulsf3();
    uVar4 = __mulsf3(uVar4,param_2[1]);
    uVar4 = __addsf3(uVar6,uVar4);
    uVar2 = __mulsf3(uVar2,param_3[1]);
    uVar2 = __addsf3(uVar4,uVar2);
    uVar4 = __mulsf3(uVar5,param_4[1]);
    uVar2 = __addsf3(uVar2,uVar4);
    pCVar7 = (CCDirector *)CCDirector::sharedDirector();
    uVar4 = CCDirector::getContentScaleFactor(pCVar7);
    __mulsf3(uVar3,uVar4);
    pCVar7 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar7);
    uVar12 = __mulsf3(uVar2,uVar3);
    CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    *puVar10 = local_28;
    puVar10[1] = local_24;
    uVar2 = __floatsisf(param_5);
    uVar2 = __divsf3(0x3f800000,uVar2);
    uVar9 = __addsf3(uVar9,uVar2);
    puVar10 = puVar10 + 2;
    local_40 = local_40 + 1;
  }
  CVar11 = *param_4;
  pCVar7 = (CCDirector *)CCDirector::sharedDirector();
  uVar9 = CCDirector::getContentScaleFactor(pCVar7);
  __mulsf3(CVar11,uVar9);
  CVar11 = param_4[1];
  pCVar7 = (CCDirector *)CCDirector::sharedDirector();
  uVar9 = CCDirector::getContentScaleFactor(pCVar7);
  uVar12 = __mulsf3(CVar11,uVar9);
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar9 = DAT_0013558c;
  puVar1[param_5 * 2] = local_20;
  (puVar1 + param_5 * 2)[1] = local_1c;
  glDisable(uVar9);
  glDisableClientState(DAT_00135590);
  glDisableClientState(DAT_00135594);
  glVertexPointer(2,DAT_00135598,0,puVar1);
  glDrawArrays(3,0,param_5 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  glEnableClientState(DAT_00135594);
  glEnableClientState(DAT_00135590);
  glEnable(DAT_0013558c);
  return;
}


