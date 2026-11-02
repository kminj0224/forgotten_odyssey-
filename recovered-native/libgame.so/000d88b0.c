/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d88b0  Symbol: MARKET_CASH_NOT_CP_NOTICE_TOUCH */

/* Market_Equip::MARKET_CASH_NOT_CP_NOTICE_TOUCH(cocos2d::CCPoint) */

void Market_Equip::MARKET_CASH_NOT_CP_NOTICE_TOUCH(CCPoint param_1)

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
  iVar7 = DAT_000d89a4;
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  iVar7 = iVar7 + 0xd88e0;
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
      **(undefined4 **)(iVar7 + DAT_000d89ac) = 8;
      **(undefined4 **)(iVar7 + DAT_000d89a8) = 0;
    }
  }
  else {
    piVar2 = *(int **)(iVar7 + DAT_000d89a8);
    if (*piVar2 == 7) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar6 = *(code **)(*(int *)param_1 + 0xd0);
      uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar6)(param_1,uVar5,1);
      **(undefined4 **)(iVar7 + DAT_000d89ac) = 8;
      *piVar2 = 0;
    }
  }
  return;
}


