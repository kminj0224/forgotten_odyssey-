/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3d80  Symbol: CALL_CASH_TEIM_BUY */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000d3dd0) */
/* WARNING: Removing unreachable block (ram,0x000d3dd0) */
/* In_App_Layer::CALL_CASH_TEIM_BUY(int) */

undefined8 __thiscall In_App_Layer::CALL_CASH_TEIM_BUY(In_App_Layer *this,int param_1)

{
  int iVar1;
  int iVar2;
  CCNode *this_00;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = DAT_000d3f30 + 0xd3d8c;
  piVar6 = *(int **)(iVar4 + DAT_000d3f34);
  if (param_1 == 7) {
    iVar5 = *piVar6 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4) - *(int *)(*(int *)(iVar4 + DAT_000d3f38) + 0xed0);
    goto LAB_000d3dfc;
  }
  iVar5 = *piVar6;
  *(int *)(iVar5 + DAT_000d3f44) =
       *(int *)(iVar5 + DAT_000d3f44) -
       *(int *)(*(int *)(iVar4 + DAT_000d3f38) + (param_1 + 0x97) * 0x18);
  iVar1 = DAT_000d3f7c;
  iVar2 = DAT_000d3f70;
  switch(param_1) {
  case 0:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f48;
    goto LAB_000d3dfa;
  case 1:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f4c;
    goto LAB_000d3e3a;
  case 2:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f50;
    goto LAB_000d3dfa;
  case 3:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f54;
    goto LAB_000d3e3a;
  case 4:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f58;
LAB_000d3dfa:
    iVar4 = iVar4 + iVar2;
LAB_000d3dfc:
    *(int *)(iVar5 + 4) = iVar4;
    break;
  case 5:
    iVar5 = iVar5 + (**(int **)(iVar4 + DAT_000d3f3c) + DAT_000d3f40) * 4;
    iVar4 = *(int *)(iVar5 + 4);
    iVar2 = DAT_000d3f5c;
LAB_000d3e3a:
    iVar4 = iVar4 + iVar2;
    goto LAB_000d3dfc;
  case 8:
    iVar4 = **(int **)(iVar4 + DAT_000d3f3c);
    *(undefined *)(iVar5 + iVar4 * 9 + DAT_000d3f60) = 1;
    iVar5 = iVar5 + iVar4 * 0x24;
    *(undefined4 *)(iVar5 + DAT_000d3f64 + 4) = 1;
    *(undefined4 *)(iVar5 + DAT_000d3f68) = 1;
    break;
  case 9:
    iVar4 = **(int **)(iVar4 + DAT_000d3f3c);
    *(undefined *)(iVar5 + iVar4 * 9 + DAT_000d3f6c) = 1;
    iVar5 = iVar5 + iVar4 * 0x24;
    uVar3 = 10;
    *(undefined4 *)(iVar5 + iVar2 + 4) = 10;
    iVar2 = DAT_000d3f74;
    goto LAB_000d3efa;
  case 10:
    iVar4 = **(int **)(iVar4 + DAT_000d3f3c);
    *(undefined *)(iVar5 + iVar4 * 9 + DAT_000d3f78) = 1;
    uVar3 = 10;
    goto LAB_000d3ef6;
  case 0xb:
    iVar4 = **(int **)(iVar4 + DAT_000d3f3c);
    *(undefined *)(iVar5 + iVar4 * 9 + DAT_000d3f78) = 1;
    uVar3 = 0x32;
LAB_000d3ef6:
    iVar2 = DAT_000d3f80;
    iVar5 = iVar5 + iVar4 * 0x24;
    *(undefined4 *)(iVar5 + iVar1 + 4) = uVar3;
LAB_000d3efa:
    *(undefined4 *)(iVar5 + iVar2) = uVar3;
    break;
  case 0x12:
    Set_Item_Upgrade_Count(1);
  }
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  iVar4 = cocos2d::CCNode::getChildByTag(this_00,1);
  if (iVar4 != 0) {
    Draw_Number::SetNumber_Re(*(Draw_Number **)(this + 0x128),*(int *)(*piVar6 + DAT_000d3f44),0);
  }
  FileSave();
  return CONCAT44(param_1,this);
}


