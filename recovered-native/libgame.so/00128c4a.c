/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00128c4a  Symbol: FUN_00128c4a */

void FUN_00128c4a(float param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CCArray *this;
  int *this_00;
  _Unit_Stage *p_Var7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  undefined *__src;
  CCRect *pCVar12;
  int iVar13;
  int *piVar14;
  code *pcVar15;
  Effect *pEVar16;
  CCLayer *pCVar17;
  int **ppiVar18;
  int *piVar19;
  code *pcVar20;
  int *unaff_r6;
  undefined4 uVar21;
  float extraout_s0;
  float fVar22;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar23;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar24;
  undefined8 uVar25;
  int iStack00000018;
  int iStack00000020;
  int in_stack_0000002c;
  int iStack00000030;
  GameScene *param_11;
  int *piStack00000040;
  CCLayer *pCStack00000048;
  int iStack00000050;
  int **in_stack_00000058;
  CCLayer *param_12;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  _ccColor3B in_stack_0000009c;
  _ccColor3B in_stack_000000a4;
  _ccColor3B in_stack_000000a8;
  _ccColor3B in_stack_000000ac;
  _ccColor3B in_stack_000000b0;
  
  pcVar15 = *(code **)(param_11 + 0x120);
  attack(param_1,param_12,(CCLayer *)unaff_r6,*(CCLayer **)(param_11 + iRam00128de0));
  FUN_00129d54();
  piVar2 = (int *)(*pcVar15)(unaff_r6);
  pcVar20 = *(code **)(*unaff_r6 + 0x3c);
  pcVar15 = *(code **)(*unaff_r6 + 0x38);
  if (*piVar2 == 0) {
    puVar3 = (undefined4 *)(*pcVar15)();
    __addsf3(*puVar3,piVar2[3]);
    iVar4 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    uVar23 = __addsf3(*(undefined4 *)(iVar4 + 4),piVar2[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000168,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
    (*pcVar20)(unaff_r6,&stack0x00000168);
    puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    iVar4 = __aeabi_fcmpgt(*puVar3,uRam00128de4);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
      uVar5 = __addsf3(piVar2[5],uRam00128de8);
      iVar4 = __aeabi_fcmpgt(*puVar3,uVar5);
LAB_00128d38:
      if (iVar4 == 0) {
        FUN_00129d84();
      }
    }
  }
  else {
    puVar3 = (undefined4 *)(*pcVar15)(unaff_r6);
    __subsf3(*puVar3,piVar2[3]);
    iVar4 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    uVar23 = __addsf3(*(undefined4 *)(iVar4 + 4),piVar2[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000170,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
    (*pcVar20)(unaff_r6,&stack0x00000170);
    puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    iVar4 = __aeabi_fcmplt(*puVar3,0);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
      uVar5 = __subsf3(piVar2[5],uRam00128de8);
      iVar4 = __aeabi_fcmplt(*puVar3,uVar5);
      goto LAB_00128d38;
    }
  }
  operator_delete(piVar2);
  (**(code **)(**in_stack_00000058 + 0xd0))(*in_stack_00000058,unaff_r6,1);
  FUN_00129d54();
  puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  uVar5 = __mulsf3(piVar2[0x18],0x3f000000);
  __subsf3(*puVar3,uVar5);
  iVar4 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  iVar4 = __subsf3(*(undefined4 *)(iVar4 + 4),uRam00128dec);
  (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  iVar6 = (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  uVar23 = __addsf3(*(undefined4 *)(iVar6 + 4),uRam00128dec);
  cocos2d::CCRect::CCRect
            ((CCRect *)&stack0x00000188,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20),extraout_s2
             ,extraout_s3);
  this = (CCArray *)(**(code **)(**in_stack_00000058 + 0x58))();
  FUN_00129d44();
  func_0xffe6ddce();
  func_0xfff65dd2();
  func_0x0031ddd6();
  func_0x0037ddda();
  uVar23 = func_0x0032ddde();
  *(undefined2 *)uVar23 = (short)uVar23;
  if (piVar2 == (int *)0x0) {
    FUN_00129d54((undefined2 *)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)unaff_r6 * iVar4);
  }
  this_00 = (int *)cocos2d::CCArray::objectAtIndex(this,(uint)pcVar20);
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
  p_Var7 = (_Unit_Stage *)(**(code **)(*this_00 + 0xa8))(this_00);
  if (p_Var7 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar6 = *(int *)(p_Var7 + 4);
  iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x24),0);
  if (iVar4 == 0) {
    FUN_00129d3e();
  }
  iVar4 = *(int *)(iVar6 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&stack0x00000198);
  if (**(int **)(p_Var7 + 4) == 5) {
    puVar3 = (undefined4 *)(**(code **)(*this_00 + 0x38))();
    __addsf3(*puVar3,DAT_001291c8);
    iVar6 = (**(code **)(*this_00 + 0x38))(this_00);
    uVar23 = __subsf3(*(undefined4 *)(iVar6 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001a8,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20),
               extraout_s2_00,extraout_s3_00);
    __src = &stack0x000001a8;
  }
  else {
    (**(code **)(*this_00 + 0x38))(this_00);
    iVar6 = (**(code **)(*this_00 + 0x38))(this_00);
    iVar8 = *(int *)(p_Var7 + 4);
    uVar5 = *(undefined4 *)(iVar8 + 0x104);
    __subsf3(*(undefined4 *)(iVar6 + 4),uVar5);
    __mulsf3(*(undefined4 *)(iVar8 + 0x100),0x3f000000);
    uVar23 = __addsf3(uVar5,uVar5);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001b8,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20),
               extraout_s2_01,extraout_s3_01);
    __src = &stack0x000001b8;
  }
  pCVar12 = (CCRect *)0x10;
  memcpy(&stack0x00000198,__src,0x10);
  if (*piVar2 == 0) {
    iVar6 = **(int **)(p_Var7 + 4);
    if (((iVar6 != 3) && (iVar6 != 1)) && (iVar6 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*piVar2 != 1) {
      FUN_00129d3e();
    }
    iVar6 = **(int **)(p_Var7 + 4);
    if (((iVar6 != 2) && (iVar6 != 0)) && (iVar6 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar6 = cocos2d::CCRect::CCRectIntersectsRect
                    ((CCRect *)&stack0x00000188,(CCRect *)&stack0x00000198,pCVar12);
  fVar22 = extraout_s0;
  if (iVar6 == 0) {
    fVar22 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)piVar2 + 0x19) == '\0') {
    if (*(char *)(piVar2 + 7) == '\0') {
      if (*(char *)((int)piVar2 + 0x1a) == '\0') {
        if (((*(char *)((int)piVar2 + 0x1b) == '\0') && (*(char *)(piVar2 + 6) == '\0')) &&
           (*(char *)((int)piVar2 + 0x1e) == '\0')) {
          if ((**(char **)(in_stack_0000002c + DAT_001294b8) != '\0') &&
             (**(int **)(p_Var7 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar16 = *(Effect **)(param_11 + DAT_001294bc);
          if (pEVar16 != (Effect *)0x0) {
            if (*piVar2 == 1) {
              pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
              puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              uVar5 = *puVar3;
              puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
              uVar21 = __mulsf3(*puVar3,0x3f000000);
              __subsf3(uVar5,uVar21);
              iStack00000020 = __fixsfsi();
              iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              __subsf3(*(undefined4 *)(iVar6 + 4),DAT_001294c4);
              iVar6 = __fixsfsi();
              iVar8 = (**(code **)(*this_00 + 0x14))(this_00);
              uVar1 = *(undefined *)((int)piVar2 + 0x1d);
              iVar13 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar16,pCVar17,iVar13,iStack00000020,iVar6,iVar8,(bool)uVar1);
            }
            else if (*piVar2 == 0) {
              pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
              puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iStack00000020 = __fixsfsi(*puVar3);
              iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iVar6 = __fixsfsi(*(undefined4 *)(iVar6 + 4));
              iVar8 = (**(code **)(*this_00 + 0x14))(this_00);
              uVar1 = *(undefined *)((int)piVar2 + 0x1d);
              iVar13 = 1;
              goto LAB_001292e2;
            }
            in_stack_000000a8 = CONCAT13(in_stack_000000a8._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)this_00,in_stack_000000a8,p_Var7);
          }
        }
      }
      else {
        SetStun((CCLayer *)this_00,fVar22);
      }
    }
    else {
      pEVar16 = *(Effect **)(param_11 + DAT_001291d8);
      if ((pEVar16 != (Effect *)0x0) &&
         (piVar2[0x15] != 0xb && (piVar2[0x14] != 0xb && piVar2[0x13] != 0xb))) {
        pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001291dc);
        puVar3 = (undefined4 *)(**(code **)(*this_00 + 0x38))(this_00);
        iVar6 = __fixsfsi(*puVar3);
        iVar8 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
        iVar8 = __fixsfsi(*(undefined4 *)(iVar8 + 4));
        iVar13 = (**(code **)(*this_00 + 0x14))(this_00);
        Effect::Effect_Draw(pEVar16,pCVar17,5,iVar6,iVar8,iVar13,false);
        (**(code **)(*this_00 + 0xf4))(this_00);
        in_stack_000000a4 = CONCAT13(in_stack_000000a4._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)this_00,in_stack_000000a4,p_Var7);
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar16 = *(Effect **)(param_11 + DAT_001291d8);
    if ((pEVar16 != (Effect *)0x0) &&
       (piVar2[0x15] != 0xb && (piVar2[0x14] != 0xb && piVar2[0x13] != 0xb))) {
      pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001291dc);
      puVar3 = (undefined4 *)(**(code **)(*this_00 + 0x38))(this_00);
      iVar6 = __fixsfsi(*puVar3);
      iVar8 = (**(code **)(*this_00 + 0x38))(this_00);
      uVar5 = *(undefined4 *)(iVar8 + 4);
      iVar8 = (**(code **)(*this_00 + 0x7c))(this_00);
      uVar21 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
      __addsf3(uVar5,uVar21);
      iVar8 = __fixsfsi();
      iVar13 = (**(code **)(*this_00 + 0x14))(this_00);
      Effect::Effect_Draw(pEVar16,pCVar17,0xa0,iVar6,iVar8,iVar13,*(bool *)((int)piVar2 + 0x1d));
      if ((**(int **)(p_Var7 + 4) != 3) &&
         ((iVar6 = (*(int **)(p_Var7 + 4))[1],
          iVar6 != *(int *)(**(int **)(in_stack_0000002c + DAT_001291e0) + 0x2c) &&
          (iVar6 != DAT_001291e4)))) {
        (**(code **)(*this_00 + 0xf4))(this_00);
        in_stack_0000009c = CONCAT13(in_stack_0000009c._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)this_00,in_stack_0000009c,p_Var7);
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x90) = 1;
        iVar6 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
        if ((iVar6 == 0) &&
           (iVar6 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,DAT_001291e8), iVar6 == 0)) {
          piVar19 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar15 = *(code **)(*piVar19 + 0x74);
          cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000178,extraout_s0_00,extraout_s1);
          (*pcVar15)(piVar19,&stack0x00000178);
          pcVar15 = *(code **)(*piVar19 + 0x3c);
          puVar3 = (undefined4 *)(**(code **)(*this_00 + 0x7c))(this_00);
          uVar23 = __mulsf3(*puVar3,0x3f000000);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000180,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
          (*pcVar15)(piVar19,&stack0x00000180);
          (**(code **)(*this_00 + 0xcc))(this_00,piVar19,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)piVar2 + 0x1e) != '\0') {
    iStack00000020 = 0;
    piStack00000040 = piVar2;
    do {
      iVar6 = piVar2[8];
      if (iVar6 <= iStack00000020) {
        FUN_00129d06();
        return;
      }
      piVar19 = (int *)piStack00000040[9];
      if (piVar19 == this_00) {
        FUN_00129d06();
      }
      if (iStack00000020 != iVar6 + -1) {
        if (piVar19 != (int *)0x0) goto LAB_00129a5e;
        piVar2[iStack00000020 + 9] = (int)this_00;
        if (*(char *)(*(int *)(p_Var7 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var7 + 4) + 0x84) = (char)piVar19;
        }
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
        pcVar9 = *(char **)(in_stack_0000002c + DAT_001294b8);
        if ((*pcVar9 != '\0') && (**(int **)(p_Var7 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*piVar2 == 1) {
          pEVar16 = *(Effect **)(param_11 + DAT_001294bc);
          pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar5 = *puVar3;
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar21 = __mulsf3(*puVar3,0x3f000000);
          __subsf3(uVar5,uVar21);
          piStack00000040 = (int *)__fixsfsi();
          iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar6 + 4),DAT_001294c4);
          iVar6 = __fixsfsi();
          iVar8 = (**(code **)(*this_00 + 0x14))(this_00);
          uVar1 = *(undefined *)((int)piVar2 + 0x1d);
          iVar13 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar16,pCVar17,iVar13,(int)piStack00000040,iVar6,iVar8,(bool)uVar1);
        }
        else if (*piVar2 == 0) {
          pEVar16 = *(Effect **)(param_11 + DAT_001294bc);
          pCVar17 = **(CCLayer ***)(in_stack_0000002c + DAT_001294c0);
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          piStack00000040 = (int *)__fixsfsi(*puVar3);
          iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar6 = __fixsfsi(*(undefined4 *)(iVar6 + 4));
          iVar8 = (**(code **)(*this_00 + 0x14))(this_00);
          uVar1 = *(undefined *)((int)piVar2 + 0x1d);
          iVar13 = 1;
          goto LAB_00129436;
        }
        in_stack_000000ac = CONCAT13(in_stack_000000ac._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this_00,in_stack_000000ac,p_Var7);
        if ((piVar2[0x15] == 0xb) || (piVar2[0x14] == 0xb || piVar2[0x13] == 0xb))
        goto LAB_00129470;
        piVar19 = *(int **)(p_Var7 + 4);
        if ((*pcVar9 != '\0') && (*piVar19 == 2)) {
          FUN_00129da2();
        }
        if (((iVar4 + DAT_001294cc == 0) || (iVar4 + DAT_001294d0 == 0)) || (iVar4 == DAT_001294d4))
        {
          iVar4 = __mulsf3(piVar2[1],0x3f000000);
          iVar6 = piVar19[9];
        }
        else {
          iVar6 = piVar19[9];
          iVar4 = piVar2[1];
        }
        iVar4 = __subsf3(iVar6,iVar4);
        piVar19[9] = iVar4;
        uVar23 = __extendsfdf2(piVar2[1]);
        uVar24 = __extendsfdf2(piVar2[2]);
        uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                 (int)((ulonglong)uVar24 >> 0x20));
        iVar4 = __truncdfsf2();
        piVar2[1] = iVar4;
        if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(in_stack_0000002c + DAT_001297b8) + 1) != '\0')) {
          pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar18 = *(int ***)(in_stack_0000002c + DAT_001297c0);
        piVar19 = *ppiVar18;
        if ((piVar19[0x10] == 0) &&
           ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar19[0xb])))) {
          uVar23 = __extendsfdf2(piVar10[9]);
          uVar24 = __extendsfdf2(piVar10[10]);
          uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar6 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                 (int)((ulonglong)uVar24 >> 0x20));
          iVar4 = DAT_001297c4;
          if (iVar6 != 0) {
            piVar19[0x10] = 1;
            iVar4 = *(int *)(in_stack_0000002c + iVar4);
            piVar10 = *(int **)(in_stack_0000002c + DAT_001297c8);
            piVar14 = *(int **)(in_stack_0000002c + DAT_001297cc);
            if ((*(int **)(p_Var7 + 4))[1] == piVar19[0xb]) {
              uVar5 = __mulsf3(*(undefined4 *)
                                (iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x30),
                               0x3f000000);
LAB_001295ee:
              iVar6 = __fixsfsi(uVar5);
              piVar19[0x11] = iVar6;
            }
            else if (**(int **)(p_Var7 + 4) == 3) {
              uVar5 = *(undefined4 *)(iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x30);
              goto LAB_001295ee;
            }
            piVar19[0x12] = *(int *)(iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar18 != 3) {
              GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_001297d0),0);
            }
          }
          piVar19 = *ppiVar18;
          piVar10 = piVar19 + 0x14;
          if (*(char *)piVar10 == '\0') {
            iVar4 = *(int *)(p_Var7 + 4);
            uVar23 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x24));
            uVar24 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x28));
            uVar25 = __floatsidf(piVar19[0x15]);
            uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                              (int)((ulonglong)uVar25 >> 0x20));
            iVar4 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                   (int)((ulonglong)uVar24 >> 0x20));
            if (iVar4 != 0) {
              *(char *)piVar10 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)this_00);
        iVar4 = __aeabi_fcmplt(piVar2[1],0);
        if (iVar4 != 0) {
          operator_delete(piVar2);
          (**(code **)(***(int ***)(in_stack_0000002c + DAT_001297d4) + 0xd0))
                    (**(int ***)(in_stack_0000002c + DAT_001297d4),unaff_r6,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        iStack00000018 = 0;
        while ((*(int *)((int)piVar2 + iStack00000018 + 0x4c) == 0 || (**(int **)(p_Var7 + 4) != 0))
              ) {
          iStack00000018 = iStack00000018 + 4;
          if (iStack00000018 == 0xc) {
            FUN_00129d06();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_001294c8 + 0x12947a));
      }
      if (piVar19 == (int *)0x0) {
        piStack00000040[9] = (int)this_00;
        if (*(char *)(*(int *)(p_Var7 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var7 + 4) + 0x84) = (char)piVar19;
        }
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
        pcVar9 = *(char **)(in_stack_0000002c + DAT_001297d8);
        if ((*pcVar9 != '\0') && (**(int **)(p_Var7 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*piVar2 == 1) {
          pEVar16 = *(Effect **)(param_11 + DAT_001297dc);
          pCStack00000048 = **(CCLayer ***)(in_stack_0000002c + DAT_001297d4);
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar21 = *puVar3;
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar5 = __mulsf3(*puVar3,0x3f000000);
          __subsf3(uVar21,uVar5);
          iStack00000050 = __fixsfsi();
          iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar6 + 4),DAT_001297e0);
          iVar6 = __fixsfsi();
          iVar8 = (**(code **)(*this_00 + 0x14))();
          uVar1 = *(undefined *)((int)piVar2 + 0x1d);
          iVar13 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar16,pCStack00000048,iVar13,iStack00000050,iVar6,iVar8,(bool)uVar1)
          ;
        }
        else if (*piVar2 == 0) {
          pEVar16 = *(Effect **)(param_11 + DAT_00129b00);
          pCStack00000048 = **(CCLayer ***)(in_stack_0000002c + DAT_00129b04);
          puVar3 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iStack00000050 = __fixsfsi(*puVar3);
          iVar6 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar6 = __fixsfsi(*(undefined4 *)(iVar6 + 4));
          iVar8 = (**(code **)(*this_00 + 0x14))();
          uVar1 = *(undefined *)((int)piVar2 + 0x1d);
          iVar13 = 1;
          goto LAB_00129832;
        }
        in_stack_000000b0 = CONCAT13(in_stack_000000b0._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)this_00,in_stack_000000b0,p_Var7);
        if ((piVar2[0x15] != 0xb) && (piVar2[0x14] != 0xb && piVar2[0x13] != 0xb)) {
          piVar19 = *(int **)(p_Var7 + 4);
          if ((*pcVar9 != '\0') && (*piVar19 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar4 + DAT_00129b08 == 0) || (iVar4 + DAT_00129b0c == 0)) ||
             (iVar4 == DAT_00129b10)) {
            iVar6 = __mulsf3(piVar2[1],0x3f000000);
            iVar8 = piVar19[9];
          }
          else {
            iVar8 = piVar19[9];
            iVar6 = piVar2[1];
          }
          iVar6 = __subsf3(iVar8,iVar6);
          piVar19[9] = iVar6;
          if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(in_stack_0000002c + DAT_00129b14) + 1) != '\0')) {
            pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_00129b18 + -0x28));
          }
          ppiVar18 = *(int ***)(in_stack_0000002c + DAT_00129b1c);
          piVar19 = *ppiVar18;
          if ((piVar19[0x10] == 0) &&
             ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar19[0xb])))) {
            uVar23 = __extendsfdf2(piVar10[9]);
            uVar24 = __extendsfdf2(piVar10[10]);
            uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar8 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                   (int)((ulonglong)uVar24 >> 0x20));
            iVar6 = DAT_00129b20;
            if (iVar8 != 0) {
              piVar19[0x10] = 1;
              iVar6 = *(int *)(in_stack_0000002c + iVar6);
              piVar14 = *(int **)(in_stack_0000002c + DAT_00129b24);
              piVar10 = *(int **)(in_stack_0000002c + DAT_00129b28);
              if ((*(int **)(p_Var7 + 4))[1] == piVar19[0xb]) {
                uVar5 = __mulsf3(*(undefined4 *)
                                  (iVar6 + ((*piVar14 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x30),
                                 0x3f000000);
LAB_0012998a:
                iVar8 = __fixsfsi(uVar5);
                piVar19[0x11] = iVar8;
              }
              else if (**(int **)(p_Var7 + 4) == 3) {
                uVar5 = *(undefined4 *)
                         (iVar6 + ((*piVar14 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x30);
                goto LAB_0012998a;
              }
              piVar19[0x12] = *(int *)(iVar6 + ((*piVar14 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x2c)
              ;
              Game_Scene_Vibration();
              if (**ppiVar18 != 3) {
                GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_00129b2c),0);
              }
            }
            piVar10 = *ppiVar18;
            piVar19 = piVar10 + 0x14;
            if (*(char *)piVar19 == '\0') {
              iVar6 = *(int *)(p_Var7 + 4);
              uVar23 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x24));
              uVar24 = __extendsfdf2(*(undefined4 *)(iVar6 + 0x28));
              uVar25 = __floatsidf(piVar10[0x15]);
              uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
              iVar6 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                     (int)((ulonglong)uVar24 >> 0x20));
              if (iVar6 != 0) {
                *(char *)piVar19 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)this_00);
        }
        iStack00000030 = 0;
        do {
          if ((*(int *)((int)piVar2 + iStack00000030 + 0x4c) != 0) && (**(int **)(p_Var7 + 4) == 0))
          {
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
  if (*(char *)(*(int *)(p_Var7 + 4) + 0x84) != '\0') {
    *(char *)(*(int *)(p_Var7 + 4) + 0x84) = '\0';
  }
  piVar19 = *(int **)(p_Var7 + 4);
  if ((piVar19[0x38] == 0xb) || (piVar19[0x37] == 0xb || piVar19[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(in_stack_0000002c + DAT_00129b34) != '\0') && (*piVar19 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar4 + DAT_00129b08 == 0) || (iVar4 + DAT_00129b0c == 0)) || (iVar4 == DAT_00129b10)) {
    iVar4 = __mulsf3(piVar2[1],0x3f000000);
    iVar6 = piVar19[9];
  }
  else {
    iVar6 = piVar19[9];
    iVar4 = piVar2[1];
  }
  iVar4 = __subsf3(iVar6,iVar4);
  piVar19[9] = iVar4;
  if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(in_stack_0000002c + DAT_00129db8) + 1) != '\0')) {
    pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_00129dbc + 'f'));
  }
  iStack00000018 = 0;
  do {
    if ((*(int *)((int)piVar2 + iStack00000018 + 0x4c) != 0) && (**(int **)(p_Var7 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    iStack00000018 = iStack00000018 + 4;
  } while (iStack00000018 != 0xc);
  ppiVar18 = *(int ***)(in_stack_0000002c + DAT_00129dc4);
  piVar19 = *ppiVar18;
  if ((piVar19[0x10] == 0) &&
     ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar19[0xb])))) {
    uVar23 = __extendsfdf2(piVar10[9]);
    uVar24 = __extendsfdf2(piVar10[10]);
    uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar6 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                           (int)((ulonglong)uVar24 >> 0x20));
    iVar4 = DAT_00129dc8;
    if (iVar6 != 0) {
      piVar19[0x10] = 1;
      iVar4 = *(int *)(in_stack_0000002c + iVar4);
      piVar10 = *(int **)(in_stack_0000002c + DAT_00129dcc);
      piVar14 = *(int **)(in_stack_0000002c + DAT_00129dd0);
      if ((*(int **)(p_Var7 + 4))[1] == piVar19[0xb]) {
        uVar5 = __mulsf3(*(undefined4 *)
                          (iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x30),0x3f000000)
        ;
LAB_00129c5e:
        iVar6 = __fixsfsi(uVar5);
        piVar19[0x11] = iVar6;
      }
      else if (**(int **)(p_Var7 + 4) == 3) {
        uVar5 = *(undefined4 *)(iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar19[0x12] = *(int *)(iVar4 + ((*piVar10 + -1) * 10 + *piVar14 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar18 != 3) {
        GameScene::OpenPopup_Img(**(GameScene ***)(in_stack_0000002c + DAT_00129dd4),0);
      }
    }
    piVar19 = *ppiVar18;
    piVar10 = piVar19 + 0x14;
    if (*(char *)piVar10 == '\0') {
      iVar4 = *(int *)(p_Var7 + 4);
      uVar23 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x24));
      uVar24 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x28));
      uVar25 = __floatsidf(piVar19[0x15]);
      uVar25 = __muldf3((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar24 = __muldf3((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                        (int)((ulonglong)uVar25 >> 0x20));
      iVar4 = __aeabi_dcmplt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                             (int)((ulonglong)uVar24 >> 0x20));
      if (iVar4 != 0) {
        *(char *)piVar10 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)this_00);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
  if (**(int **)(p_Var7 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(param_11 + 0x120),p_Var7);
  }
  operator_delete(piVar2);
  (**(code **)(***(int ***)(in_stack_0000002c + DAT_00129dd8) + 0xd0))
            (**(int ***)(in_stack_0000002c + DAT_00129dd8),unaff_r6,1);
  pcVar15 = (code *)cocos2d::CCArray::count(this);
  if (pcVar20 + 1 < pcVar15) {
    FUN_00128df0();
  }
  uVar11 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar22 = extraout_s0_01;
  if (in_stack_00000068 + 1U < uVar11) {
    fVar22 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(param_11,fVar22);
  FUN_00129da2();
  return;
}


