/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fba10  Symbol: Boss_25000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_25000_Skill_Call() */

void Boss_25000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  CCArray *pCVar7;
  CCSpriteFrameCache *pCVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Effect *pEVar12;
  CCLayer *pCVar13;
  int **ppiVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  code *pcVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar22;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar20 = DAT_000fbd48 + 0xfba1c;
  ppiVar14 = *(int ***)(iVar20 + DAT_000fbd4c);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
  piVar15 = *ppiVar14;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  iVar3 = Unit_Collistion_Name((CCLayer *)*ppiVar14,false);
  iVar16 = piVar2[1];
  uVar4 = __addsf3(*(undefined4 *)(iVar16 + 0x3c),**(undefined4 **)(iVar20 + DAT_000fbd50));
  *(undefined4 *)(iVar16 + 0x3c) = uVar4;
  iVar17 = piVar2[1];
  iVar16 = *(int *)(iVar17 + 100);
  if (iVar16 == -1) {
    *(undefined4 *)(iVar17 + 0x110) = DAT_000fbd54;
LAB_000fbabe:
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar10 = *(undefined4 *)(iVar17 + 0x3c);
    uVar11 = *(undefined4 *)(*(int *)(iVar16 * 4 + *piVar2) + 0x294);
    uVar4 = __addsf3(uVar11,piVar15[0x47]);
    iVar5 = __aeabi_fcmpge(uVar10,uVar4);
    if ((iVar5 == 0) || (*(int *)(iVar17 + 0x30) != 2)) {
      iVar17 = __aeabi_fcmpgt(uVar10,uVar11);
      if ((iVar17 != 0) && ((iVar16 != 1 && (iVar16 != 0)))) goto LAB_000fbabe;
    }
    else {
      *(undefined4 *)(iVar17 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  if (iVar3 == 0) {
    cocos2d::CCNode::getChildByTag
              ((CCNode *)piVar1,*(int *)(*(int *)(*(int *)(piVar2[1] + 100) * 4 + *piVar2) + 0x290))
    ;
    iVar3 = cocos2d::CCNode::numberOfRunningActions();
    iVar16 = piVar2[1];
    if ((((iVar3 == 0) || (*(int *)(iVar16 + 100) == 0)) && (*(int *)(iVar16 + 100) != 7)) &&
       (iVar3 = __aeabi_fcmpge(*(undefined4 *)(iVar16 + 0x3c),piVar15[0x47]), iVar3 != 0)) {
      *(undefined *)(iVar16 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
    goto LAB_000fbf80;
  }
  iVar3 = piVar15[0x46];
  if (iVar3 == 0) {
    iVar16 = piVar2[1];
    uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fbd30,DAT_000fbd34);
    if ((iVar3 == 0) || (*(int *)(iVar16 + 0x30) != 1)) {
      if (*(int *)(iVar16 + 0x30) != 0) goto LAB_000fbf80;
      ani_attack_1_2_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar20 + DAT_000fbd58) + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fbd5c + '<'));
      }
      pEVar12 = *(Effect **)(**(int **)(iVar20 + DAT_000fbd60) + DAT_000fbd64);
      pCVar13 = **(CCLayer ***)(iVar20 + DAT_000fbd68);
      puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*puVar9,DAT_000fbd6c);
      iVar3 = __fixsfsi();
      iVar16 = (**(code **)(**ppiVar14 + 0x38))();
      __subsf3(*(undefined4 *)(iVar16 + 4),DAT_000fbd70);
      iVar16 = __fixsfsi();
      iVar17 = (**(code **)(**ppiVar14 + 0x14))();
      Effect::Hero_Effect(pEVar12,pCVar13,8,iVar3,iVar16,iVar17,0,true);
      iVar3 = 0x3f800000;
LAB_000fbe0a:
      piVar15[0x47] = iVar3;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 1;
      goto LAB_000fbf80;
    }
    Unit_Live_Collistion_attck((CCLayer *)*ppiVar14,extraout_s0,*(int *)(iVar16 + 0x38));
    iVar3 = piVar15[0x45];
    piVar15[0x45] = iVar3 + 1;
    if (iVar3 + 1 == 1) {
      piVar15[0x46] = 1;
LAB_000fbe4c:
      piVar15[0x45] = 0;
LAB_000fbe4e:
      *(undefined4 *)(piVar2[1] + 0x110) = DAT_000fc078;
    }
