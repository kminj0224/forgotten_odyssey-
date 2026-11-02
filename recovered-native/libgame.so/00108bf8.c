/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00108bf8  Symbol: Monster_Draw_Test */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Monster_Draw_Test(cocos2d::CCNode*, int, bool) */

int * Monster_Draw_Test(CCNode *param_1,int param_2,bool param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  CCSpriteFrame *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CCActionInterval *this;
  CCAction *pCVar7;
  _KG_Unit_State *this_00;
  undefined4 uVar8;
  CCTexture2D *pCVar9;
  int *piVar10;
  undefined *puVar11;
  CCRect *pCVar12;
  uint uVar13;
  int **ppiVar14;
  int *piVar15;
  code *pcVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 extraout_s0;
  float fVar20;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  undefined8 uVar21;
  undefined4 extraout_s1;
  float fVar22;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s2;
  float extraout_s2_00;
  float fVar23;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
  float extraout_s2_11;
  float extraout_s2_12;
  float extraout_s2_13;
  float extraout_s2_14;
  float extraout_s3;
  float extraout_s3_00;
  float fVar24;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  float extraout_s3_09;
  float extraout_s3_10;
  float extraout_s3_11;
  float extraout_s3_12;
  float extraout_s3_13;
  float extraout_s3_14;
  undefined8 uVar25;
  undefined4 local_200;
  _ccColor4B local_1e8;
  undefined local_1e7;
  undefined local_1e6;
  undefined local_1e5;
  _ccColor4B local_1e4;
  undefined local_1e3;
  undefined local_1e2;
  undefined local_1e1;
  CCPoint aCStack_1e0 [8];
  CCPoint aCStack_1d8 [8];
  CCPoint aCStack_1d0 [8];
  CCPoint aCStack_1c8 [8];
  CCPoint aCStack_1c0 [8];
  CCPoint aCStack_1b8 [8];
  CCPoint aCStack_1b0 [8];
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  int local_18c;
  CCRect aCStack_188 [16];
  CCRect aCStack_178 [16];
  CCRect aCStack_168 [16];
  CCRect aCStack_158 [16];
  CCRect aCStack_148 [16];
  CCRect aCStack_138 [16];
  CCRect aCStack_128 [16];
  CCRect aCStack_118 [16];
  CCRect aCStack_108 [16];
  CCRect aCStack_f8 [16];
  CCRect aCStack_e8 [16];
  CCRect aCStack_d8 [16];
  CCRect aCStack_c8 [16];
  CCRect aCStack_b8 [16];
  CCRect aCStack_a8 [16];
  CCRect aCStack_98 [16];
  CCRect aCStack_88 [16];
  CCRect aCStack_78 [16];
  CCRect aCStack_68 [16];
  CCRect aCStack_58 [16];
  CCRect aCStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  CCNode *pCStack_24;
  int iStack_20;
  uint local_1c;
  
  uVar13 = (uint)param_3;
  iVar18 = DAT_00108f94 + 0x108c04;
  pCStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = uVar13;
  if (param_2 == 0) {
    FUN_00109410();
  }
  cocos2d::CCRect::CCRect((CCRect *)&local_1a8);
  cocos2d::CCRect::CCRect((CCRect *)&local_198);
  iVar1 = Random(-0xf,0xf);
  if (param_2 == DAT_00108f98) {
    local_200 = DAT_00108f9c;
  }
  else {
    local_200 = __floatsisf(iVar1 + 0x32);
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(param_1,param_2);
  puVar3 = (undefined4 *)operator_new(0x24);
  iVar1 = (**(code **)(*piVar2 + 0xa8))(piVar2);
  pCVar4 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                     ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar2[0x49],0);
  iVar5 = cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                    ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar2[0x48],0);
  uVar6 = __fixsfsi(*(undefined4 *)(iVar5 + 0x30));
  puVar3[2] = uVar6;
  uVar6 = __fixsfsi(*(undefined4 *)(iVar5 + 0x34));
  puVar3[3] = uVar6;
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  ppiVar14 = *(int ***)(iVar18 + DAT_00108fa0);
  piVar15 = *ppiVar14;
  uVar6 = __subsf3(DAT_00108fa4,local_200);
  __subsf3(uVar6,DAT_00108fa8);
  uVar6 = __fixsfsi();
  uVar21 = (**(code **)(*piVar15 + 0xcc))(piVar15,piVar2,uVar6,param_2);
  pcVar16 = *(code **)(*piVar2 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1e0,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  uVar21 = (*pcVar16)(piVar2,aCStack_1e0);
  pcVar16 = *(code **)(*piVar2 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_1d8,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (*pcVar16)(piVar2,aCStack_1d8);
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  pCVar7 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
  cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar7);
  cocos2d::CCObject::release((CCObject *)this);
  this_00 = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this_00);
  puVar3[1] = this_00;
  *puVar3 = 0;
  Init_Unit_Stage((_Unit_Stage *)puVar3);
  (**(code **)(*piVar2 + 0xac))(piVar2,puVar3);
  *(int **)(puVar3[1] + 0x11c) = piVar2;
  *(undefined4 *)(puVar3[1] + 0x54) = local_200;
  *(int *)(puVar3[1] + 4) = param_2;
  *(undefined *)(puVar3[1] + 0xd) = 0;
  *(undefined4 *)(puVar3[1] + 100) = 0;
  *(undefined4 *)puVar3[1] = 1;
  *(undefined4 *)(puVar3[1] + 0x38) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x38);
  iVar5 = puVar3[1];
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x20) = 0x40000000;
  *(undefined4 *)(iVar5 + 0x20) = 0x40000000;
  *(undefined4 *)(puVar3[1] + 8) = *(undefined4 *)(*(int *)(iVar1 + 4) + 8);
  *(undefined4 *)(puVar3[1] + 0x40) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x40);
  *(undefined *)(puVar3[1] + 0x2c) = 0;
  *(undefined *)(puVar3[1] + 0x85) = 0;
  if (uVar13 != 0) {
    *(undefined4 *)(puVar3[1] + 0xd8) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0xd8);
  }
  piVar15 = (int *)StateMode::node();
  StateMode::StateModeInit((StateMode *)piVar15,0xb,puVar3,100,0,100);
  pcVar16 = *(code **)(*piVar15 + 0x3c);
  __floatsisf((int)puVar3[2] / 2);
  uVar21 = __floatsisf((int)puVar3[3] / 2);
  cocos2d::CCPoint::CCPoint(aCStack_1d0,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (*pcVar16)(piVar15,aCStack_1d0);
  uVar21 = (**(code **)(*piVar2 + 0xcc))(piVar2,piVar15,200,200);
  uVar19 = DAT_00108fb0;
  if (uVar13 == 0) {
    uVar19 = 0x3f800000;
  }
  iVar5 = puVar3[1];
  iVar17 = **(int **)(iVar18 + DAT_00108fb4);
  if ((*(int *)(iVar17 + 0x2c) == param_2) || (uVar13 != 0)) {
    uVar8 = __mulsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x58),uVar19);
    uVar21 = CONCAT44(extraout_s1,extraout_s0);
    *(undefined4 *)(iVar5 + 0x58) = uVar8;
    fVar23 = extraout_s2_00;
    fVar24 = extraout_s3_00;
  }
  else {
    *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x58);
    fVar23 = extraout_s2;
    fVar24 = extraout_s3;
  }
  fVar22 = (float)((ulonglong)uVar21 >> 0x20);
  fVar20 = (float)uVar21;
  *(undefined4 *)(puVar3[1] + 0x50) = 0;
  *(undefined4 *)(puVar3[1] + 0x24) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24);
  *(undefined4 *)(puVar3[1] + 0x28) = *(undefined4 *)(puVar3[1] + 0x24);
  *(undefined4 *)(puVar3[1] + 0x14) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14);
  if (*(int *)(puVar3[1] + 8) == 2) {
    *(undefined *)(puVar3[1] + 0xc) = 1;
  }
  if (param_2 == DAT_00108fb8) {
    cocos2d::CCRect::CCRect(aCStack_128,fVar20,fVar22,fVar23,fVar24);
    memcpy(&local_1a8,aCStack_128,0x10);
    iVar1 = local_19c;
    cocos2d::CCRect::CCRect(aCStack_118,extraout_s0_03,extraout_s1_03,extraout_s2_04,extraout_s3_04)
    ;
    pCVar12 = aCStack_118;
    goto LAB_001090d2;
  }
  if (param_2 == DAT_00108fb8 || param_2 < DAT_00108fb8) {
    if (param_2 == DAT_00108fbc) {
      cocos2d::CCRect::CCRect(aCStack_168,fVar20,fVar22,fVar23,fVar24);
      memcpy(&local_1a8,aCStack_168,0x10);
      iVar1 = local_19c;
      cocos2d::CCRect::CCRect
                (aCStack_158,extraout_s0_01,extraout_s1_01,extraout_s2_02,extraout_s3_02);
      pCVar12 = aCStack_158;
      goto LAB_001090d2;
    }
    if (param_2 == DAT_00108fc0) {
      cocos2d::CCRect::CCRect(aCStack_148,fVar20,fVar22,fVar23,fVar24);
      memcpy(&local_1a8,aCStack_148,0x10);
      iVar1 = local_19c;
      cocos2d::CCRect::CCRect
                (aCStack_138,extraout_s0_02,extraout_s1_02,extraout_s2_03,extraout_s3_03);
      pCVar12 = aCStack_138;
      goto LAB_001090d2;
    }
    if (param_2 == 0x708) {
      cocos2d::CCRect::CCRect(aCStack_188,fVar20,fVar22,fVar23,fVar24);
      memcpy(&local_1a8,aCStack_188,0x10);
      iVar1 = local_19c;
      cocos2d::CCRect::CCRect
                (aCStack_178,extraout_s0_00,extraout_s1_00,extraout_s2_01,extraout_s3_01);
      pCVar12 = aCStack_178;
      goto LAB_001090d2;
    }
  }
  else {
    if (param_2 == DAT_00108fc4) {
      cocos2d::CCRect::CCRect(aCStack_e8,fVar20,fVar22,fVar23,fVar24);
      memcpy(&local_1a8,aCStack_e8,0x10);
      iVar1 = local_19c;
      cocos2d::CCRect::CCRect
                (aCStack_d8,extraout_s0_05,extraout_s1_05,extraout_s2_06,extraout_s3_06);
      pCVar12 = aCStack_d8;
      goto LAB_001090d2;
    }
    if (DAT_00108fc4 < param_2) {
      if (param_2 == DAT_00108fcc) {
        cocos2d::CCRect::CCRect(aCStack_c8,fVar20,fVar22,fVar23,fVar24);
        memcpy(&local_1a8,aCStack_c8,0x10);
        iVar1 = local_19c;
        cocos2d::CCRect::CCRect
                  (aCStack_b8,extraout_s0_06,extraout_s1_06,extraout_s2_07,extraout_s3_07);
        pCVar12 = aCStack_b8;
        goto LAB_001090d2;
      }
      if (param_2 == 0x1400) {
        cocos2d::CCRect::CCRect(aCStack_a8,fVar20,fVar22,fVar23,fVar24);
        memcpy(&local_1a8,aCStack_a8,0x10);
        iVar1 = local_19c;
        cocos2d::CCRect::CCRect
                  (aCStack_98,extraout_s0_07,extraout_s1_07,extraout_s2_08,extraout_s3_08);
        pCVar12 = aCStack_98;
        goto LAB_001090d2;
      }
    }
    else if (param_2 == DAT_00108fc8) {
      cocos2d::CCRect::CCRect(aCStack_108,fVar20,fVar22,fVar23,fVar24);
      memcpy(&local_1a8,aCStack_108,0x10);
      iVar1 = local_19c;
      cocos2d::CCRect::CCRect
                (aCStack_f8,extraout_s0_04,extraout_s1_04,extraout_s2_05,extraout_s3_05);
      pCVar12 = aCStack_f8;
      goto LAB_001090d2;
    }
  }
  if ((*(int *)(iVar17 + 0x2c) == param_2) || (uVar13 != 0)) {
    __mulsf3(uVar19,DAT_0010918c);
    uVar21 = __mulsf3(uVar19,DAT_00109190);
    cocos2d::CCRect::CCRect
              (aCStack_88,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2_09,
               extraout_s3_09);
    pCVar12 = aCStack_88;
  }
  else {
    cocos2d::CCRect::CCRect(aCStack_78,fVar20,fVar22,fVar23,fVar24);
    pCVar12 = aCStack_78;
  }
  memcpy(&local_1a8,pCVar12,0x10);
  iVar1 = local_19c;
  cocos2d::CCRect::CCRect(aCStack_68,extraout_s0_08,extraout_s1_08,extraout_s2_10,extraout_s3_10);
  pCVar12 = aCStack_68;
