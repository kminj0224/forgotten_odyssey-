/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142c56  Symbol: convertToWorldSpaceAR */

/* cocos2d::CCNode::convertToWorldSpaceAR(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCNode::convertToWorldSpaceAR(CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r1;
  undefined4 *in_r2;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  CCPoint::CCPoint((CCPoint *)&local_28);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
  if (iVar3 == 0) {
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    uVar2 = __divsf3(0x3f800000,uVar2);
    FUN_00141ce4(&local_30,in_r1 + 0x58,uVar2);
    local_28 = local_30;
  }
  else {
    local_28 = *(undefined4 *)(in_r1 + 0x58);
    local_2c = *(undefined4 *)(in_r1 + 0x5c);
  }
  local_24 = local_2c;
  __addsf3(*in_r2,local_28);
  uVar4 = __addsf3(in_r2[1],local_24);
  CCPoint::CCPoint(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  convertToWorldSpace(param_1);
  return param_1;
}


