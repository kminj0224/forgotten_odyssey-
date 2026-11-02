/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f8bd8  Symbol: Hero_Mir_Control */

/* Hero_Mir_Control(cocos2d::CCNode*, float, void*) */

void Hero_Mir_Control(CCNode *param_1,float param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  CCNode *pCVar5;
  uint uVar6;
  _Unit_Stage *p_Var7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  CCPoint *pCVar11;
  CCLayer *pCVar12;
  int *piVar13;
  int iVar14;
  int **ppiVar15;
  int iVar16;
  CCNode **ppCVar17;
  code *pcVar18;
  int iVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar20;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float fVar21;
  float extraout_s1_04;
  float extraout_s1_05;
  undefined8 uVar22;
  undefined8 uVar23;
  uint local_68;
  undefined4 local_5c;
  CCPoint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = DAT_000f8e70 + 0xf8be8;
  ppiVar15 = *(int ***)(iVar2 + DAT_000f8e74);
  piVar3 = (int *)(**(code **)(**ppiVar15 + 0xa8))();
  iVar19 = piVar3[1];
  if ((*(int *)(iVar19 + 100) < 7) && (1 < *(int *)(iVar19 + 100))) {
    uVar4 = __addsf3(*(undefined4 *)(iVar19 + 0x3c),param_3);
    *(undefined4 *)(iVar19 + 0x3c) = uVar4;
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    cocos2d::CCNode::getChildByTag
              (pCVar5,*(int *)(*(int *)(*(int *)(piVar3[1] + 100) * 4 + *piVar3) + 0x290));
    iVar19 = cocos2d::CCNode::numberOfRunningActions();
    iVar16 = piVar3[1];
    iVar14 = *(int *)(iVar16 + 100);
    if (iVar19 == 0) {
      if (iVar14 == 6) {
        cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0,extraout_s1);
        *(undefined4 *)(iVar16 + 0x110) = local_28;
        *(undefined4 *)(iVar16 + 0x114) = local_24;
      }
      pCVar12 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_Base_ani(pCVar12);
      (**(code **)(**ppiVar15 + 0x2c))(*ppiVar15,0x3f800000);
      *(undefined4 *)(piVar3[1] + 100) = 0xffffffff;
      *(undefined *)(piVar3[1] + 0x75) = 0;
      *(undefined *)(piVar3[1] + 0x76) = 0;
      *(undefined *)(piVar3[1] + 0x77) = 0;
      *(undefined *)(piVar3[1] + 0x78) = 0;
    }
    else if (iVar14 == 2) {
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar19 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000f8e58,DAT_000f8e5c
                             );
      if (iVar19 != 0) {
        ppCVar17 = *(CCNode ***)(iVar2 + DAT_000f8e78);
        piVar13 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar17,1);
        pCVar11 = (CCPoint *)(**(code **)(*piVar13 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar11);
        pCVar5 = *ppCVar17;
        puVar9 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
        uVar4 = __subsf3(*puVar9,DAT_000f8e7c);
        __addsf3(uVar4,DAT_000f8e80);
        iVar19 = (**(code **)(**ppiVar15 + 0x38))();
        uVar22 = __addsf3(*(undefined4 *)(iVar19 + 4),DAT_000f8e84);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_58,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        iVar14 = 0;
        piVar13 = *ppiVar15;
        iVar19 = (**(code **)(*piVar13 + 0x14))(piVar13);
        iVar16 = 1;
        uVar22 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar23 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f8e90) +
                                                        **(int **)(iVar2 + DAT_000f8e88) * 0x6c +
                                                       DAT_000f8e94) + 0x1e4) * 2 +
                                            *(int *)(iVar2 + DAT_000f8e8c)));
        uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f8e60,DAT_000f8e64);
        __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                 (int)((ulonglong)uVar23 >> 0x20));
        bVar1 = (bool)__fixdfsi();
        uVar22 = Mir_Bullet_Draw(pCVar5,(CCSprite *)piVar13,local_58,local_54,iVar19,iVar16,bVar1);
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar14 + 0x75) = 0;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          iVar19 = piVar3[1];
          cocos2d::CCSize::CCSize
                    ((CCSize *)&local_50,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
          *(undefined4 *)(iVar19 + 0x110) = local_50;
          *(undefined4 *)(iVar19 + 0x114) = local_4c;
          uVar10 = 0;
          iVar19 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138));
          if (iVar19 != 0) {
            for (; uVar6 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138)), uVar10 < uVar6
                ; uVar10 = uVar10 + 1) {
              piVar13 = (int *)cocos2d::CCArray::objectAtIndex
                                         (*(CCArray **)(piVar3[1] + 0x138),uVar10);
              (**(code **)(*piVar13 + 0xa8))();
            }
          }
          iVar14 = iVar14 + 1;
          uVar22 = Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
        } while (iVar14 != 4);
      }
    }
    else if (iVar14 == 3) {
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar19 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000f8e68,DAT_000f8e6c
                             );
      if (iVar19 != 0) {
        piVar13 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar2 + DAT_000f8e78),1);
        pCVar11 = (CCPoint *)(**(code **)(*piVar13 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar11);
        piVar13 = *ppiVar15;
        uVar22 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar23 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f8e90) +
                                                        **(int **)(iVar2 + DAT_000f8e88) * 0x6c +
                                                       DAT_000f8e9c) + 0x1ef) * 2 +
                                            *(int *)(iVar2 + DAT_000f8e8c)));
        uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f8e60,DAT_000f8e64);
        __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                 (int)((ulonglong)uVar23 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        Unit_Live_Collistion_attck((CCLayer *)piVar13,extraout_s0_00,bVar1,extraout_s1_00,true);
        iVar19 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138));
        local_68 = 0;
        fVar20 = extraout_s0_01;
        fVar21 = extraout_s1_01;
        if (iVar19 != 0) {
          for (; uVar10 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138)),
              fVar20 = extraout_s0_03, fVar21 = extraout_s1_03, local_68 < uVar10;
              local_68 = local_68 + 1) {
            piVar13 = (int *)cocos2d::CCArray::objectAtIndex
                                       (*(CCArray **)(piVar3[1] + 0x138),local_68);
            p_Var7 = (_Unit_Stage *)(**(code **)(*piVar13 + 0xa8))();
            if (((p_Var7 != (_Unit_Stage *)0x0) &&
                ((*(int **)(p_Var7 + 4))[1] != *(int *)(**(int **)(iVar2 + DAT_000f9208) + 0x2c)))
               && (**(int **)(p_Var7 + 4) != 3)) {
              (**(code **)(*piVar13 + 0xf4))(piVar13);
              local_5c = CONCAT13(local_5c._3_1_,0xff0000);
              local_5c = CONCAT22(local_5c._2_2_,0x7f7f);
              SetAttackColor((CCLayer *)piVar13,local_5c,p_Var7);
              *(undefined *)(*(int *)(p_Var7 + 4) + 0x90) = 1;
              ani_Stop_ani((CCLayer *)piVar13);
              iVar19 = cocos2d::CCNode::getChildByTag((CCNode *)piVar13,0);
              if ((iVar19 == 0) &&
                 (iVar19 = cocos2d::CCNode::getChildByTag((CCNode *)piVar13,DAT_000f920c),
                 iVar19 == 0)) {
                piVar8 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000f9210 + 0xf8f30));
                pcVar18 = *(code **)(*piVar8 + 0x74);
                cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0_02,extraout_s1_02);
                (*pcVar18)(piVar8,aCStack_48);
                pcVar18 = *(code **)(*piVar8 + 0x3c);
                puVar9 = (undefined4 *)(**(code **)(*piVar13 + 0x7c))(piVar13);
                uVar22 = __mulsf3(*puVar9,0x3f000000);
                cocos2d::CCPoint::CCPoint
                          (aCStack_40,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
                (*pcVar18)(piVar8,aCStack_40);
                (**(code **)(*piVar13 + 0xcc))(piVar13,piVar8,DAT_000f920c,DAT_000f920c);
              }
            }
          }
        }
        *(undefined4 *)(piVar3[1] + 100) = 0;
        iVar19 = piVar3[1];
        cocos2d::CCSize::CCSize((CCSize *)&local_38,fVar20,fVar21);
        *(undefined4 *)(iVar19 + 0x110) = local_38;
        *(undefined4 *)(iVar19 + 0x114) = local_34;
        iVar19 = 0;
        do {
          *(undefined *)(piVar3[1] + iVar19 + 0x75) = 0;
          iVar19 = iVar19 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
        } while (iVar19 != 4);
      }
    }
    else if (iVar14 == 4) {
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x3c));
      iVar19 = __aeabi_dcmpgt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000f91f0,DAT_000f91f4
                             );
      if (iVar19 != 0) {
        piVar13 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar2 + DAT_000f9218),1);
        pCVar11 = (CCPoint *)(**(code **)(*piVar13 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar11);
        piVar13 = *ppiVar15;
        uVar22 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar23 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f9224) +
                                                        **(int **)(iVar2 + DAT_000f921c) * 0x6c +
                                                       DAT_000f9228) + 0x1fa) * 2 +
                                            *(int *)(iVar2 + DAT_000f9220)));
        uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f91f8,DAT_000f91fc);
        __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                 (int)((ulonglong)uVar23 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        uVar22 = Unit_Live_Collistion_attck
                           ((CCLayer *)piVar13,extraout_s0_04,bVar1,extraout_s1_04,true);
        *(undefined4 *)(piVar3[1] + 100) = 0;
        iVar19 = piVar3[1];
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_30,(float)uVar22,(float)((ulonglong)uVar22 >> 0x20));
        *(undefined4 *)(iVar19 + 0x110) = local_30;
        *(undefined4 *)(iVar19 + 0x114) = local_2c;
        iVar19 = 0;
        do {
          *(undefined *)(piVar3[1] + iVar19 + 0x75) = 0;
          piVar13 = *ppiVar15;
          iVar19 = iVar19 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar13);
        } while (iVar19 != 4);
      }
    }
    iVar19 = piVar3[1];
    iVar14 = *(int *)(iVar19 + 100);
    if (iVar14 != -1) {
      if ((**(int **)(iVar2 + DAT_000f9230) == 0) ||
         (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar14 + -2) * 4 + *(int *)(iVar2 + DAT_000f9234))
                                 ,*(undefined4 *)(iVar19 + 0x3c)), iVar2 == 0)) {
        uVar22 = __extendsfdf2(*(undefined4 *)(*(int *)(iVar14 * 4 + *piVar3) + 0x294));
        uVar22 = __subdf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_000f9200,DAT_000f9204);
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar19 + 0x3c));
        iVar2 = __aeabi_dcmplt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                               (int)((ulonglong)uVar23 >> 0x20));
        if (iVar2 != 0) {
          iVar2 = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
          *(undefined4 *)(piVar3[1] + 100) = 0;
          do {
            *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
            iVar2 = iVar2 + 1;
            *(undefined4 *)(piVar3[1] + 0x3c) = 0;
            Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
          } while (iVar2 != 4);
        }
      }
      else {
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_05,extraout_s1_05);
        *(undefined4 *)(iVar19 + 0x110) = local_20;
        *(undefined4 *)(iVar19 + 0x114) = local_1c;
        iVar2 = 0;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
          piVar13 = *ppiVar15;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar13);
        } while (iVar2 != 4);
      }
    }
  }
  return;
}


