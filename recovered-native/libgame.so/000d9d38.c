/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9d38  Symbol: MARKET_REINFOR3_TOUCH_END */

/* Market_Equip::MARKET_REINFOR3_TOUCH_END(cocos2d::CCPoint) */

undefined8 Market_Equip::MARKET_REINFOR3_TOUCH_END(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  int iVar4;
  InventoryLayer *this;
  CCPoint in_r1;
  CCPoint in_r2;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))();
  iVar5 = *piVar2;
  iVar6 = piVar2[1];
  iVar4 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar4 != 0) {
    KG_removeChild(pCVar1,true);
    (**(code **)(*(int *)param_1 + 0xd0))(param_1,*(undefined4 *)(param_1 + 0x178),1);
    this = *(InventoryLayer **)(param_1 + 0x170);
    **(undefined4 **)(DAT_000d9e08 + 0xd9da4) = 3;
    InventoryLayer::reset(this);
    iVar4 = *(int *)(param_1 + 0x134);
    if (iVar4 == -1) {
      if (*(int *)(param_1 + 0x138) != -1) {
        iVar4 = 0;
        do {
          iVar7 = iVar4 + 1;
          Draw_Item((Market_Equip *)param_1,iVar4);
          iVar4 = iVar7;
        } while (iVar7 != 4);
      }
    }
    else {
      iVar6 = 0;
      Inventory_Item_Popup_re
                ((Market_Equip *)param_1,
                 *(int *)(**(int **)(DAT_000d9e0c + 0xd9dba) +
                          iVar4 * 0x14 + **(int **)(DAT_000d9e10 + 0xd9dc2) * 2000 + DAT_000d9e14),
                 *(int *)(param_1 + 0x148),*(int *)(param_1 + 0x14c),iVar4,0);
      iVar5 = iVar4;
    }
    setInventory_Plus((Market_Equip *)param_1,true);
  }
  return CONCAT44(iVar6,iVar5);
}


