/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134d90  Symbol: ccDrawPoint */

/* cocos2d::ccDrawPoint(cocos2d::CCPoint const&) */

undefined8 __thiscall cocos2d::ccDrawPoint(cocos2d *this,CCPoint *param_1)

{
  undefined4 uVar1;
  CCDirector *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  cocos2d *local_18;
  CCPoint *local_14;
  
  uVar4 = *(undefined4 *)this;
  local_18 = this;
  local_14 = param_1;
  pCVar2 = (CCDirector *)CCDirector::sharedDirector();
  uVar3 = CCDirector::getContentScaleFactor(pCVar2);
  local_18 = (cocos2d *)__mulsf3(uVar4,uVar3);
  uVar4 = *(undefined4 *)(this + 4);
  pCVar2 = (CCDirector *)CCDirector::sharedDirector();
  uVar3 = CCDirector::getContentScaleFactor(pCVar2);
  local_14 = (CCPoint *)__mulsf3(uVar4,uVar3);
  uVar1 = DAT_00134e08;
  uVar4 = DAT_00134e04;
  uVar3 = DAT_00134e00;
  glDisable(DAT_00134e00);
  glDisableClientState(uVar4);
  glDisableClientState(uVar1);
  glVertexPointer(2,DAT_00134e0c,0,&local_18);
  glDrawArrays(0,0,1);
  glEnableClientState(uVar1);
  glEnableClientState(uVar4);
  glEnable(uVar3);
  return CONCAT44(local_14,local_18);
}


