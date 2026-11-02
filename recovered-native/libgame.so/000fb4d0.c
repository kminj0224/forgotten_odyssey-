/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fb4d0  Symbol: Boss_24000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_24000_Skill_Call() */

void Boss_24000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  CCArray *pCVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  Effect *pEVar13;
  int **ppiVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  CCLayer *pCVar18;
  code *pcVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar20;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar9 = DAT_000fb800 + 0xfb4dc;
  ppiVar14 = *(int ***)(iVar9 + DAT_000fb804);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
  piVar11 = *ppiVar14;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  iVar3 = Unit_Collistion_Name((CCLayer *)*ppiVar14,false);
  iVar15 = piVar2[1];
  uVar4 = __addsf3(*(undefined4 *)(iVar15 + 0x3c),**(undefined4 **)(iVar9 + DAT_000fb808));
  *(undefined4 *)(iVar15 + 0x3c) = uVar4;
  iVar15 = piVar2[1];
  iVar17 = *(int *)(iVar15 + 100);
  if (iVar17 == -1) {
    *(undefined4 *)(iVar15 + 0x110) = DAT_000fb80c;
LAB_000fb57c:
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar10 = *(undefined4 *)(iVar15 + 0x3c);
    uVar12 = *(undefined4 *)(*(int *)(iVar17 * 4 + *piVar2) + 0x294);
    uVar4 = __addsf3(uVar12,piVar11[0x47]);
    iVar5 = __aeabi_fcmpge(uVar10,uVar4);
    if ((iVar5 == 0) || (*(int *)(iVar15 + 0x30) != 2)) {
      iVar15 = __aeabi_fcmpgt(uVar10,uVar12);
      if ((iVar15 != 0) && ((iVar17 != 1 && (iVar17 != 0)))) goto LAB_000fb57c;
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
    iVar9 = cocos2d::CCNode::numberOfRunningActions();
    iVar3 = piVar2[1];
    if ((((iVar9 == 0) || (*(int *)(iVar3 + 100) == 0)) && (*(int *)(iVar3 + 100) != 7)) &&
       (iVar9 = __aeabi_fcmpge(*(undefined4 *)(iVar3 + 0x3c),piVar11[0x47]), iVar9 != 0)) {
      *(undefined *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
    goto LAB_000fb920;
  }
  iVar3 = piVar11[0x46];
  if (iVar3 == 0) {
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fb7f0,DAT_000fb7f4);
    if ((iVar3 == 0) || (*(int *)(iVar15 + 0x30) != 1)) {
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fb920;
      ani_attack_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar9 + DAT_000fb810) + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fb814 + -8));
      }
      pEVar13 = *(Effect **)(**(int **)(iVar9 + DAT_000fb818) + DAT_000fb81c);
      pCVar18 = **(CCLayer ***)(iVar9 + DAT_000fb820);
      puVar8 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*puVar8,DAT_000fb824);
      iVar9 = __fixsfsi();
      iVar3 = (**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*(undefined4 *)(iVar3 + 4),DAT_000fb828);
      iVar3 = __fixsfsi();
      iVar15 = (**(code **)(**ppiVar14 + 0x14))();
      Effect::Hero_Effect(pEVar13,pCVar18,8,iVar9,iVar3,iVar15,0,true);
      iVar9 = 0x3f800000;
