/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00115c70  Symbol: attack */

/* attack(float, cocos2d::CCLayer*, cocos2d::CCLayer*, cocos2d::CCLayer*) */

void attack(float param_1,CCLayer *param_2,CCLayer *param_3,CCLayer *param_4)

{
  _Unit_Stage *p_Var1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CCNode *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  CCTextureCache *pCVar8;
  CCPoint *pCVar9;
  char *pcVar10;
  CCLayer *pCVar11;
  char cVar12;
  CCPoint *pCVar13;
  CCLayer *in_r3;
  code **ppcVar14;
  code *pcVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  undefined4 *puVar19;
  int **ppiVar20;
  int iVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar22;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  float extraout_s0_21;
  float extraout_s0_22;
  float extraout_s0_23;
  float extraout_s0_24;
  float extraout_s0_25;
  float extraout_s0_26;
  float extraout_s0_27;
  float extraout_s0_28;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_44;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  int iStack_3c;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint local_20;
  int local_1c;
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_3 + 0xa8))(param_3);
  iVar21 = DAT_00115fd0 + 0x115c8e;
  if (p_Var1 == (_Unit_Stage *)0x0) {
    FUN_00116c6e();
  }
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
  fVar22 = extraout_s0;
  if (iVar2 != 0) {
    if ((*(int **)(p_Var1 + 4))[0x19] - 3U < 2) {
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
      }
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
      fVar22 = extraout_s0_02;
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
        fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
      }
    }
    else {
      if (**(int **)(p_Var1 + 4) == 1) {
        puVar19 = (undefined4 *)(**(code **)(*(int *)param_3 + 0x7c))();
        uVar3 = __mulsf3(*puVar19,0x3f000000);
        __divsi3(*(undefined4 *)(p_Var1 + 8),3);
        uVar7 = __floatsisf();
        __addsf3(uVar3,uVar7);
        iVar2 = (**(code **)(*(int *)param_3 + 0x7c))(param_3);
        __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
        uVar23 = __extendsfdf2();
        uVar24 = __floatsidf(*(undefined4 *)(p_Var1 + 0xc));
        uVar24 = __divdf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_00115fc0,DAT_00115fc4);
        uVar23 = __adddf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
        iVar2 = (**(code **)(*(int *)param_3 + 0x7c))(param_3);
        uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
        uVar7 = __floatsisf(*(int *)(p_Var1 + 0xc) / 2);
        __subsf3(uVar3,uVar7);
        uVar24 = __extendsfdf2();
        __subdf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        __truncdfsf2();
        piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        pcVar15 = *(code **)(*piVar18 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1);
        pCVar13 = aCStack_38;
      }
      else {
        puVar19 = (undefined4 *)(**(code **)(*(int *)param_3 + 0x7c))(param_3);
        uVar3 = __mulsf3(*puVar19,0x3f000000);
        __divsi3(*(undefined4 *)(p_Var1 + 8),3);
        uVar7 = __floatsisf();
        __subsf3(uVar3,uVar7);
        iVar2 = (**(code **)(*(int *)param_3 + 0x7c))(param_3);
        __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
        uVar23 = __extendsfdf2();
        uVar24 = __floatsidf(*(undefined4 *)(p_Var1 + 0xc));
        uVar24 = __divdf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_00115fc0,DAT_00115fc4);
        uVar23 = __adddf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                          (int)((ulonglong)uVar24 >> 0x20));
        iVar2 = (**(code **)(*(int *)param_3 + 0x7c))(param_3);
        uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
        uVar7 = __floatsisf(*(int *)(p_Var1 + 0xc) / 2);
        __subsf3(uVar3,uVar7);
        uVar24 = __extendsfdf2();
        __subdf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        __truncdfsf2();
        piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        pcVar15 = *(code **)(*piVar18 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_01,extraout_s1_00);
        pCVar13 = aCStack_30;
      }
      fVar22 = (float)(*pcVar15)(piVar18,pCVar13);
    }
  }
  iVar2 = *(int *)(p_Var1 + 4);
  if (*(char *)(iVar2 + 0x74) != '\0') {
    uVar3 = __addsf3(*(undefined4 *)(iVar2 + 0x70),param_2);
    *(undefined4 *)(iVar2 + 0x70) = uVar3;
    iVar2 = *(int *)(p_Var1 + 4);
    if ((*(char *)(iVar2 + 0x90) != '\0') ||
       (fVar22 = extraout_s0_03, *(char *)(iVar2 + 0x92) != '\0')) {
      iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + 0x70),0x3f800000);
      if (iVar4 == 0) {
        iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00115fd4);
        if (iVar2 != 0) {
          piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00115fd4);
          pcVar15 = *(code **)(*piVar18 + 0x3c);
          puVar19 = (undefined4 *)(**(code **)(*(int *)param_3 + 0x7c))(param_3);
          uVar23 = __mulsf3(*puVar19,0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
          (*pcVar15)(piVar18,aCStack_28);
        }
        fVar22 = (float)(**(code **)(*(int *)param_3 + 0xf4))(param_3,*(int *)(p_Var1 + 4) + 0xf4);
      }
      else {
        (**(code **)(*(int *)param_3 + 0xf4))(param_3,iVar2 + 0x8c);
        iVar4 = *(int *)(p_Var1 + 4);
        *(undefined2 *)(iVar4 + 0xf4) = *(undefined2 *)(iVar4 + 0x8c);
        iVar2 = DAT_00115fd4;
        *(undefined *)(iVar4 + 0xf6) = *(undefined *)(iVar4 + 0x8e);
        *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x5c) = 0;
        *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x70) = 0;
        *(undefined *)(*(int *)(p_Var1 + 4) + 0x90) = 0;
        iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,iVar2);
        fVar22 = extraout_s0_04;
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00115fd4);
          fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
      }
    }
  }
  iVar2 = *(int *)(p_Var1 + 4);
  if (*(char *)(iVar2 + 0x6c) != '\0') {
    uVar3 = __addsf3(*(undefined4 *)(iVar2 + 0x68),param_2);
    *(undefined4 *)(iVar2 + 0x68) = uVar3;
    piVar18 = *(int **)(p_Var1 + 4);
    uVar23 = __extendsfdf2(piVar18[0x1a]);
    iVar2 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00115fc8,DAT_00115fcc);
    fVar22 = extraout_s0_05;
    if (iVar2 != 0) {
      ppcVar14 = (code **)(*(int *)param_3 + 0xf4);
      if (*piVar18 == 4) {
        (**ppcVar14)(param_3);
        piVar6 = (int *)cocos2d::CCNode::getChildByTag
                                  (**(CCNode ***)(iVar21 + DAT_00115fd8),DAT_00115fdc);
        piVar18 = &local_44;
        pcVar15 = *(code **)(*piVar6 + 0xf4);
LAB_00115fb6:
        *(undefined *)piVar18 = 0xff;
        *(undefined *)((int)piVar18 + 1) = 0xff;
        *(undefined *)((int)piVar18 + 2) = 0xff;
      }
      else {
        if (*piVar18 == 5) {
          local_40 = 0xff;
          local_3f = 0xff;
          local_3e = 0xff;
          (**ppcVar14)(param_3);
          piVar6 = (int *)cocos2d::CCNode::getChildByTag
                                    (**(CCNode ***)(iVar21 + DAT_00115fd8),DAT_00115fe0);
          piVar18 = &iStack_3c;
          pcVar15 = *(code **)(*piVar6 + 0xf4);
          goto LAB_00115fb6;
        }
        pcVar15 = *ppcVar14;
        piVar18 = piVar18 + 0x23;
        piVar6 = (int *)param_3;
      }
      fVar22 = (float)(*pcVar15)(piVar6,piVar18);
      *(undefined *)(*(int *)(p_Var1 + 4) + 0x6c) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x68) = 0;
    }
  }
  if (*(char *)(*(int *)(p_Var1 + 4) + 0xa8) != '\0') {
    puVar19 = (undefined4 *)(*(int *)(p_Var1 + 4) + 0xac);
    uVar3 = __addsf3(*puVar19,param_2);
    *puVar19 = uVar3;
    iVar4 = *(int *)(p_Var1 + 4);
    uVar3 = *(undefined4 *)(iVar4 + 0xac);
    iVar2 = __aeabi_fcmpgt(uVar3,*(undefined4 *)(iVar4 + 0xb0));
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(iVar4 + 0xb8);
      iVar2 = __aeabi_fcmplt(uVar7,uVar3);
      fVar22 = extraout_s0_07;
      if (iVar2 != 0) {
        uVar3 = __addsf3(uVar7,*(undefined4 *)(iVar4 + 0xb4));
        *(undefined4 *)(iVar4 + 0xb8) = uVar3;
        iVar4 = *(int *)(p_Var1 + 4);
        uVar3 = *(undefined4 *)(iVar4 + 0x24);
        iVar2 = __aeabi_fcmpgt(uVar3,0);
        fVar22 = extraout_s0_08;
        if (iVar2 != 0) {
          uVar3 = __subsf3(uVar3,*(undefined4 *)(iVar4 + 0xbc));
          *(undefined4 *)(iVar4 + 0x24) = uVar3;
          *(undefined *)(*(int *)(p_Var1 + 4) + 0x124) = 1;
          fVar22 = extraout_s0_09;
        }
      }
    }
    else {
      *(undefined *)(iVar4 + 0xa8) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb0) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xac) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xbc) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb4) = 0;
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb8) = 0;
      (**(code **)(*(int *)param_3 + 0xf4))(param_3,*(int *)(p_Var1 + 4) + 0x8c);
      iVar2 = *(int *)(p_Var1 + 4);
      *(undefined2 *)(iVar2 + 0xf4) = *(undefined2 *)(iVar2 + 0x8c);
      *(undefined *)(iVar2 + 0xf6) = *(undefined *)(iVar2 + 0x8e);
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,6);
        if (iVar2 != 0) {
          piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          pcVar15 = *(code **)(*piVar18 + 0xd0);
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          uVar3 = cocos2d::CCNode::getChildByTag(pCVar5,6);
          (*pcVar15)(piVar18,uVar3,1);
        }
      }
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,9);
        if (iVar2 != 0) {
          piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          pcVar15 = *(code **)(*piVar18 + 0xd0);
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          uVar3 = cocos2d::CCNode::getChildByTag(pCVar5,9);
          (*pcVar15)(piVar18,uVar3,1);
        }
      }
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
      fVar22 = extraout_s0_06;
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
        fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
      }
    }
  }
  if (*(char *)(*(int *)(p_Var1 + 4) + 0xc0) != '\0') {
    puVar19 = (undefined4 *)(*(int *)(p_Var1 + 4) + 0xc4);
    uVar3 = __addsf3(*puVar19,param_2);
    *puVar19 = uVar3;
    iVar4 = *(int *)(p_Var1 + 4);
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar4 + 0xc4),*(undefined4 *)(iVar4 + 200));
    fVar22 = extraout_s0_10;
    if (iVar2 != 0) {
      *(undefined *)(iVar4 + 0xc0) = 0;
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,10);
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar5,10);
          cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
      }
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
      fVar22 = extraout_s0_11;
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
        fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
      }
    }
  }
  if (*(char *)(*(int *)(p_Var1 + 4) + 0xcd) != '\0') {
    puVar19 = (undefined4 *)(*(int *)(p_Var1 + 4) + 0xd0);
    uVar3 = __addsf3(*puVar19,param_2);
    *puVar19 = uVar3;
    iVar4 = *(int *)(p_Var1 + 4);
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar4 + 0xd0),*(undefined4 *)(iVar4 + 0xd4));
    fVar22 = extraout_s0_12;
    if (iVar2 != 0) {
      *(undefined *)(iVar4 + 0xcd) = 0;
      **(undefined4 **)(p_Var1 + 4) = 0;
      (**(code **)(*(int *)param_3 + 0x2c))(param_3,0x3f800000);
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,0xc);
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar5,0xc);
          cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
      }
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
      fVar22 = extraout_s0_13;
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,0xc9);
        fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
      }
    }
  }
  if ((*(char *)(*(int *)(p_Var1 + 4) + 0xcc) != '\0') &&
     (iVar2 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)(p_Var1 + 4) + 0x24),0),
     fVar22 = extraout_s0_14, iVar2 == 0)) {
    puVar19 = (undefined4 *)(**(code **)(*(int *)param_3 + 0x38))(param_3);
    iVar2 = __aeabi_fcmplt(*puVar19,DAT_001165c8);
    fVar22 = extraout_s0_15;
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x24) = 0;
      (**(code **)(*(int *)param_3 + 0x2c))(param_3,0x3f800000);
      Unit_Return_Money(*(int *)(*(int *)(p_Var1 + 4) + 4));
      iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      fVar22 = extraout_s0_16;
      if (iVar2 != 0) {
        pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,0x10);
        fVar22 = extraout_s0_17;
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar5,0x10);
          fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
      }
    }
  }
  puVar16 = *(uint **)(p_Var1 + 4);
  if (((((*puVar16 < 2) && (*(char *)(puVar16 + 0x2a) == '\0')) &&
       (*(char *)(puVar16 + 0x30) == '\0')) &&
      ((*(char *)((int)puVar16 + 0xcd) == '\0' && (*(char *)(puVar16 + 0x33) == '\0')))) &&
     (iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,200), fVar22 = extraout_s0_18,
     iVar2 != 0)) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,0);
    fVar22 = extraout_s0_19;
    if (iVar2 != 0) {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,200);
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar5,0);
      fVar22 = (float)cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
    }
  }
  iVar2 = *(int *)(p_Var1 + 4);
  if (*(char *)(iVar2 + 0xcc) == '\0') {
    if ((*(char *)(iVar2 + 0xd) != '\0') && (*(char *)(iVar2 + 0xc0) == '\0')) {
      uVar3 = __addsf3(*(undefined4 *)(iVar2 + 0x3c),param_2);
      *(undefined4 *)(iVar2 + 0x3c) = uVar3;
      piVar18 = *(int **)(p_Var1 + 4);
      fVar22 = extraout_s0_20;
      if ((*(char *)((int)piVar18 + 0x93) == '\0') &&
         (((*(char *)((int)piVar18 + 0x85) == '\0' && (*(char *)(piVar18 + 0x27) == '\0')) &&
          (piVar18[0x19] < 3)))) {
        if (*piVar18 == 0) {
          iVar2 = Unit_Attack_Time(param_3,p_Var1,(CCNode *)param_4);
          fVar22 = extraout_s0_21;
          if (iVar2 == 0) {
            iVar2 = *(int *)(p_Var1 + 4);
            uVar23 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x3c));
            iVar2 = cocos2d::CCNode::getChildByTag
                              (**(CCNode ***)(iVar21 + DAT_001165cc),*(int *)(iVar2 + 4));
            iVar4 = *(int *)(p_Var1 + 4);
            __floatunsisf(*(int *)(*(int *)(iVar2 + 0x128) + 0x18) -
                          *(int *)(*(int *)(iVar2 + 0x128) + 0x14) >> 2);
            uVar24 = __extendsfdf2();
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_001165b8,DAT_001165bc
                             );
            uVar25 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x20));
            uVar24 = __adddf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                              (int)((ulonglong)uVar25 >> 0x20));
            iVar2 = __aeabi_dcmpge((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                   (int)((ulonglong)uVar24 >> 0x20));
            fVar22 = extraout_s0_22;
            if ((iVar2 != 0) && (pcVar10 = (char *)(iVar4 + 0x2c), *pcVar10 != '\0')) {
              *pcVar10 = '\0';
              *(undefined *)(*(int *)(p_Var1 + 4) + 0x2d) = 0;
LAB_001164b2:
              *(undefined *)(*(int *)(p_Var1 + 4) + 0x4c) = 0;
              *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x3c) = 0;
              *(undefined *)(*(int *)(p_Var1 + 4) + 0x13c) = 0;
              **(int **)(iVar21 + DAT_001165d0) = **(int **)(iVar21 + DAT_001165d0) + -1;
            }
          }
        }
        else if (*piVar18 == 1) {
          iVar4 = piVar18[1];
          iVar2 = Unit_Attack_Time(param_3,p_Var1,(CCNode *)param_4);
          fVar22 = extraout_s0_23;
          if (iVar2 == 0) {
            uVar23 = __extendsfdf2(*(undefined4 *)(*(int *)(p_Var1 + 4) + 0x3c));
            iVar2 = cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar21 + DAT_001165cc),iVar4);
            iVar4 = *(int *)(p_Var1 + 4);
            __floatunsisf(*(int *)(*(int *)(iVar2 + 0x128) + 0x18) -
                          *(int *)(*(int *)(iVar2 + 0x128) + 0x14) >> 2);
            uVar24 = __extendsfdf2();
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_001165b8,DAT_001165bc
                             );
            uVar25 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x20));
            uVar24 = __adddf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                              (int)((ulonglong)uVar25 >> 0x20));
            iVar2 = __aeabi_dcmpge((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                   (int)((ulonglong)uVar24 >> 0x20));
            fVar22 = extraout_s0_24;
            if ((iVar2 != 0) && (pcVar10 = (char *)(iVar4 + 0x2c), *pcVar10 != '\0')) {
              *pcVar10 = '\0';
              goto LAB_001164b2;
            }
          }
        }
      }
    }
    if (**(int **)(p_Var1 + 4) == 5) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_001165d4 + 0x1164de));
    }
    piVar18 = *(int **)(p_Var1 + 4);
    iVar2 = *piVar18;
    if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 7)) {
      if (1 < iVar2 - 2U) goto LAB_0011667e;
      if (*(char *)((int)piVar18 + 0x93) == '\0') {
        if ((*(char *)((int)piVar18 + 0x85) != '\0') || (*(char *)(piVar18 + 0x27) != '\0'))
        goto LAB_00116626;
        if ((iVar2 == 3) && (*(char *)(piVar18 + 0x21) == '\0')) {
          Boss_Number_Call(piVar18[1]);
        }
      }
      else {
        fVar22 = (float)Stun_Call_Back(fVar22,**(CCLayer ***)(iVar21 + DAT_00116978));
LAB_00116626:
        if (*(char *)(*(int *)(p_Var1 + 4) + 0x9c) != '\0') {
          KnockBack_Call_Back(fVar22,**(CCLayer ***)(iVar21 + DAT_00116978));
        }
      }
      if (*(char *)(*(int *)(p_Var1 + 4) + 0x85) != '\0') {
        puVar19 = (undefined4 *)(*(int *)(p_Var1 + 4) + 0x88);
        uVar3 = __addsf3(*puVar19,**(undefined4 **)(iVar21 + DAT_00116978));
        *puVar19 = uVar3;
        iVar4 = *(int *)(p_Var1 + 4);
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x88));
        iVar2 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00116970,
                               DAT_00116974);
        if (iVar2 != 0) {
          *(undefined *)(iVar4 + 0x85) = 0;
          *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x88) = 0;
        }
      }
    }
    else {
      if (*(char *)((int)piVar18 + 0x93) == '\0') {
        if ((*(char *)((int)piVar18 + 0x85) != '\0') || (*(char *)(piVar18 + 0x27) != '\0'))
        goto LAB_00116524;
        Move(param_3,p_Var1);
      }
      else {
        fVar22 = (float)Stun_Call_Back(fVar22,**(CCLayer ***)(iVar21 + DAT_001165d8));
LAB_00116524:
        if (*(char *)(*(int *)(p_Var1 + 4) + 0x9c) != '\0') {
          KnockBack_Call_Back(fVar22,**(CCLayer ***)(iVar21 + DAT_001165d8));
        }
      }
      if (*(char *)(*(int *)(p_Var1 + 4) + 0x85) != '\0') {
        puVar19 = (undefined4 *)(*(int *)(p_Var1 + 4) + 0x88);
        uVar3 = __addsf3(*puVar19,**(undefined4 **)(iVar21 + DAT_001165d8));
        *puVar19 = uVar3;
        iVar4 = *(int *)(p_Var1 + 4);
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x88));
        iVar2 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_001165c0,
                               DAT_001165c4);
        if (iVar2 != 0) {
          *(undefined *)(iVar4 + 0x85) = 0;
          *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x88) = 0;
        }
      }
      iVar2 = *(int *)(p_Var1 + 4);
      if (((*(char *)(iVar2 + 0x93) == '\0') && (*(char *)(iVar2 + 0x85) == '\0')) &&
         (*(char *)(iVar2 + 0x9c) == '\0')) {
        if (*(int *)(iVar2 + 4) == DAT_001165dc) {
          Unit_9000_Attack_Call(param_3,p_Var1);
        }
        else {
          Unit_Attack_Call(param_3,p_Var1);
        }
      }
    }
  }
