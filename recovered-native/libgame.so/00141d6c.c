/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141d6c  Symbol: setPosition */

/* cocos2d::CCNode::setPosition(cocos2d::CCPoint const&) */

undefined8 cocos2d::CCNode::setPosition(CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint *in_r1;
  CCPoint *pCVar4;
  CCPoint *local_18;
  CCPoint *local_14;
  
  param_1[10] = *in_r1;
  param_1[0xb] = in_r1[1];
  local_18 = param_1;
  local_14 = in_r1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
  if (iVar3 == 0) {
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    FUN_00141ce4(&local_18,in_r1,uVar2);
    param_1[0xc] = (CCPoint)local_18;
    pCVar4 = local_14;
  }
  else {
    param_1[0xc] = param_1[10];
    pCVar4 = (CCPoint *)param_1[0xb];
  }
  param_1[0xd] = (CCPoint)pCVar4;
  *(undefined *)((int)param_1 + 0xf5) = 1;
  *(undefined *)(param_1 + 0x3d) = 1;
  *(undefined *)((int)param_1 + 0xf6) = 1;
  return CONCAT44(local_14,local_18);
}


