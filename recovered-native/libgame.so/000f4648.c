/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f4648  Symbol: Hero_Rapael_Control */

/* Hero_Rapael_Control(cocos2d::CCNode*, float, void*) */

void Hero_Rapael_Control(CCNode *param_1,float param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  CCNode *this;
  int *piVar6;
  CCAction *pCVar7;
  char *pcVar8;
  CCPoint *pCVar9;
  CCObject *this_00;
  undefined4 *puVar10;
  CCLayer *pCVar11;
  char cVar12;
  Effect *in_r2;
  undefined4 uVar13;
  CCNode **ppCVar14;
  int iVar15;
  Effect *pEVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int **ppiVar21;
  float extraout_s0;
  float fVar22;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined local_68;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = DAT_000f4998 + 0xf4658;
  ppiVar21 = *(int ***)(iVar2 + DAT_000f499c);
  piVar3 = (int *)(**(code **)(**ppiVar21 + 0xa8))();
  ppCVar14 = *(CCNode ***)(iVar2 + DAT_000f49a0);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
  iVar18 = piVar3[1];
  iVar15 = *(int *)(iVar18 + 100);
  if (6 < iVar15) {
    FUN_000f5044();
  }
  if (iVar15 < 2) {
    FUN_000f5044();
  }
  uVar5 = __addsf3(*(undefined4 *)(iVar18 + 0x3c),param_3);
  *(undefined4 *)(iVar18 + 0x3c) = uVar5;
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar21,1);
  cocos2d::CCNode::getChildByTag
            (this,*(int *)(*(int *)(*(int *)(piVar3[1] + 100) * 4 + *piVar3) + 0x290));
  iVar15 = cocos2d::CCNode::numberOfRunningActions();
  iVar19 = piVar3[1];
  iVar18 = *(int *)(iVar19 + 100);
  if (iVar15 == 0) {
    FUN_000f4f50();
  }
  if (iVar18 == 2) {
    uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
    iVar15 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f4980,DAT_000f4984);
    if ((iVar15 != 0) && (*(char *)(iVar19 + 0x75) == '\0')) {
      piVar6 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar21,false);
      if (piVar6 == (int *)0x0) {
        puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
        uVar5 = __addsf3(*puVar10,DAT_000f49c0);
        iVar15 = __aeabi_fcmplt(uVar5,DAT_000f49c4);
        if (iVar15 != 0) {
          fVar22 = (float)cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0,extraout_s1);
          pCVar7 = (CCAction *)cocos2d::CCMoveBy::actionWithDuration(fVar22,DAT_000f49c8);
          cocos2d::CCNode::runAction((CCNode *)piVar4,pCVar7);
        }
      }
      else {
        iVar15 = (**(code **)(*piVar6 + 0xa8))(piVar6);
        piVar4 = *ppiVar21;
        uVar23 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f49ac) +
                                                        **(int **)(iVar2 + DAT_000f49a4) * 0x6c +
                                                       DAT_000f49b0) + 0x79) * 2 +
                                            *(int *)(iVar2 + DAT_000f49a8)));
        uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f4988,DAT_000f498c);
        __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        fVar22 = (float)__truncdfsf2();
        Target_Attack((CCLayer *)piVar4,(CCLayer *)piVar6,fVar22);
        pEVar16 = *(Effect **)(**(int **)(iVar2 + DAT_000f49b4) + DAT_000f49b8);
        pCVar11 = (CCLayer *)*ppCVar14;
        puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x38))(piVar6);
        iVar18 = __fixsfsi(*puVar10);
        iVar19 = (**(code **)(*piVar6 + 0x38))(piVar6);
        uVar5 = __floatsisf(*(int *)(iVar15 + 0xc) / 2);
        uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar19 + 4));
        __subsf3(uVar5,DAT_000f49bc);
        iVar15 = __fixsfsi();
        iVar19 = (**(code **)(*piVar6 + 0x14))(piVar6);
        Effect::Effect_Draw(pEVar16,pCVar11,0x6e,iVar18,iVar15,iVar19,false);
      }
      *(undefined *)(piVar3[1] + 0x75) = 1;
    }
    iVar15 = piVar3[1];
    if (*(char *)(iVar15 + 0x79) != '\0') {
      uVar23 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
      iVar18 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f4980,DAT_000f4984
                             );
      if (iVar18 != 0) {
        piVar4 = *(int **)(iVar2 + DAT_000f49ac);
        if (*(char *)(*piVar4 + 1) != '\0') {
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000f49cc + 'B'));
        }
        pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar21,1);
        ani_attack_2_ani(pCVar11);
        pCVar11 = (CCLayer *)*ppCVar14;
        puVar10 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
        iVar15 = __fixsfsi(*puVar10);
        iVar18 = (**(code **)(**ppiVar21 + 0x38))();
        iVar18 = __fixsfsi(*(undefined4 *)(iVar18 + 4));
        iVar19 = (**(code **)(**ppiVar21 + 0x14))();
        Effect::Hero_Effect(in_r2,pCVar11,2,iVar15,iVar18,iVar19,2,false);
        iVar15 = **(int **)(iVar2 + DAT_000f49d0);
        uVar13 = *(undefined4 *)(iVar15 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar4 + **(int **)(iVar2 + DAT_000f49a4) + DAT_000f49d8
                                          + 4) + -1) * 0xb + *(int *)(iVar2 + DAT_000f49d4)));
        uVar5 = __floatsisf();
        uVar5 = __subsf3(uVar13,uVar5);
        *(undefined4 *)(iVar15 + 8) = uVar5;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        local_68 = 0;
        puVar17 = (undefined *)(piVar3[1] + 0x79);
