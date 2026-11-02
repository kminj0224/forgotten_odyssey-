/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141d0c  Symbol: setPositionInPixels */

/* cocos2d::CCNode::setPositionInPixels(cocos2d::CCPoint const&) */

undefined8 cocos2d::CCNode::setPositionInPixels(CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint *in_r1;
  CCPoint *pCVar4;
  CCPoint *local_18;
  CCPoint *local_14;
  
  param_1[0xc] = *in_r1;
  param_1[0xd] = in_r1[1];
  local_18 = param_1;
  local_14 = in_r1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
  if (iVar3 == 0) {
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    uVar2 = __divsf3(0x3f800000,uVar2);
    FUN_00141ce4(&local_18,in_r1,uVar2);
    param_1[10] = (CCPoint)local_18;
    pCVar4 = local_14;
  }
  else {
    param_1[10] = param_1[0xc];
    pCVar4 = (CCPoint *)param_1[0xd];
  }
  param_1[0xb] = (CCPoint)pCVar4;
  *(undefined *)((int)param_1 + 0xf5) = 1;
  *(undefined *)(param_1 + 0x3d) = 1;
  *(undefined *)((int)param_1 + 0xf6) = 1;
  return CONCAT44(local_14,local_18);
}