LAB_000fbe56:
    iVar3 = piVar2[1];
    uVar4 = 2;
  }
  else {
    if (iVar3 == 1) {
      iVar16 = piVar2[1];
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar3 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fbd38,DAT_000fbd3c)
      ;
      if ((iVar3 == 0) || (*(int *)(iVar16 + 0x30) != 1)) {
        if (*(int *)(iVar16 + 0x30) != 0) goto LAB_000fbf80;
        ani_attack_3_ani((CCLayer *)piVar1);
        if (*(char *)(**(int **)(iVar20 + DAT_000fbd58) + 1) != '\0') {
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fbd74 + '8'));
        }
        pEVar12 = *(Effect **)(**(int **)(iVar20 + DAT_000fbd60) + DAT_000fbd64);
        pCVar13 = **(CCLayer ***)(iVar20 + DAT_000fbd68);
        puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
        __subsf3(*puVar9,DAT_000fbd78);
        iVar3 = __fixsfsi();
        iVar16 = (**(code **)(**ppiVar14 + 0x38))();
        __subsf3(*(undefined4 *)(iVar16 + 4),DAT_000fbd70);
        iVar16 = __fixsfsi();
        iVar17 = (**(code **)(**ppiVar14 + 0x14))();
        Effect::Hero_Effect(pEVar12,pCVar13,8,iVar3,iVar16,iVar17,1,true);
        iVar3 = 0x40000000;
        goto LAB_000fbe0a;
      }
      pCVar7 = (CCArray *)
               Unit_Live_Collistion_attck
                         ((CCLayer *)*ppiVar14,extraout_s0_00,*(int *)(iVar16 + 0x38));
      if (pCVar7 != (CCArray *)0x0) {
        iVar3 = cocos2d::CCArray::count(pCVar7);
        for (uVar18 = 0; (int)uVar18 < iVar3; uVar18 = uVar18 + 1) {
          pCVar13 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar18);
          SetKnockBack(pCVar13,extraout_s0_01);
        }
        cocos2d::CCObject::release((CCObject *)pCVar7);
      }
      iVar3 = piVar15[0x45];
      piVar15[0x45] = iVar3 + 1;
      if (iVar3 + 1 == 1) {
        iVar3 = 2;
LAB_000fbd22:
        piVar15[0x46] = iVar3;
        piVar15[0x45] = 0;
        goto LAB_000fbe4e;
      }
      goto LAB_000fbe56;
    }
    if (iVar3 == 2) {
      iVar16 = piVar2[1];
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar3 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fbd40,DAT_000fbd44)
      ;
      if ((iVar3 == 0) || (*(int *)(iVar16 + 0x30) != 1)) {
        if (*(int *)(iVar16 + 0x30) != 0) goto LAB_000fbf80;
        ani_attack_2_2_ani((CCLayer *)piVar1);
        if (*(char *)(**(int **)(iVar20 + DAT_000fc058) + 1) != '\0') {
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fc05c + -0x5e));
        }
        pEVar12 = *(Effect **)(**(int **)(iVar20 + DAT_000fc060) + DAT_000fc064);
        pCVar13 = **(CCLayer ***)(iVar20 + DAT_000fc068);
        puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
        __subsf3(*puVar9,DAT_000fc06c);
        iVar3 = __fixsfsi();
        iVar16 = (**(code **)(**ppiVar14 + 0x38))();
        __subsf3(*(undefined4 *)(iVar16 + 4),DAT_000fc070);
        iVar16 = __fixsfsi();
        iVar17 = (**(code **)(**ppiVar14 + 0x14))();
        Effect::Hero_Effect(pEVar12,pCVar13,8,iVar3,iVar16,iVar17,2,true);
        iVar3 = DAT_000fc074;
        goto LAB_000fbe0a;
      }
      piVar1 = *ppiVar14;
      iVar3 = __mulsf3(*(undefined4 *)(iVar16 + 0x38),0x3fc00000);
      pCVar7 = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0_02,iVar3);
      if (pCVar7 != (CCArray *)0x0) {
        iVar3 = cocos2d::CCArray::count(pCVar7);
        for (uVar18 = 0; (int)uVar18 < iVar3; uVar18 = uVar18 + 1) {
          piVar1 = *ppiVar14;
          pCVar13 = (CCLayer *)cocos2d::CCArray::objectAtIndex(pCVar7,uVar18);
          Target_Attack((CCLayer *)piVar1,pCVar13,extraout_s0_03);
        }
        cocos2d::CCObject::release((CCObject *)pCVar7);
      }
      iVar3 = piVar15[0x45];
      piVar15[0x45] = iVar3 + 1;
      if (iVar3 + 1 == 2) {
        iVar3 = 3;
        goto LAB_000fbd22;
      }
      goto LAB_000fbe56;
    }
    if (iVar3 != 3) goto LAB_000fbf80;
    iVar16 = piVar2[1];
    uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
    iVar3 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fc040,DAT_000fc044);
    iVar16 = *(int *)(iVar16 + 0x30);
    if ((iVar3 != 0) && (iVar16 == 1)) {
      iVar3 = piVar15[0x45];
      piVar15[0x45] = iVar3 + 1;
      if (iVar3 + 1 == 1) {
        piVar15[0x46] = 0;
        goto LAB_000fbe4c;
      }
      goto LAB_000fbe56;
    }
    if (iVar16 != 0) goto LAB_000fbf80;
    if (*(CCNode *)(piVar15 + 0x48) == (CCNode)0x0) {
      pCVar8 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar8,(char *)(DAT_000fc07c + 0xfbe78));
      pCVar8 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar8,(char *)(DAT_000fc080 + 0xfbe84));
      *(CCNode *)(piVar15 + 0x48) = (CCNode)0x1;
    }
    Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar14);
    piVar1 = (int *)operator_new(0x11c);
    Hero5::Hero5((Hero5 *)piVar1);
    (**(code **)(*piVar1 + 300))(piVar1);
    (**(code **)(*piVar1 + 0x2c))(piVar1,DAT_000fc084);
    pcVar21 = *(code **)(*piVar1 + 0x3c);
    uVar4 = (**(code **)(**ppiVar14 + 0x38))();
    (*pcVar21)(piVar1,uVar4);
    piVar19 = **(int ***)(iVar20 + DAT_000fc068);
    pcVar21 = *(code **)(*piVar19 + 0xcc);
    uVar4 = (**(code **)(**ppiVar14 + 0x14))();
    (*pcVar21)(piVar19,piVar1,uVar4,DAT_000fc088);
    cocos2d::CCObject::release((CCObject *)piVar1);
    piVar1 = *ppiVar14;
    **(undefined **)(iVar20 + DAT_000fc08c) = 1;
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
    if (*(char *)(**(int **)(iVar20 + DAT_000fc058) + 1) != '\0') {
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fc090 + '\x1a'));
    }
    piVar15[0x47] = DAT_000fc074;
    *(undefined4 *)(piVar2[1] + 0x3c) = 0;
    iVar3 = piVar2[1];
    uVar4 = 1;
  }
  *(undefined4 *)(iVar3 + 0x30) = uVar4;
