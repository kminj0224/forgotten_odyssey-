/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001083b0  Symbol: Monster_Nomar_Boss_Draw_Test */

/* Monster_Nomar_Boss_Draw_Test(cocos2d::CCNode*, int, bool) */

int * Monster_Nomar_Boss_Draw_Test(CCNode *param_1,int param_2,bool param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
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
  CCRect *__src;
  int **ppiVar12;
  int *piVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  float extraout_s0;
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
  undefined8 uVar17;
  float extraout_s1;
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
  float extraout_s3;
  float extraout_s3_00;
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
  undefined8 uVar18;
  _ccColor4B local_1d8;
  undefined local_1d7;
  undefined local_1d6;
  undefined local_1d5;
  _ccColor4B local_1d4;
  undefined local_1d3;
  undefined local_1d2;
  undefined local_1d1;
  CCPoint aCStack_1d0 [8];
  CCPoint aCStack_1c8 [8];
  CCPoint aCStack_1c0 [8];
  CCPoint aCStack_1b8 [8];
  CCPoint aCStack_1b0 [8];
  CCPoint aCStack_1a8 [8];
  CCPoint aCStack_1a0 [8];
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  int local_17c;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  iVar15 = DAT_00108758 + 0x1083bc;
  if (param_2 == 0) {
    FUN_00108bda();
  }
  cocos2d::CCRect::CCRect((CCRect *)&local_198);
  cocos2d::CCRect::CCRect((CCRect *)&local_188);
  uVar8 = DAT_00108764;
  if (param_2 != DAT_0010875c) {
    uVar8 = DAT_00108760;
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(param_1,param_2);
  puVar2 = (undefined4 *)operator_new(0x24);
  iVar3 = (**(code **)(*piVar1 + 0xa8))(piVar1);
  pCVar4 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                     ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar1[0x49],0);
  iVar5 = cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                    ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar1[0x48],0);
  uVar6 = __fixsfsi(*(undefined4 *)(iVar5 + 0x30));
  puVar2[2] = uVar6;
  uVar6 = __fixsfsi(*(undefined4 *)(iVar5 + 0x34));
  puVar2[3] = uVar6;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  ppiVar12 = *(int ***)(iVar15 + DAT_00108768);
  piVar13 = *ppiVar12;
  uVar6 = __subsf3(DAT_0010876c,uVar8);
  __subsf3(uVar6,DAT_00108760);
  uVar6 = __fixsfsi();
  uVar17 = (**(code **)(*piVar13 + 0xcc))(piVar13,piVar1,uVar6,param_2);
  pcVar14 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1d0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  uVar17 = (*pcVar14)(piVar1,aCStack_1d0);
  pcVar14 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_1c8,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar14)(piVar1,aCStack_1c8);
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  pCVar7 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
  cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar7);
  cocos2d::CCObject::release((CCObject *)this);
  this_00 = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this_00);
  puVar2[1] = this_00;
  *puVar2 = 0;
  Init_Unit_Stage((_Unit_Stage *)puVar2);
  (**(code **)(*piVar1 + 0xac))(piVar1,puVar2);
  *(int **)(puVar2[1] + 0x11c) = piVar1;
  iVar5 = DAT_00108774;
  *(undefined4 *)(puVar2[1] + 0x54) = uVar8;
  *(undefined4 *)(puVar2[1] + 4) = *(undefined4 *)(**(int **)(iVar15 + iVar5) + 0x2c);
  *(undefined *)(puVar2[1] + 0xd) = 0;
  *(undefined4 *)(puVar2[1] + 100) = 0;
  *(undefined4 *)puVar2[1] = 1;
  *(undefined4 *)(puVar2[1] + 0x38) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x38);
  iVar5 = puVar2[1];
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x20) = 0x40000000;
  *(undefined4 *)(iVar5 + 0x20) = 0x40000000;
  *(undefined4 *)(puVar2[1] + 8) = *(undefined4 *)(*(int *)(iVar3 + 4) + 8);
  *(undefined4 *)(puVar2[1] + 0x40) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x40);
  *(undefined *)(puVar2[1] + 0x2c) = 0;
  *(undefined *)(puVar2[1] + 0x85) = 0;
  if (param_3) {
    *(undefined4 *)(puVar2[1] + 0xd8) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0xd8);
  }
  *(undefined4 *)(puVar2[1] + 0xd8) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0xd8);
  *(undefined4 *)(puVar2[1] + 0xdc) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0xdc);
  piVar13 = (int *)StateMode::node();
  StateMode::StateModeInit((StateMode *)piVar13,0xb,puVar2,100,0,100);
  pcVar14 = *(code **)(*piVar13 + 0x3c);
  __floatsisf((int)puVar2[2] / 2);
  uVar17 = __floatsisf((int)puVar2[3] / 2);
  cocos2d::CCPoint::CCPoint(aCStack_1c0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar14)(piVar13,aCStack_1c0);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar13,200,200);
  uVar17 = __floatsidf(puVar2[3]);
  __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_00108750,DAT_00108754);
  uVar8 = __fixdfsi();
  puVar2[3] = uVar8;
  uVar17 = __floatsidf(puVar2[2]);
  __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_00108750,DAT_00108754);
  uVar8 = __fixdfsi();
  puVar2[2] = uVar8;
  iVar5 = puVar2[1];
  uVar8 = __mulsf3(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x58),DAT_00108778);
  *(undefined4 *)(iVar5 + 0x58) = uVar8;
  *(undefined4 *)(puVar2[1] + 0x50) = 0;
  *(undefined4 *)(puVar2[1] + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x24);
  *(undefined4 *)(puVar2[1] + 0x28) = *(undefined4 *)(puVar2[1] + 0x24);
  *(undefined4 *)(puVar2[1] + 0x14) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x14);
  if (*(int *)(puVar2[1] + 8) == 2) {
    *(undefined *)(puVar2[1] + 0xc) = 1;
  }
  if (param_2 == DAT_0010877c) {
    cocos2d::CCRect::CCRect(aCStack_118,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
    memcpy(&local_198,aCStack_118,0x10);
    iVar5 = local_18c;
    cocos2d::CCRect::CCRect(aCStack_108,extraout_s0_03,extraout_s1_03,extraout_s2_03,extraout_s3_03)
    ;
    __src = aCStack_108;
    goto LAB_00108862;
  }
  if (param_2 == DAT_0010877c || param_2 < DAT_0010877c) {
    if (param_2 == DAT_00108780) {
      cocos2d::CCRect::CCRect(aCStack_158,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_158,0x10);
      iVar5 = local_18c;
      cocos2d::CCRect::CCRect
                (aCStack_148,extraout_s0_01,extraout_s1_01,extraout_s2_01,extraout_s3_01);
      __src = aCStack_148;
      goto LAB_00108862;
    }
    if (param_2 == DAT_00108784) {
      cocos2d::CCRect::CCRect(aCStack_138,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_138,0x10);
      iVar5 = local_18c;
      cocos2d::CCRect::CCRect
                (aCStack_128,extraout_s0_02,extraout_s1_02,extraout_s2_02,extraout_s3_02);
      __src = aCStack_128;
      goto LAB_00108862;
    }
    if (param_2 == 0x708) {
      cocos2d::CCRect::CCRect(aCStack_178,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_178,0x10);
      iVar5 = local_18c;
      cocos2d::CCRect::CCRect
                (aCStack_168,extraout_s0_00,extraout_s1_00,extraout_s2_00,extraout_s3_00);
      __src = aCStack_168;
      goto LAB_00108862;
    }
  }
  else {
    if (param_2 == DAT_00108788) {
      cocos2d::CCRect::CCRect(aCStack_d8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_d8,0x10);
      iVar5 = local_18c;
      cocos2d::CCRect::CCRect
                (aCStack_c8,extraout_s0_05,extraout_s1_05,extraout_s2_05,extraout_s3_05);
      __src = aCStack_c8;
      goto LAB_00108862;
    }
    if (DAT_00108788 < param_2) {
      if (param_2 == DAT_00108790) {
        cocos2d::CCRect::CCRect(aCStack_b8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_b8,0x10);
        iVar5 = local_18c;
        cocos2d::CCRect::CCRect
                  (aCStack_a8,extraout_s0_06,extraout_s1_06,extraout_s2_06,extraout_s3_06);
        __src = aCStack_a8;
        goto LAB_00108862;
      }
      if (param_2 == 0x1400) {
        cocos2d::CCRect::CCRect(aCStack_98,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_98,0x10);
        iVar5 = local_18c;
        cocos2d::CCRect::CCRect
                  (aCStack_88,extraout_s0_07,extraout_s1_07,extraout_s2_07,extraout_s3_07);
        __src = aCStack_88;
        goto LAB_00108862;
      }
    }
    else if (param_2 == DAT_0010878c) {
      cocos2d::CCRect::CCRect(aCStack_f8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_f8,0x10);
      iVar5 = local_18c;
      cocos2d::CCRect::CCRect
                (aCStack_e8,extraout_s0_04,extraout_s1_04,extraout_s2_04,extraout_s3_04);
      __src = aCStack_e8;
      goto LAB_00108862;
    }
  }
  cocos2d::CCRect::CCRect(aCStack_78,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  memcpy(&local_198,aCStack_78,0x10);
  iVar5 = local_18c;
  cocos2d::CCRect::CCRect(aCStack_68,extraout_s0_08,extraout_s1_08,extraout_s2_08,extraout_s3_08);
  __src = aCStack_68;
LAB_00108862:
  memcpy(&local_188,__src,0x10);
  uVar8 = DAT_00108b64;
  iVar3 = (**(int **)(iVar15 + DAT_00108b5c) + -1) * 10 + **(int **)(iVar15 + DAT_00108b60);
  *(undefined *)(puVar2[1] + 0x84) = 1;
  (**(code **)(*piVar1 + 0x108))(piVar1,uVar8,1,*(code **)(*piVar1 + 0x108),iVar5);
  __mulsf3(local_198,DAT_00108b64);
  __mulsf3(local_194,DAT_00108b64);
  __mulsf3(local_190,DAT_00108b64);
  uVar17 = __mulsf3(local_18c,DAT_00108b64);
  cocos2d::CCRect::CCRect
            (aCStack_58,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2_09,
             extraout_s3_09);
  memcpy(&local_198,aCStack_58,0x10);
  __mulsf3(local_188,DAT_00108b64);
  __mulsf3(local_184,DAT_00108b64);
  __mulsf3(local_180,DAT_00108b64);
  uVar17 = __mulsf3(local_17c,DAT_00108b64);
  cocos2d::CCRect::CCRect
            (aCStack_48,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2_10,
             extraout_s3_10);
  memcpy(&local_188,aCStack_48,0x10);
  iVar5 = puVar2[1];
  uVar8 = __mulsf3(local_190 + -0x80000000,0x3f000000);
  __addsf3(uVar8,local_198);
  uVar8 = __mulsf3(local_18c + -0x80000000,0x3f000000);
  uVar17 = __subsf3(uVar8,local_194);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_38,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2_11,
             extraout_s3_11);
  *(undefined4 *)(iVar5 + 0xf8) = local_38;
  *(undefined4 *)(iVar5 + 0xfc) = uStack_34;
  *(undefined4 *)(iVar5 + 0x100) = uStack_30;
  *(undefined4 *)(iVar5 + 0x104) = local_2c;
  iVar16 = puVar2[1];
  __subsf3(local_198,*(undefined4 *)(iVar16 + 0x100),(undefined4 *)(iVar5 + 0x104),iVar16 + 0xfc,
           local_18c);
  uVar17 = __mulsf3(local_17c + -0x80000000,0x3f000000);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2_12,
             extraout_s3_12);
  *(undefined4 *)(iVar16 + 0x108) = local_28;
  *(undefined4 *)(iVar16 + 0x10c) = uStack_24;
  *(undefined4 *)(iVar16 + 0x110) = uStack_20;
  *(undefined4 *)(iVar16 + 0x114) = local_1c;
  iVar5 = puVar2[1];
  pCVar9 = (CCTexture2D *)(**(code **)(***(int ***)(iVar15 + DAT_00108b68) + 0x118))();
  uVar8 = cocos2d::CCSprite::spriteWithTexture(pCVar9);
  *(undefined4 *)(iVar5 + 0x118) = uVar8;
  piVar13 = *(int **)(puVar2[1] + 0x118);
  pcVar14 = *(code **)(*piVar13 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_1b8,extraout_s0_09,extraout_s1_09);
  (*pcVar14)(piVar13,aCStack_1b8);
  uVar17 = (**(code **)(**(int **)(puVar2[1] + 0x118) + 0x108))
                     (*(int **)(puVar2[1] + 0x118),DAT_00108b64);
  piVar13 = *(int **)(puVar2[1] + 0x118);
  pcVar14 = *(code **)(*piVar13 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1b0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar14)(piVar13,aCStack_1b0);
  (**(code **)(**ppiVar12 + 0xcc))(*ppiVar12,*(undefined4 *)(puVar2[1] + 0x118),0,DAT_00108b70);
  if (param_2 == DAT_00108b74) {
    (**(code **)(*piVar1 + 0xf4))(piVar1);
    uVar8 = DAT_00108b7c;
    *(undefined4 *)(puVar2[1] + 0x14) = DAT_00108b78;
    (**(code **)(**(int **)(puVar2[1] + 0x118) + 0x2c))(*(int **)(puVar2[1] + 0x118),uVar8);
  }
  piVar13 = (int *)cocos2d::CCLayer::node();
  local_1d8 = (_ccColor4B)0xff;
  local_1d7 = 0xff;
  local_1d6 = 0xff;
  local_1d5 = 0xff;
  piVar10 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                             (&local_1d8,extraout_s0_10,extraout_s1_10);
  pcVar14 = *(code **)(*piVar10 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1a8,extraout_s0_11,extraout_s1_11);
  (*pcVar14)(piVar10,aCStack_1a8);
  uVar17 = (**(code **)(*piVar13 + 0xcc))(piVar13,piVar10,0,0);
  local_1d4 = (_ccColor4B)0xff;
  local_1d3 = 0;
  local_1d2 = 0;
  local_1d1 = 0xff;
  piVar10 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                             (&local_1d4,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pcVar14 = *(code **)(*piVar10 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1a0,extraout_s0_12,extraout_s1_12);
  (*pcVar14)(piVar10,aCStack_1a0);
  (**(code **)(*piVar13 + 0xcc))(piVar13,piVar10,1,1);
  (**(code **)(**ppiVar12 + 0xcc))(*ppiVar12,piVar13,uVar6,DAT_00108b84);
  *(int **)(puVar2[1] + 0x128) = piVar13;
  iVar5 = puVar2[1];
  puVar11 = (undefined *)(**(code **)(*piVar1 + 0xf0))(piVar1);
  *(undefined *)(iVar5 + 0x8c) = *puVar11;
  *(undefined *)(iVar5 + 0x8d) = puVar11[1];
  *(undefined *)(iVar5 + 0x8e) = puVar11[2];
  uVar17 = __floatsidf(iVar3);
  uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_00108b38,DAT_00108b3c);
  __adddf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_00108b40,DAT_00108b44);
  uVar8 = __fixdfsi();
  *(undefined4 *)(puVar2[1] + 0x130) = uVar8;
  iVar5 = puVar2[1];
  if (iVar3 == 1) {
    *(undefined4 *)(iVar5 + 0x134) = 0x11;
  }
  else {
    uVar17 = __floatsidf(*(undefined4 *)((iVar3 + -1) * 4 + *(int *)(iVar15 + DAT_00108be8)));
    uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar18 = __muldf3((int)uVar17,uVar8,DAT_00108be0,DAT_00108be4);
    __adddf3((int)uVar17,uVar8,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar8 = __fixdfsi();
    *(undefined4 *)(iVar5 + 0x134) = uVar8;
  }
  iVar5 = DAT_00108bf0;
  *(int *)(**(int **)(iVar15 + DAT_00108bec) + 0x28) =
       *(int *)(**(int **)(iVar15 + DAT_00108bec) + 0x28) + 1;
  if (*(int *)(puVar2[1] + 4) != iVar5) {
    Draw_Limit(*(CCNode **)(puVar2[1] + 0x118));
  }
  return piVar1;
}


