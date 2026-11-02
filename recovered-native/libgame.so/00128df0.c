/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00128df0  Symbol: FUN_00128df0 */

void FUN_00128df0(void)

{
  undefined uVar1;
  int *this;
  int iVar2;
  _Unit_Stage *p_Var3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *__src;
  CCRect *pCVar10;
  int iVar11;
  int *piVar12;
  Effect *pEVar13;
  CCLayer *pCVar14;
  int **ppiVar15;
  int iVar16;
  code *pcVar17;
  int *piVar18;
  undefined4 uVar19;
  int *unaff_r7;
  float extraout_s0;
  float fVar20;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar21;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  undefined8 uVar22;
  undefined8 uVar23;
  int param_11;
  int param_13;
  int *param_15;
  int param_16;
  int param_17;
  GameScene *param_20;
  int *param_21;
  CCLayer *param_23;
  int param_25;
  uint param_27;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  CCArray *param_28;
  _ccColor3B param_32;
  _ccColor3B param_36;
  _ccColor3B param_37;
  _ccColor3B param_38;
  _ccColor3B param_39;
  
  if (param_15 == (int *)0x0) {
    FUN_00129d54();
  }
  this = (int *)cocos2d::CCArray::objectAtIndex(param_28,param_27);
  iVar2 = (**(code **)(*this + 0xa0))();
  if (iVar2 == -0x1e) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291ac == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b0 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b4 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b8 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291bc == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291c0 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291c4 == 0) {
    FUN_00129d3e();
  }
  p_Var3 = (_Unit_Stage *)(**(code **)(*this + 0xa8))(this);
  if (p_Var3 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar16 = *(int *)(p_Var3 + 4);
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar16 + 0x24),0);
  if (iVar2 == 0) {
    FUN_00129d3e();
  }
  iVar2 = *(int *)(iVar16 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&stack0x00000198);
  if (**(int **)(p_Var3 + 4) == 5) {
    puVar4 = (undefined4 *)(**(code **)(*this + 0x38))();
    __addsf3(*puVar4,DAT_001291c8);
    iVar16 = (**(code **)(*this + 0x38))(this);
    uVar21 = __subsf3(*(undefined4 *)(iVar16 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001a8,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),
               extraout_s2,extraout_s3);
    __src = &stack0x000001a8;
  }
  else {
    (**(code **)(*this + 0x38))(this);
    iVar16 = (**(code **)(*this + 0x38))(this);
    iVar5 = *(int *)(p_Var3 + 4);
    uVar8 = *(undefined4 *)(iVar5 + 0x104);
    __subsf3(*(undefined4 *)(iVar16 + 4),uVar8);
    __mulsf3(*(undefined4 *)(iVar5 + 0x100),0x3f000000);
    uVar21 = __addsf3(uVar8,uVar8);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001b8,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),
               extraout_s2_00,extraout_s3_00);
    __src = &stack0x000001b8;
  }
  pCVar10 = (CCRect *)0x10;
  memcpy(&stack0x00000198,__src,0x10);
  if (*param_15 == 0) {
    iVar16 = **(int **)(p_Var3 + 4);
    if (((iVar16 != 3) && (iVar16 != 1)) && (iVar16 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*param_15 != 1) {
      FUN_00129d3e();
    }
    iVar16 = **(int **)(p_Var3 + 4);
    if (((iVar16 != 2) && (iVar16 != 0)) && (iVar16 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar16 = cocos2d::CCRect::CCRectIntersectsRect
                     ((CCRect *)&stack0x00000188,(CCRect *)&stack0x00000198,pCVar10);
  fVar20 = extraout_s0;
  if (iVar16 == 0) {
    fVar20 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)param_15 + 0x19) == '\0') {
    if (*(char *)(param_15 + 7) == '\0') {
      if (*(char *)((int)param_15 + 0x1a) == '\0') {
        if (((*(char *)((int)param_15 + 0x1b) == '\0') && (*(char *)(param_15 + 6) == '\0')) &&
           (*(char *)((int)param_15 + 0x1e) == '\0')) {
          if ((**(char **)(param_16 + DAT_001294b8) != '\0') && (**(int **)(p_Var3 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar13 = *(Effect **)(param_20 + DAT_001294bc);
          if (pEVar13 != (Effect *)0x0) {
            if (*param_15 == 1) {
              pCVar14 = **(CCLayer ***)(param_16 + DAT_001294c0);
              puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
              uVar8 = *puVar4;
              puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x7c))(unaff_r7);
              uVar19 = __mulsf3(*puVar4,0x3f000000);
              __subsf3(uVar8,uVar19);
              param_13 = __fixsfsi();
              iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
              __subsf3(*(undefined4 *)(iVar16 + 4),DAT_001294c4);
              iVar16 = __fixsfsi();
              iVar5 = (**(code **)(*this + 0x14))(this);
              uVar1 = *(undefined *)((int)param_15 + 0x1d);
              iVar11 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar13,pCVar14,iVar11,param_13,iVar16,iVar5,(bool)uVar1);
            }
            else if (*param_15 == 0) {
              pCVar14 = **(CCLayer ***)(param_16 + DAT_001294c0);
              puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
              param_13 = __fixsfsi(*puVar4);
              iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
              iVar16 = __fixsfsi(*(undefined4 *)(iVar16 + 4));
              iVar5 = (**(code **)(*this + 0x14))(this);
              uVar1 = *(undefined *)((int)param_15 + 0x1d);
              iVar11 = 1;
              goto LAB_001292e2;
            }
            param_37 = CONCAT13(param_37._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)this,param_37,p_Var3);
          }
        }
      }
      else {
        SetStun((CCLayer *)this,fVar20);
      }
    }
    else {
      pEVar13 = *(Effect **)(param_20 + DAT_001291d8);
      if ((pEVar13 != (Effect *)0x0) &&
         (param_15[0x15] != 0xb && (param_15[0x14] != 0xb && param_15[0x13] != 0xb))) {
        pCVar14 = **(CCLayer ***)(param_16 + DAT_001291dc);
        puVar4 = (undefined4 *)(**(code **)(*this + 0x38))(this);
        iVar16 = __fixsfsi(*puVar4);
        iVar5 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
        iVar5 = __fixsfsi(*(undefined4 *)(iVar5 + 4));
        iVar11 = (**(code **)(*this + 0x14))(this);
        Effect::Effect_Draw(pEVar13,pCVar14,5,iVar16,iVar5,iVar11,false);
        (**(code **)(*this + 0xf4))(this);
        param_36 = CONCAT13(param_36._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)this,param_36,p_Var3);
        *(undefined *)(*(int *)(p_Var3 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar13 = *(Effect **)(param_20 + DAT_001291d8);
    if ((pEVar13 != (Effect *)0x0) &&
       (param_15[0x15] != 0xb && (param_15[0x14] != 0xb && param_15[0x13] != 0xb))) {
      pCVar14 = **(CCLayer ***)(param_16 + DAT_001291dc);
      puVar4 = (undefined4 *)(**(code **)(*this + 0x38))(this);
      iVar16 = __fixsfsi(*puVar4);
      iVar5 = (**(code **)(*this + 0x38))(this);
      uVar8 = *(undefined4 *)(iVar5 + 4);
      iVar5 = (**(code **)(*this + 0x7c))(this);
      uVar19 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
      __addsf3(uVar8,uVar19);
      iVar5 = __fixsfsi();
      iVar11 = (**(code **)(*this + 0x14))(this);
      Effect::Effect_Draw(pEVar13,pCVar14,0xa0,iVar16,iVar5,iVar11,*(bool *)((int)param_15 + 0x1d));
      if ((**(int **)(p_Var3 + 4) != 3) &&
         ((iVar16 = (*(int **)(p_Var3 + 4))[1],
          iVar16 != *(int *)(**(int **)(param_16 + DAT_001291e0) + 0x2c) && (iVar16 != DAT_001291e4)
          ))) {
        (**(code **)(*this + 0xf4))(this);
        param_32 = CONCAT13(param_32._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)this,param_32,p_Var3);
        *(undefined *)(*(int *)(p_Var3 + 4) + 0x90) = 1;
        iVar16 = cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        if ((iVar16 == 0) &&
           (iVar16 = cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_001291e8), iVar16 == 0)) {
          piVar18 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar17 = *(code **)(*piVar18 + 0x74);
          cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000178,extraout_s0_00,extraout_s1);
          (*pcVar17)(piVar18,&stack0x00000178);
          pcVar17 = *(code **)(*piVar18 + 0x3c);
          puVar4 = (undefined4 *)(**(code **)(*this + 0x7c))(this);
          uVar21 = __mulsf3(*puVar4,0x3f000000);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000180,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
          (*pcVar17)(piVar18,&stack0x00000180);
          (**(code **)(*this + 0xcc))(this,piVar18,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)param_15 + 0x1e) != '\0') {
    param_21 = param_15;
    param_13 = 0;
    do {
      iVar16 = param_15[8];
      if (iVar16 <= param_13) {
        FUN_00129d06();
        return;
      }
      piVar18 = (int *)param_21[9];
      if (piVar18 == this) {
        FUN_00129d06();
      }
      if (param_13 != iVar16 + -1) {
        if (piVar18 != (int *)0x0) goto LAB_00129a5e;
        param_15[param_13 + 9] = (int)this;
        if (*(char *)(*(int *)(p_Var3 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var3 + 4) + 0x84) = (char)piVar18;
        }
        *(undefined *)(*(int *)(p_Var3 + 4) + 0x124) = 1;
        pcVar6 = *(char **)(param_16 + DAT_001294b8);
        if ((*pcVar6 != '\0') && (**(int **)(p_Var3 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*param_15 == 1) {
          pEVar13 = *(Effect **)(param_20 + DAT_001294bc);
          pCVar14 = **(CCLayer ***)(param_16 + DAT_001294c0);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          uVar8 = *puVar4;
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x7c))(unaff_r7);
          uVar19 = __mulsf3(*puVar4,0x3f000000);
          __subsf3(uVar8,uVar19);
          param_21 = (int *)__fixsfsi();
          iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          __subsf3(*(undefined4 *)(iVar16 + 4),DAT_001294c4);
          iVar16 = __fixsfsi();
          iVar5 = (**(code **)(*this + 0x14))(this);
          uVar1 = *(undefined *)((int)param_15 + 0x1d);
          iVar11 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar13,pCVar14,iVar11,(int)param_21,iVar16,iVar5,(bool)uVar1);
        }
        else if (*param_15 == 0) {
          pEVar13 = *(Effect **)(param_20 + DAT_001294bc);
          pCVar14 = **(CCLayer ***)(param_16 + DAT_001294c0);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          param_21 = (int *)__fixsfsi(*puVar4);
          iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          iVar16 = __fixsfsi(*(undefined4 *)(iVar16 + 4));
          iVar5 = (**(code **)(*this + 0x14))(this);
          uVar1 = *(undefined *)((int)param_15 + 0x1d);
          iVar11 = 1;
          goto LAB_00129436;
        }
        param_38 = CONCAT13(param_38._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this,param_38,p_Var3);
        if ((param_15[0x15] == 0xb) || (param_15[0x14] == 0xb || param_15[0x13] == 0xb))
        goto LAB_00129470;
        piVar18 = *(int **)(p_Var3 + 4);
        if ((*pcVar6 != '\0') && (*piVar18 == 2)) {
          FUN_00129da2();
        }
        if (((iVar2 + DAT_001294cc == 0) || (iVar2 + DAT_001294d0 == 0)) || (iVar2 == DAT_001294d4))
        {
          iVar2 = __mulsf3(param_15[1],0x3f000000);
          iVar16 = piVar18[9];
        }
        else {
          iVar16 = piVar18[9];
          iVar2 = param_15[1];
        }
        iVar2 = __subsf3(iVar16,iVar2);
        piVar18[9] = iVar2;
        uVar21 = __extendsfdf2(param_15[1]);
        uVar22 = __extendsfdf2(param_15[2]);
        uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                 (int)((ulonglong)uVar22 >> 0x20));
        iVar2 = __truncdfsf2();
        param_15[1] = iVar2;
        if ((*(int *)(*(int *)(p_Var3 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(param_16 + DAT_001297b8) + 1) != '\0')) {
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar15 = *(int ***)(param_16 + DAT_001297c0);
        piVar18 = *ppiVar15;
        if ((piVar18[0x10] == 0) &&
           ((piVar7 = *(int **)(p_Var3 + 4), *piVar7 == 3 || (piVar7[1] == piVar18[0xb])))) {
          uVar21 = __extendsfdf2(piVar7[9]);
          uVar22 = __extendsfdf2(piVar7[10]);
          uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar16 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                  (int)((ulonglong)uVar22 >> 0x20));
          iVar2 = DAT_001297c4;
          if (iVar16 != 0) {
            piVar18[0x10] = 1;
            iVar2 = *(int *)(param_16 + iVar2);
            piVar7 = *(int **)(param_16 + DAT_001297c8);
            piVar12 = *(int **)(param_16 + DAT_001297cc);
            if ((*(int **)(p_Var3 + 4))[1] == piVar18[0xb]) {
              uVar8 = __mulsf3(*(undefined4 *)
                                (iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x30),
                               0x3f000000);
LAB_001295ee:
              iVar16 = __fixsfsi(uVar8);
              piVar18[0x11] = iVar16;
            }
            else if (**(int **)(p_Var3 + 4) == 3) {
              uVar8 = *(undefined4 *)(iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x30);
              goto LAB_001295ee;
            }
            piVar18[0x12] = *(int *)(iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar15 != 3) {
              GameScene::OpenPopup_Img(**(GameScene ***)(param_16 + DAT_001297d0),0);
            }
          }
          piVar18 = *ppiVar15;
          piVar7 = piVar18 + 0x14;
          if (*(char *)piVar7 == '\0') {
            iVar2 = *(int *)(p_Var3 + 4);
            uVar21 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
            uVar22 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
            uVar23 = __floatsidf(piVar18[0x15]);
            uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                              (int)((ulonglong)uVar23 >> 0x20));
            iVar2 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                   (int)((ulonglong)uVar22 >> 0x20));
            if (iVar2 != 0) {
              *(char *)piVar7 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)this);
        iVar2 = __aeabi_fcmplt(param_15[1],0);
        if (iVar2 != 0) {
          operator_delete(param_15);
          (**(code **)(***(int ***)(param_16 + DAT_001297d4) + 0xd0))
                    (**(int ***)(param_16 + DAT_001297d4),unaff_r7,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        param_11 = 0;
        while ((*(int *)((int)param_15 + param_11 + 0x4c) == 0 || (**(int **)(p_Var3 + 4) != 0))) {
          param_11 = param_11 + 4;
          if (param_11 == 0xc) {
            FUN_00129d06();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_001294c8 + 0x12947a));
      }
      if (piVar18 == (int *)0x0) {
        param_21[9] = (int)this;
        if (*(char *)(*(int *)(p_Var3 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var3 + 4) + 0x84) = (char)piVar18;
        }
        *(undefined *)(*(int *)(p_Var3 + 4) + 0x124) = 1;
        pcVar6 = *(char **)(param_16 + DAT_001297d8);
        if ((*pcVar6 != '\0') && (**(int **)(p_Var3 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*param_15 == 1) {
          pEVar13 = *(Effect **)(param_20 + DAT_001297dc);
          param_23 = **(CCLayer ***)(param_16 + DAT_001297d4);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          uVar19 = *puVar4;
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x7c))(unaff_r7);
          uVar8 = __mulsf3(*puVar4,0x3f000000);
          __subsf3(uVar19,uVar8);
          param_25 = __fixsfsi();
          iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          __subsf3(*(undefined4 *)(iVar16 + 4),DAT_001297e0);
          iVar16 = __fixsfsi();
          iVar5 = (**(code **)(*this + 0x14))();
          uVar1 = *(undefined *)((int)param_15 + 0x1d);
          iVar11 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar13,param_23,iVar11,param_25,iVar16,iVar5,(bool)uVar1);
        }
        else if (*param_15 == 0) {
          pEVar13 = *(Effect **)(param_20 + DAT_00129b00);
          param_23 = **(CCLayer ***)(param_16 + DAT_00129b04);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          param_25 = __fixsfsi(*puVar4);
          iVar16 = (**(code **)(*unaff_r7 + 0x38))(unaff_r7);
          iVar16 = __fixsfsi(*(undefined4 *)(iVar16 + 4));
          iVar5 = (**(code **)(*this + 0x14))();
          uVar1 = *(undefined *)((int)param_15 + 0x1d);
          iVar11 = 1;
          goto LAB_00129832;
        }
        param_39 = CONCAT13(param_39._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this,param_39,p_Var3);
        if ((param_15[0x15] != 0xb) && (param_15[0x14] != 0xb && param_15[0x13] != 0xb)) {
          piVar18 = *(int **)(p_Var3 + 4);
          if ((*pcVar6 != '\0') && (*piVar18 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) ||
             (iVar2 == DAT_00129b10)) {
            iVar16 = __mulsf3(param_15[1],0x3f000000);
            iVar5 = piVar18[9];
          }
          else {
            iVar5 = piVar18[9];
            iVar16 = param_15[1];
          }
          iVar16 = __subsf3(iVar5,iVar16);
          piVar18[9] = iVar16;
          if ((*(int *)(*(int *)(p_Var3 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(param_16 + DAT_00129b14) + 1) != '\0')) {
            pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_00129b18 + -0x28));
          }
          ppiVar15 = *(int ***)(param_16 + DAT_00129b1c);
          piVar18 = *ppiVar15;
          if ((piVar18[0x10] == 0) &&
             ((piVar7 = *(int **)(p_Var3 + 4), *piVar7 == 3 || (piVar7[1] == piVar18[0xb])))) {
            uVar21 = __extendsfdf2(piVar7[9]);
            uVar22 = __extendsfdf2(piVar7[10]);
            uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar5 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                   (int)((ulonglong)uVar22 >> 0x20));
            iVar16 = DAT_00129b20;
            if (iVar5 != 0) {
              piVar18[0x10] = 1;
              iVar16 = *(int *)(param_16 + iVar16);
              piVar12 = *(int **)(param_16 + DAT_00129b24);
              piVar7 = *(int **)(param_16 + DAT_00129b28);
              if ((*(int **)(p_Var3 + 4))[1] == piVar18[0xb]) {
                uVar8 = __mulsf3(*(undefined4 *)
                                  (iVar16 + ((*piVar12 + -1) * 10 + *piVar7 + -1) * 0x40 + 0x30),
                                 0x3f000000);
LAB_0012998a:
                iVar5 = __fixsfsi(uVar8);
                piVar18[0x11] = iVar5;
              }
              else if (**(int **)(p_Var3 + 4) == 3) {
                uVar8 = *(undefined4 *)
                         (iVar16 + ((*piVar12 + -1) * 10 + *piVar7 + -1) * 0x40 + 0x30);
                goto LAB_0012998a;
              }
              piVar18[0x12] = *(int *)(iVar16 + ((*piVar12 + -1) * 10 + *piVar7 + -1) * 0x40 + 0x2c)
              ;
              Game_Scene_Vibration();
              if (**ppiVar15 != 3) {
                GameScene::OpenPopup_Img(**(GameScene ***)(param_16 + DAT_00129b2c),0);
              }
            }
            piVar7 = *ppiVar15;
            piVar18 = piVar7 + 0x14;
            if (*(char *)piVar18 == '\0') {
              iVar16 = *(int *)(p_Var3 + 4);
              uVar21 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x24));
              uVar22 = __extendsfdf2(*(undefined4 *)(iVar16 + 0x28));
              uVar23 = __floatsidf(piVar7[0x15]);
              uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                (int)((ulonglong)uVar23 >> 0x20));
              iVar16 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                      (int)((ulonglong)uVar22 >> 0x20));
              if (iVar16 != 0) {
                *(char *)piVar18 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)this);
        }
        param_17 = 0;
        do {
          if ((*(int *)((int)param_15 + param_17 + 0x4c) != 0) && (**(int **)(p_Var3 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_00129b30 + 0x129a2c));
          }
          param_17 = param_17 + 4;
        } while (param_17 != 0xc);
      }
