/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df8ac  Symbol: MARKET_CASH_TEIM_BUY */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000df8f8) */
/* WARNING: Removing unreachable block (ram,0x000df8f8) */
/* Market_Store::MARKET_CASH_TEIM_BUY(int) */

undefined8 __thiscall Market_Store::MARKET_CASH_TEIM_BUY(Market_Store *this,int param_1)

{
  int iVar1;
  int iVar2;
  CCNode *this_00;
  Draw_Number *this_01;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = DAT_000df9c8;
  piVar6 = *(int **)(DAT_000df9bc + 0xdf8b8);
  piVar5 = *(int **)(DAT_000df9c0 + 0xdf8ba);
  if (param_1 == 7) {
    iVar4 = *piVar6 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4) - *(int *)(*(int *)(DAT_000df9c4 + 0xdf8bc) + 0xed0);
    goto LAB_000df920;
  }
  iVar4 = *piVar6;
  *(int *)(iVar4 + DAT_000df9c8) =
       *(int *)(iVar4 + DAT_000df9c8) -
       *(int *)(*(int *)(DAT_000df9c4 + 0xdf8bc) + (param_1 + 0x97) * 0x18);
  switch(param_1) {
  case 0:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9d0;
    break;
  case 1:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9d4;
    break;
  case 2:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9d8;
    break;
  case 3:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9dc;
    break;
  case 4:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9e0;
    break;
  case 5:
    iVar4 = iVar4 + (*piVar5 + DAT_000df9cc) * 4;
    iVar3 = *(int *)(iVar4 + 4);
    iVar2 = DAT_000df9e4;
    break;
  default:
    goto switchD_000df8f8_caseD_6;
  case 0x12:
    Set_Item_Upgrade_Count(1);
    goto switchD_000df8f8_caseD_6;
  }
  iVar3 = iVar3 + iVar2;
LAB_000df920:
  *(int *)(iVar4 + 4) = iVar3;
switchD_000df8f8_caseD_6:
  Draw_Number::SetNumber_Re
            (*(Draw_Number **)(this + 0x138),*(int *)(*piVar6 + (*piVar5 + DAT_000df9cc) * 4 + 4),2)
  ;
  Draw_Number::SetNumber_Re(*(Draw_Number **)(this + 0x13c),*(int *)(*piVar6 + iVar1),2);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000df9e8);
  this_01 = (Draw_Number *)cocos2d::CCNode::getChildByTag(this_00,DAT_000df9ec);
  Draw_Number::SetNumber_Re(this_01,*(int *)(*piVar6 + iVar1),0);
  return CONCAT44(this,this);
}


