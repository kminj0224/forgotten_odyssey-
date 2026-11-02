/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f3478  Symbol: Hero_Kai_Control */

/* Hero_Kai_Control(cocos2d::CCNode*, float, void*) */

void Hero_Kai_Control(CCNode *param_1,float param_2,void *param_3)

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
  undefined4 *puVar10;
  CCLayer *pCVar11;
  CCObject *this_00;
  char cVar12;
  undefined uVar13;
  Effect *in_r2;
  undefined4 uVar14;
  CCNode **ppCVar15;
  int iVar16;
  Effect *pEVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int **ppiVar22;
  float extraout_s0;
  float fVar23;
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
  undefined8 uVar24;
  undefined8 uVar25;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = DAT_000f37c0 + 0xf3488;
  ppiVar22 = *(int ***)(iVar2 + DAT_000f37c4);
  piVar3 = (int *)(**(code **)(**ppiVar22 + 0xa8))();
  ppCVar15 = *(CCNode ***)(iVar2 + DAT_000f37c8);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar15,1);
  iVar19 = piVar3[1];
  iVar16 = *(int *)(iVar19 + 100);
  if (6 < iVar16) {
    FUN_000f3e96();
  }
  if (iVar16 < 2) {
    FUN_000f3e96();
  }
  uVar5 = __addsf3(*(undefined4 *)(iVar19 + 0x3c),param_3);
  *(undefined4 *)(iVar19 + 0x3c) = uVar5;
  this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar22,1);
  cocos2d::CCNode::getChildByTag
            (this,*(int *)(*(int *)(*(int *)(piVar3[1] + 100) * 4 + *piVar3) + 0x290));
  iVar16 = cocos2d::CCNode::numberOfRunningActions();
  iVar20 = piVar3[1];
  iVar19 = *(int *)(iVar20 + 100);
  if (iVar16 == 0) {
    FUN_000f3d78();
  }
  if (iVar19 == 2) {
    uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x3c));
    iVar16 = __aeabi_dcmpgt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f37a8,DAT_000f37ac);
    if ((iVar16 != 0) && (*(char *)(iVar20 + 0x75) == '\0')) {
      piVar6 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar22,false);
      if (piVar6 == (int *)0x0) {
        puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
        uVar5 = __addsf3(*puVar10,DAT_000f37e4);
        iVar16 = __aeabi_fcmplt(uVar5,DAT_000f37e8);
        if (iVar16 != 0) {
          fVar23 = (float)cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0,extraout_s1);
          pCVar7 = (CCAction *)cocos2d::CCMoveBy::actionWithDuration(fVar23,DAT_000f37ec);
          cocos2d::CCNode::runAction((CCNode *)piVar4,pCVar7);
        }
      }
      else {
        iVar16 = (**(code **)(*piVar6 + 0xa8))(piVar6);
        piVar4 = *ppiVar22;
        uVar24 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar25 = __floatsidf((int)*(short *)(*(char *)(**(int **)(iVar2 + DAT_000f37d4) +
                                                       **(int **)(iVar2 + DAT_000f37cc) * 0x6c +
                                                      DAT_000f37d8) * 2 +
                                            *(int *)(iVar2 + DAT_000f37d0)));
        uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f37b0,DAT_000f37b4);
        __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                 (int)((ulonglong)uVar25 >> 0x20));
        fVar23 = (float)__truncdfsf2();
        Target_Attack((CCLayer *)piVar4,(CCLayer *)piVar6,fVar23);
        pEVar17 = *(Effect **)(**(int **)(iVar2 + DAT_000f37dc) + DAT_000f37e0);
        pCVar11 = (CCLayer *)*ppCVar15;
        puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x38))(piVar6);
        iVar19 = __fixsfsi(*puVar10);
        iVar20 = (**(code **)(*piVar6 + 0x38))(piVar6);
        uVar5 = __floatsisf(*(int *)(iVar16 + 0xc) / 2);
        __addsf3(uVar5,*(undefined4 *)(iVar20 + 4));
        iVar16 = __fixsfsi();
        iVar20 = (**(code **)(*piVar6 + 0x14))(piVar6);
        Effect::Effect_Draw(pEVar17,pCVar11,1,iVar19,iVar16,iVar20,false);
      }
      *(undefined *)(piVar3[1] + 0x75) = 1;
    }
    iVar16 = piVar3[1];
    if (*(char *)(iVar16 + 0x79) != '\0') {
      uVar24 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar19 = __aeabi_dcmpgt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f37a8,DAT_000f37ac
                             );
      if (iVar19 != 0) {
        piVar4 = *(int **)(iVar2 + DAT_000f37d4);
        if (*(char *)(*piVar4 + 1) != '\0') {
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000f37f0 + 'h'));
        }
        pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar22,1);
        ani_attack_2_ani(pCVar11);
        pCVar11 = (CCLayer *)*ppCVar15;
        puVar10 = (undefined4 *)(**(code **)(**ppiVar22 + 0x38))();
        iVar16 = __fixsfsi(*puVar10);
        iVar19 = (**(code **)(**ppiVar22 + 0x38))();
        iVar19 = __fixsfsi(*(undefined4 *)(iVar19 + 4));
        iVar20 = (**(code **)(**ppiVar22 + 0x14))();
        Effect::Hero_Effect(in_r2,pCVar11,1,iVar16,iVar19,iVar20,2,false);
        iVar16 = **(int **)(iVar2 + DAT_000f37f4);
        uVar14 = *(undefined4 *)(iVar16 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar4 + **(int **)(iVar2 + DAT_000f37cc) + DAT_000f37fc
                                          + 4) + -1) * 0xb + *(int *)(iVar2 + DAT_000f37f8)));
        uVar5 = __floatsisf();
        uVar5 = __subsf3(uVar14,uVar5);
        *(undefined4 *)(iVar16 + 8) = uVar5;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        uVar13 = 0;
        puVar18 = (undefined *)(piVar3[1] + 0x79);