LAB_000fb8c6:
      piVar11[0x47] = iVar9;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 1;
      goto LAB_000fb920;
    }
    Unit_Live_Collistion_attck((CCLayer *)*ppiVar14,extraout_s0,*(int *)(iVar15 + 0x38));
    iVar9 = piVar11[0x45];
    piVar11[0x45] = iVar9 + 1;
    if (iVar9 + 1 == 1) {
      piVar11[0x46] = 1;
      piVar11[0x45] = 0;
LAB_000fb7e0:
      *(undefined4 *)(piVar2[1] + 0x110) = DAT_000fb834;
    }
  }
  else if (iVar3 == 1) {
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fb7f8,DAT_000fb7fc);
    if ((iVar3 == 0) || (*(int *)(iVar15 + 0x30) != 1)) {
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fb920;
      ani_attack_2_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar9 + DAT_000fb810) + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fb82c + -8));
      }
      pEVar13 = *(Effect **)(**(int **)(iVar9 + DAT_000fb818) + DAT_000fb81c);
      pCVar18 = **(CCLayer ***)(iVar9 + DAT_000fb820);
      puVar8 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*puVar8,DAT_000fb830);
      iVar9 = __fixsfsi();
      iVar3 = (**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*(undefined4 *)(iVar3 + 4),DAT_000fb828);
      iVar3 = __fixsfsi();
      iVar15 = (**(code **)(**ppiVar14 + 0x14))();
      Effect::Hero_Effect(pEVar13,pCVar18,8,iVar9,iVar3,iVar15,1,true);
      iVar9 = 0x40000000;
      goto LAB_000fb8c6;
    }
    pCVar7 = (CCArray *)
             Unit_Live_Collistion_attck((CCLayer *)*ppiVar14,extraout_s0_00,*(int *)(iVar15 + 0x38))
    ;
    if (pCVar7 != (CCArray *)0x0) {
      iVar9 = cocos2d::CCArray::count(pCVar7);
      for (uVar16 = 0; (int)uVar16 < iVar9; uVar16 = uVar16 + 1) {
        pCVar18 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar16);
        SetKnockBack(pCVar18,extraout_s0_01);
      }
      cocos2d::CCObject::release((CCObject *)pCVar7);
    }
    iVar9 = piVar11[0x45];
    piVar11[0x45] = iVar9 + 1;
    if (iVar9 + 1 == 1) {
      piVar11[0x46] = 2;
LAB_000fb7de:
      piVar11[0x45] = 0;
      goto LAB_000fb7e0;
    }
  }
  else {
    if (iVar3 != 2) goto LAB_000fb920;
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fb7f8,DAT_000fb7fc);
    if ((iVar3 == 0) || (*(int *)(iVar15 + 0x30) != 1)) {
      if (*(int *)(iVar15 + 0x30) != 0) goto LAB_000fb920;
      ani_attack_1_2_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar9 + DAT_000fb9e8) + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fb9ec + '\\'));
      }
      pEVar13 = *(Effect **)(**(int **)(iVar9 + DAT_000fb9f0) + DAT_000fb9f4);
      pCVar18 = **(CCLayer ***)(iVar9 + DAT_000fb9f8);
      puVar8 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*puVar8,DAT_000fb9fc);
      iVar9 = __fixsfsi();
      iVar3 = (**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*(undefined4 *)(iVar3 + 4),DAT_000fba00);
      iVar3 = __fixsfsi();
      iVar15 = (**(code **)(**ppiVar14 + 0x14))();
      Effect::Hero_Effect(pEVar13,pCVar18,8,iVar9,iVar3,iVar15,2,true);
      iVar9 = DAT_000fba04;
      goto LAB_000fb8c6;
    }
    iVar9 = __mulsf3(*(undefined4 *)(iVar15 + 0x38),0x3fc00000);
    pCVar7 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)*ppiVar14,extraout_s0_02,iVar9);
    if (pCVar7 != (CCArray *)0x0) {
      iVar9 = cocos2d::CCArray::count(pCVar7);
      for (uVar16 = 0; (int)uVar16 < iVar9; uVar16 = uVar16 + 1) {
        piVar1 = *ppiVar14;
        pCVar18 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar16);
        Target_Attack((CCLayer *)piVar1,pCVar18,extraout_s0_03);
      }
      cocos2d::CCObject::release((CCObject *)pCVar7);
    }
    iVar9 = piVar11[0x45];
    piVar11[0x45] = iVar9 + 1;
    if (iVar9 + 1 == 2) {
      piVar11[0x46] = 0;
      goto LAB_000fb7de;
    }
  }
  *(undefined4 *)(piVar2[1] + 0x30) = 2;
LAB_000fb920:
  if (*(int *)(piVar2[1] + 100) == 1) {
    *(undefined4 *)(piVar2[1] + 0x30) = 0;
    uVar4 = *(undefined4 *)(piVar2[1] + 0x14);
    if (*(char *)(piVar2[1] + 0x90) == '\0') {
      uVar20 = __extendsfdf2(uVar4);
      uVar4 = DAT_000fb9d8;
      uVar10 = DAT_000fb9dc;
    }
    else {
      uVar20 = __extendsfdf2(uVar4);
      uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fb9d8,DAT_000fb9dc);
      uVar4 = DAT_000fb9e0;
      uVar10 = DAT_000fb9e4;
    }
    __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar4,uVar10);
    uVar4 = __truncdfsf2();
    pcVar19 = *(code **)(**ppiVar14 + 0x3c);
    puVar8 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    __subsf3(*puVar8,uVar4);
    piVar1 = *ppiVar14;
    uVar20 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    (*pcVar19)(piVar1,aCStack_28);
    puVar8 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    iVar9 = __aeabi_fcmplt(*puVar8,0);
    if (iVar9 != 0) {
      piVar1 = *ppiVar14;
      pcVar19 = *(code **)(*piVar1 + 0x3c);
      uVar20 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
      (*pcVar19)(piVar1,aCStack_20);
    }
  }
  return;
}


