/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e2798  Symbol: MARKET_REINFOR3_TOUCH_END */

/* Market_Store::MARKET_REINFOR3_TOUCH_END(cocos2d::CCPoint) */

undefined8 Market_Store::MARKET_REINFOR3_TOUCH_END(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  CCPoint in_r1;
  CCPoint in_r2;
  int iVar5;
  int local_1c;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))();
  iVar5 = *piVar2;
  local_1c = piVar2[1];
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 != 0) {
    KG_removeChild(pCVar1,true);
    (**(code **)(*(int *)param_1 + 0xd0))(param_1,*(undefined4 *)(param_1 + 0x1b4),1);
    **(undefined4 **)(DAT_000e285c + 0xe2802) = 4;
    InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x128));
    iVar5 = *(int *)(param_1 + 0x194);
    local_1c = 1;
    Inventory_Item_Popup_re
              (param_1,*(int *)(**(int **)(DAT_000e2860 + 0xe281e) +
                                iVar5 * 0x14 + **(int **)(DAT_000e2864 + 0xe2826) * 2000 +
                               DAT_000e2868),*(int *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1ac),
               iVar5);
    setInventory_Plus(SUB41(param_1,0));
  }
  return CONCAT44(local_1c,iVar5);
}


