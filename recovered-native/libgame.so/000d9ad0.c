/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d9ad0  Symbol: MARKET_REINFOR4_TOUCH_END */

/* Market_Equip::MARKET_REINFOR4_TOUCH_END(cocos2d::CCPoint) */

void Market_Equip::MARKET_REINFOR4_TOUCH_END(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  InventoryLayer *pIVar6;
  CCPoint in_r1;
  CCPoint in_r2;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *unaff_r6;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar10 = DAT_000d9d10 + 0xd9ae4;
  if (*(int *)(param_1 + 0x134) == -1) {
    if (*(int *)(param_1 + 0x138) != -1) {
      unaff_r6 = (int *)(**(int **)(iVar10 + DAT_000d9d18) +
                        *(int *)(param_1 + 0x138) * 0x14 + (*(int *)(param_1 + 0x110) + -8) * 0x50 +
                        **(int **)(iVar10 + DAT_000d9d14) * 0x2d0 + DAT_000d9d20);
    }
  }
  else {
    unaff_r6 = (int *)(**(int **)(iVar10 + DAT_000d9d18) +
                      *(int *)(param_1 + 0x134) * 0x14 + **(int **)(iVar10 + DAT_000d9d14) * 2000 +
                      DAT_000d9d1c);
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  uVar7 = *puVar4;
  uVar8 = puVar4[1];
  iVar5 = KG_Touch(in_r1,in_r2,*pCVar3);
  if (iVar5 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pCVar3 = (CCSize *)(**(code **)(*piVar2 + 0x38))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
    uVar7 = *puVar4;
    uVar8 = puVar4[1];
    iVar5 = KG_Touch(in_r1,in_r2,*pCVar3);
    if (iVar5 != 0) {
      KG_removeChild(pCVar1,true);
      (**(code **)(*(int *)param_1 + 0xd0))
                (param_1,*(undefined4 *)(param_1 + 0x178),1,*(code **)(*(int *)param_1 + 0xd0),uVar7
                 ,uVar8);
      pIVar6 = *(InventoryLayer **)(param_1 + 0x170);
      **(undefined4 **)(iVar10 + DAT_000d9d2c) = 3;
      InventoryLayer::reset(pIVar6);
      setInventory_Plus((Market_Equip *)param_1,true);
    }
  }
  else {
    piVar2 = *(int **)(iVar10 + DAT_000d9d18);
    iVar5 = *(int *)(iVar10 + DAT_000d9d28);
    if (*(int *)(*piVar2 + DAT_000d9d24) < *(int *)(iVar5 + unaff_r6[2] * 0x1c + 0x10)) {
      Item_CASH_Veiw((Market_Equip *)param_1,2,0);
    }
    else {
      KG_removeChild(pCVar1,true);
      (**(code **)(*(int *)param_1 + 0xd0))
                (param_1,*(undefined4 *)(param_1 + 0x178),1,*(code **)(*(int *)param_1 + 0xd0),uVar7
                 ,uVar8);
      iVar9 = *(int *)(param_1 + 0x144);
      if (iVar9 == 0) {
        unaff_r6[3] = unaff_r6[4];
      }
      else {
        uVar11 = __floatsidf(unaff_r6[4]);
        uVar12 = __floatsidf(*(undefined4 *)(iVar5 + (iVar9 + -1) * 0x1c + 0x18));
        uVar12 = __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_000d9d08,DAT_000d9d0c);
        __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
        iVar9 = __fixdfsi();
        unaff_r6[3] = iVar9;
      }
      *(int *)(*piVar2 + DAT_000d9d24) =
           *(int *)(*piVar2 + DAT_000d9d24) -
           *(int *)(iVar5 + *(int *)(param_1 + 0x144) * 0x1c + 0x10);
      unaff_r6[2] = *(int *)(param_1 + 0x144);
      pIVar6 = *(InventoryLayer **)(param_1 + 0x170);
      **(undefined4 **)(iVar10 + DAT_000d9d2c) = 3;
      InventoryLayer::reset(pIVar6);
      if (*(int *)(param_1 + 0x134) == -1) {
        if (*(int *)(param_1 + 0x138) != -1) {
          iVar5 = 0;
          do {
            iVar9 = iVar5 + 1;
            Draw_Item((Market_Equip *)param_1,iVar5);
            iVar5 = iVar9;
          } while (iVar9 != 4);
        }
      }
      else {
        Inventory_Item_Popup_re
                  ((Market_Equip *)param_1,*unaff_r6,*(int *)(param_1 + 0x148),
                   *(int *)(param_1 + 0x14c),*(int *)(param_1 + 0x134),0);
      }
      setInventory_Plus((Market_Equip *)param_1,true);
      Draw_Number::SetNumber_Re
                (*(Draw_Number **)(param_1 + 0x154),
                 *(int *)(*piVar2 + (**(int **)(iVar10 + DAT_000d9d14) + DAT_000d9d30) * 4 + 4),2);
      Draw_Number::SetNumber_Re
                (*(Draw_Number **)(param_1 + 0x158),*(int *)(*piVar2 + DAT_000d9d24),2);
    }
  }
  return;
}


