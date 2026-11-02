/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00128d5a  Symbol: FUN_00128d5a */

void FUN_00128d5a(void)

{
  undefined uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CCArray *this;
  int *this_00;
  _Unit_Stage *p_Var6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  undefined *__src;
  CCRect *pCVar11;
  int iVar12;
  int *piVar13;
  Effect *pEVar14;
  CCLayer *pCVar15;
  int **ppiVar16;
  code *pcVar17;
  int *piVar18;
  uint unaff_r5;
  int *unaff_r6;
  undefined4 uVar19;
  float extraout_s0;
  float fVar20;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar21;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar22;
  undefined8 uVar23;
  int param_11;
  int iStack00000020;
  int *param_12;
  int in_stack_0000002c;
  int iStack00000030;
  GameScene *in_stack_0000003c;
  int *piStack00000040;
  CCLayer *pCStack00000048;
  int iStack00000050;
  int **param_13;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  _ccColor3B in_stack_0000009c;
  _ccColor3B in_stack_000000a4;
  _ccColor3B in_stack_000000a8;
  _ccColor3B in_stack_000000ac;
  _ccColor3B in_stack_000000b0;
  
  puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  uVar3 = __mulsf3(param_12[0x18],0x3f000000);
  __subsf3(*puVar2,uVar3);
  iVar4 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  iVar4 = __subsf3(*(undefined4 *)(iVar4 + 4),uRam00128dec);
  (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  iVar5 = (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  uVar21 = __addsf3(*(undefined4 *)(iVar5 + 4),uRam00128dec);
  cocos2d::CCRect::CCRect
            ((CCRect *)&stack0x00000188,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),extraout_s2
             ,extraout_s3);
  this = (CCArray *)(**(code **)(**param_13 + 0x58))();
  FUN_00129d44();
  func_0xffe6ddce();
  func_0xfff65dd2();
  func_0x0031ddd6();
  func_0x0037ddda();
  uVar21 = func_0x0032ddde();
  *(undefined2 *)uVar21 = (short)uVar21;
  if (param_12 == (int *)0x0) {
    FUN_00129d54((undefined2 *)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)unaff_r6 * iVar4);
  }
  this_00 = (int *)cocos2d::CCArray::objectAtIndex(this,unaff_r5);
  iVar4 = (**(code **)(*this_00 + 0xa0))();
  if (iVar4 == -0x1e) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291ac == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291b0 == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291b4 == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291b8 == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291bc == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291c0 == 0) {
    iVar4 = FUN_00129d3e();
  }
  if (iVar4 + DAT_001291c4 == 0) {
    FUN_00129d3e();
  }
  p_Var6 = (_Unit_Stage *)(**(code **)(*this_00 + 0xa8))(this_00);
  if (p_Var6 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar5 = *(int *)(p_Var6 + 4);
  iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x24),0);
  if (iVar4 == 0) {
    FUN_00129d3e();
  }
  iVar4 = *(int *)(iVar5 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&stack0x00000198);
  if (**(int **)(p_Var6 + 4) == 5) {
    puVar2 = (undefined4 *)(**(code **)(*this_00 + 0x38))();
    __addsf3(*puVar2,DAT_001291c8);
    iVar5 = (**(code **)(*this_00 + 0x38))(this_00);
    uVar21 = __subsf3(*(undefined4 *)(iVar5 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001a8,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),
               extraout_s2_00,extraout_s3_00);
    __src = &stack0x000001a8;
  }
  else {
    (**(code **)(*this_00 + 0x38))(this_00);
    iVar5 = (**(code **)(*this_00 + 0x38))(this_00);
    iVar7 = *(int *)(p_Var6 + 4);
    uVar3 = *(undefined4 *)(iVar7 + 0x104);
    __subsf3(*(undefined4 *)(iVar5 + 4),uVar3);
    __mulsf3(*(undefined4 *)(iVar7 + 0x100),0x3f000000);
    uVar21 = __addsf3(uVar3,uVar3);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001b8,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20),
               extraout_s2_01,extraout_s3_01);
    __src = &stack0x000001b8;
  }
  pCVar11 = (CCRect *)0x10;
  memcpy(&stack0x00000198,__src,0x10);
  if (*param_12 == 0) {
    iVar5 = **(int **)(p_Var6 + 4);
    if (((iVar5 != 3) && (iVar5 != 1)) && (iVar5 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*param_12 != 1) {
      FUN_00129d3e();
    }
    iVar5 = **(int **)(p_Var6 + 4);
    if (((iVar5 != 2) && (iVar5 != 0)) && (iVar5 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar5 = cocos2d::CCRect::CCRectIntersectsRect
                    ((CCRect *)&stack0x00000188,(CCRect *)&stack0x00000198,pCVar11);
  fVar20 = extraout_s0;
  if (iVar5 == 0) {
    fVar20 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)param_12 + 0x19) == '\0') {
    if (*(char *)(param_12 + 7) == '\0') {
      if (*(char *)((int)param_12 + 0x1a) == '\0') {
        if (((*(char *)((int)param_12 + 0x1b) == '\0') && (*(char *)(param_12 + 6) == '\0')) &&
           (*(char *)((int)param_12 + 0x1e) == '\0')) {
          if ((**(char **)(in_stack_0000002c + DAT_001294b8) != '\0') &&
             (**(int **)(p_Var6 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          if (pEVar14 != (Effect *)0x0) {
            if (*param_12 == 1) {
              pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
              puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              uVar3 = *puVar2;
              puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
              uVar19 = __mulsf3(*puVar2,0x3f000000);
              __subsf3(uVar3,uVar19);
              iStack00000020 = __fixsfsi();
              iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              __subsf3(*(undefined4 *)(iVar5 + 4),DAT_001294c4);
              iVar5 = __fixsfsi();
              iVar7 = (**(code **)(*this_00 + 0x14))(this_00);
              uVar1 = *(undefined *)((int)param_12 + 0x1d);
              iVar12 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar14,pCVar15,iVar12,iStack00000020,iVar5,iVar7,(bool)uVar1);
            }
            else if (*param_12 == 0) {
              pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
              puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iStack00000020 = __fixsfsi(*puVar2);
              iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iVar5 = __fixsfsi(*(undefined4 *)(iVar5 + 4));
              iVar7 = (**(code **)(*this_00 + 0x14))(this_00);
              uVar1 = *(undefined *)((int)param_12 + 0x1d);
              iVar12 = 1;
              goto LAB_001292e2;
            }
            in_stack_000000a8 = CONCAT13(in_stack_000000a8._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)this_00,in_stack_000000a8,p_Var6);
          }
        }
      }
      else {
        SetStun((CCLayer *)this_00,fVar20);
      }
    }
    else {
      pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001291d8);
      if ((pEVar14 != (Effect *)0x0) &&
         (param_12[0x15] != 0xb && (param_12[0x14] != 0xb && param_12[0x13] != 0xb))) {
        pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001291dc);
        puVar2 = (undefined4 *)(**(code **)(*this_00 + 0x38))(this_00);
        iVar5 = __fixsfsi(*puVar2);
        iVar7 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
        iVar7 = __fixsfsi(*(undefined4 *)(iVar7 + 4));
        iVar12 = (**(code **)(*this_00 + 0x14))(this_00);
        Effect::Effect_Draw(pEVar14,pCVar15,5,iVar5,iVar7,iVar12,false);
        (**(code **)(*this_00 + 0xf4))(this_00);
        in_stack_000000a4 = CONCAT13(in_stack_000000a4._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)this_00,in_stack_000000a4,p_Var6);
        *(undefined *)(*(int *)(p_Var6 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001291d8);
    if ((pEVar14 != (Effect *)0x0) &&
       (param_12[0x15] != 0xb && (param_12[0x14] != 0xb && param_12[0x13] != 0xb))) {
      pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001291dc);
      puVar2 = (undefined4 *)(**(code **)(*this_00 + 0x38))(this_00);
      iVar5 = __fixsfsi(*puVar2);
      iVar7 = (**(code **)(*this_00 + 0x38))(this_00);
      uVar3 = *(undefined4 *)(iVar7 + 4);
      iVar7 = (**(code **)(*this_00 + 0x7c))(this_00);
      uVar19 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
      __addsf3(uVar3,uVar19);
      iVar7 = __fixsfsi();
      iVar12 = (**(code **)(*this_00 + 0x14))(this_00);
      Effect::Effect_Draw(pEVar14,pCVar15,0xa0,iVar5,iVar7,iVar12,*(bool *)((int)param_12 + 0x1d));
      if ((**(int **)(p_Var6 + 4) != 3) &&
         ((iVar5 = (*(int **)(p_Var6 + 4))[1],
          iVar5 != *(int *)(**(int **)(in_stack_0000002c + DAT_001291e0) + 0x2c) &&
          (iVar5 != DAT_001291e4)))) {
        (**(code **)(*this_00 + 0xf4))(this_00);
        in_stack_0000009c = CONCAT13(in_stack_0000009c._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)this_00,in_stack_0000009c,p_Var6);
        *(undefined *)(*(int *)(p_Var6 + 4) + 0x90) = 1;
        iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
        if ((iVar5 == 0) &&
           (iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,DAT_001291e8), iVar5 == 0)) {
          piVar18 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar17 = *(code **)(*piVar18 + 0x74);
          cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000178,extraout_s0_00,extraout_s1);
          (*pcVar17)(piVar18,&stack0x00000178);
          pcVar17 = *(code **)(*piVar18 + 0x3c);
          puVar2 = (undefined4 *)(**(code **)(*this_00 + 0x7c))(this_00);
          uVar21 = __mulsf3(*puVar2,0x3f000000);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000180,(float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
          (*pcVar17)(piVar18,&stack0x00000180);
          (**(code **)(*this_00 + 0xcc))(this_00,piVar18,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)param_12 + 0x1e) != '\0') {
    piStack00000040 = param_12;
    iStack00000020 = 0;
    do {
      iVar5 = param_12[8];
      if (iVar5 <= iStack00000020) {
        FUN_00129d06();
        return;
      }
      piVar18 = (int *)piStack00000040[9];
      if (piVar18 == this_00) {
        FUN_00129d06();
      }
      if (iStack00000020 != iVar5 + -1) {
        if (piVar18 != (int *)0x0) goto LAB_00129a5e;
        param_12[iStack00000020 + 9] = (int)this_00;
        if (*(char *)(*(int *)(p_Var6 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var6 + 4) + 0x84) = (char)piVar18;
        }
        *(undefined *)(*(int *)(p_Var6 + 4) + 0x124) = 1;
        pcVar8 = *(char **)(in_stack_0000002c + DAT_001294b8);
        if ((*pcVar8 != '\0') && (**(int **)(p_Var6 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*param_12 == 1) {
          pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar3 = *puVar2;
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar19 = __mulsf3(*puVar2,0x3f000000);
          __subsf3(uVar3,uVar19);
          piStack00000040 = (int *)__fixsfsi();
          iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar5 + 4),DAT_001294c4);
          iVar5 = __fixsfsi();
          iVar7 = (**(code **)(*this_00 + 0x14))(this_00);
          uVar1 = *(undefined *)((int)param_12 + 0x1d);
          iVar12 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar14,pCVar15,iVar12,(int)piStack00000040,iVar5,iVar7,(bool)uVar1);
        }
        else if (*param_12 == 0) {
          pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          pCVar15 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          piStack00000040 = (int *)__fixsfsi(*puVar2);
          iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar5 = __fixsfsi(*(undefined4 *)(iVar5 + 4));
          iVar7 = (**(code **)(*this_00 + 0x14))(this_00);
          uVar1 = *(undefined *)((int)param_12 + 0x1d);
          iVar12 = 1;
          goto LAB_00129436;
        }
        in_stack_000000ac = CONCAT13(in_stack_000000ac._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this_00,in_stack_000000ac,p_Var6);
        if ((param_12[0x15] == 0xb) || (param_12[0x14] == 0xb || param_12[0x13] == 0xb))
        goto LAB_00129470;
        piVar18 = *(int **)(p_Var6 + 4);
        if ((*pcVar8 != '\0') && (*piVar18 == 2)) {
          FUN_00129da2();
        }
        if (((iVar4 + DAT_001294cc == 0) || (iVar4 + DAT_001294d0 == 0)) || (iVar4 == DAT_001294d4))
        {
          iVar4 = __mulsf3(param_12[1],0x3f000000);
          iVar5 = piVar18[9];
        }
        else {
          iVar5 = piVar18[9];
          iVar4 = param_12[1];
        }
        iVar4 = __subsf3(iVar5,iVar4);
        piVar18[9] = iVar4;
        uVar21 = __extendsfdf2(param_12[1]);
        uVar22 = __extendsfdf2(param_12[2]);
        uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                 (int)((ulonglong)uVar22 >> 0x20));
        iVar4 = __truncdfsf2();
        param_12[1] = iVar4;
        if ((*(int *)(*(int *)(p_Var6 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(in_stack_0000002c + DAT_001297b8) + 1) != '\0')) {
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar16 = *(int ***)(in_stack_0000002c + DAT_001297c0);
        piVar18 = *ppiVar16;
        if ((piVar18[0x10] == 0) &&
           ((piVar9 = *(int **)(p_Var6 + 4), *piVar9 == 3 || (piVar9[1] == piVar18[0xb])))) {
          uVar21 = __extendsfdf2(piVar9[9]);
          uVar22 = __extendsfdf2(piVar9[10]);
          uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar5 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                 (int)((ulonglong)uVar22 >> 0x20));
          iVar4 = DAT_001297c4;
          if (iVar5 != 0) {
            piVar18[0x10] = 1;
            iVar4 = *(int *)(in_stack_0000002c + iVar4);
            piVar9 = *(int **)(in_stack_0000002c + DAT_001297c8);
            piVar13 = *(int **)(in_stack_0000002c + DAT_001297cc);
            if ((*(int **)(p_Var6 + 4))[1] == piVar18[0xb]) {
              uVar3 = __mulsf3(*(undefined4 *)
                                (iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x30),
                               0x3f000000);
LAB_001295ee:
              iVar5 = __fixsfsi(uVar3);
              piVar18[0x11] = iVar5;
            }
            else if (**(int **)(p_Var6 + 4) == 3) {
              uVar3 = *(undefined4 *)(iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x30);
              goto LAB_001295ee;
            }
            piVar18[0x12] = *(int *)(iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar16 != 3) {
              GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_001297d0),0);
            }
          }
          piVar18 = *ppiVar16;
          piVar9 = piVar18 + 0x14;
          if (*(char *)piVar9 == '\0') {
            iVar4 = *(int *)(p_Var6 + 4);
            uVar21 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x24));
            uVar22 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x28));
            uVar23 = __floatsidf(piVar18[0x15]);
            uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                              (int)((ulonglong)uVar23 >> 0x20));
            iVar4 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                   (int)((ulonglong)uVar22 >> 0x20));
            if (iVar4 != 0) {
              *(char *)piVar9 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)this_00);
        iVar4 = __aeabi_fcmplt(param_12[1],0);
        if (iVar4 != 0) {
          operator_delete(param_12);
          (**(code **)(***(int ***)(in_stack_0000002c + DAT_001297d4) + 0xd0))
                    (**(int ***)(in_stack_0000002c + DAT_001297d4),unaff_r6,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        param_11 = 0;
        while ((*(int *)((int)param_12 + param_11 + 0x4c) == 0 || (**(int **)(p_Var6 + 4) != 0))) {
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
        piStack00000040[9] = (int)this_00;
        if (*(char *)(*(int *)(p_Var6 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var6 + 4) + 0x84) = (char)piVar18;
        }
        *(undefined *)(*(int *)(p_Var6 + 4) + 0x124) = 1;
        pcVar8 = *(char **)(in_stack_0000002c + DAT_001297d8);
        if ((*pcVar8 != '\0') && (**(int **)(p_Var6 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*param_12 == 1) {
          pEVar14 = *(Effect **)(in_stack_0000003c + DAT_001297dc);
          pCStack00000048 = **(CCLayer ***)(in_stack_0000002c + DAT_001297d4);
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar19 = *puVar2;
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar3 = __mulsf3(*puVar2,0x3f000000);
          __subsf3(uVar19,uVar3);
          iStack00000050 = __fixsfsi();
          iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar5 + 4),DAT_001297e0);
          iVar5 = __fixsfsi();
          iVar7 = (**(code **)(*this_00 + 0x14))();
          uVar1 = *(undefined *)((int)param_12 + 0x1d);
          iVar12 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar14,pCStack00000048,iVar12,iStack00000050,iVar5,iVar7,(bool)uVar1)
          ;
        }
        else if (*param_12 == 0) {
          pEVar14 = *(Effect **)(in_stack_0000003c + DAT_00129b00);
          pCStack00000048 = **(CCLayer ***)(in_stack_0000002c + DAT_00129b04);
          puVar2 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iStack00000050 = __fixsfsi(*puVar2);
          iVar5 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar5 = __fixsfsi(*(undefined4 *)(iVar5 + 4));
          iVar7 = (**(code **)(*this_00 + 0x14))();
          uVar1 = *(undefined *)((int)param_12 + 0x1d);
          iVar12 = 1;
          goto LAB_00129832;
        }
        in_stack_000000b0 = CONCAT13(in_stack_000000b0._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this_00,in_stack_000000b0,p_Var6);
        if ((param_12[0x15] != 0xb) && (param_12[0x14] != 0xb && param_12[0x13] != 0xb)) {
          piVar18 = *(int **)(p_Var6 + 4);
          if ((*pcVar8 != '\0') && (*piVar18 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar4 + DAT_00129b08 == 0) || (iVar4 + DAT_00129b0c == 0)) ||
             (iVar4 == DAT_00129b10)) {
            iVar5 = __mulsf3(param_12[1],0x3f000000);
            iVar7 = piVar18[9];
          }
          else {
            iVar7 = piVar18[9];
            iVar5 = param_12[1];
          }
          iVar5 = __subsf3(iVar7,iVar5);
          piVar18[9] = iVar5;
          if ((*(int *)(*(int *)(p_Var6 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(in_stack_0000002c + DAT_00129b14) + 1) != '\0')) {
            pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_00129b18 + -0x28));
          }
          ppiVar16 = *(int ***)(in_stack_0000002c + DAT_00129b1c);
          piVar18 = *ppiVar16;
          if ((piVar18[0x10] == 0) &&
             ((piVar9 = *(int **)(p_Var6 + 4), *piVar9 == 3 || (piVar9[1] == piVar18[0xb])))) {
            uVar21 = __extendsfdf2(piVar9[9]);
            uVar22 = __extendsfdf2(piVar9[10]);
            uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar7 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                   (int)((ulonglong)uVar22 >> 0x20));
            iVar5 = DAT_00129b20;
            if (iVar7 != 0) {
              piVar18[0x10] = 1;
              iVar5 = *(int *)(in_stack_0000002c + iVar5);
              piVar13 = *(int **)(in_stack_0000002c + DAT_00129b24);
              piVar9 = *(int **)(in_stack_0000002c + DAT_00129b28);
              if ((*(int **)(p_Var6 + 4))[1] == piVar18[0xb]) {
                uVar3 = __mulsf3(*(undefined4 *)
                                  (iVar5 + ((*piVar13 + -1) * 10 + *piVar9 + -1) * 0x40 + 0x30),
                                 0x3f000000);
LAB_0012998a:
                iVar7 = __fixsfsi(uVar3);
                piVar18[0x11] = iVar7;
              }
              else if (**(int **)(p_Var6 + 4) == 3) {
                uVar3 = *(undefined4 *)(iVar5 + ((*piVar13 + -1) * 10 + *piVar9 + -1) * 0x40 + 0x30)
                ;
                goto LAB_0012998a;
              }
              piVar18[0x12] = *(int *)(iVar5 + ((*piVar13 + -1) * 10 + *piVar9 + -1) * 0x40 + 0x2c);
              Game_Scene_Vibration();
              if (**ppiVar16 != 3) {
                GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_00129b2c),0);
              }
            }
            piVar9 = *ppiVar16;
            piVar18 = piVar9 + 0x14;
            if (*(char *)piVar18 == '\0') {
              iVar5 = *(int *)(p_Var6 + 4);
              uVar21 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x24));
              uVar22 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x28));
              uVar23 = __floatsidf(piVar9[0x15]);
              uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                (int)((ulonglong)uVar23 >> 0x20));
              iVar5 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                                     (int)((ulonglong)uVar22 >> 0x20));
              if (iVar5 != 0) {
                *(char *)piVar18 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)this_00);
        }
        iStack00000030 = 0;
        do {
          if ((*(int *)((int)param_12 + iStack00000030 + 0x4c) != 0) &&
             (**(int **)(p_Var6 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_00129b30 + 0x129a2c));
          }
          iStack00000030 = iStack00000030 + 4;
        } while (iStack00000030 != 0xc);
      }
