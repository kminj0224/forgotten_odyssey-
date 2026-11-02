/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000faea0  Symbol: Boss_23000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_23000_Skill_Call() */

void Boss_23000_Skill_Call(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CCArray *pCVar7;
  CCLayer *pCVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  CCNode *pCVar14;
  Effect *pEVar15;
  int **ppiVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  code *pcVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar22;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar17 = DAT_000fb210 + 0xfaeac;
  ppiVar16 = *(int ***)(iVar17 + DAT_000fb214);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
  piVar11 = *ppiVar16;
  piVar3 = (int *)(**(code **)(*piVar2 + 0xa8))();
  if (*(int *)(piVar3[1] + 100) == 7) {
    return;
  }
  iVar4 = Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
  iVar19 = piVar3[1];
  uVar5 = __addsf3(*(undefined4 *)(iVar19 + 0x3c),**(undefined4 **)(iVar17 + DAT_000fb218));
  *(undefined4 *)(iVar19 + 0x3c) = uVar5;
  iVar20 = piVar3[1];
  iVar19 = *(int *)(iVar20 + 100);
  if (iVar19 == -1) {
    *(undefined4 *)(iVar20 + 0x110) = DAT_000fb21c;
LAB_000faf4e:
    ani_Base_ani((CCLayer *)piVar2);
  }
  else {
    uVar12 = *(undefined4 *)(iVar20 + 0x3c);
    uVar13 = *(undefined4 *)(*(int *)(iVar19 * 4 + *piVar3) + 0x294);
    uVar5 = __addsf3(uVar13,piVar11[0x47]);
    iVar6 = __aeabi_fcmpge(uVar12,uVar5);
    if ((iVar6 == 0) || (*(int *)(iVar20 + 0x30) != 2)) {
      iVar20 = __aeabi_fcmpgt(uVar12,uVar13);
      if ((iVar20 != 0) && ((iVar19 != 1 && (iVar19 != 0)))) goto LAB_000faf4e;
    }
    else {
      *(undefined4 *)(iVar20 + 0x3c) = 0;
      *(undefined4 *)(piVar3[1] + 0x30) = 0;
    }
  }
  iVar19 = piVar3[1];
  if (iVar4 == 0) {
    cocos2d::CCNode::getChildByTag
              ((CCNode *)piVar2,*(int *)(*(int *)(*(int *)(iVar19 + 100) * 4 + *piVar3) + 0x290));
    iVar17 = cocos2d::CCNode::numberOfRunningActions();
    iVar4 = piVar3[1];
    if ((((iVar17 == 0) || (*(int *)(iVar4 + 100) == 0)) && (*(int *)(iVar4 + 100) != 7)) &&
       (iVar17 = __aeabi_fcmpge(*(undefined4 *)(iVar4 + 0x3c),piVar11[0x47]), iVar17 != 0)) {
      *(undefined *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(piVar3[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar2);
    }
    goto LAB_000fb3ce;
  }
  iVar4 = piVar11[0x46];
  if (iVar4 == 0) {
    uVar22 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb1f8,DAT_000fb1fc);
    if ((iVar4 != 0) && (*(int *)(iVar19 + 0x30) == 1)) {
      pCVar14 = **(CCNode ***)(iVar17 + DAT_000fb220);
      puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
      __subsf3(*puVar10,DAT_000fb224);
      iVar17 = (**(code **)(**ppiVar16 + 0x38))();
      uVar22 = __addsf3(*(undefined4 *)(iVar17 + 4),DAT_000fb228);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_38,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      piVar2 = *ppiVar16;
      iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
      iVar17 = DAT_000fb22c;
      uVar22 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
      __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb200,DAT_000fb204);
      bVar1 = (bool)__fixdfsi();
      Kris_Bullet_Draw(pCVar14,(CCSprite *)piVar2,local_38,local_34,iVar4,iVar17,bVar1,false);
      iVar17 = piVar11[0x45];
      piVar11[0x45] = iVar17 + 1;
      if (iVar17 + 1 == 3) {
        piVar11[0x46] = 1;
        piVar11[0x45] = 0;
LAB_000fb2da:
        *(undefined4 *)(piVar3[1] + 0x110) = DAT_000fb4a8;
      }
LAB_000fb2e2:
      *(undefined4 *)(piVar3[1] + 0x30) = 2;
      goto LAB_000fb3ce;
    }
    if (*(int *)(iVar19 + 0x30) != 0) goto LAB_000fb3ce;
    ani_attack_ani((CCLayer *)piVar2);
    if (*(char *)(**(int **)(iVar17 + DAT_000fb230) + 1) != '\0') {
      pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_000fb234 + ','));
    }
    pEVar15 = *(Effect **)(**(int **)(iVar17 + DAT_000fb238) + DAT_000fb23c);
    pCVar8 = **(CCLayer ***)(iVar17 + DAT_000fb220);
    puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*puVar10,DAT_000fb240);
    iVar17 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000fb244);
    iVar4 = __fixsfsi();
    iVar19 = (**(code **)(**ppiVar16 + 0x14))();
    Effect::Hero_Effect(pEVar15,pCVar8,3,iVar17,iVar4,iVar19,0,true);
    iVar17 = 0x3f800000;
  }
  else if (iVar4 == 1) {
    uVar22 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb208,DAT_000fb20c);
    if ((iVar4 != 0) && (*(int *)(iVar19 + 0x30) == 1)) {
      pCVar7 = (CCArray *)
               Unit_Live_Collistion_attck((CCLayer *)*ppiVar16,extraout_s0,*(int *)(iVar19 + 0x38));
      if (pCVar7 != (CCArray *)0x0) {
        iVar4 = cocos2d::CCArray::count(pCVar7);
        for (uVar18 = 0; (int)uVar18 < iVar4; uVar18 = uVar18 + 1) {
          pCVar8 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar18);
          SetKnockBack(pCVar8,extraout_s0_00);
        }
        cocos2d::CCObject::release((CCObject *)pCVar7);
      }
      pCVar14 = **(CCNode ***)(iVar17 + DAT_000fb220);
      puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
      __subsf3(*puVar10,DAT_000fb224);
      iVar17 = (**(code **)(**ppiVar16 + 0x38))();
      uVar22 = __addsf3(*(undefined4 *)(iVar17 + 4),DAT_000fb228);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_30,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      piVar2 = *ppiVar16;
      iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
      iVar17 = DAT_000fb22c;
      bVar1 = (bool)__fixsfsi(*(undefined4 *)(piVar3[1] + 0x38));
      Kris_Bullet_Draw(pCVar14,(CCSprite *)piVar2,local_30,local_2c,iVar4,iVar17,bVar1,false);
      iVar17 = piVar11[0x45];
      piVar11[0x45] = iVar17 + 1;
      if (iVar17 + 1 == 1) {
        piVar11[0x46] = 2;
        piVar11[0x45] = 0;
        goto LAB_000fb2da;
      }
      goto LAB_000fb2e2;
    }
    if (*(int *)(iVar19 + 0x30) != 0) goto LAB_000fb3ce;
    ani_attack_2_ani((CCLayer *)piVar2);
    if (*(char *)(**(int **)(iVar17 + DAT_000fb230) + 1) != '\0') {
      pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_000fb248 + -0x74));
    }
    pEVar15 = *(Effect **)(**(int **)(iVar17 + DAT_000fb238) + DAT_000fb23c);
    pCVar8 = **(CCLayer ***)(iVar17 + DAT_000fb220);
    puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*puVar10,DAT_000fb224);
    iVar17 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000fb244);
    iVar4 = __fixsfsi();
    iVar19 = (**(code **)(**ppiVar16 + 0x14))();
    Effect::Hero_Effect(pEVar15,pCVar8,3,iVar17,iVar4,iVar19,1,true);
    iVar17 = 0x40000000;
  }
  else {
    if (iVar4 != 2) goto LAB_000fb3ce;
    uVar22 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb480,DAT_000fb484);
    if ((iVar4 != 0) && (*(int *)(iVar19 + 0x30) == 1)) {
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x38));
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb488,DAT_000fb48c);
      __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb490,DAT_000fb494);
      iVar17 = __truncdfsf2();
      pCVar7 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)*ppiVar16,extraout_s0_01,iVar17);
      if (pCVar7 != (CCArray *)0x0) {
        iVar17 = cocos2d::CCArray::count(pCVar7);
        for (uVar18 = 0; (int)uVar18 < iVar17; uVar18 = uVar18 + 1) {
          piVar2 = *ppiVar16;
          pCVar8 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar18);
          Target_Attack((CCLayer *)piVar2,pCVar8,extraout_s0_02);
        }
        cocos2d::CCObject::release((CCObject *)pCVar7);
      }
      iVar17 = piVar11[0x45];
      piVar11[0x45] = iVar17 + 1;
      if (iVar17 + 1 == 1) {
        piVar11[0x46] = 0;
        piVar11[0x45] = 0;
        goto LAB_000fb2da;
      }
      goto LAB_000fb2e2;
    }
    if (*(int *)(iVar19 + 0x30) != 0) goto LAB_000fb3ce;
    ani_attack_1_2_ani((CCLayer *)piVar2);
    if (*(char *)(**(int **)(iVar17 + DAT_000fb4ac) + 1) != '\0') {
      pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_000fb4b0 + '\x0e'));
    }
    pEVar15 = *(Effect **)(**(int **)(iVar17 + DAT_000fb4b4) + DAT_000fb4b8);
    pCVar8 = **(CCLayer ***)(iVar17 + DAT_000fb4bc);
    puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*puVar10,DAT_000fb4c0);
    iVar17 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000fb4c4);
    iVar4 = __fixsfsi();
    iVar19 = (**(code **)(**ppiVar16 + 0x14))();
    Effect::Hero_Effect(pEVar15,pCVar8,3,iVar17,iVar4,iVar19,2,true);
    iVar17 = DAT_000fb4c8;
  }
  piVar11[0x47] = iVar17;
  *(undefined4 *)(piVar3[1] + 0x3c) = 0;
  *(undefined4 *)(piVar3[1] + 0x30) = 1;
