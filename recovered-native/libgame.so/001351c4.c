/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001351c4  Symbol: ccDrawQuadBezier */

/* cocos2d::ccDrawQuadBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&, int) */

void cocos2d::ccDrawQuadBezier(CCPoint *param_1,CCPoint *param_2,CCPoint *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCDirector *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  CCPoint CVar11;
  undefined8 uVar12;
  int local_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined4 *)operator_new__((param_4 + 1) * 8);
  puVar9 = puVar1;
  for (iVar8 = param_4; iVar8 != -1; iVar8 = iVar8 + -1) {
    CCPoint::CCPoint((CCPoint *)puVar9);
    puVar9 = puVar9 + 2;
  }
  uVar10 = 0;
  puVar9 = puVar1;
  for (local_3c = 0; local_3c < param_4; local_3c = local_3c + 1) {
    uVar2 = __subsf3(0x3f800000,uVar10);
    uVar3 = __mulsf3(uVar2,uVar2);
    uVar2 = __addsf3(uVar2,uVar2);
    uVar2 = __mulsf3(uVar2,uVar10);
    uVar4 = __mulsf3(uVar10,uVar10);
    uVar5 = __mulsf3(uVar3,*param_1);
    uVar6 = __mulsf3(uVar2,*param_2);
    uVar5 = __addsf3(uVar5,uVar6);
    uVar6 = __mulsf3(uVar4,*param_3);
    uVar5 = __addsf3(uVar5,uVar6);
    uVar3 = __mulsf3(uVar3,param_1[1]);
    uVar2 = __mulsf3(uVar2,param_2[1]);
    uVar2 = __addsf3(uVar3,uVar2);
    uVar3 = __mulsf3(uVar4,param_3[1]);
    uVar2 = __addsf3(uVar2,uVar3);
    pCVar7 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar7);
    __mulsf3(uVar5,uVar3);
    pCVar7 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar7);
    uVar12 = __mulsf3(uVar2,uVar3);
    CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    *puVar9 = local_28;
    puVar9[1] = local_24;
    uVar2 = __floatsisf(param_4);
    uVar2 = __divsf3(0x3f800000,uVar2);
    uVar10 = __addsf3(uVar10,uVar2);
    puVar9 = puVar9 + 2;
  }
  CVar11 = *param_3;
  pCVar7 = (CCDirector *)CCDirector::sharedDirector();
  uVar10 = CCDirector::getContentScaleFactor(pCVar7);
  __mulsf3(CVar11,uVar10);
  CVar11 = param_3[1];
  pCVar7 = (CCDirector *)CCDirector::sharedDirector();
  uVar10 = CCDirector::getContentScaleFactor(pCVar7);
  uVar12 = __mulsf3(CVar11,uVar10);
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar10 = DAT_00135374;
  puVar1[param_4 * 2] = local_20;
  (puVar1 + param_4 * 2)[1] = local_1c;
  glDisable(uVar10);
  glDisableClientState(DAT_00135378);
  glDisableClientState(DAT_0013537c);
  glVertexPointer(2,DAT_00135380,0,puVar1);
  glDrawArrays(3,0,param_4 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete__(puVar1);
  }
  glEnableClientState(DAT_0013537c);
  glEnableClientState(DAT_00135378);
  glEnable(DAT_00135374);
  return;
}