LAB_000f4f90:
        *puVar17 = local_68;
        goto LAB_000f4f92;
      }
    }
    if (*(char *)(iVar15 + 0x34) == '\0') goto LAB_000f4f92;
    uVar23 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
    iVar15 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f4990,DAT_000f4994);
    if (iVar15 == 0) goto LAB_000f4f92;
    pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar21,1);
    ani_attack_1_2_ani(pCVar11);
    pCVar11 = (CCLayer *)*ppCVar14;
    puVar10 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
    __addsf3(*puVar10,DAT_000f49dc);
    iVar15 = __fixsfsi();
    iVar18 = (**(code **)(**ppiVar21 + 0x38))();
    iVar18 = __fixsfsi(*(undefined4 *)(iVar18 + 4));
    iVar19 = (**(code **)(**ppiVar21 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar11,2,iVar15,iVar18,iVar19,1,false);
    piVar4 = *ppiVar21;
    *(undefined *)(piVar3[1] + 0x34) = 0;
    Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
    if (*(char *)(**(int **)(iVar2 + DAT_000f49ac) + 1) == '\0') goto LAB_000f4f92;
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar12 = (char)DAT_000f49e0 + '~';
  }
  else {
    if (iVar18 != 3) {
      if (iVar18 == 4) {
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
        iVar15 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f4d40,
                                DAT_000f4d44);
        if (iVar15 == 0) goto LAB_000f4f92;
        uVar20 = 0;
        piVar4 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
        pCVar9 = (CCPoint *)(**(code **)(*piVar4 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar9);
        piVar4 = *ppiVar21;
        uVar23 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f4d50) +
                                                        **(int **)(iVar2 + DAT_000f4d48) * 0x6c +
                                                       DAT_000f4d78) + 0x84) * 2 +
                                            *(int *)(iVar2 + DAT_000f4d4c)));
        uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f4d38,DAT_000f4d3c);
        __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        this_00 = (CCObject *)
                  Unit_Live_Collistion_attck
                            ((CCLayer *)piVar4,extraout_s0_01,bVar1,extraout_s1_01,true);
        if (this_00 == (CCObject *)0x0) {
          puVar10 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
          __addsf3(*puVar10,DAT_000f4d7c);
          uVar23 = (**(code **)(**ppiVar21 + 0x38))(*ppiVar21);
          cocos2d::CCNode::setPosition((float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
          goto LAB_000f4f92;
        }
        iVar15 = cocos2d::CCArray::count((CCArray *)this_00);
        for (; (int)uVar20 < iVar15; uVar20 = uVar20 + 1) {
          pCVar11 = (CCLayer *)cocos2d::CCArray::objectAtIndex((CCArray *)this_00,uVar20);
          SetKnockBack(pCVar11,extraout_s0_02);
          piVar4 = (int *)cocos2d::CCArray::objectAtIndex((CCArray *)this_00,uVar20);
          (**(code **)(*piVar4 + 0xa0))();
        }
      }
      else {
        if (iVar18 == 5) {
          uVar5 = *(undefined4 *)(iVar19 + 0x3c);
          iVar15 = __aeabi_fcmpgt(uVar5,0x3e800000);
          if ((iVar15 == 0) || (*(char *)(iVar19 + 0x75) != '\0')) {
            uVar23 = __extendsfdf2(uVar5);
            iVar15 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f5048,
                                    DAT_000f504c);
            if ((iVar15 == 0) || (*(char *)(iVar19 + 0x76) != '\0')) {
              iVar15 = __aeabi_fcmpgt(uVar5,0x3f000000);
              if ((iVar15 == 0) || (*(char *)(iVar19 + 0x77) != '\0')) goto LAB_000f4f92;
              uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x38));
              piVar4 = *ppiVar21;
              uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f5074) +
                                                              **(int **)(iVar2 + DAT_000f5070) *
                                                              0x6c + DAT_000f507c) + 0x84) * 2 +
                                                  *(int *)(iVar2 + DAT_000f5078)));
              uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f5050,
                                DAT_000f5054);
              __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                       (int)((ulonglong)uVar24 >> 0x20));
              iVar15 = __truncdfsf2();
              Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_05,iVar15);
              local_68 = 1;
              puVar17 = (undefined *)(piVar3[1] + 0x77);
              goto LAB_000f4f90;
            }
            uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x38));
            piVar4 = *ppiVar21;
            uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f5074) +
                                                            **(int **)(iVar2 + DAT_000f5070) * 0x6c
                                                           + DAT_000f507c) + 0x84) * 2 +
                                                *(int *)(iVar2 + DAT_000f5078)));
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f5050,DAT_000f5054
                             );
            __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                     (int)((ulonglong)uVar24 >> 0x20));
            iVar15 = __truncdfsf2();
            Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_04,iVar15);
            *(undefined *)(piVar3[1] + 0x76) = 1;
            puVar17 = (undefined *)(piVar3[1] + 0x77);
          }
          else {
            uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x38));
            piVar4 = *ppiVar21;
            uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f4d50) +
                                                            **(int **)(iVar2 + DAT_000f4d48) * 0x6c
                                                           + DAT_000f4d84) + 0x84) * 2 +
                                                *(int *)(iVar2 + DAT_000f4d4c)));
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f4d38,DAT_000f4d3c
                             );
            __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                     (int)((ulonglong)uVar24 >> 0x20));
            iVar15 = __truncdfsf2();
            Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_03,iVar15);
            *(undefined *)(piVar3[1] + 0x75) = 1;
            puVar17 = (undefined *)(piVar3[1] + 0x76);
          }
          local_68 = 0;
          goto LAB_000f4f90;
        }
        if (iVar18 != 6) goto LAB_000f4f92;
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
        uVar5 = (undefined4)((ulonglong)uVar23 >> 0x20);
        iVar15 = __aeabi_dcmpgt((int)uVar23,uVar5,DAT_000f5058,DAT_000f505c);
        if (iVar15 == 0) goto LAB_000f4f92;
        uVar23 = __subdf3((int)uVar23,uVar5,DAT_000f5060,DAT_000f5064);
        __divdf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f5068,DAT_000f506c);
        uVar5 = __truncdfsf2();
        uVar23 = __mulsf3(uVar5,DAT_000f5080);
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_28,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
        *(undefined4 *)(iVar19 + 0x110) = local_28;
        *(undefined4 *)(iVar19 + 0x114) = local_24;
        piVar4 = *ppiVar21;
        uVar23 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f5074) +
                                                        **(int **)(iVar2 + DAT_000f5070) * 0x6c +
                                                       DAT_000f5084) + 0x8f) * 2 +
                                            *(int *)(iVar2 + DAT_000f5078)));
        uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f5050,DAT_000f5054);
        __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        this_00 = (CCObject *)
                  Unit_Live_Collistion_attck
                            ((CCLayer *)piVar4,extraout_s0_06,bVar1,extraout_s1_02,false);
        if (this_00 == (CCObject *)0x0) goto LAB_000f4f92;
      }
      cocos2d::CCObject::release(this_00);
      goto LAB_000f4f92;
    }
    iVar15 = __aeabi_fcmpgt(*(undefined4 *)(iVar19 + 0x3c),0x3e800000);
    if ((iVar15 != 0) && (*(char *)(iVar19 + 0x76) == '\0')) {
      piVar6 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar21,false);
      if (piVar6 == (int *)0x0) {
        puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
        uVar5 = __addsf3(*puVar10,DAT_000f4d64);
        iVar15 = __aeabi_fcmplt(uVar5,DAT_000f4d68);
        if (iVar15 != 0) {
          fVar22 = (float)cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
          pCVar7 = (CCAction *)cocos2d::CCMoveBy::actionWithDuration(fVar22,DAT_000f4d6c);
          cocos2d::CCNode::runAction((CCNode *)piVar4,pCVar7);
        }
      }
      else {
        iVar15 = (**(code **)(*piVar6 + 0xa8))(piVar6);
        uVar23 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar24 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f4d50) +
                                                        **(int **)(iVar2 + DAT_000f4d48) * 0x6c +
                                                       DAT_000f4d54) + 0x79) * 2 +
                                            *(int *)(iVar2 + DAT_000f4d4c)));
        uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f4d38,DAT_000f4d3c);
        __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        fVar22 = (float)__truncdfsf2();
        Target_Attack((CCLayer *)piVar6,fVar22);
        pEVar16 = *(Effect **)(**(int **)(iVar2 + DAT_000f4d58) + DAT_000f4d5c);
        pCVar11 = (CCLayer *)*ppCVar14;
        puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x38))(piVar6);
        iVar18 = __fixsfsi(*puVar10);
        iVar19 = (**(code **)(*piVar6 + 0x38))(piVar6);
        uVar5 = __floatsisf(*(int *)(iVar15 + 0xc) / 2);
        uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar19 + 4));
        __subsf3(uVar5,DAT_000f4d60);
        iVar15 = __fixsfsi();
        iVar19 = (**(code **)(*piVar6 + 0x14))(piVar6);
        Effect::Effect_Draw(pEVar16,pCVar11,0x6e,iVar18,iVar15,iVar19,false);
      }
      *(undefined *)(piVar3[1] + 0x76) = 1;
    }
    if ((*(char *)(piVar3[1] + 0x34) == '\0') ||
       (iVar15 = __aeabi_fcmpgt(*(undefined4 *)(piVar3[1] + 0x3c),0x3f000000), iVar15 == 0))
    goto LAB_000f4f92;
    pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar21,1);
    ani_attack_2_2_ani(pCVar11);
    pCVar11 = (CCLayer *)*ppCVar14;
    puVar10 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
    iVar15 = __fixsfsi(*puVar10);
    iVar18 = (**(code **)(**ppiVar21 + 0x38))();
    __subsf3(*(undefined4 *)(iVar18 + 4),DAT_000f4d70);
    iVar18 = __fixsfsi();
    iVar19 = (**(code **)(**ppiVar21 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar11,2,iVar15,iVar18,iVar19,3,false);
    piVar4 = *ppiVar21;
    *(undefined *)(piVar3[1] + 0x34) = 0;
    Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
    if (*(char *)(**(int **)(iVar2 + DAT_000f4d50) + 1) == '\0') goto LAB_000f4f92;
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar12 = (char)DAT_000f4d74 + -0x4a;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)cVar12);
LAB_000f4f92:
  iVar15 = piVar3[1];
  iVar18 = *(int *)(iVar15 + 100);
  if (iVar18 != -1) {
    if ((**(int **)(iVar2 + DAT_000f5088) != 0) &&
       (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar18 + -2) * 4 + *(int *)(iVar2 + DAT_000f508c)),
                               *(undefined4 *)(iVar15 + 0x3c)), iVar2 != 0)) {
      cocos2d::CCSize::CCSize((CCSize *)&uStack_20,extraout_s0_07,extraout_s1_03);
      *(undefined4 *)(iVar15 + 0x110) = uStack_20;
      *(undefined4 *)(iVar15 + 0x114) = uStack_1c;
      iVar2 = 0;
      *(undefined4 *)(piVar3[1] + 100) = 0;
      do {
        *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
        piVar4 = *ppiVar21;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
      } while (iVar2 != 4);
      FUN_000f5044();
      return;
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(iVar18 * 4 + *piVar3) + 0x294),
                           *(undefined4 *)(iVar15 + 0x3c));
    if (iVar2 != 0) {
      Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar21);
      iVar2 = 0;
      *(undefined4 *)(piVar3[1] + 100) = 0;
      do {
        *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
        piVar4 = *ppiVar21;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
      } while (iVar2 != 4);
      FUN_000f5044();
      return;
    }
  }
  return;
}


