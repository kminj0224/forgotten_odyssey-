/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0210  Symbol: Set_Title */

/* Item_Text_View_Layer::Set_Title(int, int) */

void __thiscall Item_Text_View_Layer::Set_Title(Item_Text_View_Layer *this,int param_1,int param_2)

{
  CCNode *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar5;
  undefined4 in_stack_ffffffc0;
  undefined uVar6;
  undefined2 local_30;
  CCPoint local_20;
  CCPoint local_1c;
  char *local_18;
  int local_14;
  
  uVar6 = (undefined)((uint)in_stack_ffffffc0 >> 0x18);
  iVar3 = DAT_000d02d0 + 0xd021c;
  if (param_2 == 5) {
    iVar3 = *(int *)(iVar3 + DAT_000d02d4);
    iVar2 = *(int *)(this + 0x110);
  }
  else if (param_2 == 4) {
    iVar3 = *(int *)(iVar3 + DAT_000d02d8);
    iVar2 = *(int *)(this + 0x110) + -1;
  }
  else {
    iVar2 = *(int *)(this + 0x110);
    if (iVar2 == 0xa9) {
      pcVar4 = (char *)(DAT_000d02dc + 0xd0250);
      goto LAB_000d024e;
    }
    iVar3 = *(int *)(iVar3 + DAT_000d02d4);
  }
  pcVar4 = *(char **)(iVar2 * 0xc + iVar3);
LAB_000d024e:
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  uVar5 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar3 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    uVar5 = cocos2d::CCNode::removeFromParentAndCleanup(this_00,true);
  }
  if (pcVar4 != (char *)0x0) {
    uVar5 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar1 = KG_getItemClassColor(*(int *)(this + 0x114));
    local_30 = (undefined2)uVar1;
    vDrawString((CCNode *)this,pcVar4,local_20,local_1c,local_18,local_14,DAT_000d02e4 + 0xd02b2,0xb
                ,CONCAT22(CONCAT11(uVar6,(char)((uint)uVar1 >> 0x10)),local_30));
  }
  return;
}


