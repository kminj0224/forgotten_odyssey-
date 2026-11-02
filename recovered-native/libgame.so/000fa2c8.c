/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fa2c8  Symbol: Boss_17000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_17000_Skill_Call() */

void Boss_17000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CCArray *pCVar6;
  CCLayer *pCVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int **ppiVar14;
  int iVar15;
  uint uVar16;
  code *pcVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar18;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar10 = DAT_000fa5c0 + 0xfa2d4;
  ppiVar14 = *(int ***)(iVar10 + DAT_000fa5c4);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
  piVar12 = *ppiVar14;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  iVar3 = Unit_Collistion_Name((CCLayer *)*ppiVar14,false);
  iVar15 = piVar2[1];
  uVar4 = __addsf3(*(undefined4 *)(iVar15 + 0x3c),**(undefined4 **)(iVar10 + DAT_000fa5c8));
  *(undefined4 *)(iVar15 + 0x3c) = uVar4;
  iVar15 = piVar2[1];
  if (*(int *)(iVar15 + 100) == -1) {
LAB_000fa366:
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar11 = *(undefined4 *)(iVar15 + 0x3c);
    uVar13 = *(undefined4 *)(*(int *)(*(int *)(iVar15 + 100) * 4 + *piVar2) + 0x294);
    uVar4 = __addsf3(uVar13,piVar12[0x47]);
    iVar5 = __aeabi_fcmpge(uVar11,uVar4);
    if ((iVar5 == 0) || (*(int *)(iVar15 + 0x30) != 2)) {
      iVar15 = __aeabi_fcmpgt(uVar11,uVar13);
      if (iVar15 != 0) goto LAB_000fa366;
    }
    else {
      *(undefined4 *)(iVar15 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  iVar15 = piVar2[1];
  if (iVar3 == 0) {
    cocos2d::CCNode::getChildByTag
              ((CCNode *)piVar1,*(int *)(*(int *)(*(int *)(iVar15 + 100) * 4 + *piVar2) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    iVar3 = piVar2[1];
    if (((iVar10 == 0) || (*(int *)(iVar3 + 100) == 0)) && (*(int *)(iVar3 + 100) != 7)) {
      *(undefined *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
    goto LAB_000fa624;
  }
  iVar3 = piVar12[0x46];
  if (iVar3 == 0) {
    uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000fa5a0,DAT_000fa5a4);
    if ((iVar3 == 0) || (*(int *)(iVar15 + 0x30) != 1)) {
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fa624;
      ani_attack_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar10 + DAT_000fa5d0) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000fa5d4 + '\x1e'));
      }
      iVar10 = 0xfe;
      goto LAB_000fa58c;
    }
    *(undefined4 *)(iVar15 + 0x58) = DAT_000fa5cc;
    piVar1 = *ppiVar14;
    iVar10 = __mulsf3(*(undefined4 *)(piVar2[1] + 0x38),0x3f000000);
    pCVar6 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0,iVar10);
    if (pCVar6 != (CCArray *)0x0) {
      iVar10 = cocos2d::CCArray::count(pCVar6);
      for (uVar16 = 0; (int)uVar16 < iVar10; uVar16 = uVar16 + 1) {
        pCVar7 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar6,uVar16);
        SetKnockBack(pCVar7,extraout_s0_00);
      }
      cocos2d::CCObject::release((CCObject *)pCVar6);
    }
    iVar10 = piVar12[0x45];
    piVar12[0x45] = iVar10 + 1;
    if (iVar10 + 1 == 2) {
      iVar10 = 1;
LAB_000fa49c:
      piVar12[0x46] = iVar10;
LAB_000fa556:
      piVar12[0x45] = 0;
    }
LAB_000fa558:
    iVar10 = piVar2[1];
    uVar4 = 2;
  }
  else {
    if (iVar3 == 1) {
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
      iVar3 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000fa5a8,DAT_000fa5ac)
      ;
      if ((iVar3 != 0) && (*(int *)(iVar15 + 0x30) == 1)) {
        *(undefined4 *)(iVar15 + 0x58) = DAT_000fa5d8;
        piVar1 = *ppiVar14;
        iVar10 = __mulsf3(*(undefined4 *)(piVar2[1] + 0x38),0x3f000000);
        pCVar6 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0_01,iVar10);
        if (pCVar6 != (CCArray *)0x0) {
          iVar10 = cocos2d::CCArray::count(pCVar6);
          for (uVar16 = 0; (int)uVar16 < iVar10; uVar16 = uVar16 + 1) {
            pCVar7 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar6,uVar16);
            SetStun(pCVar7,extraout_s0_02);
          }
          cocos2d::CCObject::release((CCObject *)pCVar6);
        }
        iVar10 = piVar12[0x45] + 1;
        piVar12[0x45] = iVar10;
        if (iVar10 == 2) goto LAB_000fa49c;
        goto LAB_000fa558;
      }
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fa624;
      ani_attack_2_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar10 + DAT_000fa5d0) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000fa5dc + -0x36));
      }
      iVar10 = 0xff;
    }
    else {
      if (iVar3 != 2) goto LAB_000fa624;
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
      iVar3 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000fa5b0,DAT_000fa5b4)
      ;
      if ((iVar3 != 0) && (*(int *)(iVar15 + 0x30) == 1)) {
        *(undefined4 *)(iVar15 + 0x58) = DAT_000fa5e0;
        piVar1 = *ppiVar14;
        uVar18 = __extendsfdf2(*(undefined4 *)(piVar2[1] + 0x38));
        __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000fa5b8,DAT_000fa5bc);
        iVar10 = __truncdfsf2();
        pCVar6 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0_03,iVar10);
        if (pCVar6 != (CCArray *)0x0) {
          iVar10 = cocos2d::CCArray::count(pCVar6);
          for (uVar16 = 0; (int)uVar16 < iVar10; uVar16 = uVar16 + 1) {
            pCVar7 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar6,uVar16);
            SetKnockBack(pCVar7,extraout_s0_04);
          }
          cocos2d::CCObject::release((CCObject *)pCVar6);
        }
        iVar10 = piVar12[0x45];
        piVar12[0x45] = iVar10 + 1;
        if (iVar10 + 1 != 1) goto LAB_000fa558;
        piVar12[0x46] = 0;
        goto LAB_000fa556;
      }
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fa624;
      ani_attack_1_2_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar10 + DAT_000fa5d0) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000fa5e4 + -0x7c));
      }
      iVar10 = 0xfc;
    }
