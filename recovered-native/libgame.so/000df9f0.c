/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df9f0  Symbol: MARKET_CASH_ITEM_NOTICE_THOCH */

/* Market_Store::MARKET_CASH_ITEM_NOTICE_THOCH(cocos2d::CCPoint) */

void Market_Store::MARKET_CASH_ITEM_NOTICE_THOCH(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar6;
  int iVar7;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  iVar7 = DAT_000dfae8;
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  iVar7 = iVar7 + 0xdfa20;
  (**(code **)(*piVar2 + 0x7c))();
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    (**(code **)(*piVar2 + 0x7c))();
    iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar4 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar6 = *(code **)(*(int *)param_1 + 0xd0);
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar6)(param_1,uVar5,1);
      **(undefined4 **)(iVar7 + DAT_000dfaec) = 0xb;
      **(undefined4 **)(iVar7 + DAT_000dfaf0) = 0;
    }
  }
  else {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    KG_removeChild(pCVar1,true);
    pcVar6 = *(code **)(*(int *)param_1 + 0xd0);
    uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    (*pcVar6)(param_1,uVar5,1);
    **(undefined4 **)(iVar7 + DAT_000dfaec) = 0xb;
    **(undefined4 **)(iVar7 + DAT_000dfaf0) = 0;
    MARKET_CASH_TEIM_BUY((Market_Store *)param_1,*(int *)(param_1 + 0x19c));
  }
  return;
}


