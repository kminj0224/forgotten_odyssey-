/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d02e8  Symbol: Set_Title_Sub */

/* Item_Text_View_Layer::Set_Title_Sub(int, int) */

void __thiscall
Item_Text_View_Layer::Set_Title_Sub(Item_Text_View_Layer *this,int param_1,int param_2)

{
  int iVar1;
  CCNode *this_00;
  _ccColor3B _Var2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_s0;
  float fVar5;
  undefined4 extraout_s1;
  undefined8 uVar6;
  float fVar7;
  undefined4 in_stack_ffffffa0;
  undefined uVar8;
  CCPoint local_40;
  CCPoint local_3c;
  char *local_38;
  int local_34;
  CCPoint local_30;
  CCPoint local_2c;
  char *local_28;
  int local_24;
  CCPoint local_20;
  CCPoint local_1c;
  char *local_18;
  int local_14;
  
  uVar8 = (undefined)((uint)in_stack_ffffffa0 >> 0x18);
  iVar3 = DAT_000d044c + 0xd02f4;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  uVar6 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar1 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
    uVar6 = cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
  }
  fVar7 = (float)((ulonglong)uVar6 >> 0x20);
  fVar5 = (float)uVar6;
  if (param_2 == 5) {
    pcVar4 = *(char **)(*(int *)(iVar3 + DAT_000d0454) +
                        *(int *)(*(int *)(iVar3 + DAT_000d0450) + *(int *)(this + 0x110) * 0x18 +
                                0x14) * 0xc + 8);
    uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,fVar5,fVar7);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    _Var2 = DAT_000d0460 + 0xd0362;
    iVar1 = CONCAT13(uVar8,0xfff285);
  }
  else if (param_2 == 4) {
    pcVar4 = *(char **)(*(int *)(iVar3 + DAT_000d0464) + (*(int *)(this + 0x110) + -1) * 0xc + 8);
    uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,fVar5,fVar7);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    _Var2 = DAT_000d0468 + 0xd03c4;
    iVar1 = CONCAT13(uVar8,0xfff285);
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    local_34 = local_24;
  }
  else {
    pcVar4 = *(char **)(*(int *)(iVar3 + DAT_000d0454) +
                        *(int *)(*(int *)(iVar3 + DAT_000d0450) + *(int *)(this + 0x110) * 0x18 +
                                0x14) * 0xc + 8);
    uVar6 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,fVar5,fVar7);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    _Var2 = DAT_000d0470 + 0xd042c;
    iVar1 = CONCAT13(uVar8,0xfff285);
    local_40 = local_20;
    local_3c = local_1c;
    local_38 = local_18;
    local_34 = local_14;
  }
  vDrawString((CCNode *)this,pcVar4,local_40,local_3c,local_38,local_34,_Var2,9,iVar1);
  return;
}


