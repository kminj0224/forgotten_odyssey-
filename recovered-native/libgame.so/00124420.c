/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00124420  Symbol: GameEnd_Gold_Time_Count */

/* GameScene::GameEnd_Gold_Time_Count(int, int, int, int) */

void __thiscall
GameScene::GameEnd_Gold_Time_Count(GameScene *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined uVar1;
  int iVar2;
  int **ppiVar3;
  char *pcVar4;
  CCNode *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  CCTexture2D *pCVar8;
  undefined4 *puVar9;
  code *pcVar10;
  CCNode **ppCVar11;
  int iVar12;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float fVar13;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float fVar15;
  float extraout_s1_08;
  float extraout_s1_09;
  undefined8 uVar14;
  float extraout_s1_10;
  CCPoint local_90;
  int local_8c;
  CCPoint local_88;
  int local_84;
  CCPoint local_80;
  int local_7c;
  CCPoint local_78;
  int local_74;
  CCPoint local_70;
  int local_6c;
  CCPoint local_68;
  int local_64;
  CCPoint local_60;
  int local_5c;
  CCPoint local_58;
  int local_54;
  CCPoint local_50;
  int local_4c;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  uVar1 = (undefined)param_1;
  iVar12 = DAT_0012479c + 0x124430;
  ppCVar11 = *(CCNode ***)(iVar12 + DAT_001247a0);
  iVar2 = cocos2d::CCNode::getChildByTag(*ppCVar11,0xe);
  puVar9 = *(undefined4 **)(iVar12 + DAT_001247a4);
  if (iVar2 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,0xe);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,0xe);
    ppiVar3 = (int **)(**(code **)(*piVar6 + 0xa8))();
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(**ppiVar3 + 8) + 0x68),*puVar9);
    if ((iVar2 != 0) && (this[0x110] == (GameScene)0x0)) {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,2);
      iVar2 = (**(code **)(*piVar6 + 0x68))();
      if (iVar2 != 0) {
        if (*(char *)(**(int **)(iVar12 + DAT_001247a8) + 1) != '\0') {
          pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar4,(bool)((char)DAT_001247ac + -0x52));
        }
        this[0x110] = (GameScene)0x1;
      }
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(**ppiVar3 + 0xc) + 0x68),*puVar9);
    if ((iVar2 != 0) && (this[0x111] == (GameScene)0x0)) {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,3);
      iVar2 = (**(code **)(*piVar6 + 0x68))();
      if (iVar2 != 0) {
        if (*(char *)(**(int **)(iVar12 + DAT_001247a8) + 1) != '\0') {
          pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar4,(bool)((char)DAT_001247b0 + '\x02'));
        }
        this[0x111] = (GameScene)0x1;
      }
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(**ppiVar3 + 0x10) + 0x68),*puVar9);
    if ((iVar2 != 0) && (this[0x112] == (GameScene)0x0)) {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,4);
      iVar2 = (**(code **)(*piVar6 + 0x68))();
      if (iVar2 != 0) {
        if (*(char *)(**(int **)(iVar12 + DAT_001247a8) + 1) != '\0') {
          pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar4,(bool)((char)DAT_001247b4 + 'T'));
        }
        this[0x112] = (GameScene)0x1;
      }
    }
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,0xe);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,6);
  (**(code **)(*piVar6 + 0xec))(piVar6,0);
  iVar2 = __aeabi_fcmplt(*puVar9,0x3f800000);
  pcVar10 = *(code **)(*piVar6 + 0xd0);
  if (iVar2 == 0) {
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,1);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,extraout_s0_01,extraout_s1_01);
    local_90 = local_88;
    local_8c = local_84;
  }
  else {
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,1);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,extraout_s0,extraout_s1);
    uVar1 = Random(DAT_001247bc,DAT_001247c0);
    uVar14 = CONCAT44(extraout_s1_00,extraout_s0_00);
  }
  Draw_Number((CCLayer *)piVar6,pCVar8,(char *)0x0,local_90,local_8c,1,1,(float)uVar14,
              (float)((ulonglong)uVar14 >> 0x20),(bool)uVar1,SUB41(DAT_001247c4,0));
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,0xe);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar5,7);
  (**(code **)(*piVar6 + 0xec))(piVar6,0);
  iVar2 = __aeabi_fcmplt(*puVar9,0x40000000);
  if (iVar2 == 0) {
    uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    fVar13 = (float)((ulonglong)uVar14 >> 0x20);
    if (param_2 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar14,fVar13);
      local_30 = local_70;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar14,fVar13);
      local_30 = local_68;
      local_6c = local_64;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_6c;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,1);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    fVar13 = extraout_s0_04;
    fVar15 = extraout_s1_04;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    param_2 = Random(1,0x3c);
    if (param_2 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,extraout_s0_02,extraout_s1_02);
      local_30 = local_80;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,extraout_s0_02,extraout_s1_02);
      local_30 = local_78;
      local_7c = local_74;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_7c;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,1);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    fVar13 = extraout_s0_03;
    fVar15 = extraout_s1_03;
  }
  Draw_Number((CCLayer *)piVar6,pCVar8,(char *)0x0,local_30,local_2c,1,1,fVar13,fVar15,
              SUB41(param_2,0),SUB41(DAT_001247c4,0));
  iVar2 = __aeabi_fcmplt(*puVar9,DAT_001247d8);
  if (iVar2 == 0) {
    uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    fVar13 = (float)((ulonglong)uVar14 >> 0x20);
    if (param_3 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar14,fVar13);
      local_30 = local_50;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar14,fVar13);
      local_30 = local_48;
      local_4c = local_44;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_4c;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,2);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    fVar13 = extraout_s0_07;
    fVar15 = extraout_s1_07;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    param_3 = Random(1,0x3c);
    if (param_3 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,extraout_s0_05,extraout_s1_05);
      local_30 = local_60;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,extraout_s0_05,extraout_s1_05);
      local_30 = local_58;
      local_5c = local_54;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_5c;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,2);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    fVar13 = extraout_s0_06;
    fVar15 = extraout_s1_06;
  }
  Draw_Number((CCLayer *)piVar6,pCVar8,(char *)0x0,local_30,local_2c,2,2,fVar13,fVar15,
              SUB41(param_3,0),SUB41(DAT_00124980,0));
  iVar2 = __aeabi_fcmplt(*puVar9,DAT_00124984);
  if (iVar2 == 0) {
    uVar14 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    fVar13 = (float)((ulonglong)uVar14 >> 0x20);
    if (param_4 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar14,fVar13);
      local_30 = local_28;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar14,fVar13);
      local_30 = local_20;
      local_24 = local_1c;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_24;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,3);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    Draw_Number((CCLayer *)piVar6,pCVar8,(char *)0x0,local_30,local_2c,3,3,extraout_s0_10,
                extraout_s1_10,SUB41(param_4,0),SUB41(DAT_00124980,0));
    **(undefined4 **)(iVar12 + DAT_00124990) = 0x16;
  }
  else {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
    iVar2 = Random(1,0x3c);
    if (iVar2 < 10) {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,extraout_s0_08,extraout_s1_08);
      local_30 = local_40;
    }
    else {
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0_08,extraout_s1_08);
      local_30 = local_38;
      local_3c = local_34;
    }
    pcVar10 = *(code **)(*piVar6 + 0xd0);
    local_2c = local_3c;
    uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)piVar6,3);
    (*pcVar10)(piVar6,uVar7,1);
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar6 + 0x118))(piVar6);
    Draw_Number((CCLayer *)piVar6,pCVar8,(char *)0x0,local_30,local_2c,3,3,extraout_s0_09,
                extraout_s1_09,SUB41(iVar2,0),SUB41(DAT_00124980,0));
  }
  return;
}


