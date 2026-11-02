/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134ed4  Symbol: ccDrawLine */

/* cocos2d::ccDrawLine(cocos2d::CCPoint const&, cocos2d::CCPoint const&) */

undefined8 cocos2d::ccDrawLine(CCPoint *param_1,CCPoint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCDirector *pCVar3;
  undefined4 uVar4;
  CCPoint CVar5;
  CCPoint *local_20;
  CCPoint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  memset(&local_20,0,0x10);
  CVar5 = *param_1;
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar4 = CCDirector::getContentScaleFactor(pCVar3);
  local_20 = (CCPoint *)__mulsf3(CVar5,uVar4);
  CVar5 = param_1[1];
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar4 = CCDirector::getContentScaleFactor(pCVar3);
  local_1c = (CCPoint *)__mulsf3(CVar5,uVar4);
  CVar5 = *param_2;
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar4 = CCDirector::getContentScaleFactor(pCVar3);
  local_18 = __mulsf3(CVar5,uVar4);
  CVar5 = param_2[1];
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar4 = CCDirector::getContentScaleFactor(pCVar3);
  local_14 = __mulsf3(CVar5,uVar4);
  uVar2 = DAT_00134f80;
  uVar1 = DAT_00134f7c;
  uVar4 = DAT_00134f78;
  glDisable(DAT_00134f78);
  glDisableClientState(uVar1);
  glDisableClientState(uVar2);
  glVertexPointer(2,DAT_00134f84,0,&local_20);
  glDrawArrays(1,0,2);
  glEnableClientState(uVar2);
  glEnableClientState(uVar1);
  glEnable(uVar4);
  return CONCAT44(local_1c,local_20);
}


