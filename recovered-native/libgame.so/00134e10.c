/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134e10  Symbol: ccDrawPoints */

/* cocos2d::ccDrawPoints(cocos2d::CCPoint const*, unsigned int) */

undefined8 cocos2d::ccDrawPoints(CCPoint *param_1,uint param_2)

{
  CCPoint *pCVar1;
  CCDirector *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CCPoint CVar5;
  CCPoint *pCVar6;
  CCPoint *pCVar7;
  uint uVar8;
  uint local_1c;
  
  glDisable(DAT_00134ec4);
  glDisableClientState(DAT_00134ec8);
  glDisableClientState(DAT_00134ecc);
  pCVar1 = (CCPoint *)operator_new__(param_2 << 3);
  pCVar2 = (CCDirector *)CCDirector::sharedDirector();
  uVar3 = CCDirector::getContentScaleFactor(pCVar2);
  iVar4 = __aeabi_fcmpeq(uVar3,0x3f800000);
  pCVar6 = param_1;
  local_1c = param_2;
  if (iVar4 == 0) {
    pCVar7 = pCVar1;
    for (uVar8 = 0; pCVar6 = pCVar1, uVar8 != param_2; uVar8 = uVar8 + 1) {
      CVar5 = *param_1;
      pCVar2 = (CCDirector *)CCDirector::sharedDirector();
      uVar3 = CCDirector::getContentScaleFactor(pCVar2);
      CVar5 = __mulsf3(CVar5,uVar3);
      *pCVar7 = CVar5;
      local_1c = param_1[1];
      param_1 = param_1 + 2;
      pCVar2 = (CCDirector *)CCDirector::sharedDirector();
      uVar3 = CCDirector::getContentScaleFactor(pCVar2);
      CVar5 = __mulsf3(local_1c,uVar3);
      pCVar7[1] = CVar5;
      pCVar7 = pCVar7 + 2;
    }
  }
  glVertexPointer(2,DAT_00134ed0,0,pCVar6);
  glDrawArrays(0,0,param_2);
  if (pCVar1 != (CCPoint *)0x0) {
    operator_delete__(pCVar1);
  }
  glEnableClientState(DAT_00134ecc);
  glEnableClientState(DAT_00134ec8);
  glEnable(DAT_00134ec4);
  return CONCAT44(local_1c,param_2);
}