LAB_00129a5e:
      param_13 = param_13 + 1;
      param_21 = param_21 + 1;
    } while( true );
  }
  if (*(char *)(*(int *)(p_Var3 + 4) + 0x84) != '\0') {
    *(char *)(*(int *)(p_Var3 + 4) + 0x84) = '\0';
  }
  piVar18 = *(int **)(p_Var3 + 4);
  if ((piVar18[0x38] == 0xb) || (piVar18[0x37] == 0xb || piVar18[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(param_16 + DAT_00129b34) != '\0') && (*piVar18 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) || (iVar2 == DAT_00129b10)) {
    iVar2 = __mulsf3(param_15[1],0x3f000000);
    iVar16 = piVar18[9];
  }
  else {
    iVar16 = piVar18[9];
    iVar2 = param_15[1];
  }
  iVar2 = __subsf3(iVar16,iVar2);
  piVar18[9] = iVar2;
  if ((*(int *)(*(int *)(p_Var3 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(param_16 + DAT_00129db8) + 1) != '\0')) {
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_00129dbc + 'f'));
  }
  param_11 = 0;
  do {
    if ((*(int *)((int)param_15 + param_11 + 0x4c) != 0) && (**(int **)(p_Var3 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    param_11 = param_11 + 4;
  } while (param_11 != 0xc);
  ppiVar15 = *(int ***)(param_16 + DAT_00129dc4);
  piVar18 = *ppiVar15;
  if ((piVar18[0x10] == 0) &&
     ((piVar7 = *(int **)(p_Var3 + 4), *piVar7 == 3 || (piVar7[1] == piVar18[0xb])))) {
    uVar21 = __extendsfdf2(piVar7[9]);
    uVar22 = __extendsfdf2(piVar7[10]);
    uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar16 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                            (int)((ulonglong)uVar22 >> 0x20));
    iVar2 = DAT_00129dc8;
    if (iVar16 != 0) {
      piVar18[0x10] = 1;
      iVar2 = *(int *)(param_16 + iVar2);
      piVar7 = *(int **)(param_16 + DAT_00129dcc);
      piVar12 = *(int **)(param_16 + DAT_00129dd0);
      if ((*(int **)(p_Var3 + 4))[1] == piVar18[0xb]) {
        uVar8 = __mulsf3(*(undefined4 *)
                          (iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x30),0x3f000000);
LAB_00129c5e:
        iVar16 = __fixsfsi(uVar8);
        piVar18[0x11] = iVar16;
      }
      else if (**(int **)(p_Var3 + 4) == 3) {
        uVar8 = *(undefined4 *)(iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar18[0x12] = *(int *)(iVar2 + ((*piVar7 + -1) * 10 + *piVar12 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar15 != 3) {
        GameScene::OpenPopup_Img(**(GameScene ***)(param_16 + DAT_00129dd4),0);
      }
    }
    piVar18 = *ppiVar15;
    piVar7 = piVar18 + 0x14;
    if (*(char *)piVar7 == '\0') {
      iVar2 = *(int *)(p_Var3 + 4);
      uVar21 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
      uVar23 = __floatsidf(piVar18[0x15]);
      uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                        (int)((ulonglong)uVar23 >> 0x20));
      iVar2 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                             (int)((ulonglong)uVar22 >> 0x20));
      if (iVar2 != 0) {
        *(char *)piVar7 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)this);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var3 + 4) + 0x124) = 1;
  if (**(int **)(p_Var3 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(param_20 + 0x120),p_Var3);
  }
  operator_delete(param_15);
  (**(code **)(***(int ***)(param_16 + DAT_00129dd8) + 0xd0))
            (**(int ***)(param_16 + DAT_00129dd8),unaff_r7,1);
  uVar9 = cocos2d::CCArray::count(param_28);
  if (param_27 + 1 < uVar9) {
    FUN_00128df0();
  }
  uVar9 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar20 = extraout_s0_01;
  if (in_stack_00000068 + 1U < uVar9) {
    fVar20 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(param_20,fVar20);
  FUN_00129da2();
  return;
}


