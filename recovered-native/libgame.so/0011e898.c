/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011e898  Symbol: Market_Shop_Inventory_Full_Touch */

/* New_Notice::Market_Shop_Inventory_Full_Touch() */

undefined8 __thiscall New_Notice::Market_Shop_Inventory_Full_Touch(New_Notice *this)

{
  int iVar1;
  int *piVar2;
  Market_Store *this_00;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = DAT_0011e9d4 + 0x11e8a4;
  piVar8 = *(int **)(iVar7 + DAT_0011e9dc);
  iVar5 = **(int **)(iVar7 + DAT_0011e9d8);
  iVar6 = *piVar8;
  iVar1 = 0;
  piVar3 = *(int **)(iVar7 + DAT_0011e9e4);
  piVar2 = piVar3;
  do {
    iVar1 = iVar1 + 1;
    if (*piVar2 == *(int *)((iVar5 + DAT_0011e9e0) * 4 + iVar6)) goto LAB_0011e8d6;
    piVar2 = piVar2 + 3;
  } while (iVar1 != 0x14);
  iVar1 = 0;
LAB_0011e8d6:
  iVar4 = piVar3[iVar1 * 3 + 1];
  if (iVar4 == 0) {
    if (*(int *)(iVar6 + DAT_0011e9e8) < piVar3[iVar1 * 3 + 2]) {
      go_CP(this);
      goto LAB_0011e9d2;
    }
    *(int *)(iVar6 + DAT_0011e9e8) = *(int *)(iVar6 + DAT_0011e9e8) - piVar3[iVar1 * 3 + 2];
  }
  else {
    iVar9 = iVar6 + (iVar5 + DAT_0011e9f8) * 4;
    iVar1 = *(int *)(iVar9 + 4);
    if (iVar1 < iVar4) {
      go_CP_Item(this);
      goto LAB_0011e9d2;
    }
    *(int *)(iVar9 + 4) = iVar1 - iVar4;
  }
  iVar4 = (iVar5 + DAT_0011e9e0) * 4;
  iVar1 = *(int *)(iVar4 + iVar6);
  if (iVar1 < 100) {
    iVar1 = iVar1 + 5;
  }
  else {
    iVar1 = 100;
  }
  *(int *)(iVar4 + iVar6) = iVar1;
  if (**(char **)(iVar7 + DAT_0011e9ec) == '\0') {
    iVar1 = **(int **)(iVar7 + DAT_0011e9f0);
    if (iVar1 == 4) {
      this_00 = (Market_Store *)(**(code **)(*(int *)this + 0x90))(this);
      goto LAB_0011e95a;
    }
    if (iVar1 == 2) {
      piVar2 = *(int **)(iVar7 + DAT_0011e9f4);
      N_Draw_Number::SetMoney_Re
                (*(N_Draw_Number **)(*piVar2 + 0x114),
                 *(int *)(iVar6 + (iVar5 + DAT_0011e9f8) * 4 + 4),2);
      N_Draw_Number::SetNumber_Re
                (*(N_Draw_Number **)(*piVar2 + 0x118),*(int *)(*piVar8 + DAT_0011e9e8),2);
      iVar1 = (**(code **)(*(int *)this + 0x90))(this);
      InventoryLayer::reset(*(InventoryLayer **)(iVar1 + 0x114));
    }
  }
  else if (**(int **)(iVar7 + DAT_0011e9f0) == 4) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x90))(this);
    iVar1 = (**(code **)(*piVar2 + 0x90))();
    this_00 = *(Market_Store **)(iVar1 + 0x110);
LAB_0011e95a:
    Market_Store::Item_Buy_Call(this_00);
  }
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  if (**(int **)(iVar7 + DAT_0011e9fc) != 0) {
    GameScene::setInventory_Item(**(GameScene ***)(iVar7 + DAT_0011ea00));
  }
LAB_0011e9d2:
  return CONCAT44(piVar8,this);
}


