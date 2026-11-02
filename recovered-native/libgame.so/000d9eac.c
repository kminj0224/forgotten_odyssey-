/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9eac  Symbol: MARKET_REINFOR1_TOUCH_END */

/* Market_Equip::MARKET_REINFOR1_TOUCH_END(cocos2d::CCPoint) */

void Market_Equip::MARKET_REINFOR1_TOUCH_END(CCPoint param_1)

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
    cocos2d::CCLog((char *)(DAT_000d9fd4 + 0xd9f02));
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000d9fec + 0xd9f9a));
  }
  return;
}


