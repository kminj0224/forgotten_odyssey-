/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c026c  Symbol: vScript_Unit */

/* vScript_Unit(char const*, char const*, cocos2d::CCNode*, int, int) */

void vScript_Unit(char *param_1,char *param_2,CCNode *param_3,int param_4,int param_5)

{
  int iVar1;
  uchar uVar2;
  int *piVar3;
  int **ppiVar4;
  void *pvVar5;
  int iVar6;
  CCArray *this;
  CCPoint CVar7;
  CCFiniteTimeAction *pCVar8;
  CCSize CVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar47;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar49;
  float extraout_s1_03;
  undefined8 uVar48;
  float extraout_s2;
  float extraout_s2_00;
  float fVar50;
  float extraout_s2_01;
  float extraout_s2_02;
  int *piStack_4;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  
  iVar1 = DAT_000c057c;
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar22 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_000c057c);
  *(int *)(&stack0x00000074 + DAT_000c057c) = param_4;
  puVar17 = *(undefined4 **)(DAT_000c0580 + 0xc0280);
  *(CCNode **)(&stack0x00000070 + DAT_000c057c) = param_3;
  *(undefined4 *)(&stack0x00000208 + DAT_000c057c) = *puVar17;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(param_3,*(int *)(&stack0x00000074 + DAT_000c057c));
  ppiVar4 = (int **)(**(code **)(*piVar3 + 0xa8))();
  memset(&stack0x00000140 + iVar1,0,200);
  sprintf(&stack0x00000140 + iVar1,(char *)(DAT_000c0584 + 0xc02aa),param_1,param_2);
  *(int **)(&stack0x00000054 + iVar1) = *ppiVar4;
  pvVar5 = operator_new(0x298);
  iVar10 = *(int *)(&stack0x00000224 + iVar1);
  *(void **)(iVar10 * 4 + *(int *)(&stack0x00000054 + iVar1)) = pvVar5;
  (*ppiVar4)[9] = iVar10 + 1;
  iVar6 = anim_Lode(&stack0x00000140 + iVar1,(_KG_Anit *)(*ppiVar4)[iVar10],param_2,
                    (_KG_Anit *)**ppiVar4);
  *(undefined4 **)(&stack0x00000080 + iVar1) = puVar17;
  piVar3 = *ppiVar4;
  if (iVar6 == 0) {
    operator_delete((void *)piVar3[iVar10]);
    piVar3 = *ppiVar4;
    piVar3[iVar10] = 0;
    FUN_000c0f80();
  }
  iVar6 = *(int *)(&stack0x00000224 + iVar1);
  *(int *)(&stack0x00000078 + iVar1) = piVar3[9];
  FUN_000c0f6a();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag
                            (*(CCNode **)(&stack0x00000070 + iVar1),
                             *(int *)(&stack0x00000074 + iVar1));
  this = (CCArray *)(**(code **)(*piVar3 + 0x58))();
  *(CCArray **)(&stack0x0000006c + iVar1) = this;
  if (this == (CCArray *)0x0) {
    this = (CCArray *)FUN_000c0f68();
  }
  iVar10 = cocos2d::CCArray::count(this);
  if (iVar10 != 0) {
    FUN_000c0f5a();
  }
  FUN_000c0f68();
  iVar10 = cocos2d::CCArray::count(*(CCArray **)(&stack0x0000006c + iVar1));
  if (iVar10 == 0) {
    FUN_000c0f58();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x0000006c + iVar1),0);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000088 + iVar1));
  piVar13 = (int *)(*ppiVar4)[iVar6];
  piVar3 = (int *)**ppiVar4;
  *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
  iVar14 = *piVar13;
  iVar11 = *piVar3;
  *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar11 + 8);
  iVar10 = *(int *)(&stack0x00000054 + iVar1);
  *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(iVar11 + 0xc);
  iVar11 = *(int *)(iVar10 + (*ppiVar4)[iVar6]);
  iVar10 = *(int *)(iVar10 + **ppiVar4);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar10 + 0x20);
  *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)(iVar10 + 0x24);
  memset(&stack0x000000c8 + iVar1,0,0x78);
  memset(&stack0x000000a8 + iVar1,0,0xc);
  iVar10 = *(int *)(*(int *)(&stack0x00000054 + iVar1) + (*ppiVar4)[iVar6]);
  if (iVar10 == 0) {
    FUN_000c0f68();
  }
  uVar15 = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(&stack0x00000060 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000054 + iVar1) = uVar15;
  *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
  if (*(int *)(&stack0x00000054 + iVar1) <= *(int *)(&stack0x00000060 + iVar1)) {
LAB_000c06b8:
    pCVar8 = *(CCFiniteTimeAction **)(&stack0x000000c8 + iVar1);
    if (pCVar8 == (CCFiniteTimeAction *)0x0) {
      pCVar8 = (CCFiniteTimeAction *)FUN_000c0f58();
    }
    if (*(int *)(&stack0x00000054 + iVar1) == 1) {
      *(int *)(&stack0x00000054 + iVar1) = (*ppiVar4)[iVar6];
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,0);
    }
    if (*(int *)(&stack0x00000054 + iVar1) == 2) {
      *(int *)(&stack0x00000054 + iVar1) = (*ppiVar4)[iVar6];
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,*(undefined4 *)(&stack0x000000cc + iVar1),0);
    }
    if (*(int *)(&stack0x00000054 + iVar1) != 3) {
      if (*(int *)(&stack0x00000054 + iVar1) == 4) {
        piVar3 = *ppiVar4;
        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
        *puVar21 = 0;
      }
      else {
        if (*(int *)(&stack0x00000054 + iVar1) != 5) {
          if (*(int *)(&stack0x00000054 + iVar1) == 6) {
            piVar3 = *ppiVar4;
            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
            *puVar23 = *(undefined4 *)(&stack0x000000d8 + iVar1);
            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x000000dc + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
          }
          else {
            if (*(int *)(&stack0x00000054 + iVar1) != 7) {
              if (*(int *)(&stack0x00000054 + iVar1) == 8) {
                piVar3 = *ppiVar4;
                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                *puVar25 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x000000dc + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = 0;
              }
              else {
                if (*(int *)(&stack0x00000054 + iVar1) != 9) {
                  if (*(int *)(&stack0x00000054 + iVar1) == 10) {
                    piVar3 = *ppiVar4;
                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                    uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                    *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                    *puVar27 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                    uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                    uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x000000dc + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x000000ec + iVar1);
                    *(undefined4 *)(&stack0x00000004 + iVar1) = 0;
                  }
                  else {
                    if (*(int *)(&stack0x00000054 + iVar1) != 0xb) {
                      if (*(int *)(&stack0x00000054 + iVar1) == 0xc) {
                        piVar3 = *ppiVar4;
                        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                        *puVar29 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x000000dc + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x000000e0 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x000000e4 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x000000e8 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000000ec + iVar1);
                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                             *(undefined4 *)(&stack0x000000f0 + iVar1);
                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                             *(undefined4 *)(&stack0x000000f4 + iVar1);
                        *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
                      }
                      else {
                        if (*(int *)(&stack0x00000054 + iVar1) != 0xd) {
                          if (*(int *)(&stack0x00000054 + iVar1) == 0xe) {
                            piVar3 = *ppiVar4;
                            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                            *puVar31 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x000000dc + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e0 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e4 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e8 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000000ec + iVar1);
                            *(undefined4 *)(&stack0x00000004 + iVar1) =
                                 *(undefined4 *)(&stack0x000000f0 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x000000f4 + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                 *(undefined4 *)(&stack0x000000f8 + iVar1);
                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                 *(undefined4 *)(&stack0x000000fc + iVar1);
                            *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
                          }
                          else {
                            if (*(int *)(&stack0x00000054 + iVar1) != 0xf) {
                              if (*(int *)(&stack0x00000054 + iVar1) == 0x10) {
                                piVar3 = *ppiVar4;
                                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                *puVar33 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x000000dc + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e8 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000000ec + iVar1);
                                *(undefined4 *)(&stack0x00000004 + iVar1) =
                                     *(undefined4 *)(&stack0x000000f0 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x000000f4 + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x000000f8 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x000000fc + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x00000100 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000104 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
                              }
                              else {
                                if (*(int *)(&stack0x00000054 + iVar1) != 0x11) {
                                  if (*(int *)(&stack0x00000054 + iVar1) == 0x12) {
                                    piVar3 = *ppiVar4;
                                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                    uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                    *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                    *puVar35 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                    uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                    uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x000000dc + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000000ec + iVar1);
                                    *(undefined4 *)(&stack0x00000004 + iVar1) =
                                         *(undefined4 *)(&stack0x000000f0 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x000000f4 + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x000000f8 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x000000fc + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000100 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000104 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000108 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000010c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) = 0;
                                  }
                                  else {
                                    if (*(int *)(&stack0x00000054 + iVar1) != 0x13) {
                                      if (*(int *)(&stack0x00000054 + iVar1) == 0x14) {
                                        piVar3 = *ppiVar4;
                                        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                        *puVar37 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x000000dc + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e0 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e4 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e8 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000000ec + iVar1);
                                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                                             *(undefined4 *)(&stack0x000000f0 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x000000f4 + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x000000f8 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x000000fc + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000100 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000104 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000108 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000010c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000110 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000114 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
                                      }
                                      else {
                                        if (*(int *)(&stack0x00000054 + iVar1) != 0x15) {
                                          if (*(int *)(&stack0x00000054 + iVar1) == 0x16) {
                                            piVar3 = *ppiVar4;
                                            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                            *puVar39 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000dc + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e0 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e4 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e8 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000ec + iVar1);
                                            *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f0 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f4 + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f8 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000fc + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000100 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000104 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000108 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000010c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000110 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
                                          }
                                          else {
                                            if (*(int *)(&stack0x00000054 + iVar1) != 0x17) {
                                              if (*(int *)(&stack0x00000054 + iVar1) == 0x18) {
                                                piVar3 = *ppiVar4;
                                                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                                *puVar41 = *(undefined4 *)(&stack0x000000d8 + iVar1)
                                                ;
                                                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000dc + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e8 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000ec + iVar1);
                                                *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f0 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f4 + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f8 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000fc + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000100 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000104 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000108 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000010c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000110 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
                                              }
                                              else {
                                                if (*(int *)(&stack0x00000054 + iVar1) != 0x19) {
                                                  if (*(int *)(&stack0x00000054 + iVar1) == 0x1a) {
                                                    piVar3 = *ppiVar4;
                                                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x000000cc + iVar1);
                                                    *(int *)(&stack0x00000054 + iVar1) =
                                                         piVar3[iVar6];
                                                    *puVar43 = *(undefined4 *)
                                                                (&stack0x000000d8 + iVar1);
                                                    uVar12 = *(undefined4 *)
                                                              (&stack0x000000d0 + iVar1);
                                                    uVar16 = *(undefined4 *)
                                                              (&stack0x000000d4 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000dc + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000ec + iVar1);
                                                    *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f4 + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000fc + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000100 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000104 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000108 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000010c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000110 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) = 0;
                                                  }
                                                  else {
                                                    if (*(int *)(&stack0x00000054 + iVar1) != 0x1b)
                                                    {
                                                      if (*(int *)(&stack0x00000054 + iVar1) == 0x1c
                                                         ) {
                                                        piVar3 = *ppiVar4;
                                                        *(int *)(&stack0x00000058 + iVar1) =
                                                             iVar6 * 4;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x000000cc + iVar1);
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             piVar3[iVar6];
                                                        *puVar45 = *(undefined4 *)
                                                                    (&stack0x000000d8 + iVar1);
                                                        uVar12 = *(undefined4 *)
                                                                  (&stack0x000000d0 + iVar1);
                                                        uVar16 = *(undefined4 *)
                                                                  (&stack0x000000d4 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000dc + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e0 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e4 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e8 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000ec + iVar1);
                                                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f4 + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000fc + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000100 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000104 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000108 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000010c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000110 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000114 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000118 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000124 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000128 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             0;
                                                      }
                                                      else {
                                                        if (*(int *)(&stack0x00000054 + iVar1) !=
                                                            0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c0f98 +
                                                                                 0xc0f56));
                                                        }
                                                        piVar3 = *ppiVar4;
                                                        *(int *)(&stack0x00000058 + iVar1) =
                                                             iVar6 * 4;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x000000cc + iVar1);
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             piVar3[iVar6];
                                                        *puVar46 = *(undefined4 *)
                                                                    (&stack0x000000d8 + iVar1);
                                                        uVar12 = *(undefined4 *)
                                                                  (&stack0x000000d0 + iVar1);
                                                        uVar16 = *(undefined4 *)
                                                                  (&stack0x000000d4 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000dc + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e0 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e4 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000e8 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000ec + iVar1);
                                                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f4 + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000f8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000000fc + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000100 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000104 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000108 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000010c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000110 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000114 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000118 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000124 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000128 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000138 + iVar1);
                                                        *(undefined4 *)(&stack0x00000050 + iVar1) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar8,uVar15,uVar12,uVar16);
                                                    }
                                                    piVar3 = *ppiVar4;
                                                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x000000cc + iVar1);
                                                    *(int *)(&stack0x00000054 + iVar1) =
                                                         piVar3[iVar6];
                                                    *puVar44 = *(undefined4 *)
                                                                (&stack0x000000d8 + iVar1);
                                                    uVar12 = *(undefined4 *)
                                                              (&stack0x000000d0 + iVar1);
                                                    uVar16 = *(undefined4 *)
                                                              (&stack0x000000d4 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000dc + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000ec + iVar1);
                                                    *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f4 + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x000000f8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x000000fc + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000100 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000104 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000108 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000010c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000110 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000130 + iVar1);
                                                    *(undefined4 *)(&stack0x00000048 + iVar1) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar8,uVar15,uVar12,uVar16);
                                                }
                                                piVar3 = *ppiVar4;
                                                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                                *puVar42 = *(undefined4 *)(&stack0x000000d8 + iVar1)
                                                ;
                                                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000dc + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000e8 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000ec + iVar1);
                                                *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f0 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f4 + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x000000f8 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x000000fc + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000100 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000104 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000108 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000010c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000110 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000128 + iVar1);
                                                *(undefined4 *)(&stack0x00000040 + iVar1) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar8,uVar15,uVar12,uVar16);
                                            }
                                            piVar3 = *ppiVar4;
                                            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                            *puVar40 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000dc + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e0 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e4 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000e8 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000ec + iVar1);
                                            *(undefined4 *)(&stack0x00000004 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f0 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f4 + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x000000f8 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x000000fc + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000100 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000104 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000108 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000010c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000110 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000120 + iVar1);
                                            *(undefined4 *)(&stack0x00000038 + iVar1) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                                        }
                                        piVar3 = *ppiVar4;
                                        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                        *puVar38 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x000000dc + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e0 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e4 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x000000e8 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000000ec + iVar1);
                                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                                             *(undefined4 *)(&stack0x000000f0 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x000000f4 + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x000000f8 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x000000fc + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000100 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000104 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000108 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000010c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000110 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000114 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                             *(undefined4 *)(&stack0x00000118 + iVar1);
                                        *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                                    }
                                    piVar3 = *ppiVar4;
                                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                    uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                    *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                    *puVar36 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                    uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                    uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x000000dc + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000000ec + iVar1);
                                    *(undefined4 *)(&stack0x00000004 + iVar1) =
                                         *(undefined4 *)(&stack0x000000f0 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x000000f4 + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x000000f8 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x000000fc + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000100 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000104 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000108 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000010c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                         *(undefined4 *)(&stack0x00000110 + iVar1);
                                    *(undefined4 *)(&stack0x00000028 + iVar1) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                                }
                                piVar3 = *ppiVar4;
                                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                                *puVar34 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x000000dc + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x000000e8 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000000ec + iVar1);
                                *(undefined4 *)(&stack0x00000004 + iVar1) =
                                     *(undefined4 *)(&stack0x000000f0 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x000000f4 + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x000000f8 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x000000fc + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x00000100 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000104 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                     *(undefined4 *)(&stack0x00000108 + iVar1);
                                *(undefined4 *)(&stack0x00000020 + iVar1) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                            }
                            piVar3 = *ppiVar4;
                            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                            *puVar32 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x000000dc + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e0 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e4 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x000000e8 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000000ec + iVar1);
                            *(undefined4 *)(&stack0x00000004 + iVar1) =
                                 *(undefined4 *)(&stack0x000000f0 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x000000f4 + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                 *(undefined4 *)(&stack0x000000f8 + iVar1);
                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                 *(undefined4 *)(&stack0x000000fc + iVar1);
                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                 *(undefined4 *)(&stack0x00000100 + iVar1);
                            *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                        }
                        piVar3 = *ppiVar4;
                        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                        *puVar30 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x000000dc + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x000000e0 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x000000e4 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x000000e8 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000000ec + iVar1);
                        *(undefined4 *)(&stack0x00000004 + iVar1) =
                             *(undefined4 *)(&stack0x000000f0 + iVar1);
                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                             *(undefined4 *)(&stack0x000000f4 + iVar1);
                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                             *(undefined4 *)(&stack0x000000f8 + iVar1);
                        *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                    }
                    piVar3 = *ppiVar4;
                    *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                    uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                    *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                    *puVar28 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                    uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                    uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x000000dc + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x000000e0 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x000000e4 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x000000e8 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x000000ec + iVar1);
                    *(undefined4 *)(&stack0x00000004 + iVar1) =
                         *(undefined4 *)(&stack0x000000f0 + iVar1);
                    *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
                }
                piVar3 = *ppiVar4;
                *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
                uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
                *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
                *puVar26 = *(undefined4 *)(&stack0x000000d8 + iVar1);
                uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
                uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x000000dc + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x000000e0 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x000000e4 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1)
                ;
                *(undefined4 *)((int)&param_5 + iVar1) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
            }
            piVar3 = *ppiVar4;
            *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
            uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
            *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
            *puVar24 = *(undefined4 *)(&stack0x000000d8 + iVar1);
            uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
            uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x000000dc + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x000000e0 + iVar1);
            *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
        }
        piVar3 = *ppiVar4;
        *(int *)(&stack0x00000058 + iVar1) = iVar6 * 4;
        uVar15 = *(undefined4 *)(&stack0x000000cc + iVar1);
        *(int *)(&stack0x00000054 + iVar1) = piVar3[iVar6];
        uVar12 = *(undefined4 *)(&stack0x000000d0 + iVar1);
        uVar16 = *(undefined4 *)(&stack0x000000d4 + iVar1);
        *puVar22 = *(undefined4 *)(&stack0x000000d8 + iVar1);
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar12,uVar16);
    }
    *(int *)(&stack0x00000054 + iVar1) = (*ppiVar4)[iVar6];
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar8,*(undefined4 *)(&stack0x000000cc + iVar1),
               *(undefined4 *)(&stack0x000000d0 + iVar1),0);
  }
  uVar15 = *(undefined4 *)
            (*(int *)(*ppiVar4)[iVar6] + *(int *)(&stack0x00000060 + iVar1) * 0x1c + 0x4c);
  *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
  iVar10 = __aeabi_fcmpeq(uVar15,DAT_000c0588);
  if (iVar10 != 0) goto LAB_000c06b8;
  if (*(int *)(&stack0x00000224 + iVar1) == 2) {
    piVar3 = ppiVar4[1];
    iVar10 = __aeabi_fcmplt(piVar3[0x10],*(undefined4 *)(&stack0x0000005c + iVar1));
    if (iVar10 != 0) {
      piVar3[0x10] = *(int *)(&stack0x0000005c + iVar1);
    }
  }
  *(int **)(&stack0x0000005c + iVar1) = *ppiVar4;
  if (*(int *)(&stack0x00000060 + iVar1) != 0) {
LAB_000c0550:
    iVar11 = **(int **)(*(int *)(&stack0x0000005c + iVar1) + iVar6 * 4);
    uVar15 = *(undefined4 *)(iVar11 + *(int *)(&stack0x00000060 + iVar1) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
    iVar10 = __aeabi_fcmpeq(uVar15,0);
    if (iVar10 == 0) {
      uVar15 = __subsf3(*(undefined4 *)(&stack0x0000005c + iVar1),
                        *(undefined4 *)(&stack0x000000ac + iVar1));
      *(undefined4 *)(&stack0x000000a8 + iVar1) = uVar15;
      *(undefined4 *)(&stack0x000000ac + iVar1) = *(undefined4 *)(&stack0x0000005c + iVar1);
    }
    else {
      *(CCPoint **)(&stack0x000000a8 + iVar1) = DAT_000c0590;
      *(CCPoint **)(&stack0x000000ac + iVar1) = DAT_000c0590;
    }
    if (*(int *)(&stack0x00000058 + iVar1) == 0) {
      *(undefined4 *)(&stack0x00000068 + iVar1) = *(undefined4 *)(&stack0x000000a8 + iVar1);
      *(int *)(&stack0x0000005c + iVar1) = *(int *)(&stack0x00000060 + iVar1) * 0x1c;
      iVar10 = iVar11 + *(int *)(&stack0x00000060 + iVar1) * 0x1c;
      uVar15 = *(undefined4 *)(iVar10 + 0x50);
      *(int *)(&stack0x00000064 + iVar1) = iVar10;
      uVar15 = __mulsf3(uVar15,0x3f000000);
      uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar11 + 0x20));
      *(undefined4 *)(&stack0x0000007c + iVar1) = uVar15;
      uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000064 + iVar1) + 0x54),0x3f000000);
      uVar48 = __subsf3(*(undefined4 *)(iVar11 + 0x24),uVar15);
      uVar48 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000a0 + iVar1),(float)uVar48,
                          (float)((ulonglong)uVar48 >> 0x20));
      piVar3 = (int *)(*ppiVar4)[iVar6];
      iVar6 = *piVar3 + *(int *)(&stack0x0000005c + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar6 + 0x60);
      uVar15 = *(undefined4 *)(iVar6 + 100);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000058 + iVar1);
      *(int **)((int)&piStack_4 + iVar1) = piVar3;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
      CVar7 = *(CCPoint *)(&stack0x00000068 + iVar1);
      CVar9 = *(CCSize *)(&stack0x000000a0 + iVar1);
      *puVar20 = *(undefined4 *)(iVar6 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar48,CVar7,CVar9,(float)((ulonglong)uVar48 >> 0x20),extraout_s2_02,
                SUB41(*(undefined4 *)(&stack0x000000a4 + iVar1),0),*(_KG_Anit **)(iVar6 + 0x58));
    }
    *(undefined4 *)(&stack0x00000064 + iVar1) = *(undefined4 *)(&stack0x000000a8 + iVar1);
    iVar10 = iVar11 + *(int *)(&stack0x00000060 + iVar1) * 0x1c;
    *(int *)(&stack0x00000058 + iVar1) = *(int *)(&stack0x00000060 + iVar1) * 0x1c;
    uVar15 = *(undefined4 *)(iVar10 + 0x50);
    *(int *)(&stack0x0000005c + iVar1) = iVar10;
    uVar15 = __mulsf3(uVar15,0x3f000000);
    uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar11 + 0x20));
    *(undefined4 *)(&stack0x00000068 + iVar1) = uVar15;
    uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x0000005c + iVar1) + 0x54),0x3f000000);
    uVar48 = __subsf3(*(undefined4 *)(iVar11 + 0x24),uVar15);
    uVar48 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x00000098 + iVar1),(float)uVar48,
                        (float)((ulonglong)uVar48 >> 0x20));
    piVar3 = (int *)(*ppiVar4)[iVar6];
    iVar6 = *piVar3 + *(int *)(&stack0x00000058 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar6 + 0x60);
    uVar15 = *(undefined4 *)(iVar6 + 100);
    *(int **)((int)&piStack_4 + iVar1) = piVar3;
    CVar7 = *(CCPoint *)(&stack0x00000064 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
    CVar9 = *(CCSize *)(&stack0x00000098 + iVar1);
    *puVar19 = *(undefined4 *)(iVar6 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar48,CVar7,CVar9,(float)((ulonglong)uVar48 >> 0x20),extraout_s2_01,
              SUB41(*(undefined4 *)(&stack0x0000009c + iVar1),0),*(_KG_Anit **)(iVar6 + 0x58));
  }
  *(int *)(&stack0x00000064 + iVar1) = iVar6 * 4;
  piVar3 = *(int **)(*(int *)(&stack0x0000005c + iVar1) + iVar6 * 4);
  *(undefined4 *)(&stack0x00000068 + iVar1) = 0;
  uVar15 = *(undefined4 *)(*piVar3 + 0x4c);
  iVar10 = __aeabi_fcmpgt(uVar15,0);
  if (iVar10 == 0) goto LAB_000c0550;
  *(undefined4 *)(&stack0x000000ac + iVar1) = uVar15;
  uVar15 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
  memset(&stack0x000000b4 + iVar1,*(int *)(&stack0x00000060 + iVar1),0x14);
  iVar11 = *(int *)(*(int *)(&stack0x00000068 + iVar1) +
                   *(int *)(*(int *)(&stack0x00000064 + iVar1) + (int)*ppiVar4));
  iVar10 = __aeabi_fcmpgt(*(undefined4 *)(iVar11 + 0x50),DAT_000c058c);
  fVar47 = extraout_s0_00;
  fVar49 = extraout_s1;
  if ((iVar10 == 0) &&
     (iVar10 = __aeabi_fcmpgt(*(undefined4 *)(iVar11 + 0x54),DAT_000c058c), fVar47 = extraout_s0_01,
     fVar49 = extraout_s1_00, iVar10 == 0)) {
    iVar10 = *(int *)(&stack0x00000060 + iVar1);
  }
  else {
    fVar47 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000090 + iVar1),fVar47,fVar49);
    uVar15 = cocos2d::CCMoveTo::actionWithDuration(fVar47,DAT_000c0590);
    iVar10 = 1;
    *(undefined4 *)(&stack0x000000b4 + iVar1) = uVar15;
  }
  iVar11 = *(int *)(*ppiVar4)[iVar6];
  *(int *)(&stack0x00000058 + iVar1) = iVar11;
  uVar15 = *(undefined4 *)(iVar11 + 0x58);
  *(undefined4 *)(&stack0x00000064 + iVar1) = uVar15;
  iVar11 = __aeabi_fcmpgt(uVar15,DAT_000c0594);
  fVar47 = extraout_s0_02;
  fVar49 = extraout_s1_01;
  fVar50 = extraout_s2;
  if ((iVar11 != 0) ||
     (iVar11 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x5c),
                              DAT_000c058c), fVar47 = extraout_s0_03, fVar49 = extraout_s1_02,
     fVar50 = extraout_s2_00, iVar11 != 0)) {
    uVar15 = cocos2d::CCScaleTo::actionWithDuration(fVar47,fVar49,fVar50);
    *(undefined4 *)(&stack0x000000b4 + iVar10 * 4 + iVar1) = uVar15;
    iVar10 = iVar10 + 1;
  }
  uVar15 = *(undefined4 *)(*(int *)(*ppiVar4)[iVar6] + 0x60);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
  iVar11 = __aeabi_fcmpgt(uVar15,DAT_000c0594);
  if (iVar11 == 0) {
    iVar11 = __aeabi_fcmpeq(*(undefined4 *)(&stack0x00000058 + iVar1),DAT_000c0594);
    if (iVar11 == 0) goto LAB_000c04d2;
    uVar2 = (uchar)DAT_000c0590;
    fVar47 = extraout_s0_04;
  }
  else {
    fVar47 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000058 + iVar1));
    uVar2 = (uchar)DAT_000c0590;
  }
  uVar15 = cocos2d::CCFadeTo::actionWithDuration(fVar47,uVar2);
  *(undefined4 *)(&stack0x000000b4 + iVar10 * 4 + iVar1) = uVar15;
  iVar10 = iVar10 + 1;
LAB_000c04d2:
  uVar15 = *(undefined4 *)(*(int *)(*ppiVar4)[iVar6] + 100);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
  iVar6 = __aeabi_fcmpgt(uVar15,DAT_000c0594);
  if (iVar6 == 0) {
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x0000005c + iVar1),0);
    }
  }
  else {
    uVar15 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
    *(undefined4 *)(&stack0x000000b4 + iVar10 * 4 + iVar1) = uVar15;
    iVar10 = iVar10 + 1;
  }
  pCVar8 = *(CCFiniteTimeAction **)(&stack0x000000b4 + iVar1);
  if (iVar10 == 1) {
    uVar15 = cocos2d::CCSpawn::actions(pCVar8,0);
  }
  else {
    uVar15 = *(undefined4 *)(&stack0x000000b8 + iVar1);
    if (iVar10 == 2) {
      uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,0);
    }
    else {
      uVar12 = *(undefined4 *)(&stack0x000000bc + iVar1);
      if (iVar10 == 3) {
        uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,uVar12,0);
      }
      else {
        uVar16 = *(undefined4 *)(&stack0x000000c0 + iVar1);
        *puVar18 = 0;
        uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,uVar12,uVar16);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x0000005c + iVar1),uVar15,0);
}