LAB_0011667e:
  puVar16 = *(uint **)(p_Var1 + 4);
  iVar2 = __aeabi_fcmple(puVar16[9],0);
  uVar17 = *puVar16;
  if (iVar2 == 0) {
    if (uVar17 == 7) {
      uVar17 = __addsf3(puVar16[0xf],param_2);
      puVar16[0xf] = uVar17;
      uVar3 = *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x3c);
      iVar21 = __aeabi_fcmpgt(uVar3,0x40800000);
      if (iVar21 != 0) {
        pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00116d00);
        ani_Base_ani(pCVar11);
        *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x3c) = 0;
        FUN_00116c6e();
        return;
      }
      iVar21 = __aeabi_fcmpgt(uVar3,DAT_00116d04);
      if (iVar21 != 0) {
        pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00116d00);
        ani_Attack_SiegeTank_ani(pCVar11);
      }
    }
    return;
  }
  if (uVar17 == 2) {
    if (**(char **)(iVar21 + DAT_00116c80) != '\0') {
      return;
    }
    ppiVar20 = *(int ***)(iVar21 + DAT_00116ce4);
    piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
    piVar18 = (int *)(**(code **)(*piVar18 + 0xa8))();
    if (*(int *)(piVar18[1] + 100) == 7) {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
      cocos2d::CCNode::getChildByTag(pCVar5,*(int *)(*(int *)(*piVar18 + 0x1c) + 0x290));
      iVar2 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar2 == 0) {
        **(undefined4 **)(iVar21 + DAT_00116cdc) = 0xd;
      }
    }
    else {
      pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
      ani_Die_ani(pCVar11,extraout_s0_28);
      uVar17 = (uint)*(byte *)(**(int **)(iVar21 + DAT_00116c88) + **(int **)(iVar21 + DAT_00116cec)
                               + DAT_00116cf0 + 4);
      if (uVar17 - 1 < 2) {
        pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar12 = (char)DAT_00116cf4 + -0x1e;
      }
      else {
        if (2 < uVar17 - 3) goto LAB_00116b6e;
        pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar12 = (char)DAT_00116cf8 + -0xe;
      }
      uVar3 = CocosDenshion::SimpleAudioEngine::playEffect(pcVar10,(bool)cVar12);
      **(undefined4 **)(iVar21 + DAT_00116cfc) = uVar3;
    }
  }
  else {
    if (uVar17 < 2) {
      if (1 < puVar16[0x19] - 3) {
        ani_Die_ani(param_3,extraout_s0_25);
        if ((*(int *)(*(int *)(p_Var1 + 4) + 4) ==
             *(int *)(**(int **)(iVar21 + DAT_0011697c) + 0x2c)) &&
           (*(int *)(**(int **)(iVar21 + DAT_0011697c) + 0x30) == 0)) {
          **(undefined **)(iVar21 + DAT_00116980) = 1;
        }
        iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00116984);
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_3,DAT_00116984);
          cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
        iVar2 = cocos2d::CCNode::getChildByTag
                          (*(CCNode **)(*(int *)(p_Var1 + 4) + 0x11c),DAT_00116988);
        if (iVar2 != 0) {
          pCVar5 = (CCNode *)
                   cocos2d::CCNode::getChildByTag
                             (*(CCNode **)(*(int *)(p_Var1 + 4) + 0x11c),DAT_00116988);
          cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
        }
        if (**(int **)(p_Var1 + 4) != 0) {
          FUN_00116c6e();
          return;
        }
        if ((*(int **)(p_Var1 + 4))[1] != DAT_0011698c) {
          FUN_00116c6e();
          return;
        }
        **(undefined **)(iVar21 + DAT_00116980) = 1;
        FUN_00116c6e();
        return;
      }
      if (puVar16[0x19] != 3) {
        iVar2 = cocos2d::CCNode::numberOfRunningActions();
        if (iVar2 != 0) {
          FUN_00116c6e();
          return;
        }
        iVar2 = **(int **)(p_Var1 + 4);
        if (iVar2 == 1) {
          if (1000 < (*(int **)(p_Var1 + 4))[1]) {
            iVar2 = **(int **)(iVar21 + DAT_001169a0);
            *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
            *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
          }
        }
        else if (iVar2 == 0) {
          iVar2 = **(int **)(iVar21 + DAT_001169a0);
          *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + -1;
          *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
        }
        iVar2 = *(int *)(p_Var1 + 4);
        piVar18 = *(int **)(iVar21 + DAT_001169a4);
        if (*(char *)(iVar2 + 0x13c) != '\0') {
          *piVar18 = *piVar18 + -1;
        }
        if (*(int *)(**(int **)(iVar21 + DAT_0011697c) + 0x2c) == *(int *)(iVar2 + 4)) {
          if (*(int *)(**(int **)(iVar21 + DAT_0011697c) + 0x30) == 0) {
            **(undefined4 **)(iVar21 + DAT_00116998) = 0xe;
          }
          else {
            **(undefined4 **)(iVar21 + DAT_00116998) = 0xc;
          }
          Monster_Item_Drop(false);
        }
        else {
          piVar6 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar21 + DAT_001169a8),1);
          iVar2 = (**(code **)(*piVar6 + 0xa8))();
          if (*(int *)(*(int *)(iVar2 + 4) + 100) != 7) {
            Monster_die(p_Var1,in_r3);
          }
        }
        ppiVar20 = *(int ***)(iVar21 + DAT_001169ac);
        (**(code **)(**ppiVar20 + 0xd0))(*ppiVar20,*(undefined4 *)(*(int *)(p_Var1 + 4) + 0x128),1);
        (**(code **)(**ppiVar20 + 0xd0))(*ppiVar20,*(undefined4 *)(*(int *)(p_Var1 + 4) + 0x118),1);
        *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x128) = 0;
        *(undefined4 *)(*(int *)(p_Var1 + 4) + 0x118) = 0;
        if (*(int *)(*(int *)(p_Var1 + 4) + 0x120) != 0) {
          (**(code **)(**ppiVar20 + 0xd0))(*ppiVar20,*(int *)(*(int *)(p_Var1 + 4) + 0x120),1);
        }
        ani_remove_data((CCSprite *)param_3);
        (**(code **)(**ppiVar20 + 0xd0))(*ppiVar20,param_3,1);
        pCVar8 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
        cocos2d::CCTextureCache::removeUnusedTextures(pCVar8);
        pCVar8 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
        cocos2d::CCTextureCache::removeAllTextures(pCVar8);
        *piVar18 = *piVar18 + -1;
        FUN_00116c6e();
        return;
      }
      iVar2 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar2 == 0) {
        puVar19 = (undefined4 *)(**(code **)(**(int **)(*(int *)(p_Var1 + 4) + 0x118) + 0x38))();
        uVar3 = *puVar19;
        puVar19 = (undefined4 *)(**(code **)(**(int **)(*(int *)(p_Var1 + 4) + 0x118) + 0x7c))();
        uVar7 = __mulsf3(*puVar19,0x3f000000);
        __subsf3(uVar3,uVar7);
        iVar2 = __fixsfsi();
        puVar19 = (undefined4 *)(**(code **)(**(int **)(*(int *)(p_Var1 + 4) + 0x118) + 0x38))();
        uVar3 = *puVar19;
        puVar19 = (undefined4 *)(**(code **)(**(int **)(*(int *)(p_Var1 + 4) + 0x118) + 0x7c))();
        uVar7 = __mulsf3(*puVar19,0x3f000000);
        __addsf3(uVar3,uVar7);
        iVar4 = __fixsfsi();
        uVar3 = Random(iVar2,iVar4);
        (**(code **)(**(int **)(*(int *)(p_Var1 + 4) + 0x118) + 0x38))();
        uVar23 = __floatsisf(uVar3);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_20,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
        iVar2 = Random(8,10);
        iVar4 = Random(6,10);
        Set_Dust_Particle(param_3,local_20,local_1c,iVar2,extraout_s0_26,extraout_s1_01,iVar4);
        ani_Die_ani2(param_3);
        piVar18 = *(int **)(p_Var1 + 4);
        if (piVar18[0x19] == 4) {
          if (*piVar18 == 0) {
            if (piVar18[1] == DAT_0011698c) {
              **(undefined4 **)(iVar21 + DAT_00116998) = 0xd;
            }
          }
          else if (*piVar18 == 1) {
            Monster_Item_Drop(false);
          }
        }
      }
      if (**(int **)(p_Var1 + 4) != 0) {
        FUN_00116c6e();
        return;
      }
      if ((*(int **)(p_Var1 + 4))[1] != DAT_0011698c) {
        FUN_00116c6e();
        return;
      }
      pCVar5 = **(CCNode ***)(iVar21 + DAT_0011699c);
      pCVar9 = (CCPoint *)(**(code **)(*(int *)param_3 + 0x38))(param_3);
      goto LAB_00116b80;
    }
    if (uVar17 == 3) {
      if (*(int *)(**(int **)(iVar21 + DAT_00116c74) + 0x30) == 0) {
        FUN_00116c6e();
        return;
      }
    }
    else if (uVar17 != 7) {
      FUN_00116c6e();
      return;
    }
    ppiVar20 = *(int ***)(iVar21 + DAT_00116c78);
    piVar18 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
    piVar18 = (int *)(**(code **)(*piVar18 + 0xa8))();
    if (*(int *)(piVar18[1] + 100) == 7) {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
      cocos2d::CCNode::getChildByTag(pCVar5,*(int *)(*(int *)(*piVar18 + 0x1c) + 0x290));
      iVar2 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar2 == 0) {
        **(undefined4 **)(iVar21 + DAT_00116cdc) = 0xe;
        Monster_Item_Drop(true);
      }
    }
    else {
      pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar20,1);
      ani_Die_ani(pCVar11,extraout_s0_27);
      **(undefined **)(iVar21 + DAT_00116c80) = 1;
      iVar2 = *(int *)(piVar18[1] + 4);
      if (iVar2 == DAT_00116c84) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116c8c + ' ';
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116c90) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116c94 + '>';
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == 16000) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116c98 + 'd';
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116c9c) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116ca0 + -0x7e;
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116ca4) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116ca8 + -0x62;
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116cac) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116cb0 + -0x46;
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116cb4) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116cb8 + -0x2a;
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116cbc) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116cc0 + -0xe;
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116cc4) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116cc8 + '\x0e';
          goto LAB_00116a3c;
        }
      }
      else if (iVar2 == DAT_00116ccc) {
        if (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0') {
          pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar12 = (char)DAT_00116cd0 + '*';
LAB_00116a3c:
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar10,(bool)cVar12);
        }
      }
      else if ((iVar2 == DAT_00116cd4) && (*(char *)(**(int **)(iVar21 + DAT_00116c88) + 1) != '\0')
              ) {
        pcVar10 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar12 = (char)DAT_00116cd8 + 'F';
        goto LAB_00116a3c;
      }
    }
  }
LAB_00116b6e:
  pCVar5 = **(CCNode ***)(iVar21 + DAT_00116ce0);
  pCVar9 = (CCPoint *)(**(code **)(**ppiVar20 + 0x38))();
LAB_00116b80:
  KG_BG_Hero_Move(pCVar5,*pCVar9);
  FUN_00116c6e();
  return;
}