LAB_000f3cb0:
        *puVar18 = uVar13;
        goto LAB_000f3ddc;
      }
    }
    if (*(char *)(iVar16 + 0x34) == '\0') goto LAB_000f3ddc;
    uVar24 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
    iVar16 = __aeabi_dcmpgt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f37b8,DAT_000f37bc);
    if (iVar16 == 0) goto LAB_000f3ddc;
    pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar22,1);
    ani_attack_1_2_ani(pCVar11);
    pCVar11 = (CCLayer *)*ppCVar15;
    puVar10 = (undefined4 *)(**(code **)(**ppiVar22 + 0x38))();
    __addsf3(*puVar10,DAT_000f3800);
    iVar16 = __fixsfsi();
    iVar19 = (**(code **)(**ppiVar22 + 0x38))();
    iVar19 = __fixsfsi(*(undefined4 *)(iVar19 + 4));
    iVar20 = (**(code **)(**ppiVar22 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar11,1,iVar16,iVar19,iVar20,1,false);
    piVar4 = *ppiVar22;
    *(undefined *)(piVar3[1] + 0x34) = 0;
    Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
    if (*(char *)(**(int **)(iVar2 + DAT_000f37d4) + 1) == '\0') goto LAB_000f3ddc;
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar12 = (char)DAT_000f3804 + -0x5c;
  }
  else {
    if (iVar19 != 3) {
      if (iVar19 == 4) {
        uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x3c));
        iVar16 = __aeabi_dcmplt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f3b68,
                                DAT_000f3b6c);
        if (iVar16 == 0) goto LAB_000f3ddc;
        uVar21 = 0;
        piVar4 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar15,1);
        pCVar9 = (CCPoint *)(**(code **)(*piVar4 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar9);
        piVar4 = *ppiVar22;
        uVar24 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar25 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f3b80) +
                                                        **(int **)(iVar2 + DAT_000f3b78) * 0x6c +
                                                       DAT_000f3ba4) + 0xb) * 2 +
                                            *(int *)(iVar2 + DAT_000f3b7c)));
        uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3b70,DAT_000f3b74);
        __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                 (int)((ulonglong)uVar25 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        this_00 = (CCObject *)
                  Unit_Live_Collistion_attck
                            ((CCLayer *)piVar4,extraout_s0_01,bVar1,extraout_s1_01,true);
        if (this_00 == (CCObject *)0x0) {
          puVar10 = (undefined4 *)(**(code **)(**ppiVar22 + 0x38))();
          __addsf3(*puVar10,DAT_000f3ba8);
          uVar24 = (**(code **)(**ppiVar22 + 0x38))(*ppiVar22);
          cocos2d::CCNode::setPosition((float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
          goto LAB_000f3ddc;
        }
        iVar16 = cocos2d::CCArray::count((CCArray *)this_00);
        for (; (int)uVar21 < iVar16; uVar21 = uVar21 + 1) {
          pCVar11 = (CCLayer *)cocos2d::CCArray::objectAtIndex((CCArray *)this_00,uVar21);
          SetStun(pCVar11,extraout_s0_02);
          piVar4 = (int *)cocos2d::CCArray::objectAtIndex((CCArray *)this_00,uVar21);
          (**(code **)(*piVar4 + 0xa0))();
        }
      }
      else {
        if (iVar19 == 5) {
          uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x3c));
          uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
          uVar5 = (undefined4)uVar24;
          iVar16 = __aeabi_dcmpgt(uVar5,uVar14,DAT_000f3b68,DAT_000f3b6c);
          if ((iVar16 == 0) || (*(char *)(iVar20 + 0x75) != '\0')) {
            iVar16 = __aeabi_dcmpgt(uVar5,uVar14,DAT_000f3ea0,DAT_000f3ea4);
            if ((iVar16 == 0) || (*(char *)(iVar20 + 0x76) != '\0')) {
              iVar16 = __aeabi_dcmpgt(uVar5,uVar14,DAT_000f3eb0,DAT_000f3eb4);
              if ((iVar16 == 0) || (*(char *)(iVar20 + 0x77) != '\0')) goto LAB_000f3ddc;
              uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x38));
              piVar4 = *ppiVar22;
              uVar25 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f3ecc) +
                                                              **(int **)(iVar2 + DAT_000f3ec8) *
                                                              0x6c + DAT_000f3ed4) + 0xb) * 2 +
                                                  *(int *)(iVar2 + DAT_000f3ed0)));
              uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3ea8,
                                DAT_000f3eac);
              __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                       (int)((ulonglong)uVar25 >> 0x20));
              iVar16 = __truncdfsf2();
              Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_05,iVar16);
              uVar13 = 1;
              puVar18 = (undefined *)(piVar3[1] + 0x77);
              goto LAB_000f3cb0;
            }
            piVar4 = *ppiVar22;
            uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x38));
            uVar25 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f3ecc) +
                                                            **(int **)(iVar2 + DAT_000f3ec8) * 0x6c
                                                           + DAT_000f3ed4) + 0xb) * 2 +
                                                *(int *)(iVar2 + DAT_000f3ed0)));
            uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3ea8,DAT_000f3eac
                             );
            __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                     (int)((ulonglong)uVar25 >> 0x20));
            iVar16 = __truncdfsf2();
            Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_04,iVar16);
            *(undefined *)(piVar3[1] + 0x76) = 1;
            puVar18 = (undefined *)(piVar3[1] + 0x77);
          }
          else {
            piVar4 = *ppiVar22;
            uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x38));
            uVar25 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f3b80) +
                                                            **(int **)(iVar2 + DAT_000f3b78) * 0x6c
                                                           + DAT_000f3ba4) + 0xb) * 2 +
                                                *(int *)(iVar2 + DAT_000f3b7c)));
            uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3b70,DAT_000f3b74
                             );
            __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                     (int)((ulonglong)uVar25 >> 0x20));
            iVar16 = __truncdfsf2();
            Unit_Live_Collistion_attck((CCLayer *)piVar4,extraout_s0_03,iVar16);
            *(undefined *)(piVar3[1] + 0x75) = 1;
            puVar18 = (undefined *)(piVar3[1] + 0x76);
          }
          *puVar18 = 0;
          goto LAB_000f3ddc;
        }
        if (iVar19 != 6) goto LAB_000f3ddc;
        uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x3c));
        uVar5 = (undefined4)((ulonglong)uVar24 >> 0x20);
        iVar16 = __aeabi_dcmpgt((int)uVar24,uVar5,DAT_000f3eb8,DAT_000f3ebc);
        if (iVar16 == 0) goto LAB_000f3ddc;
        uVar24 = __subdf3((int)uVar24,uVar5,DAT_000f3eb0,DAT_000f3eb4);
        __divdf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f3ec0,DAT_000f3ec4);
        uVar5 = __truncdfsf2();
        uVar24 = __mulsf3(uVar5,DAT_000f3ed8);
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_30,(float)uVar24,(float)((ulonglong)uVar24 >> 0x20));
        *(undefined4 *)(iVar20 + 0x110) = local_30;
        *(undefined4 *)(iVar20 + 0x114) = local_2c;
        piVar4 = *ppiVar22;
        uVar24 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar25 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f3ecc) +
                                                        **(int **)(iVar2 + DAT_000f3ec8) * 0x6c +
                                                       DAT_000f3edc) + 0x16) * 2 +
                                            *(int *)(iVar2 + DAT_000f3ed0)));
        uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3ea8,DAT_000f3eac);
        __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                 (int)((ulonglong)uVar25 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        this_00 = (CCObject *)
                  Unit_Live_Collistion_attck
                            ((CCLayer *)piVar4,extraout_s0_06,bVar1,extraout_s1_02,false);
        if (this_00 == (CCObject *)0x0) goto LAB_000f3ddc;
      }
      cocos2d::CCObject::release(this_00);
      goto LAB_000f3ddc;
    }
    uVar24 = __extendsfdf2(*(undefined4 *)(iVar20 + 0x3c));
    iVar16 = __aeabi_dcmpgt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_000f3b68,DAT_000f3b6c);
    if ((iVar16 != 0) && (*(char *)(iVar20 + 0x76) == '\0')) {
      piVar6 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar22,false);
      if (piVar6 == (int *)0x0) {
        puVar10 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
        uVar5 = __addsf3(*puVar10,DAT_000f3b94);
        iVar16 = __aeabi_fcmplt(uVar5,DAT_000f3b98);
        if (iVar16 != 0) {
          fVar23 = (float)cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
          pCVar7 = (CCAction *)cocos2d::CCMoveBy::actionWithDuration(fVar23,DAT_000f3b9c);
          cocos2d::CCNode::runAction((CCNode *)piVar4,pCVar7);
        }
      }
      else {
        iVar16 = (**(code **)(*piVar6 + 0xa8))(piVar6);
        piVar4 = *ppiVar22;
        uVar24 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar25 = __floatsidf((int)*(short *)(*(char *)(**(int **)(iVar2 + DAT_000f3b80) +
                                                       **(int **)(iVar2 + DAT_000f3b78) * 0x6c +
                                                      DAT_000f3b84) * 2 +
                                            *(int *)(iVar2 + DAT_000f3b7c)));
        uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_000f3b70,DAT_000f3b74);
        __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                 (int)((ulonglong)uVar25 >> 0x20));
        fVar23 = (float)__truncdfsf2();
        Target_Attack((CCLayer *)piVar4,(CCLayer *)piVar6,fVar23);
        pEVar17 = *(Effect **)(**(int **)(iVar2 + DAT_000f3b88) + DAT_000f3b8c);
        pCVar11 = (CCLayer *)*ppCVar15;
        puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x38))(piVar6);
        iVar19 = __fixsfsi(*puVar10);
        iVar20 = (**(code **)(*piVar6 + 0x38))(piVar6);
        uVar5 = __floatsisf(*(int *)(iVar16 + 0xc) / 2);
        uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar20 + 4));
        __subsf3(uVar5,DAT_000f3b90);
        iVar16 = __fixsfsi();
        iVar20 = (**(code **)(*piVar6 + 0x14))(piVar6);
        Effect::Effect_Draw(pEVar17,pCVar11,0x6e,iVar19,iVar16,iVar20,false);
      }
      *(undefined *)(piVar3[1] + 0x76) = 1;
    }
    if ((*(char *)(piVar3[1] + 0x34) == '\0') ||
       (iVar16 = __aeabi_fcmpgt(*(undefined4 *)(piVar3[1] + 0x3c),0x3e800000), iVar16 == 0))
    goto LAB_000f3ddc;
    pCVar11 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar22,1);
    ani_attack_2_2_ani(pCVar11);
    pCVar11 = (CCLayer *)*ppCVar15;
    puVar10 = (undefined4 *)(**(code **)(**ppiVar22 + 0x38))();
    iVar16 = __fixsfsi(*puVar10);
    iVar19 = (**(code **)(**ppiVar22 + 0x38))();
    iVar19 = __fixsfsi(*(undefined4 *)(iVar19 + 4));
    iVar20 = (**(code **)(**ppiVar22 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar11,1,iVar16,iVar19,iVar20,3,false);
    piVar4 = *ppiVar22;
    *(undefined *)(piVar3[1] + 0x34) = 0;
    Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
    if (*(char *)(**(int **)(iVar2 + DAT_000f3b80) + 1) == '\0') goto LAB_000f3ddc;
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar12 = (char)DAT_000f3ba0 + -0x26;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)cVar12);
LAB_000f3ddc:
  iVar16 = piVar3[1];
  iVar19 = *(int *)(iVar16 + 100);
  if (iVar19 != -1) {
    if ((**(int **)(iVar2 + DAT_000f3ee4) != 0) &&
       (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar19 + -2) * 4 + *(int *)(iVar2 + DAT_000f3ee8)),
                               *(undefined4 *)(iVar16 + 0x3c)), iVar2 != 0)) {
      cocos2d::CCSize::CCSize((CCSize *)&uStack_20,extraout_s0_07,extraout_s1_03);
      *(undefined4 *)(iVar16 + 0x110) = uStack_20;
      *(undefined4 *)(iVar16 + 0x114) = uStack_1c;
      iVar2 = 0;
      *(undefined4 *)(piVar3[1] + 100) = 0xffffffff;
      do {
        *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
        piVar4 = *ppiVar22;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
      } while (iVar2 != 4);
      FUN_000f3e96();
      return;
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(iVar19 * 4 + *piVar3) + 0x294),
                           *(undefined4 *)(iVar16 + 0x3c));
    if (iVar2 != 0) {
      Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar22);
      iVar2 = 0;
      *(undefined4 *)(piVar3[1] + 100) = 0xffffffff;
      do {
        *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
        piVar4 = *ppiVar22;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(piVar3[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar4);
      } while (iVar2 != 4);
      FUN_000f3e96();
      return;
    }
  }
  return;
}