LAB_000fb3ce:
  if (*(int *)(piVar3[1] + 100) == 1) {
    *(undefined4 *)(piVar3[1] + 0x30) = 0;
    uVar5 = *(undefined4 *)(piVar3[1] + 0x14);
    if (*(char *)(piVar3[1] + 0x90) == '\0') {
      uVar22 = __extendsfdf2(uVar5);
      uVar5 = DAT_000fb498;
      uVar12 = DAT_000fb49c;
    }
    else {
      uVar22 = __extendsfdf2(uVar5);
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fb498,DAT_000fb49c);
      uVar5 = DAT_000fb4a0;
      uVar12 = DAT_000fb4a4;
    }
    __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar5,uVar12);
    uVar5 = __truncdfsf2();
    pcVar21 = *(code **)(**ppiVar16 + 0x3c);
    puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*puVar10,uVar5);
    piVar2 = *ppiVar16;
    uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*pcVar21)(piVar2,aCStack_28);
    puVar10 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    iVar17 = __aeabi_fcmplt(*puVar10,0);
    if (iVar17 != 0) {
      piVar2 = *ppiVar16;
      pcVar21 = *(code **)(*piVar2 + 0x3c);
      uVar22 = (**(code **)(*piVar2 + 0x38))(piVar2);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar21)(piVar2,aCStack_20);
    }
  }
  return;
}


