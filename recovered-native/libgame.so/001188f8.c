/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001188f8  Symbol: Draw_Castle_2 */

/* Draw_Castle_2(int, int) */

void Draw_Castle_2(int param_1,int param_2)

{
  undefined4 *puVar1;
  _KG_Unit_State *this;
  int *this_00;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  code *pcVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  undefined8 uVar8;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  _ccColor4B local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  _ccColor4B local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  float fVar9;
  
  puVar1 = (undefined4 *)operator_new(0x24);
  this = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this);
  puVar1[1] = this;
  *puVar1 = 0;
  Init_Unit_Stage((_Unit_Stage *)puVar1);
  this_00 = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
  (**(code **)(*this_00 + 0xac))(this_00,puVar1);
  *(undefined4 *)puVar1[1] = 5;
  iVar5 = puVar1[1];
  uVar2 = __floatsisf(param_1);
  *(undefined4 *)(iVar5 + 0x24) = uVar2;
  ppiVar6 = *(int ***)(DAT_00118bec + 0x11895c);
  *(undefined4 *)(puVar1[1] + 0x28) = uVar2;
  uVar8 = (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,this_00,0,0x3e4);
  fVar9 = (float)((ulonglong)uVar8 >> 0x20);
  pcVar7 = *(code **)(*this_00 + 0x3c);
  if (param_2 == 0) {
    cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar8,fVar9);
    (*pcVar7)(this_00,aCStack_68);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118bf8 + 0x118992));
    pcVar7 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_60,extraout_s0,extraout_s1);
    (*pcVar7)(piVar3,aCStack_60);
    (**(code **)(*this_00 + 0xcc))(this_00,piVar3,0,0);
    piVar3 = (int *)cocos2d::CCLayer::node();
    pcVar7 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0_00,extraout_s1_00);
    (*pcVar7)(piVar3,aCStack_58);
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118bfc + 0x1189dc));
    pcVar7 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0_01,extraout_s1_01);
    (*pcVar7)(piVar4,aCStack_50);
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar4,0,0);
    (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar3,DAT_00118c00,DAT_00118c00);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c04 + 0x118a1e));
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    (**(code **)(*this_00 + 0xcc))(this_00,piVar3,1,1);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c08 + 0x118a40));
    pcVar7 = *(code **)(*piVar3 + 0x6c);
  }
  else {
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar8,fVar9);
    (*pcVar7)(this_00,aCStack_48);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c0c + 0x118a62));
    pcVar7 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_02,extraout_s1_02);
    (*pcVar7)(piVar3,aCStack_40);
    (**(code **)(*this_00 + 0xcc))(this_00,piVar3,0,0);
    piVar3 = (int *)cocos2d::CCLayer::node();
    pcVar7 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_03,extraout_s1_03);
    (*pcVar7)(piVar3,aCStack_38);
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c10 + 0x118aac));
    pcVar7 = *(code **)(*piVar4 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_04,extraout_s1_04);
    (*pcVar7)(piVar4,aCStack_30);
    (**(code **)(*piVar3 + 0xcc))(piVar3,piVar4,0,0);
    (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar3,DAT_00118c00,DAT_00118c00);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c14 + 0x118aee));
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    (**(code **)(*this_00 + 0xcc))(this_00,piVar3,1,1);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118c18 + 0x118b10));
    pcVar7 = *(code **)(*piVar3 + 0x6c);
  }
  (*pcVar7)(piVar3,0);
  (**(code **)(*this_00 + 0xcc))(this_00,piVar3,2,2);
  *(int **)(puVar1[1] + 0x11c) = this_00;
  piVar3 = (int *)cocos2d::CCLayer::node();
  local_70 = (_ccColor4B)0x0;
  local_6f = 0;
  local_6e = 0;
  local_6d = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_70,extraout_s0_05,extraout_s1_05);
  pcVar7 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_06,extraout_s1_06);
  (*pcVar7)(piVar4,aCStack_28);
  uVar8 = (**(code **)(*piVar3 + 0xcc))(piVar3,piVar4,0,0);
  local_6c = (_ccColor4B)0xff;
  local_6b = 0;
  local_6a = 0;
  local_69 = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_6c,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pcVar7 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_07,extraout_s1_07);
  (*pcVar7)(piVar4,aCStack_20);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar4,1,1);
  (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar3,0x3e4,DAT_00118c24);
  *(int **)(puVar1[1] + 0x128) = piVar3;
  *(undefined4 *)(puVar1[1] + 100) = 0xffffffff;
  Castle_Att_Effect();
  cocos2d::CCObject::release((CCObject *)this_00);
  return;
}