LAB_000fa58c:
    piVar12[0x47] = iVar10 << 0x16;
    *(undefined4 *)(piVar2[1] + 0x3c) = 0;
    iVar10 = piVar2[1];
    uVar4 = 1;
  }
  *(undefined4 *)(iVar10 + 0x30) = uVar4;
LAB_000fa624:
  iVar10 = piVar2[1];
  if (*(int *)(iVar10 + 100) == 1) {
    if (*(char *)(iVar10 + 0x90) == '\0') {
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x14));
      uVar4 = DAT_000fa6d8;
      uVar11 = DAT_000fa6dc;
    }
    else {
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x14));
      uVar18 = __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000fa6d8,DAT_000fa6dc);
      uVar4 = DAT_000fa6e0;
      uVar11 = DAT_000fa6e4;
    }
    __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar4,uVar11);
    uVar4 = __truncdfsf2();
    pcVar17 = *(code **)(**ppiVar14 + 0x3c);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    __subsf3(*puVar9,uVar4);
    piVar1 = *ppiVar14;
    uVar18 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    (*pcVar17)(piVar1,aCStack_28);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    iVar10 = __aeabi_fcmplt(*puVar9,0);
    if (iVar10 != 0) {
      piVar1 = *ppiVar14;
      pcVar17 = *(code **)(*piVar1 + 0x3c);
      uVar18 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      (*pcVar17)(piVar1,aCStack_20);
    }
  }
  return;
}


