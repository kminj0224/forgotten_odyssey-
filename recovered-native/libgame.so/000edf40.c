/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000edf40  Symbol: Hero_Main_Layer_Draw_Num */

/* Hero_Main_Layer::Hero_Main_Layer_Draw_Num(int) */

void __thiscall Hero_Main_Layer::Hero_Main_Layer_Draw_Num(Hero_Main_Layer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  CCPoint local_40;
  CCPoint local_3c;
  int local_38;
  int local_34;
  CCPoint local_30;
  CCPoint local_2c;
  int local_28;
  int local_24;
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  if (iVar1 != 0) {
    pcVar4 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    (*pcVar4)(this,uVar2,1);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  if (iVar1 != 0) {
    pcVar4 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (*pcVar4)(this,uVar2,1);
  }
  if (param_1 == 0) {
    uVar2 = Hero_BaseSkill::node();
    uVar5 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,4,4);
    uVar5 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_40,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar3 = (char *)(DAT_000ee078 + 0xedfc6);
  }
  else if (param_1 == 1) {
    uVar2 = Hero_HeroSkill::node();
    uVar5 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,4,4);
    uVar5 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar3 = (char *)(DAT_000ee07c + 0xee00e);
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    local_34 = local_24;
  }
  else {
    if (param_1 != 2) goto LAB_000ee064;
    uVar2 = Hero_HeroEquip::node();
    uVar5 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,4,4);
    uVar5 = cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    pcVar3 = (char *)(DAT_000ee080 + 0xee056);
    local_40 = local_20;
    local_3c = local_1c;
    local_38 = local_18;
    local_34 = local_14;
  }
  vDrawFrame((CCNode *)this,pcVar3,local_40,local_3c,local_38,local_34);
LAB_000ee064:
  **(int **)(DAT_000ee084 + 0xee06c) = param_1;
  return;
}


