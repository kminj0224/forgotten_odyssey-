/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00118c28  Symbol: Draw_Castle */

/* Draw_Castle(int) */

void Draw_Castle(int param_1)

{
  undefined4 *puVar1;
  _KG_Unit_State *this;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  code *pcVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar8;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  _ccColor4B local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  _ccColor4B local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  puVar1 = (undefined4 *)operator_new(0x24);
  this = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this);
  *puVar1 = 0;
  puVar1[1] = this;
  Init_Unit_Stage((_Unit_Stage *)puVar1);
  piVar2 = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)piVar2);
  (**(code **)(*piVar2 + 0xac))(piVar2,puVar1);
  *(undefined4 *)puVar1[1] = 4;
  uVar3 = __floatsisf(param_1);
  *(undefined4 *)(puVar1[1] + 0x24) = uVar3;
  *(undefined4 *)(puVar1[1] + 0x28) = uVar3;
  ppiVar6 = *(int ***)(DAT_00118e38 + 0x118c86);
  (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar2,0,DAT_00118e3c);
  uVar8 = cocos2d::CCObject::release((CCObject *)piVar2);
  pcVar7 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar7)(piVar2,aCStack_48);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118e48 + 0x118cb6));
  pcVar7 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
  (*pcVar7)(piVar4,aCStack_40);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,0,0);
  piVar4 = (int *)cocos2d::CCLayer::node();
  pcVar7 = *(code **)(*piVar4 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
  (*pcVar7)(piVar4,aCStack_38);
  piVar5 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118e4c + 0x118d00));
  pcVar7 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_01,extraout_s1_01);
  (*pcVar7)(piVar5,aCStack_30);
  (**(code **)(*piVar4 + 0xcc))(piVar4,piVar5,0,0);
  (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar4,DAT_00118e50);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118e54 + 0x118d42));
  (**(code **)(*piVar4 + 0x6c))(piVar4,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,1,1);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00118e58 + 0x118d64));
  (**(code **)(*piVar4 + 0x6c))(piVar4,0);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,2,2);
  *(int **)(puVar1[1] + 0x11c) = piVar2;
  piVar2 = (int *)cocos2d::CCLayer::node();
  local_50 = (_ccColor4B)0x0;
  local_4f = 0;
  local_4e = 0;
  local_4d = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_50,extraout_s0_02,extraout_s1_02);
  pcVar7 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_03,extraout_s1_03);
  (*pcVar7)(piVar4,aCStack_28);
  uVar8 = (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,0,0);
  local_4c = (_ccColor4B)0xff;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0xff;
  piVar4 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_4c,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pcVar7 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_04,extraout_s1_04);
  (*pcVar7)(piVar4,aCStack_20);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar4,1,1);
  (**(code **)(**ppiVar6 + 0xcc))(*ppiVar6,piVar2,DAT_00118e64,DAT_00118e68);
  *(int **)(puVar1[1] + 0x128) = piVar2;
  *(undefined4 *)(puVar1[1] + 100) = 0xffffffff;
  Castle_Att_Effect();
  return;
}