LAB_00129a5e:
      iStack00000020 = iStack00000020 + 1;
      piStack00000040 = piStack00000040 + 1;
    } while( true );
  }
  if (*(char *)(*(int *)(p_Var6 + 4) + 0x84) != '\0') {
    *(char *)(*(int *)(p_Var6 + 4) + 0x84) = '\0';
  }
  piVar18 = *(int **)(p_Var6 + 4);
  if ((piVar18[0x38] == 0xb) || (piVar18[0x37] == 0xb || piVar18[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(in_stack_0000002c + DAT_00129b34) != '\0') && (*piVar18 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar4 + DAT_00129b08 == 0) || (iVar4 + DAT_00129b0c == 0)) || (iVar4 == DAT_00129b10)) {
    iVar4 = __mulsf3(param_12[1],0x3f000000);
    iVar5 = piVar18[9];
  }
  else {
    iVar5 = piVar18[9];
    iVar4 = param_12[1];
  }
  iVar4 = __subsf3(iVar5,iVar4);
  piVar18[9] = iVar4;
  if ((*(int *)(*(int *)(p_Var6 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(in_stack_0000002c + DAT_00129db8) + 1) != '\0')) {
    pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_00129dbc + 'f'));
  }
  param_11 = 0;
  do {
    if ((*(int *)((int)param_12 + param_11 + 0x4c) != 0) && (**(int **)(p_Var6 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    param_11 = param_11 + 4;
  } while (param_11 != 0xc);
  ppiVar16 = *(int ***)(in_stack_0000002c + DAT_00129dc4);
  piVar18 = *ppiVar16;
  if ((piVar18[0x10] == 0) &&
     ((piVar9 = *(int **)(p_Var6 + 4), *piVar9 == 3 || (piVar9[1] == piVar18[0xb])))) {
    uVar21 = __extendsfdf2(piVar9[9]);
    uVar22 = __extendsfdf2(piVar9[10]);
    uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar5 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                           (int)((ulonglong)uVar22 >> 0x20));
    iVar4 = DAT_00129dc8;
    if (iVar5 != 0) {
      piVar18[0x10] = 1;
      iVar4 = *(int *)(in_stack_0000002c + iVar4);
      piVar9 = *(int **)(in_stack_0000002c + DAT_00129dcc);
      piVar13 = *(int **)(in_stack_0000002c + DAT_00129dd0);
      if ((*(int **)(p_Var6 + 4))[1] == piVar18[0xb]) {
        uVar3 = __mulsf3(*(undefined4 *)
                          (iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x30),0x3f000000);
LAB_00129c5e:
        iVar5 = __fixsfsi(uVar3);
        piVar18[0x11] = iVar5;
      }
      else if (**(int **)(p_Var6 + 4) == 3) {
        uVar3 = *(undefined4 *)(iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar18[0x12] = *(int *)(iVar4 + ((*piVar9 + -1) * 10 + *piVar13 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar16 != 3) {
        GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_00129dd4),0);
      }
    }
    piVar18 = *ppiVar16;
    piVar9 = piVar18 + 0x14;
    if (*(char *)piVar9 == '\0') {
      iVar4 = *(int *)(p_Var6 + 4);
      uVar21 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x24));
      uVar22 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x28));
      uVar23 = __floatsidf(piVar18[0x15]);
      uVar23 = __muldf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar22 = __muldf3((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                        (int)((ulonglong)uVar23 >> 0x20));
      iVar4 = __aeabi_dcmplt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),(int)uVar22,
                             (int)((ulonglong)uVar22 >> 0x20));
      if (iVar4 != 0) {
        *(char *)piVar9 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)this_00);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var6 + 4) + 0x124) = 1;
  if (**(int **)(p_Var6 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(in_stack_0000003c + 0x120),p_Var6);
  }
  operator_delete(param_12);
  (**(code **)(***(int ***)(in_stack_0000002c + DAT_00129dd8) + 0xd0))
            (**(int ***)(in_stack_0000002c + DAT_00129dd8),unaff_r6,1);
  uVar10 = cocos2d::CCArray::count(this);
  if (unaff_r5 + 1 < uVar10) {
    FUN_00128df0();
  }
  uVar10 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar20 = extraout_s0_01;
  if (in_stack_00000068 + 1U < uVar10) {
    fVar20 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(in_stack_0000003c,fVar20);
  FUN_00129da2();
  return;
}


