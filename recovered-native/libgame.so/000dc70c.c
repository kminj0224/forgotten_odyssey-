/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc70c  Symbol: Skill_Popup */

/* Market_Hero::Skill_Popup(int, int) */

void __thiscall Market_Hero::Skill_Popup(Market_Hero *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  CCNode *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int extraout_r1;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  code *pcVar16;
  undefined4 uVar17;
  int *piVar18;
  float fVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  float extraout_s0_21;
  float extraout_s0_22;
  float extraout_s0_23;
  float extraout_s0_24;
  float extraout_s0_25;
  float extraout_s0_26;
  float extraout_s0_27;
  float extraout_s0_28;
  float extraout_s0_29;
  float extraout_s0_30;
  float extraout_s0_31;
  float extraout_s0_32;
  undefined8 uVar20;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  int *piStack_4;
  
  iVar2 = DAT_000dca5c;
  *(Market_Hero **)((int)&piStack_4 + DAT_000dca5c) = this;
  *(int *)(&stack0x00000000 + DAT_000dca5c) = DAT_000dca64 + 0xdc720;
  puVar15 = *(undefined4 **)(DAT_000dca64 + 0xdc720 + DAT_000dca60);
  this[0x126] = SUB41(param_1,0);
  uVar13 = *puVar15;
  this[DAT_000dca68] = SUB41(param_2,0);
  *(undefined4 *)(&stack0x00000390 + iVar2) = uVar13;
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x62);
  iVar11 = param_2 + param_1 * 4;
  *(int *)(&stack0xfffffff8 + iVar2) = iVar11;
  *(int *)(&stack0x0000000c + iVar2) = param_1 * 4;
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,iVar11);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x38))();
  uVar17 = *puVar5;
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)((int)&piStack_4 + iVar2),0x62);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,*(int *)(&stack0xfffffff8 + iVar2));
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))();
  uVar13 = __mulsf3(*puVar5,0x3f000000);
  __subsf3(uVar17,uVar13);
  iVar11 = __fixsfsi();
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)((int)&piStack_4 + iVar2),0x62);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,*(int *)(&stack0xfffffff8 + iVar2));
  iVar6 = (**(code **)(*piVar4 + 0x38))();
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(iVar6 + 4);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)((int)&piStack_4 + iVar2),0x62);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,*(int *)(&stack0xfffffff8 + iVar2));
  uVar13 = (**(code **)(*piVar4 + 0x7c))();
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar13;
  __floatsisf(iVar11 + DAT_000dca6c);
  uVar13 = __mulsf3(*(undefined4 *)(*(int *)(&stack0xfffffff0 + iVar2) + 4),0x3f000000);
  __addsf3(*(undefined4 *)(&stack0x00000004 + iVar2),uVar13);
  iVar11 = __fixsfsi();
  uVar20 = __floatsisf(iVar11 + 0x38);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000058 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dca70 + 0xdc7de));
  iVar11 = *piVar4;
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(&stack0x0000005c + iVar2);
  iVar11 = (**(code **)(iVar11 + 0x7c))();
  uVar13 = __subsf3(*(undefined4 *)(&stack0x00000004 + iVar2),*(undefined4 *)(iVar11 + 4));
  iVar11 = __aeabi_fcmplt(uVar13,0);
  *(undefined4 **)(&stack0x00000014 + iVar2) = puVar15;
  if (iVar11 != 0) {
    iVar11 = *piVar4;
    *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(&stack0x00000058 + iVar2);
    uVar17 = *(undefined4 *)(&stack0x0000005c + iVar2);
    iVar11 = (**(code **)(iVar11 + 0x7c))(piVar4);
    uVar13 = __fixsfsi(uVar17);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar13;
    iVar11 = __fixsfsi(*(undefined4 *)(iVar11 + 4));
    uVar10 = *(int *)(&stack0xfffffff0 + iVar2) - iVar11 >> 0x1f;
    uVar13 = __floatsisf((*(int *)(&stack0xfffffff0 + iVar2) - iVar11) + uVar10 ^ uVar10);
    uVar20 = __addsf3(uVar17,uVar13);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000060 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000060 + iVar2);
    *(undefined4 *)(&stack0x0000005c + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
  }
  uVar20 = (**(code **)(*piVar4 + 0x3c))(piVar4,&stack0x00000058 + iVar2);
  pcVar16 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000068 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  (*pcVar16)(piVar4,&stack0x00000068 + iVar2);
  fVar19 = (float)(**(code **)(**(int **)((int)&piStack_4 + iVar2) + 0xcc))
                            (*(undefined4 *)((int)&piStack_4 + iVar2),piVar4,0x66,0x66);
  iVar6 = *(int *)(&stack0x00000000 + iVar2);
  cVar12 = *(char *)(*(int *)((int)&piStack_4 + iVar2) + 0x110);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(iVar6 + DAT_000dca74);
  piVar18 = *(int **)(iVar6 + DAT_000dca78);
  iVar11 = extraout_r1;
  if (cVar12 == '\0') {
    pcVar7 = *(char **)(*(int *)(&stack0xfffffff8 + iVar2) * 4 + *(int *)(iVar6 + DAT_000dca7c));
    *(char **)(&stack0xfffffff4 + iVar2) = (char *)(DAT_000dca80 + 0xdc8a0);
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar7,(char *)(DAT_000dca80 + 0xdc8a0),fVar19);
    pcVar16 = *(code **)(*piVar8 + 0xf4);
    (&stack0x00000020)[iVar2] = 0xff;
    (&stack0x00000021)[iVar2] = 0xc1;
    (&stack0x00000022)[iVar2] = 0;
    uVar20 = (*pcVar16)();
    pcVar16 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000070 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar8,&stack0x00000070 + iVar2);
    pcVar16 = *(code **)(*piVar8 + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dca88);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000078 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar8,&stack0x00000078 + iVar2);
    (**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    sprintf(&stack0x00000250 + iVar2,(char *)(DAT_000dca90 + 0xdc924),
            (int)*(char *)(**(int **)(&stack0x00000004 + iVar2) + *piVar18 * 0x6c +
                           *(int *)(&stack0xfffffff8 + iVar2) + DAT_000dca8c));
    piVar9 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x00000250 + iVar2,*(char **)(&stack0xfffffff4 + iVar2),
                               extraout_s0);
    iVar11 = *piVar9;
    *(int **)(&stack0xfffffff0 + iVar2) = piVar9;
    pcVar16 = *(code **)(iVar11 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000080 + iVar2),extraout_s0_00,extraout_s1);
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000080 + iVar2);
    *(undefined4 *)(&stack0x00000008 + iVar2) =
         *(undefined4 *)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x7c))(piVar8);
    uVar13 = __addsf3(*puVar5,DAT_000dca88);
    __addsf3(uVar13,DAT_000dca94);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dca88);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (**(code **)(&stack0x00000008 + iVar2))
              (*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000088 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
    *(undefined4 *)(&stack0x00000008 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dca98);
    iVar11 = *(int *)(&stack0x00000008 + iVar2) + *(int *)(&stack0xfffffff8 + iVar2) * 0x10;
    pcVar7 = *(char **)(iVar11 + 8);
    *(int *)(&stack0xfffffff0 + iVar2) = iVar11;
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar7,*(char **)(&stack0xfffffff4 + iVar2),fVar19);
    pcVar16 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000090 + iVar2),extraout_s0_01,extraout_s1_00);
    (*pcVar16)(piVar8,&stack0x00000090 + iVar2);
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    __subsf3(*puVar5,DAT_000dca88);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dca88);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000098 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (**(code **)(&stack0xfffffff4 + iVar2))(piVar8,&stack0x00000098 + iVar2);
    (**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    *(uint *)(&stack0x0000000c + iVar2) =
         (uint)(*(int *)(&stack0xfffffff8 + iVar2) != 3 && *(int *)(&stack0xfffffff8 + iVar2) != 5);
    uVar13 = *(undefined4 *)(*(int *)(&stack0xfffffff0 + iVar2) + 4);
    *(undefined4 *)(&stack0xfffffff4 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dca9c);
    if (*(int *)(&stack0x0000000c + iVar2) == 0) {
      iVar11 = *(int *)(&stack0xfffffff8 + iVar2);
      pcVar7 = (char *)(iRam000dcd34 + 0xdcabc);
      cVar12 = *(char *)(**(int **)(&stack0x00000004 + iVar2) + *piVar18 * 0x6c + iVar11 +
                        iRam000dcd38);
    }
    else {
      iVar11 = *(int *)(&stack0xfffffff8 + iVar2);
      cVar12 = *(char *)(**(int **)(&stack0x00000004 + iVar2) + *piVar18 * 0x6c + iVar11 +
                        DAT_000dca8c);
      pcVar7 = (char *)(DAT_000dcaa0 + 0xdca58);
    }
    sprintf(&stack0x00000264 + iVar2,pcVar7,uVar13,
            (int)*(short *)(*(int *)(&stack0xfffffff4 + iVar2) + (iVar11 * 0xb + (int)cVar12) * 2));
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x00000264 + iVar2,(char *)(iRam000dcd3c + 0xdcade),
                               extraout_s0_02);
    iVar11 = *piVar8;
    *(int **)(&stack0xfffffff0 + iVar2) = piVar8;
    pcVar16 = *(code **)(iVar11 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000a0 + iVar2),extraout_s0_03,extraout_s1_01);
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x000000a0 + iVar2);
    pcVar16 = *(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
    uVar13 = __addsf3(uVar13,uRam000dcd44);
    uVar20 = __addsf3(uVar13,uRam000dcd48);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000a8 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x000000a8 + iVar2);
    (**(code **)(*piVar4 + 0xc4))(piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
    if (*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                  *piVar18 * 0x6c + (*(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118) + -7) * 0xc
                  + (int)*(char *)(*(int *)((int)&piStack_4 + iVar2) + iRam000dcd50) + iRam000dcd38)
        < '\n') {
      if (*(int *)(&stack0x0000000c + iVar2) == 0) {
        pcVar7 = (char *)(iRam000dcd58 + 0xdcb7a);
      }
      else {
        pcVar7 = (char *)(iRam000dcd54 + 0xdcb74);
      }
      sprintf(&stack0x0000032c + iVar2,pcVar7,
              (int)*(short *)(*(int *)(&stack0xfffffff4 + iVar2) +
                             (*(int *)(&stack0xfffffff8 + iVar2) * 0xb +
                              (int)*(char *)(**(int **)(&stack0x00000004 + iVar2) + *piVar18 * 0x6c
                                             + *(int *)(&stack0xfffffff8 + iVar2) + iRam000dcd38) +
                             1) * 2));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000032c + iVar2,(char *)(iRam000dcd5c + 0xdcba6),
                                 extraout_s0_04);
      pcVar16 = *(code **)(*piVar8 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000b0 + iVar2),extraout_s0_05,extraout_s1_02)
      ;
      (*pcVar16)(piVar8,&stack0x000000b0 + iVar2);
      iVar11 = *piVar8;
      (&stack0x00000024)[iVar2] = 0xff;
      (&stack0x00000025)[iVar2] = 0xc1;
      (&stack0x00000026)[iVar2] = 0;
      (**(code **)(iVar11 + 0xf4))(piVar8);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x7c))
                         (*(int **)(&stack0xfffffff0 + iVar2));
      uVar13 = __addsf3(*puVar5,uRam000dcd4c);
      __addsf3(uVar13,uRam000dcd60);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __addsf3(uVar13,uRam000dcd44);
      uVar20 = __addsf3(uVar13,uRam000dcd48);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000b8 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (**(code **)(&stack0xfffffff4 + iVar2))(piVar8,&stack0x000000b8 + iVar2);
      (**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    }
    piVar8 = (int *)(iRam000dcd6c + 0xdcc7a);
    sprintf(&stack0x000002c8 + iVar2,(char *)(iRam000dcd68 + 0xdcc48),
            *(undefined4 *)
             ((*(int *)(&stack0xfffffff8 + iVar2) * 10 +
              (int)*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                             *piVar18 * 0x6c +
                             (*(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118) + -7) * 0xc +
                             (int)*(char *)(*(int *)((int)&piStack_4 + iVar2) + iRam000dcd50) +
                            iRam000dcd38)) * 4 +
             *(int *)(*(int *)(&stack0x00000000 + iVar2) + iRam000dcd64)));
    piVar18 = (int *)cocos2d::CCLabelTTF::labelWithString
                               (&stack0x000002c8 + iVar2,(char *)piVar8,extraout_s0_06);
    pcVar16 = *(code **)(*piVar18 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000c0 + iVar2),extraout_s0_07,extraout_s1_03);
    (*pcVar16)(piVar18,&stack0x000000c0 + iVar2);
    pcVar16 = *(code **)(*piVar18 + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
    uVar13 = __subsf3(uVar13,uRam000dcd44);
    uVar20 = __subsf3(uVar13,uRam000dcd48);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000c8 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar18,&stack0x000000c8 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar18);
    piVar18 = (int *)cocos2d::CCLabelTTF::labelWithString
                               (*(char **)(*(int *)(&stack0x00000008 + iVar2) +
                                           *(int *)(&stack0xfffffff8 + iVar2) * 0x10 + 0xc),
                                (char *)piVar8,fVar19);
    pcVar16 = *(code **)(*piVar18 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000d0 + iVar2),extraout_s0_08,extraout_s1_04);
    (*pcVar16)(piVar18,&stack0x000000d0 + iVar2);
    iVar11 = *piVar18;
    (&stack0x00000028)[iVar2] = 1;
    (&stack0x00000029)[iVar2] = 0xdd;
    (&stack0x0000002a)[iVar2] = 0xff;
    uVar20 = (**(code **)(iVar11 + 0xf4))(piVar18);
    pcVar16 = *(code **)(*piVar18 + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000d8 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    uVar20 = FUN_000ddeb4(piVar18,&stack0x000000d8 + iVar2);
    piVar4 = (int *)0x18;
    if ((uint)piVar18 >> 5 != 0) {
      piVar8 = (int *)((uint)piVar8 >> 2);
      fVar19 = (float)func_0x00441d66(*piVar8 << (piVar8[2] & 0xffU),piVar8[1],piVar8[2],piVar8[3]);
      uVar10 = (uint)piVar18 & 2;
      iVar6 = *piVar18;
      iVar11 = piVar18[1];
      piVar4 = (int *)piVar18[4];
      piVar18 = piVar18 + 6;
      iVar6 = iVar6 * 2 + (uint)(uVar10 != 0);
      goto LAB_000dcd74;
    }
  }
  else {
LAB_000dcd74:
    *(int *)(&stack0x00000008 + iVar2) = *(int *)((int)&piStack_4 + iVar2) + 0xfc;
    if (*(int *)(&stack0xfffffff8 + iVar2) != 0xb) {
      fVar19 = (float)FUN_000dd7ca(iVar6,iVar11);
    }
    *(undefined4 *)(&stack0xfffffff8 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd154);
    pcVar7 = *(char **)((*(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -8) * 0x20 +
                       *(int *)(&stack0xfffffff8 + iVar2));
    *(char **)(&stack0xfffffff4 + iVar2) = (char *)(DAT_000dd15c + 0xdcd9e);
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar7,(char *)(DAT_000dd15c + 0xdcd9e),fVar19);
    iVar11 = *piVar8;
    (&stack0x0000002c)[iVar2] = 0xff;
    (&stack0x0000002d)[iVar2] = 0xc1;
    (&stack0x0000002e)[iVar2] = 0;
    uVar20 = (**(code **)(iVar11 + 0xf4))(piVar8);
    pcVar16 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000e0 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar8,&stack0x000000e0 + iVar2);
    pcVar16 = *(code **)(*piVar8 + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dd160);
  }
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x000000e8 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  (*pcVar16)(piVar8,&stack0x000000e8 + iVar2);
  (**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
  iVar11 = **(int **)(&stack0x00000004 + iVar2);
  *(int *)(&stack0xfffffff0 + iVar2) =
       (int)*(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd168);
  cVar12 = *(char *)(*(int *)((int)&piStack_4 + iVar2) + 0x126);
  *(int *)(&stack0x0000000c + iVar2) = *(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -7;
  sprintf(&stack0x00000264 + iVar2,(char *)(DAT_000dd164 + 0xdce16),
          (int)*(char *)(cVar12 * 4 + *piVar18 * 0x6c + *(int *)(&stack0x0000000c + iVar2) * 0xc +
                         iVar11 + *(int *)(&stack0xfffffff0 + iVar2) + DAT_000dd16c));
  piVar9 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (&stack0x00000264 + iVar2,*(char **)(&stack0xfffffff4 + iVar2),
                             extraout_s0_09);
  iVar11 = *piVar9;
  *(int **)(&stack0xfffffff0 + iVar2) = piVar9;
  pcVar16 = *(code **)(iVar11 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000f0 + iVar2),extraout_s0_10,extraout_s1_05);
  (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x000000f0 + iVar2);
  *(undefined4 *)(&stack0x0000000c + iVar2) =
       *(undefined4 *)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x7c))(piVar8);
  uVar13 = __addsf3(*puVar5,DAT_000dd160);
  __addsf3(uVar13,DAT_000dd170);
  iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dd160);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x000000f8 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  (**(code **)(&stack0x0000000c + iVar2))
            (*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x000000f8 + iVar2);
  fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
  piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(*(int *)(&stack0xfffffff8 + iVar2) +
                                        (*(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -8) *
                                        0x20 + 0xc),*(char **)(&stack0xfffffff4 + iVar2),fVar19);
  pcVar16 = *(code **)(*piVar8 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000100 + iVar2),extraout_s0_11,extraout_s1_06);
  (*pcVar16)(piVar8,&stack0x00000100 + iVar2);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
  __subsf3(*puVar5,DAT_000dd160);
  iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar20 = __subsf3(*(undefined4 *)(iVar11 + 4),DAT_000dd160);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000108 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  (**(code **)(&stack0xfffffff0 + iVar2))(piVar8,&stack0x00000108 + iVar2);
  fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
  iVar11 = *(int *)(*(int *)(&stack0xfffffff8 + iVar2) +
                    (*(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -8) * 0x20 + 8);
  if (iVar11 != 0) {
    iVar6 = *(int *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd174);
    sprintf(&stack0x000002c8 + iVar2,(char *)(DAT_000dd178 + 0xdcf68),iVar11,
            (int)*(short *)(*(char *)((*(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -7) *
                                      0xc + *piVar18 * 0x6c + **(int **)(&stack0x00000004 + iVar2) +
                                     DAT_000dd17c) * 2 + iVar6));
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x000002c8 + iVar2,*(char **)(&stack0xfffffff4 + iVar2),
                               extraout_s0_12);
    iVar11 = *piVar8;
    *(int **)(&stack0xfffffff0 + iVar2) = piVar8;
    pcVar16 = *(code **)(iVar11 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000110 + iVar2),extraout_s0_13,extraout_s1_07);
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000110 + iVar2);
    pcVar16 = *(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
    uVar13 = __addsf3(uVar13,DAT_000dd180);
    uVar20 = __addsf3(uVar13,DAT_000dd184);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000118 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000118 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
    iVar11 = **(int **)(&stack0x00000004 + iVar2) +
             *piVar18 * 0x6c + (*(int *)(*(int *)(&stack0x00000008 + iVar2) + 0x1c) + -7) * 0xc;
    if (*(char *)(iVar11 + *(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd188) +
                 DAT_000dd16c) < '\n') {
      sprintf(&stack0x0000032c + iVar2,(char *)(DAT_000dd18c + 0xdd026),
              (int)*(short *)((*(char *)(iVar11 + DAT_000dd17c) + 1) * 2 + iVar6));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000032c + iVar2,*(char **)(&stack0xfffffff4 + iVar2),
                                 extraout_s0_14);
      pcVar16 = *(code **)(*piVar8 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000120 + iVar2),extraout_s0_15,extraout_s1_08)
      ;
      (*pcVar16)(piVar8,&stack0x00000120 + iVar2);
      iVar11 = *piVar8;
      (&stack0x00000031)[iVar2] = 0xc1;
      (&stack0x00000030)[iVar2] = 0xff;
      (&stack0x00000032)[iVar2] = 0;
      (**(code **)(iVar11 + 0xf4))(piVar8);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x7c))
                         (*(int **)(&stack0xfffffff0 + iVar2));
      uVar13 = __addsf3(*puVar5,DAT_000dd160);
      __addsf3(uVar13,DAT_000dd170);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __addsf3(uVar13,DAT_000dd180);
      uVar20 = __addsf3(uVar13,DAT_000dd184);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000128 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (**(code **)(&stack0xfffffff4 + iVar2))(piVar8,&stack0x00000128 + iVar2);
      fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    }
  }
  iVar11 = *(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118);
  *(int *)(&stack0xfffffff4 + iVar2) = *(int *)((int)&piStack_4 + iVar2) + 0xfc;
  iVar6 = *(int *)(*(int *)(&stack0xfffffff8 + iVar2) + (iVar11 + -8) * 0x20 + 0x10);
  if (iVar6 != 0) {
    *(undefined4 *)(&stack0x00000008 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd174);
    pcVar7 = (char *)(DAT_000dd194 + 0xdd120);
    sprintf(&stack0x000002c8 + iVar2,(char *)(DAT_000dd190 + 0xdd0f6),iVar6,
            (int)*(short *)((*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                                       (iVar11 + -7) * 0xc + *piVar18 * 0x6c + DAT_000dd17c) + 0xb)
                            * 2 + *(int *)(&stack0x00000008 + iVar2)));
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x000002c8 + iVar2,pcVar7,extraout_s0_16);
    iVar11 = *piVar8;
    *(int **)(&stack0xfffffff0 + iVar2) = piVar8;
    pcVar16 = *(code **)(iVar11 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000130 + iVar2),extraout_s0_17,extraout_s1_09);
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000130 + iVar2);
    pcVar16 = *(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar20 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000138 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000138 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
    iVar11 = **(int **)(&stack0x00000004 + iVar2) +
             *piVar18 * 0x6c + (*(int *)(*(int *)(&stack0xfffffff4 + iVar2) + 0x1c) + -7) * 0xc;
    if (*(char *)(iVar11 + *(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd42c) +
                 DAT_000dd430) < '\n') {
      sprintf(&stack0x0000032c + iVar2,(char *)(DAT_000dd438 + 0xdd1fc),
              (int)*(short *)((*(char *)(iVar11 + DAT_000dd434) + 0xc) * 2 +
                             *(int *)(&stack0x00000008 + iVar2)));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000032c + iVar2,pcVar7,extraout_s0_18);
      pcVar16 = *(code **)(*piVar8 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000140 + iVar2),extraout_s0_19,extraout_s1_10)
      ;
      (*pcVar16)(piVar8,&stack0x00000140 + iVar2);
      iVar11 = *piVar8;
      (&stack0x00000034)[iVar2] = 0xff;
      (&stack0x00000035)[iVar2] = 0xc1;
      (&stack0x00000036)[iVar2] = 0;
      (**(code **)(iVar11 + 0xf4))(piVar8);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x7c))
                         (*(int **)(&stack0xfffffff0 + iVar2));
      uVar13 = __addsf3(*puVar5,DAT_000dd428);
      __addsf3(uVar13,DAT_000dd440);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar20 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000148 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (**(code **)(&stack0xfffffff4 + iVar2))(piVar8,&stack0x00000148 + iVar2);
      fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    }
  }
  iVar11 = *(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118);
  *(int *)(&stack0xfffffff4 + iVar2) = *(int *)((int)&piStack_4 + iVar2) + 0xfc;
  iVar14 = *(int *)(&stack0xfffffff8 + iVar2) + (iVar11 + -8) * 0x20;
  iVar6 = *(int *)(iVar14 + 0x14);
  if (iVar6 != 0) {
    iVar14 = *(int *)(iVar14 + 0x18);
    *(int *)(&stack0x00000008 + iVar2) = iVar14;
    if (iVar14 == 0) {
      *(undefined4 *)(&stack0x0000000c + iVar2) =
           *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd7e8);
      pcVar7 = (char *)(DAT_000dd7f4 + 0xdd492);
      sprintf(&stack0x000002c8 + iVar2,(char *)(DAT_000dd7ec + 0xdd468),iVar6,
              (int)*(short *)((*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                                         (iVar11 + -7) * 0xc + *piVar18 * 0x6c + DAT_000dd7f0) +
                              0x16) * 2 + *(int *)(&stack0x0000000c + iVar2)));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x000002c8 + iVar2,pcVar7,extraout_s0_24);
      iVar11 = *piVar8;
      *(int **)(&stack0xfffffff0 + iVar2) = piVar8;
      pcVar16 = *(code **)(iVar11 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000170 + iVar2),extraout_s0_25,extraout_s1_13)
      ;
      (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000170 + iVar2);
      pcVar16 = *(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __subsf3(uVar13,DAT_000dd7f8);
      uVar20 = __subsf3(uVar13,DAT_000dd7fc);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000178 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000178 + iVar2);
      fVar19 = (float)(**(code **)(*piVar4 + 0xc4))
                                (piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
      iVar11 = *piVar18 * 0x6c + (*(int *)(*(int *)(&stack0xfffffff4 + iVar2) + 0x1c) + -7) * 0xc +
               **(int **)(&stack0x00000004 + iVar2);
      if ('\t' < *(char *)(iVar11 + *(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd804) +
                          DAT_000dd808)) goto LAB_000dd5da;
      sprintf(&stack0x0000032c + iVar2,(char *)(DAT_000dd80c + 0xdd536),
              (int)*(short *)((*(char *)(iVar11 + DAT_000dd7f0) + 0x17) * 2 +
                             *(int *)(&stack0x0000000c + iVar2)));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000032c + iVar2,pcVar7,extraout_s0_26);
      pcVar16 = *(code **)(*piVar8 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000180 + iVar2),extraout_s0_27,extraout_s1_14)
      ;
      (*pcVar16)(piVar8,&stack0x00000180 + iVar2);
      iVar11 = *piVar8;
      (&stack0x0000003c)[iVar2] = 0xff;
      (&stack0x0000003d)[iVar2] = 0xc1;
      pcVar16 = *(code **)(iVar11 + 0xf4);
      (&stack0x0000003e)[iVar2] = (&stack0x00000008)[iVar2];
      (*pcVar16)(piVar8);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x7c))
                         (*(int **)(&stack0xfffffff0 + iVar2));
      uVar13 = __addsf3(*puVar5,DAT_000dd800);
      __addsf3(uVar13,DAT_000dd810);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __subsf3(uVar13,DAT_000dd7f8);
      uVar20 = __subsf3(uVar13,DAT_000dd7fc);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000188 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      puVar1 = &stack0x00000188;
    }
    else {
      *(undefined4 *)(&stack0x00000008 + iVar2) =
           *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd444);
      pcVar7 = (char *)(DAT_000dd44c + 0xdd2ee);
      sprintf(&stack0x000002c8 + iVar2,(char *)(DAT_000dd448 + 0xdd2c4),iVar6,
              (int)*(short *)((*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                                         (iVar11 + -7) * 0xc + *piVar18 * 0x6c + DAT_000dd434) +
                              0x16) * 2 + *(int *)(&stack0x00000008 + iVar2)));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x000002c8 + iVar2,pcVar7,extraout_s0_20);
      iVar11 = *piVar8;
      *(int **)(&stack0xfffffff0 + iVar2) = piVar8;
      pcVar16 = *(code **)(iVar11 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000150 + iVar2),extraout_s0_21,extraout_s1_11)
      ;
      (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000150 + iVar2);
      pcVar16 = *(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x3c);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __subsf3(uVar13,DAT_000dd43c);
      uVar20 = __subsf3(uVar13,DAT_000dd450);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000158 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (*pcVar16)(*(undefined4 *)(&stack0xfffffff0 + iVar2),&stack0x00000158 + iVar2);
      fVar19 = (float)(**(code **)(*piVar4 + 0xc4))
                                (piVar4,*(undefined4 *)(&stack0xfffffff0 + iVar2));
      iVar11 = *piVar18 * 0x6c + (*(int *)(*(int *)(&stack0xfffffff4 + iVar2) + 0x1c) + -7) * 0xc +
               **(int **)(&stack0x00000004 + iVar2);
      if ('\t' < *(char *)(iVar11 + *(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd42c) +
                          DAT_000dd430)) goto LAB_000dd5da;
      sprintf(&stack0x0000032c + iVar2,(char *)(DAT_000dd454 + 0xdd394),
              (int)*(short *)((*(char *)(iVar11 + DAT_000dd434) + 0x17) * 2 +
                             *(int *)(&stack0x00000008 + iVar2)));
      piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000032c + iVar2,pcVar7,extraout_s0_22);
      pcVar16 = *(code **)(*piVar8 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000160 + iVar2),extraout_s0_23,extraout_s1_12)
      ;
      (*pcVar16)(piVar8,&stack0x00000160 + iVar2);
      iVar11 = *piVar8;
      (&stack0x00000038)[iVar2] = 0xff;
      (&stack0x00000039)[iVar2] = 0xc1;
      (&stack0x0000003a)[iVar2] = 0;
      (**(code **)(iVar11 + 0xf4))(piVar8);
      *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(*piVar8 + 0x3c);
      puVar5 = (undefined4 *)
               (**(code **)(**(int **)(&stack0xfffffff0 + iVar2) + 0x7c))
                         (*(int **)(&stack0xfffffff0 + iVar2));
      uVar13 = __addsf3(*puVar5,DAT_000dd428);
      __addsf3(uVar13,DAT_000dd440);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __subsf3(uVar13,DAT_000dd43c);
      uVar20 = __subsf3(uVar13,DAT_000dd450);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000168 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      puVar1 = &stack0x00000168;
    }
    (**(code **)(&stack0xfffffff4 + iVar2))(piVar8,puVar1 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
  }
