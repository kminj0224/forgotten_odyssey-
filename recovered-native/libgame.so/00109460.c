/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00109460  Symbol: Unit_Draw_Test */

/* Unit_Draw_Test(cocos2d::CCNode*, int) */

undefined8 Unit_Draw_Test(CCNode *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Unit_Stage *__dest;
  CCSpriteFrame *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  CCActionInterval *this;
  CCAction *pCVar7;
  void *__src;
  _KG_Unit_State *this_00;
  undefined4 uVar8;
  CCTexture2D *pCVar9;
  Effect *this_01;
  CCRect *__src_00;
  CCNode *pCVar10;
  bool bVar11;
  undefined4 in_r2;
  int **ppiVar12;
  int iVar13;
  int *piVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
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
  float extraout_s0_13;
  undefined8 uVar19;
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
  float extraout_s1_13;
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
  undefined8 uVar20;
  undefined4 local_1fc;
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
  CCPoint aCStack_1a8 [8];
  CCPoint aCStack_1a0 [8];
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  CCRect aCStack_188 [12];
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
  CCNode *pCStack_24;
  int iStack_20;
  undefined4 local_1c;
  
  iVar1 = DAT_001096b4 + 0x10946e;
  pCStack_24 = param_1;
  iStack_20 = param_2;
  local_1c = in_r2;
  cocos2d::CCRect::CCRect((CCRect *)&local_198);
  cocos2d::CCRect::CCRect(aCStack_188);
  iVar2 = Random(-0xf,0xf);
  if (param_2 == DAT_001096b8) {
    local_1fc = DAT_001096bc;
  }
  else {
    local_1fc = __floatsisf(iVar2 + 0x32);
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(param_1,param_2);
  __dest = (_Unit_Stage *)operator_new(0x24);
  iVar2 = (**(code **)(*piVar3 + 0xa8))(piVar3);
  pCVar4 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                     ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar3[0x49],0);
  piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  ppiVar12 = *(int ***)(iVar1 + DAT_001096c0);
  piVar14 = *ppiVar12;
  uVar6 = __subsf3(DAT_001096c4,local_1fc);
  __subsf3(uVar6,DAT_001096c8);
  uVar6 = __fixsfsi();
  uVar19 = (**(code **)(*piVar14 + 0xcc))(piVar14,piVar5,uVar6,param_2);
  pcVar15 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1e0,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  uVar19 = (*pcVar15)(piVar5,aCStack_1e0);
  pcVar15 = *(code **)(*piVar5 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_1d8,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (*pcVar15)(piVar5,aCStack_1d8);
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  pCVar7 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
  cocos2d::CCNode::runAction((CCNode *)piVar5,pCVar7);
  cocos2d::CCObject::release((CCObject *)this);
  __src = (void *)(**(code **)(*piVar3 + 0xa8))(piVar3);
  memcpy(__dest,__src,0x24);
  this_00 = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this_00);
  *(_KG_Unit_State **)(__dest + 4) = this_00;
  Init_Unit_Stage(__dest);
  (**(code **)(*piVar5 + 0xac))(piVar5,__dest);
  *(int **)(*(int *)(__dest + 4) + 0x11c) = piVar5;
  *(int *)(*(int *)(__dest + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(__dest + 4) + 0x54) = local_1fc;
  *(undefined *)(*(int *)(__dest + 4) + 0xd) = 0;
  *(undefined4 *)(*(int *)(__dest + 4) + 100) = 0;
  **(undefined4 **)(__dest + 4) = 0;
  *(undefined *)(*(int *)(__dest + 4) + 0x2c) = 0;
  *(undefined4 *)(*(int *)(__dest + 4) + 0x50) = 0;
  *(undefined *)(*(int *)(__dest + 4) + 0x85) = 0;
  piVar3 = (int *)StateMode::node();
  StateMode::StateModeInit((StateMode *)piVar3,1,__dest,100,0,100);
  pcVar15 = *(code **)(*piVar3 + 0x3c);
  __floatsisf(*(int *)(__dest + 8) / 2);
  uVar19 = __floatsisf(*(int *)(__dest + 0xc) / 2);
  cocos2d::CCPoint::CCPoint(aCStack_1d0,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (*pcVar15)(piVar3,aCStack_1d0);
  (**(code **)(*piVar5 + 0xcc))(piVar5,piVar3,200,200);
  if (param_2 == 0xa0) {
    unit_160_State(__dest);
    iVar2 = 6;
  }
  else if (param_2 < 0xa1) {
    if (param_2 == 0x78) {
      unit_120_State(__dest);
      iVar2 = 2;
    }
    else if (param_2 < 0x79) {
      if (param_2 == 100) {
        unit_100_State(__dest);
      }
      else if (param_2 == 0x6e) {
        unit_110_State(__dest);
      }
LAB_0010971e:
      iVar2 = 0;
    }
    else if (param_2 == 0x82) {
      unit_130_State(__dest);
      iVar2 = 1;
    }
    else {
      if (param_2 != 0x96) goto LAB_0010971e;
      unit_150_State(__dest);
      iVar2 = 3;
    }
  }
  else if (param_2 == 0xe6) {
    unit_230_State(__dest);
    iVar2 = 4;
  }
  else if (param_2 < 0xe7) {
    if (param_2 == 0xaa) {
      unit_170_State(__dest);
      iVar2 = 7;
    }
    else {
      if (param_2 != 0xb4) goto LAB_0010971e;
      unit_180_State(__dest);
      iVar2 = 8;
    }
  }
  else {
    if (param_2 != 0x104) {
      if (param_2 == DAT_001096b8) {
        (**(code **)(*piVar5 + 0x2c))(piVar5,DAT_00109a20);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x40) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x40);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x38) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x38);
        iVar13 = *(int *)(__dest + 4);
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20) = 0x40000000;
        *(undefined4 *)(iVar13 + 0x20) = 0x40000000;
        *(undefined4 *)(*(int *)(__dest + 4) + 8) = *(undefined4 *)(*(int *)(iVar2 + 4) + 8);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x58) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x58);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x24);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x28) = *(undefined4 *)(*(int *)(__dest + 4) + 0x24);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x14) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x14);
        *(undefined4 *)(*(int *)(__dest + 4) + 0x14) = DAT_00109a24;
      }
      goto LAB_0010971e;
    }
    unit_260_State(__dest);
    iVar2 = 5;
  }
  iVar18 = *(int *)(__dest + 4);
  piVar3 = *(int **)(iVar1 + DAT_00109a28);
  iVar17 = *piVar3;
  piVar5 = *(int **)(iVar1 + DAT_00109a2c);
  iVar16 = *piVar5;
  uVar19 = __extendsfdf2(*(undefined4 *)(iVar18 + 0x38));
  iVar13 = *(int *)(iVar1 + DAT_00109a30);
  iVar17 = iVar17 + iVar16 * 0x6c;
  uVar20 = __floatsidf((int)*(short *)((*(char *)(iVar17 + DAT_00109a34) + 0x4d) * 2 + iVar13));
  uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00109a10,DAT_00109a14);
  __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
          );
  uVar8 = __truncdfsf2();
  *(undefined4 *)(iVar18 + 0x38) = uVar8;
  iVar16 = *(int *)(__dest + 4);
  uVar19 = __floatsidf(*(short *)((*(char *)(iVar17 + DAT_00109a38) + 0x58) * 2 + iVar13) + -100);
  uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00109a10,DAT_00109a14);
  uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
  uVar19 = __adddf3((int)uVar19,uVar8,(int)uVar19,uVar8);
  __subdf3(DAT_00109a18,DAT_00109a1c,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
  uVar8 = __truncdfsf2();
  *(undefined4 *)(iVar16 + 0x20) = uVar8;
  iVar16 = *(int *)(__dest + 4);
  uVar19 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x24));
  uVar20 = __floatsidf((int)*(short *)((*(char *)(iVar17 + DAT_00109a3c) + 0x42) * 2 + iVar13));
  uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00109a10,DAT_00109a14);
  __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,(int)((ulonglong)uVar20 >> 0x20)
          );
  uVar8 = __truncdfsf2();
  *(undefined4 *)(iVar16 + 0x24) = uVar8;
  *(undefined4 *)(*(int *)(__dest + 4) + 0x28) = *(undefined4 *)(*(int *)(__dest + 4) + 0x24);
  if (param_2 == 0xa0) {
    cocos2d::CCRect::CCRect(aCStack_f8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
    memcpy(&local_198,aCStack_f8,0x10);
    cocos2d::CCRect::CCRect(aCStack_e8,extraout_s0_04,extraout_s1_04,extraout_s2_04,extraout_s3_04);
    __src_00 = aCStack_e8;
LAB_00109a94:
    memcpy(aCStack_188,__src_00,0x10);
  }
  else {
    if (0xa0 < param_2) {
      if (param_2 == 0xe6) {
        cocos2d::CCRect::CCRect(aCStack_98,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_98,0x10);
        cocos2d::CCRect::CCRect
                  (aCStack_88,extraout_s0_07,extraout_s1_07,extraout_s2_07,extraout_s3_07);
        __src_00 = aCStack_88;
      }
      else if (param_2 < 0xe7) {
        if (param_2 == 0xaa) {
          cocos2d::CCRect::CCRect(aCStack_d8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
          memcpy(&local_198,aCStack_d8,0x10);
          cocos2d::CCRect::CCRect
                    (aCStack_c8,extraout_s0_05,extraout_s1_05,extraout_s2_05,extraout_s3_05);
          __src_00 = aCStack_c8;
        }
        else {
          if (param_2 != 0xb4) goto LAB_00109a9a;
          cocos2d::CCRect::CCRect(aCStack_b8,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
          memcpy(&local_198,aCStack_b8,0x10);
          cocos2d::CCRect::CCRect
                    (aCStack_a8,extraout_s0_06,extraout_s1_06,extraout_s2_06,extraout_s3_06);
          __src_00 = aCStack_a8;
        }
      }
      else if (param_2 == 0x104) {
        cocos2d::CCRect::CCRect(aCStack_78,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_78,0x10);
        cocos2d::CCRect::CCRect
                  (aCStack_68,extraout_s0_08,extraout_s1_08,extraout_s2_08,extraout_s3_08);
        __src_00 = aCStack_68;
      }
      else {
        if (param_2 != DAT_00109a40) goto LAB_00109a9a;
        cocos2d::CCRect::CCRect(aCStack_58,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_58,0x10);
        cocos2d::CCRect::CCRect
                  (aCStack_48,extraout_s0_09,extraout_s1_09,extraout_s2_09,extraout_s3_09);
        __src_00 = aCStack_48;
      }
      goto LAB_00109a94;
    }
    if (param_2 == 0x78) {
      cocos2d::CCRect::CCRect(aCStack_158,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_158,0x10);
      cocos2d::CCRect::CCRect
                (aCStack_148,extraout_s0_01,extraout_s1_01,extraout_s2_01,extraout_s3_01);
      __src_00 = aCStack_148;
      goto LAB_00109a94;
    }
    if (0x78 < param_2) {
      if (param_2 == 0x82) {
        cocos2d::CCRect::CCRect(aCStack_138,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_138,0x10);
        cocos2d::CCRect::CCRect
                  (aCStack_128,extraout_s0_02,extraout_s1_02,extraout_s2_02,extraout_s3_02);
        __src_00 = aCStack_128;
      }
      else {
        if (param_2 != 0x96) goto LAB_00109a9a;
        cocos2d::CCRect::CCRect(aCStack_118,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
        memcpy(&local_198,aCStack_118,0x10);
        cocos2d::CCRect::CCRect
                  (aCStack_108,extraout_s0_03,extraout_s1_03,extraout_s2_03,extraout_s3_03);
        __src_00 = aCStack_108;
      }
      goto LAB_00109a94;
    }
    if (param_2 == 0x6e) {
      cocos2d::CCRect::CCRect(aCStack_178,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
      memcpy(&local_198,aCStack_178,0x10);
      cocos2d::CCRect::CCRect
                (aCStack_168,extraout_s0_00,extraout_s1_00,extraout_s2_00,extraout_s3_00);
      __src_00 = aCStack_168;
      goto LAB_00109a94;
    }
  }
LAB_00109a9a:
  iVar13 = *(int *)(__dest + 4);
  uVar8 = __mulsf3(local_190 + -0x80000000,0x3f000000);
  __addsf3(uVar8,local_198);
  uVar8 = __mulsf3(local_18c + -0x80000000,0x3f000000);
  uVar19 = __addsf3(uVar8,local_194);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_38,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_10,
             extraout_s3_10);
  *(undefined4 *)(iVar13 + 0xf8) = local_38;
  *(undefined4 *)(iVar13 + 0xfc) = uStack_34;
  *(undefined4 *)(iVar13 + 0x100) = uStack_30;
  *(undefined4 *)(iVar13 + 0x104) = local_2c;
  iVar16 = *(int *)(__dest + 4);
  uVar8 = __mulsf3(*(undefined4 *)(iVar16 + 0x100),0x3f000000,(undefined4 *)(iVar13 + 0x104),
                   iVar16 + 0xfc,local_18c);
  __addsf3(uVar8,local_198);
  uVar19 = __mulsf3(local_17c + -0x80000000,0x3f000000);
  cocos2d::CCRect::CCRect
            ((CCRect *)&local_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_11,
             extraout_s3_11);
  *(undefined4 *)(iVar16 + 0x108) = local_28;
  *(CCNode **)(iVar16 + 0x10c) = pCStack_24;
  *(int *)(iVar16 + 0x110) = iStack_20;
  *(undefined4 *)(iVar16 + 0x114) = local_1c;
  iVar13 = *(int *)(__dest + 4);
  if (param_2 == 0xaa) {
    pCVar9 = (CCTexture2D *)(**(code **)(***(int ***)(iVar1 + DAT_00109d54) + 0x118))();
    uVar8 = cocos2d::CCSprite::spriteWithTexture(pCVar9);
    *(undefined4 *)(iVar13 + 0x118) = uVar8;
    piVar14 = *(int **)(*(int *)(__dest + 4) + 0x118);
    pcVar15 = *(code **)(*piVar14 + 0x3c);
    uVar19 = __addsf3(local_1fc,DAT_00109d38);
    cocos2d::CCPoint::CCPoint(aCStack_1b8,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    uVar19 = (*pcVar15)(piVar14,aCStack_1b8);
    piVar14 = *(int **)(*(int *)(__dest + 4) + 0x118);
    pcVar15 = *(code **)(*piVar14 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_1b0,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    (*pcVar15)(piVar14,aCStack_1b0);
    (**(code **)(**ppiVar12 + 0xcc))
              (*ppiVar12,*(undefined4 *)(*(int *)(__dest + 4) + 0x118),0,DAT_00109d44);
    if (*(int *)(*piVar3 + (*piVar5 * 9 + iVar2 + DAT_00109d48) * 4 + 4) < 0x15) goto LAB_00109c70;
    this_01 = *(Effect **)(**(int **)(iVar1 + DAT_00109d4c) + DAT_00109d50);
    bVar11 = true;
    pCVar10 = *(CCNode **)(*(int *)(__dest + 4) + 0x118);
  }
  else {
    pCVar9 = (CCTexture2D *)(**(code **)(***(int ***)(iVar1 + DAT_00109d40) + 0x118))();
    uVar8 = cocos2d::CCSprite::spriteWithTexture(pCVar9);
    *(undefined4 *)(iVar13 + 0x118) = uVar8;
    piVar14 = *(int **)(*(int *)(__dest + 4) + 0x118);
    pcVar15 = *(code **)(*piVar14 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_1c8,extraout_s0_10,extraout_s1_10);
    uVar19 = (*pcVar15)(piVar14,aCStack_1c8);
    piVar14 = *(int **)(*(int *)(__dest + 4) + 0x118);
    pcVar15 = *(code **)(*piVar14 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_1c0,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    (*pcVar15)(piVar14,aCStack_1c0);
    (**(code **)(**ppiVar12 + 0xcc))
              (*ppiVar12,*(undefined4 *)(*(int *)(__dest + 4) + 0x118),0,DAT_00109d44);
    if (*(int *)(*piVar3 + (*piVar5 * 9 + iVar2 + DAT_00109d48) * 4 + 4) < 0x15) goto LAB_00109c70;
    this_01 = *(Effect **)(**(int **)(iVar1 + DAT_00109d4c) + DAT_00109d50);
    bVar11 = false;
    pCVar10 = *(CCNode **)(*(int *)(__dest + 4) + 0x118);
  }
  Effect::Draw_Unit_Limit(this_01,pCVar10,bVar11);
LAB_00109c70:
  piVar3 = (int *)cocos2d::CCLayer::node();
  local_1e8 = (_ccColor4B)0xff;
  local_1e7 = 0xff;
  local_1e6 = 0xff;
  local_1e5 = 0xff;
  piVar5 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_1e8,extraout_s0_11,extraout_s1_11);
  pcVar15 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1a8,extraout_s0_12,extraout_s1_12);
  (*pcVar15)(piVar5,aCStack_1a8);
  uVar19 = (**(code **)(*piVar3 + 0xcc))(piVar3,piVar5,0,0);
  local_1e4 = (_ccColor4B)0x0;
  local_1e3 = 0xff;
  local_1e2 = 0;
  local_1e1 = 0xff;
  piVar5 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_1e4,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  pcVar15 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_1a0,extraout_s0_13,extraout_s1_13);
  (*pcVar15)(piVar5,aCStack_1a0);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar5,1,1);
  (**(code **)(**ppiVar12 + 0xcc))(*ppiVar12,piVar3,uVar6,DAT_00109d60);
  iVar2 = DAT_00109d64;
  *(int **)(*(int *)(__dest + 4) + 0x128) = piVar3;
  if (param_2 == iVar2) {
    (**(code **)(**(int **)(*(int *)(__dest + 4) + 0x118) + 0x2c))
              (*(int **)(*(int *)(__dest + 4) + 0x118),DAT_00109d58);
  }
  *(int *)(**(int **)(iVar1 + DAT_00109d68) + 0x30) =
       *(int *)(**(int **)(iVar1 + DAT_00109d68) + 0x30) + 1;
  return CONCAT44(iStack_20,pCStack_24);
}


