/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d5ae8  Symbol: MARKET_CASH_TEIM_BUY */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000d5b3e) */
/* WARNING: Removing unreachable block (ram,0x000d5b3e) */
/* Market_Equip::MARKET_CASH_TEIM_BUY(int) */

void __thiscall Market_Equip::MARKET_CASH_TEIM_BUY(Market_Equip *this,int param_1)

{
  CCNode *this_00;
  Draw_Number *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(DAT_000d5c68 + 0xd5af4);
  piVar5 = *(int **)(DAT_000d5c6c + 0xd5af6);
  if (param_1 == 7) {
    iVar2 = *piVar6 + (*piVar5 + DAT_000d5c74) * 4;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) - *(int *)(*(int *)(DAT_000d5c70 + 0xd5af8) + 0xed0);
switchD_000d5b3e_caseD_7:
    iVar2 = *piVar6;
    iVar7 = *piVar5 * 2000;
    iVar3 = 0;
    for (iVar1 = 0; iVar1 < *(int *)((*piVar5 + DAT_000d5c7c) * 4 + iVar2); iVar1 = iVar1 + 1) {
      iVar3 = iVar3 + 0x14;
      if (*(int *)(iVar2 + iVar7 + iVar3 + DAT_000d5c98) == 0) {
        iVar2 = iVar2 + iVar1 * 0x14 + iVar7;
        puVar4 = (undefined4 *)(iVar2 + DAT_000d5c9c);
        *puVar4 = 0x9e;
        puVar4[1] = 0;
        *(undefined4 *)(iVar2 + DAT_000d5ca0 + 4) = 0;
        InventoryLayer::Item_SetInventory(*(InventoryLayer **)(this + 0x170),iVar1);
        break;
      }
    }
    goto switchD_000d5b3e_caseD_6;
  }
  iVar2 = *piVar6;
  *(int *)(iVar2 + DAT_000d5c78) =
       *(int *)(iVar2 + DAT_000d5c78) -
       *(int *)(*(int *)(DAT_000d5c70 + 0xd5af8) + (param_1 + 0x97) * 0x18);
  switch(param_1) {
  case 0:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c80;
    break;
  case 1:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c84;
    goto LAB_000d5b94;
  case 2:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c88;
    goto LAB_000d5bda;
  case 3:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c8c;
    break;
  case 4:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c90;
LAB_000d5b94:
    iVar3 = iVar3 + iVar1;
    goto LAB_000d5b96;
  case 5:
    iVar2 = iVar2 + (*piVar5 + DAT_000d5c74) * 4;
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = DAT_000d5c94;
LAB_000d5bda:
    iVar3 = iVar3 + iVar1;
    goto LAB_000d5b96;
  default:
    goto switchD_000d5b3e_caseD_6;
  case 7:
    goto switchD_000d5b3e_caseD_7;
  case 0x12:
    Set_Item_Upgrade_Count(1);
    goto switchD_000d5b3e_caseD_6;
  }
  iVar3 = iVar3 + iVar1;
LAB_000d5b96:
  *(int *)(iVar2 + 4) = iVar3;
switchD_000d5b3e_caseD_6:
  Draw_Number::SetNumber_Re
            (*(Draw_Number **)(this + 0x154),*(int *)(*piVar6 + (*piVar5 + DAT_000d5c74) * 4 + 4),2)
  ;
  iVar2 = DAT_000d5c78;
  Draw_Number::SetNumber_Re(*(Draw_Number **)(this + 0x158),*(int *)(*piVar6 + DAT_000d5c78),2);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x68);
  this_01 = (Draw_Number *)cocos2d::CCNode::getChildByTag(this_00,0x59);
  Draw_Number::SetNumber_Re(this_01,*(int *)(*piVar6 + iVar2),0);
  return;
}


