/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001284bc  Symbol: FUN_001284bc */

void FUN_001284bc(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCArray *this;
  _Unit_Stage *p_Var7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  undefined *puVar12;
  code *pcVar13;
  int *piVar14;
  CCRect *pCVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  Effect *pEVar19;
  CCLayer *pCVar20;
  int **ppiVar21;
  int *piVar22;
  int *piVar23;
  int **unaff_r5;
  code *pcVar24;
  int *unaff_r6;
  int iVar25;
  float fVar26;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar27;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar28;
  undefined8 uVar29;
  int iStack00000018;
  int iStack00000020;
  undefined4 uStack00000028;
  int param_11;
  int iStack00000030;
  GameScene *in_stack_0000003c;
  int *piStack00000040;
  CCLayer *pCStack00000048;
  int iStack00000050;
  int **in_stack_00000058;
  CCLayer *in_stack_00000060;
  int in_stack_00000068;
  CCArray *in_stack_0000006c;
  _ccColor3B in_stack_0000009c;
  _ccColor3B in_stack_000000a4;
  _ccColor3B in_stack_000000a8;
  _ccColor3B in_stack_000000ac;
  _ccColor3B in_stack_000000b0;
  
  while( true ) {
    iVar2 = (**(code **)(***(int ***)(param_11 + DAT_001286e8) + 0x68))();
    if ((iVar2 == 0) && (*unaff_r5[1] != 7)) {
      FUN_00129d94();
    }
    piVar22 = unaff_r5[1];
    iVar25 = piVar22[9];
    iVar2 = __aeabi_fcmple(iVar25,0);
    if (iVar2 != 0) break;
    iVar2 = *(int *)(*(int *)(in_stack_0000003c + 0x120) + 0x114);
    uVar3 = __divsf3(iVar25,piVar22[10]);
    *(undefined4 *)(iVar2 + 0x118) = uVar3;
    FUN_00129d94();
  }
  iVar2 = *(int *)(*(int *)(in_stack_0000003c + 0x120) + 0x114);
  puVar18 = (uint *)(iVar2 + 0xfc);
  *(undefined4 *)(iVar2 + 0x118) = 0;
  FUN_00129d94();
  if (3 < *puVar18) {
    FUN_00128c4a();
    return;
  }
  if (1 < *puVar18 - 2) {
    piVar22 = (int *)puVar18[0x46];
    if (piVar22 != (int *)0x0) {
      pcVar13 = *(code **)(*piVar22 + 0x3c);
      (**(code **)(*(int *)puVar18[0x47] + 0x38))();
      iVar2 = (**(code **)(*(int *)unaff_r5[1][0x47] + 0x38))();
      uVar27 = __addsf3(*(undefined4 *)(iVar2 + 4),DAT_001286f4);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000108,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
      (*pcVar13)(piVar22,&stack0x00000108);
    }
    piVar22 = (int *)unaff_r5[1][0x48];
    if (piVar22 != (int *)0x0) {
      pcVar13 = *(code **)(*piVar22 + 0x3c);
      (**(code **)(*(int *)unaff_r5[1][0x47] + 0x38))();
      iVar2 = (**(code **)(*(int *)unaff_r5[1][0x47] + 0x38))();
      uVar27 = __addsf3(*(undefined4 *)(iVar2 + 4),0x40000000);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000110,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
      (*pcVar13)(piVar22,&stack0x00000110);
    }
  }
  piVar22 = unaff_r5[1];
  iVar2 = piVar22[0x4a];
  if ((iVar2 != 0) && ((piVar22[0x19] == 2 || (*(char *)(piVar22 + 0x49) != '\0')))) {
    iVar8 = piVar22[9];
    iVar16 = piVar22[10];
    uVar3 = __divsf3(iVar8,iVar16);
    iVar25 = __aeabi_fcmpgt(uVar3,0);
    if (iVar25 == 0) {
      if (*piVar22 != 2) {
        (**(code **)(**in_stack_00000058 + 0xd0))(*in_stack_00000058,iVar2,1);
        unaff_r5[1][0x4a] = 0;
      }
    }
    else {
      iVar2 = __aeabi_fcmpgt(iVar8,iVar16);
      if (iVar2 != 0) {
        piVar22[9] = iVar16;
      }
      piVar22 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5[1][0x4a],1);
      iVar2 = *piVar22;
      uVar3 = __divsf3(unaff_r5[1][9],unaff_r5[1][10]);
      (**(code **)(iVar2 + 0x2c))(piVar22,uVar3);
      piVar22 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5[1][0x4a],0);
      (**(code **)(*piVar22 + 0x2c))(piVar22,0x3f800000);
    }
    piVar14 = unaff_r5[1];
    piVar22 = (int *)piVar14[0x4a];
    if (piVar22 != (int *)0x0) {
      iVar2 = *piVar22;
      if (*piVar14 - 2U < 2) {
        piVar23 = *(int **)(param_11 + DAT_00128a48);
        iVar25 = *(int *)(param_11 + DAT_00128a4c);
        if (*piVar14 == 2) {
          pcVar13 = *(code **)(iVar2 + 0x3c);
          ppiVar21 = *(int ***)(param_11 + DAT_00128a50);
          pcVar24 = *(code **)(**ppiVar21 + 0x38);
          if (**(int **)(param_11 + DAT_00128a54) == 2) {
            puVar4 = (undefined4 *)(*pcVar24)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18));
            __addsf3(uVar3,*puVar4);
            iVar2 = (**(code **)(**ppiVar21 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
            uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 4));
            uVar27 = __addsf3(uVar3,uVar5);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000120,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20))
            ;
            puVar12 = &stack0x00000120;
          }
          else if (**(int **)(param_11 + DAT_00128a54) == 1) {
            puVar4 = (undefined4 *)(*pcVar24)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 8));
            __addsf3(uVar3,*puVar4);
            iVar2 = (**(code **)(**ppiVar21 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
            uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0xc));
            uVar27 = __addsf3(uVar3,uVar5);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000128,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20))
            ;
            puVar12 = &stack0x00000128;
          }
          else {
            puVar4 = (undefined4 *)(*pcVar24)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x10));
            __addsf3(uVar3,*puVar4);
            iVar2 = (**(code **)(**ppiVar21 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
            uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x14));
            uVar27 = __addsf3(uVar3,uVar5);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000130,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20))
            ;
            puVar12 = &stack0x00000130;
          }
        }
        else {
          pcVar13 = *(code **)(iVar2 + 0x3c);
          ppiVar21 = *(int ***)(param_11 + DAT_00128a58);
          puVar4 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
          uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x10));
          __addsf3(uVar3,*puVar4);
          iVar2 = (**(code **)(**ppiVar21 + 0x38))();
          uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
          uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
          uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x14));
          uVar27 = __addsf3(uVar3,uVar5);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000138,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
          puVar12 = &stack0x00000138;
        }
      }
      else {
        if (piVar14[1] == 0xaa) {
          uVar3 = 0xfffffff1;
          uStack00000028 = 0x3c;
        }
        else {
          uVar3 = 0;
          uStack00000028 = 0x14;
        }
        pcVar13 = *(code **)(iVar2 + 0x3c);
        puVar4 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x38))();
        uVar5 = *puVar4;
        piVar22 = (int *)unaff_r5[1][0x4a];
        piVar14 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar22,0);
        puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x7c))();
        uVar6 = __mulsf3(*puVar4,0x3f000000);
        uVar5 = __subsf3(uVar5,uVar6);
        uVar3 = __floatsisf(uVar3);
        __addsf3(uVar5,uVar3);
        iVar2 = (**(code **)(*(int *)unaff_r5[1][0x47] + 0x38))();
        uVar3 = __addsf3(*(undefined4 *)(iVar2 + 4),unaff_r5[1][0x41]);
        uVar5 = __floatsisf(uStack00000028);
        uVar27 = __addsf3(uVar3,uVar5);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000118,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
        puVar12 = &stack0x00000118;
      }
      (*pcVar13)(piVar22,puVar12);
    }
    *(undefined *)(unaff_r5[1] + 0x49) = 0;
    FUN_00128c4a();
    return;
  }
  uVar3 = __divsf3(piVar22[9],piVar22[10]);
  iVar25 = __aeabi_fcmplt(uVar3,0);
  if ((iVar25 != 0) && (*piVar22 != 2)) {
    (**(code **)(**in_stack_00000058 + 0xd0))(*in_stack_00000058,iVar2,1);
    unaff_r5[1][0x4a] = 0;
  }
  if ((CCNode *)unaff_r5[1][0x4a] == (CCNode *)0x0) {
    FUN_00128c4a();
    return;
  }
  piVar22 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5[1][0x4a],0);
  uVar3 = (**(code **)(*piVar22 + 0x28))();
  iVar2 = __aeabi_fcmpeq(uVar3,0x3f800000);
  if (iVar2 == 0) {
    FUN_00128c4a();
    return;
  }
  piVar22 = unaff_r5[1];
  iVar2 = __addsf3(piVar22[0x4b],in_stack_00000060);
  piVar22[0x4b] = iVar2;
  piVar22 = unaff_r5[1];
  iVar2 = __aeabi_fcmpgt(piVar22[0x4b],0x40000000);
  if (iVar2 != 0) {
    piVar22 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar22[0x4a],1);
    (**(code **)(*piVar22 + 0x2c))(piVar22,0);
    piVar22 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)unaff_r5[1][0x4a],0);
    (**(code **)(*piVar22 + 0x2c))(piVar22,0);
    unaff_r5[1][0x4b] = 0;
  }
  piVar14 = unaff_r5[1];
  piVar22 = (int *)piVar14[0x4a];
  if (piVar22 == (int *)0x0) {
    FUN_00128c4a();
    return;
  }
  iVar2 = *piVar22;
  if (*piVar14 - 2U < 2) {
    piVar23 = *(int **)(param_11 + iRam00128dcc);
    iVar25 = *(int *)(param_11 + iRam00128dd0);
    if (*piVar14 == 2) {
      pcVar13 = *(code **)(iVar2 + 0x3c);
      ppiVar21 = *(int ***)(param_11 + iRam00128dd4);
      pcVar24 = *(code **)(**ppiVar21 + 0x38);
      if (**(int **)(param_11 + iRam00128dd8) == 2) {
        puVar4 = (undefined4 *)(*pcVar24)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18));
        __addsf3(uVar3,*puVar4);
        iVar2 = (**(code **)(**ppiVar21 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 4));
        uVar27 = __addsf3(uVar3,uVar5);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000148,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
        puVar12 = &stack0x00000148;
      }
      else if (**(int **)(param_11 + iRam00128dd8) == 1) {
        puVar4 = (undefined4 *)(*pcVar24)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 8));
        __addsf3(uVar3,*puVar4);
        iVar2 = (**(code **)(**ppiVar21 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0xc));
        uVar27 = __addsf3(uVar3,uVar5);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000150,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
        puVar12 = &stack0x00000150;
      }
      else {
        puVar4 = (undefined4 *)(*pcVar24)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x10));
        __addsf3(uVar3,*puVar4);
        iVar2 = (**(code **)(**ppiVar21 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x14));
        uVar27 = __addsf3(uVar3,uVar5);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000158,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
        puVar12 = &stack0x00000158;
      }
    }
    else {
      pcVar13 = *(code **)(iVar2 + 0x3c);
      ppiVar21 = *(int ***)(param_11 + iRam00128ddc);
      puVar4 = (undefined4 *)(**(code **)(**ppiVar21 + 0x38))();
      uVar3 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x10));
      __addsf3(uVar3,*puVar4);
      iVar2 = (**(code **)(**ppiVar21 + 0x38))();
      uVar3 = __floatsisf(*(int *)(**unaff_r5 + 0x280) / 2);
      uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
      uVar5 = __floatsisf(*(undefined4 *)(iVar25 + *piVar23 * 0x18 + 0x14));
      uVar27 = __addsf3(uVar3,uVar5);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000160,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
      puVar12 = &stack0x00000160;
    }
  }
  else {
    if (piVar14[1] == 0xaa) {
      uVar3 = 0xfffffff1;
      uStack00000028 = 0x3c;
    }
    else {
      uVar3 = 0;
      uStack00000028 = 0x14;
    }
    pcVar13 = *(code **)(iVar2 + 0x3c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x38))();
    uVar5 = *puVar4;
    piVar22 = (int *)unaff_r5[1][0x4a];
    piVar14 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar22,0);
    puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x7c))();
    uVar6 = __mulsf3(*puVar4,0x3f000000);
    uVar5 = __subsf3(uVar5,uVar6);
    uVar3 = __floatsisf(uVar3);
    __addsf3(uVar5,uVar3);
    iVar2 = (**(code **)(*(int *)unaff_r5[1][0x47] + 0x38))();
    uVar3 = __addsf3(*(undefined4 *)(iVar2 + 4),unaff_r5[1][0x41]);
    uVar5 = __floatsisf(uStack00000028);
    uVar27 = __addsf3(uVar3,uVar5);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000140,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
    puVar12 = &stack0x00000140;
  }
  fVar26 = (float)(*pcVar13)(piVar22,puVar12);
  pcVar13 = *(code **)(in_stack_0000003c + 0x120);
  attack(fVar26,in_stack_00000060,(CCLayer *)unaff_r6,
         *(CCLayer **)(in_stack_0000003c + iRam00128de0));
  FUN_00129d54();
  piVar22 = (int *)(*pcVar13)(unaff_r6);
  pcVar24 = *(code **)(*unaff_r6 + 0x3c);
  pcVar13 = *(code **)(*unaff_r6 + 0x38);
  if (*piVar22 == 0) {
    puVar4 = (undefined4 *)(*pcVar13)();
    __addsf3(*puVar4,piVar22[3]);
    iVar2 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    uVar27 = __addsf3(*(undefined4 *)(iVar2 + 4),piVar22[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000168,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
    (*pcVar24)(unaff_r6,&stack0x00000168);
    puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    iVar2 = __aeabi_fcmpgt(*puVar4,uRam00128de4);
    if (iVar2 == 0) {
      puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
      uVar3 = __addsf3(piVar22[5],uRam00128de8);
      iVar2 = __aeabi_fcmpgt(*puVar4,uVar3);
LAB_00128d38:
      if (iVar2 == 0) {
        FUN_00129d84();
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(*pcVar13)(unaff_r6);
    __subsf3(*puVar4,piVar22[3]);
    iVar2 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    uVar27 = __addsf3(*(undefined4 *)(iVar2 + 4),piVar22[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000170,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
    (*pcVar24)(unaff_r6,&stack0x00000170);
    puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
    iVar2 = __aeabi_fcmplt(*puVar4,0);
    if (iVar2 == 0) {
      puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
      uVar3 = __subsf3(piVar22[5],uRam00128de8);
      iVar2 = __aeabi_fcmplt(*puVar4,uVar3);
      goto LAB_00128d38;
    }
  }
  operator_delete(piVar22);
  (**(code **)(**in_stack_00000058 + 0xd0))(*in_stack_00000058,unaff_r6,1);
  FUN_00129d54();
  puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  uVar3 = __mulsf3(piVar22[0x18],0x3f000000);
  __subsf3(*puVar4,uVar3);
  iVar2 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
  iVar2 = __subsf3(*(undefined4 *)(iVar2 + 4),uRam00128dec);
  (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  iVar25 = (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
  uVar27 = __addsf3(*(undefined4 *)(iVar25 + 4),uRam00128dec);
  cocos2d::CCRect::CCRect
            ((CCRect *)&stack0x00000188,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20),extraout_s2
             ,extraout_s3);
  this = (CCArray *)(**(code **)(**in_stack_00000058 + 0x58))();
  FUN_00129d44();
  func_0xffe6ddce();
  func_0xfff65dd2();
  func_0x0031ddd6();
  func_0x0037ddda();
  uVar27 = func_0x0032ddde();
  *(undefined2 *)uVar27 = (short)uVar27;
  if (piVar22 == (int *)0x0) {
    FUN_00129d54((undefined2 *)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)unaff_r6 * iVar2);
  }
  piVar14 = (int *)cocos2d::CCArray::objectAtIndex(this,(uint)pcVar24);
  iVar2 = (**(code **)(*piVar14 + 0xa0))();
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
  p_Var7 = (_Unit_Stage *)(**(code **)(*piVar14 + 0xa8))(piVar14);
  if (p_Var7 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar25 = *(int *)(p_Var7 + 4);
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar25 + 0x24),0);
  if (iVar2 == 0) {
    FUN_00129d3e();
  }
  iVar2 = *(int *)(iVar25 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&stack0x00000198);
  if (**(int **)(p_Var7 + 4) == 5) {
    puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x38))();
    __addsf3(*puVar4,DAT_001291c8);
    iVar25 = (**(code **)(*piVar14 + 0x38))(piVar14);
    uVar27 = __subsf3(*(undefined4 *)(iVar25 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001a8,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20),
               extraout_s2_00,extraout_s3_00);
    puVar12 = &stack0x000001a8;
  }
  else {
    (**(code **)(*piVar14 + 0x38))(piVar14);
    iVar25 = (**(code **)(*piVar14 + 0x38))(piVar14);
    iVar8 = *(int *)(p_Var7 + 4);
    uVar3 = *(undefined4 *)(iVar8 + 0x104);
    __subsf3(*(undefined4 *)(iVar25 + 4),uVar3);
    __mulsf3(*(undefined4 *)(iVar8 + 0x100),0x3f000000);
    uVar27 = __addsf3(uVar3,uVar3);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001b8,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20),
               extraout_s2_01,extraout_s3_01);
    puVar12 = &stack0x000001b8;
  }
  pCVar15 = (CCRect *)0x10;
  memcpy(&stack0x00000198,puVar12,0x10);
  if (*piVar22 == 0) {
    iVar25 = **(int **)(p_Var7 + 4);
    if (((iVar25 != 3) && (iVar25 != 1)) && (iVar25 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*piVar22 != 1) {
      FUN_00129d3e();
    }
    iVar25 = **(int **)(p_Var7 + 4);
    if (((iVar25 != 2) && (iVar25 != 0)) && (iVar25 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar25 = cocos2d::CCRect::CCRectIntersectsRect
                     ((CCRect *)&stack0x00000188,(CCRect *)&stack0x00000198,pCVar15);
  fVar26 = extraout_s0;
  if (iVar25 == 0) {
    fVar26 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)piVar22 + 0x19) == '\0') {
    if (*(char *)(piVar22 + 7) == '\0') {
      if (*(char *)((int)piVar22 + 0x1a) == '\0') {
        if (((*(char *)((int)piVar22 + 0x1b) == '\0') && (*(char *)(piVar22 + 6) == '\0')) &&
           (*(char *)((int)piVar22 + 0x1e) == '\0')) {
          if ((**(char **)(param_11 + DAT_001294b8) != '\0') && (**(int **)(p_Var7 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          if (pEVar19 != (Effect *)0x0) {
            if (*piVar22 == 1) {
              pCVar20 = **(CCLayer ***)(param_11 + DAT_001294c0);
              puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              uVar3 = *puVar4;
              puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
              uVar5 = __mulsf3(*puVar4,0x3f000000);
              __subsf3(uVar3,uVar5);
              iStack00000020 = __fixsfsi();
              iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              __subsf3(*(undefined4 *)(iVar25 + 4),DAT_001294c4);
              iVar25 = __fixsfsi();
              iVar8 = (**(code **)(*piVar14 + 0x14))(piVar14);
              uVar1 = *(undefined *)((int)piVar22 + 0x1d);
              iVar16 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar19,pCVar20,iVar16,iStack00000020,iVar25,iVar8,(bool)uVar1);
            }
            else if (*piVar22 == 0) {
              pCVar20 = **(CCLayer ***)(param_11 + DAT_001294c0);
              puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iStack00000020 = __fixsfsi(*puVar4);
              iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
              iVar25 = __fixsfsi(*(undefined4 *)(iVar25 + 4));
              iVar8 = (**(code **)(*piVar14 + 0x14))(piVar14);
              uVar1 = *(undefined *)((int)piVar22 + 0x1d);
              iVar16 = 1;
              goto LAB_001292e2;
            }
            in_stack_000000a8 = CONCAT13(in_stack_000000a8._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)piVar14,in_stack_000000a8,p_Var7);
          }
        }
      }
      else {
        SetStun((CCLayer *)piVar14,fVar26);
      }
    }
    else {
      pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001291d8);
      if ((pEVar19 != (Effect *)0x0) &&
         (piVar22[0x15] != 0xb && (piVar22[0x14] != 0xb && piVar22[0x13] != 0xb))) {
        pCVar20 = **(CCLayer ***)(param_11 + DAT_001291dc);
        puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x38))(piVar14);
        iVar25 = __fixsfsi(*puVar4);
        iVar8 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
        iVar8 = __fixsfsi(*(undefined4 *)(iVar8 + 4));
        iVar16 = (**(code **)(*piVar14 + 0x14))(piVar14);
        Effect::Effect_Draw(pEVar19,pCVar20,5,iVar25,iVar8,iVar16,false);
        (**(code **)(*piVar14 + 0xf4))(piVar14);
        in_stack_000000a4 = CONCAT13(in_stack_000000a4._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)piVar14,in_stack_000000a4,p_Var7);
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001291d8);
    if ((pEVar19 != (Effect *)0x0) &&
       (piVar22[0x15] != 0xb && (piVar22[0x14] != 0xb && piVar22[0x13] != 0xb))) {
      pCVar20 = **(CCLayer ***)(param_11 + DAT_001291dc);
      puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x38))(piVar14);
      iVar25 = __fixsfsi(*puVar4);
      iVar8 = (**(code **)(*piVar14 + 0x38))(piVar14);
      uVar3 = *(undefined4 *)(iVar8 + 4);
      iVar8 = (**(code **)(*piVar14 + 0x7c))(piVar14);
      uVar5 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
      __addsf3(uVar3,uVar5);
      iVar8 = __fixsfsi();
      iVar16 = (**(code **)(*piVar14 + 0x14))(piVar14);
      Effect::Effect_Draw(pEVar19,pCVar20,0xa0,iVar25,iVar8,iVar16,*(bool *)((int)piVar22 + 0x1d));
      if ((**(int **)(p_Var7 + 4) != 3) &&
         ((iVar25 = (*(int **)(p_Var7 + 4))[1],
          iVar25 != *(int *)(**(int **)(param_11 + DAT_001291e0) + 0x2c) && (iVar25 != DAT_001291e4)
          ))) {
        (**(code **)(*piVar14 + 0xf4))(piVar14);
        in_stack_0000009c = CONCAT13(in_stack_0000009c._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)piVar14,in_stack_0000009c,p_Var7);
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x90) = 1;
        iVar25 = cocos2d::CCNode::getChildByTag((CCNode *)piVar14,0);
        if ((iVar25 == 0) &&
           (iVar25 = cocos2d::CCNode::getChildByTag((CCNode *)piVar14,DAT_001291e8), iVar25 == 0)) {
          piVar23 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar13 = *(code **)(*piVar23 + 0x74);
          cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000178,extraout_s0_00,extraout_s1);
          (*pcVar13)(piVar23,&stack0x00000178);
          pcVar13 = *(code **)(*piVar23 + 0x3c);
          puVar4 = (undefined4 *)(**(code **)(*piVar14 + 0x7c))(piVar14);
          uVar27 = __mulsf3(*puVar4,0x3f000000);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000180,(float)uVar27,(float)((ulonglong)uVar27 >> 0x20));
          (*pcVar13)(piVar23,&stack0x00000180);
          (**(code **)(*piVar14 + 0xcc))(piVar14,piVar23,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)piVar22 + 0x1e) != '\0') {
    iStack00000020 = 0;
    piStack00000040 = piVar22;
    do {
      iVar25 = piVar22[8];
      if (iVar25 <= iStack00000020) {
        FUN_00129d06();
        return;
      }
      piVar23 = (int *)piStack00000040[9];
      if (piVar23 == piVar14) {
        FUN_00129d06();
      }
      if (iStack00000020 != iVar25 + -1) {
        if (piVar23 != (int *)0x0) goto LAB_00129a5e;
        piVar22[iStack00000020 + 9] = (int)piVar14;
        if (*(char *)(*(int *)(p_Var7 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var7 + 4) + 0x84) = (char)piVar23;
        }
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
        pcVar9 = *(char **)(param_11 + DAT_001294b8);
        if ((*pcVar9 != '\0') && (**(int **)(p_Var7 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*piVar22 == 1) {
          pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          pCVar20 = **(CCLayer ***)(param_11 + DAT_001294c0);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar3 = *puVar4;
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar5 = __mulsf3(*puVar4,0x3f000000);
          __subsf3(uVar3,uVar5);
          piStack00000040 = (int *)__fixsfsi();
          iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar25 + 4),DAT_001294c4);
          iVar25 = __fixsfsi();
          iVar8 = (**(code **)(*piVar14 + 0x14))(piVar14);
          uVar1 = *(undefined *)((int)piVar22 + 0x1d);
          iVar16 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar19,pCVar20,iVar16,(int)piStack00000040,iVar25,iVar8,(bool)uVar1);
        }
        else if (*piVar22 == 0) {
          pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001294bc);
          pCVar20 = **(CCLayer ***)(param_11 + DAT_001294c0);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          piStack00000040 = (int *)__fixsfsi(*puVar4);
          iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar25 = __fixsfsi(*(undefined4 *)(iVar25 + 4));
          iVar8 = (**(code **)(*piVar14 + 0x14))(piVar14);
          uVar1 = *(undefined *)((int)piVar22 + 0x1d);
          iVar16 = 1;
          goto LAB_00129436;
        }
        in_stack_000000ac = CONCAT13(in_stack_000000ac._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar14,in_stack_000000ac,p_Var7);
        if ((piVar22[0x15] == 0xb) || (piVar22[0x14] == 0xb || piVar22[0x13] == 0xb))
        goto LAB_00129470;
        piVar23 = *(int **)(p_Var7 + 4);
        if ((*pcVar9 != '\0') && (*piVar23 == 2)) {
          FUN_00129da2();
        }
        if (((iVar2 + DAT_001294cc == 0) || (iVar2 + DAT_001294d0 == 0)) || (iVar2 == DAT_001294d4))
        {
          iVar2 = __mulsf3(piVar22[1],0x3f000000);
          iVar25 = piVar23[9];
        }
        else {
          iVar25 = piVar23[9];
          iVar2 = piVar22[1];
        }
        iVar2 = __subsf3(iVar25,iVar2);
        piVar23[9] = iVar2;
        uVar27 = __extendsfdf2(piVar22[1]);
        uVar28 = __extendsfdf2(piVar22[2]);
        uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                 (int)((ulonglong)uVar28 >> 0x20));
        iVar2 = __truncdfsf2();
        piVar22[1] = iVar2;
        if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(param_11 + DAT_001297b8) + 1) != '\0')) {
          pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar21 = *(int ***)(param_11 + DAT_001297c0);
        piVar23 = *ppiVar21;
        if ((piVar23[0x10] == 0) &&
           ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar23[0xb])))) {
          uVar27 = __extendsfdf2(piVar10[9]);
          uVar28 = __extendsfdf2(piVar10[10]);
          uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar25 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                                  (int)((ulonglong)uVar28 >> 0x20));
          iVar2 = DAT_001297c4;
          if (iVar25 != 0) {
            piVar23[0x10] = 1;
            iVar2 = *(int *)(param_11 + iVar2);
            piVar10 = *(int **)(param_11 + DAT_001297c8);
            piVar17 = *(int **)(param_11 + DAT_001297cc);
            if ((*(int **)(p_Var7 + 4))[1] == piVar23[0xb]) {
              uVar3 = __mulsf3(*(undefined4 *)
                                (iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x30),
                               0x3f000000);
LAB_001295ee:
              iVar25 = __fixsfsi(uVar3);
              piVar23[0x11] = iVar25;
            }
            else if (**(int **)(p_Var7 + 4) == 3) {
              uVar3 = *(undefined4 *)(iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x30);
              goto LAB_001295ee;
            }
            piVar23[0x12] = *(int *)(iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar21 != 3) {
              GameScene::OpenPopup_Img(**(GameScene ***)(param_11 + DAT_001297d0),0);
            }
          }
          piVar23 = *ppiVar21;
          piVar10 = piVar23 + 0x14;
          if (*(char *)piVar10 == '\0') {
            iVar2 = *(int *)(p_Var7 + 4);
            uVar27 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
            uVar28 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
            uVar29 = __floatsidf(piVar23[0x15]);
            uVar29 = __muldf3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar29,
                              (int)((ulonglong)uVar29 >> 0x20));
            iVar2 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                                   (int)((ulonglong)uVar28 >> 0x20));
            if (iVar2 != 0) {
              *(char *)piVar10 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)piVar14);
        iVar2 = __aeabi_fcmplt(piVar22[1],0);
        if (iVar2 != 0) {
          operator_delete(piVar22);
          (**(code **)(***(int ***)(param_11 + DAT_001297d4) + 0xd0))
                    (**(int ***)(param_11 + DAT_001297d4),unaff_r6,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        iStack00000018 = 0;
        while ((*(int *)((int)piVar22 + iStack00000018 + 0x4c) == 0 || (**(int **)(p_Var7 + 4) != 0)
               )) {
          iStack00000018 = iStack00000018 + 4;
          if (iStack00000018 == 0xc) {
            FUN_00129d06();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_001294c8 + 0x12947a));
      }
      if (piVar23 == (int *)0x0) {
        piStack00000040[9] = (int)piVar14;
        if (*(char *)(*(int *)(p_Var7 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var7 + 4) + 0x84) = (char)piVar23;
        }
        *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
        pcVar9 = *(char **)(param_11 + DAT_001297d8);
        if ((*pcVar9 != '\0') && (**(int **)(p_Var7 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*piVar22 == 1) {
          pEVar19 = *(Effect **)(in_stack_0000003c + DAT_001297dc);
          pCStack00000048 = **(CCLayer ***)(param_11 + DAT_001297d4);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          uVar5 = *puVar4;
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
          uVar3 = __mulsf3(*puVar4,0x3f000000);
          __subsf3(uVar5,uVar3);
          iStack00000050 = __fixsfsi();
          iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          __subsf3(*(undefined4 *)(iVar25 + 4),DAT_001297e0);
          iVar25 = __fixsfsi();
          iVar8 = (**(code **)(*piVar14 + 0x14))();
          uVar1 = *(undefined *)((int)piVar22 + 0x1d);
          iVar16 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar19,pCStack00000048,iVar16,iStack00000050,iVar25,iVar8,(bool)uVar1
                             );
        }
        else if (*piVar22 == 0) {
          pEVar19 = *(Effect **)(in_stack_0000003c + DAT_00129b00);
          pCStack00000048 = **(CCLayer ***)(param_11 + DAT_00129b04);
          puVar4 = (undefined4 *)(**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iStack00000050 = __fixsfsi(*puVar4);
          iVar25 = (**(code **)(*unaff_r6 + 0x38))(unaff_r6);
          iVar25 = __fixsfsi(*(undefined4 *)(iVar25 + 4));
          iVar8 = (**(code **)(*piVar14 + 0x14))();
          uVar1 = *(undefined *)((int)piVar22 + 0x1d);
          iVar16 = 1;
          goto LAB_00129832;
        }
        in_stack_000000b0 = CONCAT13(in_stack_000000b0._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar14,in_stack_000000b0,p_Var7);
        if ((piVar22[0x15] != 0xb) && (piVar22[0x14] != 0xb && piVar22[0x13] != 0xb)) {
          piVar23 = *(int **)(p_Var7 + 4);
          if ((*pcVar9 != '\0') && (*piVar23 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) ||
             (iVar2 == DAT_00129b10)) {
            iVar25 = __mulsf3(piVar22[1],0x3f000000);
            iVar8 = piVar23[9];
          }
          else {
            iVar8 = piVar23[9];
            iVar25 = piVar22[1];
          }
          iVar25 = __subsf3(iVar8,iVar25);
          piVar23[9] = iVar25;
          if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(param_11 + DAT_00129b14) + 1) != '\0')) {
            pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_00129b18 + -0x28));
          }
          ppiVar21 = *(int ***)(param_11 + DAT_00129b1c);
          piVar23 = *ppiVar21;
          if ((piVar23[0x10] == 0) &&
             ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar23[0xb])))) {
            uVar27 = __extendsfdf2(piVar10[9]);
            uVar28 = __extendsfdf2(piVar10[10]);
            uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar8 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                                   (int)((ulonglong)uVar28 >> 0x20));
            iVar25 = DAT_00129b20;
            if (iVar8 != 0) {
              piVar23[0x10] = 1;
              iVar25 = *(int *)(param_11 + iVar25);
              piVar17 = *(int **)(param_11 + DAT_00129b24);
              piVar10 = *(int **)(param_11 + DAT_00129b28);
              if ((*(int **)(p_Var7 + 4))[1] == piVar23[0xb]) {
                uVar3 = __mulsf3(*(undefined4 *)
                                  (iVar25 + ((*piVar17 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x30),
                                 0x3f000000);
LAB_0012998a:
                iVar8 = __fixsfsi(uVar3);
                piVar23[0x11] = iVar8;
              }
              else if (**(int **)(p_Var7 + 4) == 3) {
                uVar3 = *(undefined4 *)
                         (iVar25 + ((*piVar17 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x30);
                goto LAB_0012998a;
              }
              piVar23[0x12] =
                   *(int *)(iVar25 + ((*piVar17 + -1) * 10 + *piVar10 + -1) * 0x40 + 0x2c);
              Game_Scene_Vibration();
              if (**ppiVar21 != 3) {
                GameScene::OpenPopup_Img(**(GameScene ***)(param_11 + DAT_00129b2c),0);
              }
            }
            piVar10 = *ppiVar21;
            piVar23 = piVar10 + 0x14;
            if (*(char *)piVar23 == '\0') {
              iVar25 = *(int *)(p_Var7 + 4);
              uVar27 = __extendsfdf2(*(undefined4 *)(iVar25 + 0x24));
              uVar28 = __extendsfdf2(*(undefined4 *)(iVar25 + 0x28));
              uVar29 = __floatsidf(piVar10[0x15]);
              uVar29 = __muldf3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar29,
                                (int)((ulonglong)uVar29 >> 0x20));
              iVar25 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                                      (int)((ulonglong)uVar28 >> 0x20));
              if (iVar25 != 0) {
                *(char *)piVar23 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)piVar14);
        }
        iStack00000030 = 0;
        do {
          if ((*(int *)((int)piVar22 + iStack00000030 + 0x4c) != 0) && (**(int **)(p_Var7 + 4) == 0)
             ) {
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
  piVar23 = *(int **)(p_Var7 + 4);
  if ((piVar23[0x38] == 0xb) || (piVar23[0x37] == 0xb || piVar23[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(param_11 + DAT_00129b34) != '\0') && (*piVar23 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) || (iVar2 == DAT_00129b10)) {
    iVar2 = __mulsf3(piVar22[1],0x3f000000);
    iVar25 = piVar23[9];
  }
  else {
    iVar25 = piVar23[9];
    iVar2 = piVar22[1];
  }
  iVar2 = __subsf3(iVar25,iVar2);
  piVar23[9] = iVar2;
  if ((*(int *)(*(int *)(p_Var7 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(param_11 + DAT_00129db8) + 1) != '\0')) {
    pcVar9 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar9,(bool)((char)DAT_00129dbc + 'f'));
  }
  iStack00000018 = 0;
  do {
    if ((*(int *)((int)piVar22 + iStack00000018 + 0x4c) != 0) && (**(int **)(p_Var7 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    iStack00000018 = iStack00000018 + 4;
  } while (iStack00000018 != 0xc);
  ppiVar21 = *(int ***)(param_11 + DAT_00129dc4);
  piVar23 = *ppiVar21;
  if ((piVar23[0x10] == 0) &&
     ((piVar10 = *(int **)(p_Var7 + 4), *piVar10 == 3 || (piVar10[1] == piVar23[0xb])))) {
    uVar27 = __extendsfdf2(piVar10[9]);
    uVar28 = __extendsfdf2(piVar10[10]);
    uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar25 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                            (int)((ulonglong)uVar28 >> 0x20));
    iVar2 = DAT_00129dc8;
    if (iVar25 != 0) {
      piVar23[0x10] = 1;
      iVar2 = *(int *)(param_11 + iVar2);
      piVar10 = *(int **)(param_11 + DAT_00129dcc);
      piVar17 = *(int **)(param_11 + DAT_00129dd0);
      if ((*(int **)(p_Var7 + 4))[1] == piVar23[0xb]) {
        uVar3 = __mulsf3(*(undefined4 *)
                          (iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x30),0x3f000000)
        ;
LAB_00129c5e:
        iVar25 = __fixsfsi(uVar3);
        piVar23[0x11] = iVar25;
      }
      else if (**(int **)(p_Var7 + 4) == 3) {
        uVar3 = *(undefined4 *)(iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar23[0x12] = *(int *)(iVar2 + ((*piVar10 + -1) * 10 + *piVar17 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar21 != 3) {
        GameScene::OpenPopup_Img(**(GameScene ***)(param_11 + DAT_00129dd4),0);
      }
    }
    piVar23 = *ppiVar21;
    piVar10 = piVar23 + 0x14;
    if (*(char *)piVar10 == '\0') {
      iVar2 = *(int *)(p_Var7 + 4);
      uVar27 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
      uVar28 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
      uVar29 = __floatsidf(piVar23[0x15]);
      uVar29 = __muldf3((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar28 = __muldf3((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),(int)uVar29,
                        (int)((ulonglong)uVar29 >> 0x20));
      iVar2 = __aeabi_dcmplt((int)uVar27,(int)((ulonglong)uVar27 >> 0x20),(int)uVar28,
                             (int)((ulonglong)uVar28 >> 0x20));
      if (iVar2 != 0) {
        *(char *)piVar10 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)piVar14);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var7 + 4) + 0x124) = 1;
  if (**(int **)(p_Var7 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(in_stack_0000003c + 0x120),p_Var7);
  }
  operator_delete(piVar22);
  (**(code **)(***(int ***)(param_11 + DAT_00129dd8) + 0xd0))
            (**(int ***)(param_11 + DAT_00129dd8),unaff_r6,1);
  pcVar13 = (code *)cocos2d::CCArray::count(this);
  if (pcVar24 + 1 < pcVar13) {
    FUN_00128df0();
  }
  uVar11 = cocos2d::CCArray::count(in_stack_0000006c);
  fVar26 = extraout_s0_01;
  if (in_stack_00000068 + 1U < uVar11) {
    fVar26 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control(in_stack_0000003c,fVar26);
  FUN_00129da2();
  return;
}