LAB_001090d2:
  memcpy(&local_198,pCVar12,0x10);
  iVar17 = (**(int **)(iVar18 + DAT_00109194) + -1) * 10;
  iVar5 = iVar17 + **(int **)(iVar18 + DAT_00109198);
  if (uVar13 == 0) {
    *(bool *)(puVar3[1] + 0x84) = param_3;
  }
  else {
    (**(code **)(*piVar2 + 0x108))(piVar2,uVar19,iVar17,*(code **)(*piVar2 + 0x108),iVar1);
    __mulsf3(uVar19,local_1a8);
    __mulsf3(uVar19,local_1a4);
    __mulsf3(uVar19,local_1a0);
    uVar21 = __mulsf3(uVar19,local_19c);
    cocos2d::CCRect::CCRect
              (aCStack_58,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2_11,
               extraout_s3_11);
    memcpy(&local_1a8,aCStack_58,0x10);
    __mulsf3(uVar19,local_198);
    __mulsf3(uVar19,local_194);
    __mulsf3(uVar19,local_190);
    uVar21 = __mulsf3(uVar19,local_18c);
    cocos2d::CCRect::CCRect
              (aCStack_48,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2_12,
               extraout_s3_12);
    memcpy(&local_198,aCStack_48,0x10);
  }
  iVar1 = puVar3[1];
  uVar8 = __mulsf3(local_1a0 + -0x80000000,0x3f000000);
  __addsf3(uVar8,local_1a8);
  uVar8 = __mulsf3(local_19c + -0x80000000,0x3f000000);
  uVar21 = __subsf3(uVar8,local_1a4);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_38,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2_13,
             extraout_s3_13);
  *(undefined4 *)(iVar1 + 0xf8) = local_38;
  *(undefined4 *)(iVar1 + 0xfc) = uStack_34;
  *(undefined4 *)(iVar1 + 0x100) = uStack_30;
  *(undefined4 *)(iVar1 + 0x104) = local_2c;
  iVar17 = puVar3[1];
  __subsf3(local_1a8,*(undefined4 *)(iVar17 + 0x100),(undefined4 *)(iVar1 + 0x104),iVar17 + 0xfc,
           local_19c);
  uVar21 = __mulsf3(local_18c + -0x80000000,0x3f000000);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2_14,
             extraout_s3_14);
  *(undefined4 *)(iVar17 + 0x108) = local_28;
  *(CCNode **)(iVar17 + 0x10c) = pCStack_24;
  *(int *)(iVar17 + 0x110) = iStack_20;
  *(uint *)(iVar17 + 0x114) = local_1c;
  iVar1 = puVar3[1];
  pCVar9 = (CCTexture2D *)(**(code **)(***(int ***)(iVar18 + DAT_00109438) + 0x118))();
  uVar8 = cocos2d::CCSprite::spriteWithTexture(pCVar9);
  *(undefined4 *)(iVar1 + 0x118) = uVar8;
  piVar15 = *(int **)(puVar3[1] + 0x118);
  pcVar16 = *(code **)(*piVar15 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_1c8,extraout_s0_09,extraout_s1_09);
  (*pcVar16)(piVar15,aCStack_1c8);
  uVar21 = (**(code **)(**(int **)(puVar3[1] + 0x118) + 0x108))(*(int **)(puVar3[1] + 0x118),uVar19)
  ;
  piVar15 = *(int **)(puVar3[1] + 0x118);
  pcVar16 = *(code **)(*piVar15 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1c0,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  (*pcVar16)(piVar15,aCStack_1c0);
  (**(code **)(**ppiVar14 + 0xcc))(*ppiVar14,*(undefined4 *)(puVar3[1] + 0x118),0,DAT_00109440);
  if (param_2 == DAT_00109444) {
    (**(code **)(*piVar2 + 0xf4))(piVar2);
    uVar19 = DAT_0010944c;
    *(undefined4 *)(puVar3[1] + 0x14) = DAT_00109448;
    (**(code **)(**(int **)(puVar3[1] + 0x118) + 0x2c))(*(int **)(puVar3[1] + 0x118),uVar19);
  }
  piVar15 = (int *)cocos2d::CCLayer::node();
  local_1e8 = (_ccColor4B)0xff;
  local_1e7 = 0xff;
  local_1e6 = 0xff;
  local_1e5 = 0xff;
  piVar10 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                             (&local_1e8,extraout_s0_10,extraout_s1_10);
  pcVar16 = *(code **)(*piVar10 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1b8,extraout_s0_11,extraout_s1_11);
  (*pcVar16)(piVar10,aCStack_1b8);
  uVar21 = (**(code **)(*piVar15 + 0xcc))(piVar15,piVar10,0,0);
  local_1e4 = (_ccColor4B)0xff;
  local_1e3 = 0;
  local_1e2 = 0;
  local_1e1 = 0xff;
  piVar10 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                             (&local_1e4,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  pcVar16 = *(code **)(*piVar10 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1b0,extraout_s0_12,extraout_s1_12);
  (*pcVar16)(piVar10,aCStack_1b0);
  (**(code **)(*piVar15 + 0xcc))(piVar15,piVar10,1,1);
  (**(code **)(**ppiVar14 + 0xcc))(*ppiVar14,piVar15,uVar6,DAT_00109454);
  *(int **)(puVar3[1] + 0x128) = piVar15;
  iVar1 = puVar3[1];
  puVar11 = (undefined *)(**(code **)(*piVar2 + 0xf0))(piVar2);
  *(undefined *)(iVar1 + 0x8c) = *puVar11;
  *(undefined *)(iVar1 + 0x8d) = puVar11[1];
  *(undefined *)(iVar1 + 0x8e) = puVar11[2];
  uVar21 = __floatsidf(iVar5);
  uVar21 = __muldf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_00109420,DAT_00109424);
  __adddf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_00109428,DAT_0010942c);
  uVar6 = __fixdfsi();
  *(undefined4 *)(puVar3[1] + 0x130) = uVar6;
  iVar1 = puVar3[1];
  if (iVar5 == 1) {
    *(undefined4 *)(iVar1 + 0x134) = 0x11;
  }
  else {
    uVar21 = __floatsidf(*(undefined4 *)((iVar5 + -1) * 4 + *(int *)(iVar18 + DAT_00109458)));
    uVar6 = (undefined4)((ulonglong)uVar21 >> 0x20);
    uVar25 = __muldf3((int)uVar21,uVar6,DAT_00109430,DAT_00109434);
    __adddf3((int)uVar21,uVar6,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    uVar6 = __fixdfsi();
    *(undefined4 *)(iVar1 + 0x134) = uVar6;
  }
  *(int *)(**(int **)(iVar18 + DAT_0010945c) + 0x28) =
       *(int *)(**(int **)(iVar18 + DAT_0010945c) + 0x28) + 1;
  return piVar2;
}


