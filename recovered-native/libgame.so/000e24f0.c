/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e24f0  Symbol: MARKET_REINFOR4_TOUCH_END */

/* Market_Store::MARKET_REINFOR4_TOUCH_END(cocos2d::CCPoint) */

void Market_Store::MARKET_REINFOR4_TOUCH_END(CCPoint param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCSize *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  CCPoint in_r1;
  int iVar6;
  CCPoint in_r2;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar10 = DAT_000e2770 + 0xe24fc;
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
                (param_1,*(undefined4 *)(param_1 + 0x1b4),1,*(code **)(*(int *)param_1 + 0xd0),uVar7
                 ,uVar8);
      **(undefined4 **)(iVar10 + DAT_000e278c) = 4;
      InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x128));
      setInventory_Plus(SUB41(param_1,0));
    }
  }
  else {
    piVar2 = *(int **)(iVar10 + DAT_000e2774);
    iVar5 = *(int *)(iVar10 + DAT_000e277c);
    piVar12 = *(int **)(iVar10 + DAT_000e2778);
    if (*(int *)(*piVar2 + DAT_000e2784) <
        *(int *)(iVar5 + *(int *)(*piVar2 + *piVar12 * 2000 + *(int *)(param_1 + 0x194) * 0x14 +
                                 DAT_000e2780) * 0x1c + 0x10)) {
      Item_CASH_Veiw((Market_Store *)param_1,2,0);
    }
    else {
      KG_removeChild(pCVar1,true);
      (**(code **)(*(int *)param_1 + 0xd0))
                (param_1,*(undefined4 *)(param_1 + 0x1b4),1,*(code **)(*(int *)param_1 + 0xd0),uVar7
                 ,uVar8);
      iVar11 = *(int *)(param_1 + 0x1a4);
      if (iVar11 == 0) {
        iVar11 = *piVar2 + *(int *)(param_1 + 0x194) * 0x14 + *piVar12 * 2000;
        *(undefined4 *)(iVar11 + DAT_000e2780 + 4) = *(undefined4 *)(iVar11 + DAT_000e2788);
      }
      else {
        iVar9 = *piVar2 + *(int *)(param_1 + 0x194) * 0x14 + *piVar12 * 2000;
        iVar6 = iVar9 + DAT_000e2780;
        uVar13 = __floatsidf(*(undefined4 *)(iVar9 + DAT_000e2788));
        uVar14 = __floatsidf(*(undefined4 *)(iVar5 + (iVar11 + -1) * 0x1c + 0x18));
        uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000e2768,DAT_000e276c);
        __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                 (int)((ulonglong)uVar14 >> 0x20));
        uVar7 = __fixdfsi();
        *(undefined4 *)(iVar6 + 4) = uVar7;
      }
      iVar11 = *piVar2;
      *(int *)(iVar11 + DAT_000e2784) =
           *(int *)(iVar11 + DAT_000e2784) -
           *(int *)(iVar5 + *(int *)(param_1 + 0x1a4) * 0x1c + 0x10);
      iVar5 = DAT_000e278c;
      *(undefined4 *)(iVar11 + *(int *)(param_1 + 0x194) * 0x14 + *piVar12 * 2000 + DAT_000e2780) =
           *(undefined4 *)(param_1 + 0x1a4);
      **(undefined4 **)(iVar10 + iVar5) = 4;
      InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x128));
      Inventory_Item_Popup_re
                (param_1,*(int *)(*piVar2 + *(int *)(param_1 + 0x194) * 0x14 + *piVar12 * 2000 +
                                 DAT_000e2790),*(int *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1ac),
                 *(int *)(param_1 + 0x194));
      setInventory_Plus(SUB41(param_1,0));
      Draw_Number::SetNumber_Re
                (*(Draw_Number **)(param_1 + 0x138),
                 *(int *)(*piVar2 + (*piVar12 + DAT_000e2794) * 4 + 4),2);
      Draw_Number::SetNumber_Re
                (*(Draw_Number **)(param_1 + 0x13c),*(int *)(*piVar2 + DAT_000e2784),2);
    }
  }
  return;
}


