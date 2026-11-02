/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142ab6  Symbol: convertToNodeSpace */

/* cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCNode::convertToNodeSpace(CCPoint *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  int iVar3;
  CCPoint *in_r2;
  CCPoint local_48;
  CCPoint local_44;
  CCNode aCStack_40 [24];
  CCNode aCStack_28 [24];
  
  CCPoint::CCPoint((CCPoint *)param_1);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  iVar3 = __aeabi_fcmpeq(uVar2,0x3f800000);
  if (iVar3 == 0) {
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    FUN_00141ce4(&local_48,in_r2,uVar2);
    *param_1 = local_48;
    param_1[1] = local_44;
    worldToNodeTransform(aCStack_28);
    __CCPointApplyAffineTransform((cocos2d *)&local_48,param_1,(CCAffineTransform *)aCStack_28);
    *param_1 = local_48;
    param_1[1] = local_44;
    pCVar1 = (CCDirector *)CCDirector::sharedDirector();
    uVar2 = CCDirector::getContentScaleFactor(pCVar1);
    uVar2 = __divsf3(0x3f800000,uVar2);
    FUN_00141ce4(&local_48,param_1,uVar2);
  }
  else {
    worldToNodeTransform(aCStack_40);
    __CCPointApplyAffineTransform((cocos2d *)&local_48,in_r2,(CCAffineTransform *)aCStack_40);
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  return param_1;
}


