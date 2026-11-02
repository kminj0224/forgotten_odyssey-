/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3f84  Symbol: STEP_CASH_ITEM_NOTICE_THOCH */

/* In_App_Layer::STEP_CASH_ITEM_NOTICE_THOCH(cocos2d::CCPoint) */

undefined8 In_App_Layer::STEP_CASH_ITEM_NOTICE_THOCH(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  InventoryLayer *this;
  CCPoint in_r1;
  CCPoint in_r2;
  code *pcVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  local_20 = *puVar4;
  local_1c = puVar4[1];
  iVar5 = KG_Notice_Touch(in_r1,in_r2,*pCVar3);
  if (iVar5 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
    local_20 = *puVar4;
    local_1c = puVar4[1];
    iVar5 = KG_Notice_Touch(in_r1,in_r2,*pCVar3);
    if (iVar5 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      KG_removeChild(pCVar1,true);
      pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
      uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
      (*pcVar7)(param_1,uVar6,1);
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
  }
  else {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    KG_removeChild(pCVar1,true);
    pcVar7 = *(code **)(*(int *)param_1 + 0xd0);
    uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    (*pcVar7)(param_1,uVar6,1);
    *(undefined4 *)(param_1 + 0x11c) = 1;
    CALL_CASH_TEIM_BUY((In_App_Layer *)param_1,*(int *)(param_1 + 0x118));
    if (*(int *)(param_1 + 0x120) == 3) {
      iVar5 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
      this = *(InventoryLayer **)(iVar5 + 0x170);
    }
    else {
      if (*(int *)(param_1 + 0x120) != 4) {
        if (**(MarketLayer ***)(DAT_000d409c + 0xd402e) != (MarketLayer *)0x0) {
          MarketLayer::reset(**(MarketLayer ***)(DAT_000d409c + 0xd402e));
        }
        goto LAB_000d4098;
      }
      iVar5 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
      this = *(InventoryLayer **)(iVar5 + 0x128);
    }
    InventoryLayer::reset(this);
  }
LAB_000d4098:
  return CONCAT44(local_1c,local_20);
}


