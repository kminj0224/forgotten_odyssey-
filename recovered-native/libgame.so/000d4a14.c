/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4a14  Symbol: In_App_Layer_Init */

/* In_App_Layer::In_App_Layer_Init(int) */

void __thiscall In_App_Layer::In_App_Layer_Init(In_App_Layer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  (**(code **)(*(int *)this + 0xd4))(this,1);
  piVar2 = *(int **)(DAT_000d4b7c + 0xd4a2e);
  if (param_1 != 0) {
    Lode_Cash_Item(this);
    piVar1 = (int *)PayLayer::node();
    pcVar3 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_01,extraout_s1_01);
    (*pcVar3)(piVar1,aCStack_30);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,0xc,0xc);
    piVar1 = (int *)Draw_Number::node();
    *(int **)(this + 0x128) = piVar1;
    pcVar3 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_02,extraout_s1_02);
    (*pcVar3)(piVar1,aCStack_28);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(this + 0x128),1,1);
    Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x128),0xb);
    Draw_Number::SetNumber(*(Draw_Number **)(this + 0x128),*(int *)(*piVar2 + DAT_000d4b88),0);
    piVar2 = (int *)Item_Text_View_Layer::node();
    *(int **)(this + 0x110) = piVar2;
    pcVar3 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_03,extraout_s1_03);
    (*pcVar3)(piVar2,aCStack_20);
    (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x110),0xd,0xd);
    Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(this + 0x110),0,5);
  }
  else {
    Lode_Cash(this);
    piVar1 = (int *)Draw_Number::node();
    *(int **)(this + 0x128) = piVar1;
    pcVar3 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
    (*pcVar3)(piVar1,aCStack_40);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,*(undefined4 *)(this + 0x128),1,1);
    Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x128),0xb);
    Draw_Number::SetNumber(*(Draw_Number **)(this + 0x128),*(int *)(*piVar2 + DAT_000d4b88),0);
    piVar2 = (int *)Item_Text_View_Layer::node();
    *(int **)(this + 0x110) = piVar2;
    pcVar3 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
    (*pcVar3)(piVar2,aCStack_38);
    (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x110),0xd,0xd);
    Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(this + 0x110),0,4);
  }
  *(uint *)(this + 0x11c) = (uint)(param_1 != 0);
  return;
}


