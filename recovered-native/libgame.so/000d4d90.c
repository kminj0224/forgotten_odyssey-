/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4d90  Symbol: In_App_Layer_Init */

/* In_App_Layer::In_App_Layer_Init(int, int, int) */

void __thiscall
In_App_Layer::In_App_Layer_Init(In_App_Layer *this,int param_1,int param_2,int param_3)

{
  CCNode *pCVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
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
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  KG_removeChild(pCVar1,true);
  piVar3 = *(int **)(DAT_000d4f08 + 0xd4db0);
  if (param_1 != 0) {
    Lode_Cash_Item(this);
    piVar2 = (int *)PayLayer::node();
    pcVar4 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_01,extraout_s1_01);
    (*pcVar4)(piVar2,aCStack_30);
    (**(code **)(*(int *)this + 0xcc))(this,piVar2,0xc,0xc);
    piVar2 = (int *)Draw_Number::node();
    *(int **)(this + 0x128) = piVar2;
    pcVar4 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_02,extraout_s1_02);
    (*pcVar4)(piVar2,aCStack_28);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    (**(code **)(*piVar2 + 0xcc))(piVar2,*(undefined4 *)(this + 0x128),1,1);
    Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x128),0xb);
    Draw_Number::SetNumber(*(Draw_Number **)(this + 0x128),*(int *)(*piVar3 + DAT_000d4f14),0);
    piVar3 = (int *)Item_Text_View_Layer::node();
    *(int **)(this + 0x110) = piVar3;
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_03,extraout_s1_03);
    (*pcVar4)(piVar3,aCStack_20);
    (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x110),0xd,0xd);
    Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(this + 0x110),0,5);
  }
  else {
    Lode_Cash(this);
    piVar2 = (int *)Draw_Number::node();
    *(int **)(this + 0x128) = piVar2;
    pcVar4 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
    (*pcVar4)(piVar2,aCStack_40);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    (**(code **)(*piVar2 + 0xcc))(piVar2,*(undefined4 *)(this + 0x128),1,1);
    Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x128),0xb);
    Draw_Number::SetNumber(*(Draw_Number **)(this + 0x128),*(int *)(*piVar3 + DAT_000d4f14),0);
    piVar3 = (int *)Item_Text_View_Layer::node();
    *(int **)(this + 0x110) = piVar3;
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
    (*pcVar4)(piVar3,aCStack_38);
    (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x110),0xd,0xd);
    Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(this + 0x110),0,4);
  }
  *(uint *)(this + 0x11c) = (uint)(param_1 != 0);
  *(int *)(this + 0x120) = param_2;
  *(int *)(this + 0x124) = param_3;
  return;
}