LAB_000fbf80:
  if ((**(char **)(iVar20 + DAT_000fc08c) == '\0') && (*(int *)(piVar2[1] + 100) == 1)) {
    *(undefined4 *)(piVar2[1] + 0x30) = 0;
    uVar4 = *(undefined4 *)(piVar2[1] + 0x14);
    if (*(char *)(piVar2[1] + 0x90) == '\0') {
      uVar22 = __extendsfdf2(uVar4);
      uVar4 = DAT_000fc048;
      uVar10 = DAT_000fc04c;
    }
    else {
      uVar22 = __extendsfdf2(uVar4);
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000fc048,DAT_000fc04c);
      uVar4 = DAT_000fc050;
      uVar10 = DAT_000fc054;
    }
    __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar4,uVar10);
    uVar4 = __truncdfsf2();
    pcVar21 = *(code **)(**ppiVar14 + 0x3c);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    __subsf3(*puVar9,uVar4);
    piVar1 = *ppiVar14;
    uVar22 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
    (*pcVar21)(piVar1,aCStack_28);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar14 + 0x38))();
    iVar20 = __aeabi_fcmplt(*puVar9,0);
    if (iVar20 != 0) {
      piVar1 = *ppiVar14;
      pcVar21 = *(code **)(*piVar1 + 0x3c);
      uVar22 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
      (*pcVar21)(piVar1,aCStack_20);
    }
  }
  return;
}