LAB_000dd5da:
  iVar11 = *(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118);
  *(int *)(&stack0xfffffff0 + iVar2) = *(int *)((int)&piStack_4 + iVar2) + 0xfc;
  iVar6 = *(int *)(*(int *)(&stack0xfffffff8 + iVar2) + (iVar11 + -8) * 0x20 + 0x18);
  if (iVar6 != 0) {
    *(undefined4 *)(&stack0xfffffff4 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000000 + iVar2) + DAT_000dd814);
    pcVar7 = (char *)(DAT_000dd81c + 0xdd622);
    sprintf(&stack0x000002c8 + iVar2,(char *)(DAT_000dd818 + 0xdd604),iVar6,
            (int)*(short *)((*(char *)(**(int **)(&stack0x00000004 + iVar2) +
                                       (iVar11 + -7) * 0xc + *piVar18 * 0x6c + DAT_000dd7f0) + 0x21)
                            * 2 + *(int *)(&stack0xfffffff4 + iVar2)));
    *(char **)(&stack0x00000000 + iVar2) = pcVar7;
    piVar8 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (&stack0x000002c8 + iVar2,pcVar7,extraout_s0_28);
    pcVar16 = *(code **)(*piVar8 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000190 + iVar2),extraout_s0_29,extraout_s1_15);
    (*pcVar16)(piVar8,&stack0x00000190 + iVar2);
    pcVar16 = *(code **)(*piVar8 + 0x3c);
    iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
    uVar13 = __subsf3(uVar13,DAT_000dd820);
    uVar20 = __subsf3(uVar13,DAT_000dd824);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000198 + iVar2),(float)uVar20,
               (float)((ulonglong)uVar20 >> 0x20));
    (*pcVar16)(piVar8,&stack0x00000198 + iVar2);
    fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar8);
    iVar11 = **(int **)(&stack0x00000004 + iVar2) +
             *piVar18 * 0x6c + (*(int *)(*(int *)(&stack0xfffffff0 + iVar2) + 0x1c) + -7) * 0xc;
    if (*(char *)(iVar11 + *(char *)(*(int *)((int)&piStack_4 + iVar2) + DAT_000dd804) +
                 DAT_000dd808) < '\n') {
      sprintf(&stack0x0000032c + iVar2,(char *)(DAT_000dd828 + 0xdd6d0),
              (int)*(short *)((*(char *)(iVar11 + DAT_000dd7f0) + 0x22) * 2 +
                             *(int *)(&stack0xfffffff4 + iVar2)));
      piVar18 = (int *)cocos2d::CCLabelTTF::labelWithString
                                 (&stack0x0000032c + iVar2,*(char **)(&stack0x00000000 + iVar2),
                                  extraout_s0_30);
      pcVar16 = *(code **)(*piVar18 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000001a0 + iVar2),extraout_s0_31,extraout_s1_16)
      ;
      (*pcVar16)(piVar18,&stack0x000001a0 + iVar2);
      iVar11 = *piVar18;
      (&stack0x00000040)[iVar2] = 0xff;
      (&stack0x00000041)[iVar2] = 0xc1;
      (&stack0x00000042)[iVar2] = 0;
      (**(code **)(iVar11 + 0xf4))(piVar18);
      *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(*piVar18 + 0x3c);
      puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x7c))(piVar8);
      uVar13 = __addsf3(*puVar5,DAT_000dd800);
      __addsf3(uVar13,DAT_000dd810);
      iVar11 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar13 = __mulsf3(*(undefined4 *)(iVar11 + 4),0x3f000000);
      uVar13 = __subsf3(uVar13,DAT_000dd820);
      uVar20 = __subsf3(uVar13,DAT_000dd824);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000001a8 + iVar2),(float)uVar20,
                 (float)((ulonglong)uVar20 >> 0x20));
      (**(code **)(&stack0x00000004 + iVar2))(piVar18,&stack0x000001a8 + iVar2);
      fVar19 = (float)(**(code **)(*piVar4 + 0xc4))(piVar4,piVar18);
    }
  }
  piVar4 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(*(int *)(&stack0xfffffff8 + iVar2) +
                                        (*(int *)(*(int *)((int)&piStack_4 + iVar2) + 0x118) + -8) *
                                        0x20 + 0x1c),(char *)(DAT_000dd82c + 0xdd77c),fVar19);
  pcVar16 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000001b0 + iVar2),extraout_s0_32,extraout_s1_17);
  (*pcVar16)(piVar4,&stack0x000001b0 + iVar2);
  iVar11 = *piVar4;
  (&stack0x00000044)[iVar2] = 1;
  (&stack0x00000045)[iVar2] = 0xdd;
  (&stack0x00000046)[iVar2] = 0xff;
  uVar20 = (**(code **)(iVar11 + 0xf4))(piVar4);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x000001b8 + iVar2),(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
  ;
  FUN_000ddeb4(piVar4,&stack0x000001b8 + iVar2);
  return;
}


