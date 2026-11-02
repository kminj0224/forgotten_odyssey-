/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134f88  Symbol: ccDrawPoly */

/* cocos2d::ccDrawPoly(cocos2d::CCPoint const*, int, bool, bool) */

void cocos2d::ccDrawPoly(CCPoint *param_1,int param_2,bool param_3,bool param_4)

{
  CCPoint *__dest;
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint CVar4;
  CCPoint *pCVar5;
  CCPoint *pCVar6;
  int local_28;
  
  __dest = (CCPoint *)operator_new__(param_2 * 8);
  if (__dest != (CCPoint *)0x0) {
    glDisable(DAT_00135060);
    glDisableClientState(DAT_00135064);
    glDisableClientState(DAT_00135068);
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
    pCVar5 = param_1;
    if (iVar3 == 0) {
      memcpy(__dest,param_1,param_2 * 8);
      pCVar6 = __dest;
      for (local_28 = 0; pCVar5 = __dest, local_28 < param_2; local_28 = local_28 + 1) {
        CVar4 = *param_1;
        pCVar1 = (CCDirector *)CCDirector::sharedDirector();
        uVar2 = CCDirector::getContentScaleFactor(pCVar1);
        CVar4 = __mulsf3(CVar4,uVar2);
        *pCVar6 = CVar4;
        CVar4 = param_1[1];
        param_1 = param_1 + 2;
        pCVar1 = (CCDirector *)CCDirector::sharedDirector();
        uVar2 = CCDirector::getContentScaleFactor(pCVar1);
        CVar4 = __mulsf3(CVar4,uVar2);
        pCVar6[1] = CVar4;
        pCVar6 = pCVar6 + 2;
      }
    }
    glVertexPointer(2,DAT_0013506c,0,pCVar5);
    uVar2 = 2;
    if (!param_3) {
      uVar2 = 3;
    }
    if (param_4) {
      uVar2 = 6;
    }
    glDrawArrays(uVar2,0,param_2);
    glEnableClientState(DAT_00135068);
    glEnableClientState(DAT_00135064);
    glEnable(DAT_00135060);
    operator_delete__(__dest);
  }
  return;
}


