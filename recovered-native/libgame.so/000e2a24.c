/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e2a24  Symbol: MARKET_REINFOR_TOUCH_END */

/* Market_Store::MARKET_REINFOR_TOUCH_END(cocos2d::CCPoint) */

void Market_Store::MARKET_REINFOR_TOUCH_END(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  CCPoint in_r1;
  CCPoint in_r2;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000e2bc0 + 0xe2a78));
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000e2bdc + 0xe2b86));
  }
  return;
}


