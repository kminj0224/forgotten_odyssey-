/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142bde  Symbol: convertToNodeSpaceAR */

/* cocos2d::CCNode::convertToNodeSpaceAR(cocos2d::CCPoint const&) */

CCNode * __thiscall cocos2d::CCNode::convertToNodeSpaceAR(CCNode *this,CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  undefined4 local_1c;
  CCPoint local_18;
  CCPoint local_14;
  
  convertToNodeSpace(&local_20);
  CCPoint::CCPoint((CCPoint *)&local_18);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
  if (iVar3 == 0) {
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    uVar2 = __divsf3(0x3f800000,uVar2);
    FUN_00141ce4(&local_28,param_1 + 0x16,uVar2);
    local_18 = local_28;
  }
  else {
    local_18 = param_1[0x16];
    local_24 = param_1[0x17];
  }
  local_14 = local_24;
  __subsf3(local_20,local_18);
  uVar4 = __subsf3(local_1c,local_14);
  CCPoint::CCPoint((CCPoint *)this,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  return this;
}


