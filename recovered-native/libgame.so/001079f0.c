/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001079f0  Symbol: KG_Hero_Draw */

/* KG_Hero_Draw(cocos2d::CCLayer*, cocos2d::CCNode*, int) */

void KG_Hero_Draw(CCLayer *param_1,CCNode *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  code *pcVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar10;
  float extraout_s1_01;
  _ccColor4B local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  _ccColor4B local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  iVar6 = DAT_00107b98;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
  ppiVar7 = *(int ***)(iVar6 + 0x107a0e);
  piVar2 = *ppiVar7;
  iVar6 = *(int *)(**(int **)*puVar3 + 0x2c);
  (**(code **)(*piVar2 + 0xd8))(piVar2,param_1,DAT_00107b9c);
  Init_Unit_Stage((_Unit_Stage *)puVar3);
  (**(code **)(*(int *)param_1 + 0xac))(param_1,puVar3);
  uVar1 = DAT_00107ba8;
  uVar4 = DAT_00107ba4;
  **(int **)(DAT_00107ba0 + 0x107a48) = param_3;
  *(undefined4 *)(puVar3[1] + 0x54) = uVar4;
  *(undefined *)(puVar3[1] + 0xd) = 0;
  *(undefined4 *)(puVar3[1] + 100) = 0xffffffff;
  *(undefined4 *)puVar3[1] = 2;
  uVar4 = DAT_00107bac;
  *(undefined4 *)(puVar3[1] + 0x20) = DAT_00107bac;
  *(undefined4 *)(puVar3[1] + 0x40) = uVar1;
  *(undefined *)(puVar3[1] + 0x2c) = 0;
  *(undefined4 *)(puVar3[1] + 0x58) = uVar4;
  *(undefined4 *)(puVar3[1] + 0x50) = 0;
  *(undefined4 *)(puVar3[1] + 0x28) = *(undefined4 *)(puVar3[1] + 0x24);
  *(undefined *)(puVar3[1] + 0x34) = 0;
  if (param_3 == 1) {
    puVar3[3] = 0x5a;
  }
  uVar4 = DAT_00107bb0;
  *(CCLayer **)(puVar3[1] + 0x11c) = param_1;
  *(undefined4 *)(puVar3[1] + 0x7c) = uVar4;
  iVar8 = puVar3[1];
  uVar4 = cocos2d::CCArray::arrayWithCapacity(0x28);
  *(undefined4 *)(iVar8 + 0x138) = uVar4;
  cocos2d::CCObject::retain(*(CCObject **)(puVar3[1] + 0x138));
  Hero_stat(puVar3,param_3);
  piVar2 = (int *)cocos2d::CCLayer::node();
  local_30 = (_ccColor4B)0xff;
  local_2f = 0xff;
  local_2e = 0xff;
  local_2d = 0xff;
  piVar5 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_30,extraout_s0,extraout_s1);
  pcVar9 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_00,extraout_s1_00);
  (*pcVar9)(piVar5,aCStack_28);
  uVar10 = (**(code **)(*piVar2 + 0xcc))(piVar2,piVar5,0,0);
  local_2c = (_ccColor4B)0x0;
  local_2b = 0;
  local_2a = 0xff;
  local_29 = 0xff;
  piVar5 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_2c,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pcVar9 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_01,extraout_s1_01);
  (*pcVar9)(piVar5,aCStack_20);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar5,1,1);
  piVar5 = *ppiVar7;
  uVar4 = __floatsisf(iVar6 / 2);
  __subsf3(DAT_00107bb4,uVar4);
  uVar4 = __fixsfsi();
  (**(code **)(*piVar5 + 0xcc))(piVar5,piVar2,uVar4,DAT_00107bb8);
  *(int **)(puVar3[1] + 0x128) = piVar2;
  *(undefined *)(puVar3[1] + 0x75) = 0;
  *(undefined *)(puVar3[1] + 0x76) = 0;
  *(undefined *)(puVar3[1] + 0x77) = 0;
  *(undefined *)(puVar3[1] + 0x78) = 0;
  **(undefined4 **)(DAT_00107bbc + 0x107b92) = 0;
  return;
}


