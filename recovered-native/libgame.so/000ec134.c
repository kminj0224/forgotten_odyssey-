/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ec134  Symbol: Draw_Skill_Icon_Text */

/* Hero_HeroSkill::Draw_Skill_Icon_Text(int) */

void __thiscall Hero_HeroSkill::Draw_Skill_Icon_Text(Hero_HeroSkill *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CCNode *pCVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar20;
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
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar22;
  undefined8 uVar21;
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
  int iStack_4;
  int *piVar18;
  undefined4 *puVar19;
  
  iVar2 = DAT_000ec444;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_000ec444);
  piVar18 = (int *)(&stack0xffffffec + DAT_000ec444);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_000ec444);
  *(int *)(&stack0x00000008 + DAT_000ec444) = param_1;
  *(int *)((int)&iStack_4 + DAT_000ec444) = DAT_000ec44c + 0xec148;
  puVar11 = *(undefined4 **)(DAT_000ec44c + 0xec148 + DAT_000ec448);
  *(undefined4 *)(&stack0x00000258 + DAT_000ec444) = *puVar11;
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x16);
  *(undefined4 **)(&stack0x00000020 + iVar2) = puVar11;
  if (iVar3 != 0) {
    pcVar12 = *(code **)(*(int *)this + 0xd0);
    uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x16);
    (*pcVar12)(this,uVar4,1);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1a);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1a);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1b);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1b);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1c);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1c);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x29);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x29);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1d);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1d);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1e);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1e);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1f);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1f);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x20);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x20);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x21);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x21);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x22);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x22);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x23);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x23);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x24);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x24);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x25);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x25);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x26);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x26);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x27);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x27);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x28);
  if (iVar3 != 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x28);
    cocos2d::CCNode::removeFromParentAndCleanup(pCVar5,true);
  }
  iVar3 = *(int *)(this + 0x110);
  uVar10 = 0xb;
  if (((iVar3 != 2) && (uVar10 = 0x16, iVar3 != 3)) && (uVar10 = 0x21, iVar3 != 4)) {
    uVar10 = -(uint)(iVar3 == 5) & 0x2c;
  }
  uVar14 = *(uint *)(&stack0x00000008 + iVar2);
  *(uint *)(&stack0x00000010 + iVar2) = uVar10 + uVar14;
  SetSkillLevel(this,uVar14);
  memset(&stack0x00000168 + iVar2,0,0x28);
  fVar20 = extraout_s0;
  fVar22 = extraout_s1;
  if (uVar14 < 4) {
    iVar3 = *(int *)(this + 0x110);
    if (iVar3 == 1) {
      pcVar7 = (char *)(DAT_000ec450 + 0xec362);
      iVar3 = DAT_000ec454 + 0xec364;
    }
    else {
      if (iVar3 == 2) {
        pcVar7 = (char *)(DAT_000ec458 + 0xec370);
        iVar3 = DAT_000ec45c + 0xec372;
      }
      else if (iVar3 == 3) {
        pcVar7 = (char *)(DAT_000ec460 + 0xec37e);
        iVar3 = DAT_000ec464 + 0xec380;
      }
      else if (iVar3 == 4) {
        pcVar7 = (char *)(DAT_000ec468 + 0xec38c);
        iVar3 = DAT_000ec46c + 0xec38e;
      }
      else {
        if (iVar3 != 5) goto LAB_000ec3f4;
        pcVar7 = (char *)(DAT_000ec470 + 0xec3a4);
        iVar3 = DAT_000ec474 + 0xec3a6;
      }
      uVar14 = *(uint *)(&stack0x00000008 + iVar2);
    }
    sprintf(&stack0x00000168 + iVar2,pcVar7,iVar3,uVar14 + 1);
    fVar20 = extraout_s0_00;
    fVar22 = extraout_s1_00;
  }
  else if (*(int *)(&stack0x00000008 + iVar2) == 0xb) {
    iVar3 = *(int *)(this + 0x110);
    if (iVar3 == 1) {
      pcVar7 = (char *)(DAT_000ec478 + 0xec3b8);
    }
    else if (iVar3 == 2) {
      pcVar7 = (char *)(DAT_000ec47c + 0xec3c2);
    }
    else if (iVar3 == 3) {
      pcVar7 = (char *)(DAT_000ec480 + 0xec3cc);
    }
    else if (iVar3 == 4) {
      pcVar7 = (char *)(DAT_000ec484 + 0xec3d6);
    }
    else {
      if (iVar3 != 5) goto LAB_000ec3f4;
      pcVar7 = (char *)(DAT_000ec488 + 0xec3e0);
    }
    strcpy(&stack0x00000168 + iVar2,pcVar7);
    fVar20 = extraout_s0_01;
    fVar22 = extraout_s1_01;
  }
  else {
    sprintf(&stack0x00000168 + iVar2,(char *)(DAT_000ec48c + 0xec3f0),
            *(int *)(&stack0x00000008 + iVar2) + -3);
    fVar20 = extraout_s0_02;
    fVar22 = extraout_s1_02;
  }
LAB_000ec3f4:
  uVar21 = cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000050 + iVar2),fVar20,fVar22);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000058 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  *puVar17 = *(undefined4 *)(&stack0x00000058 + iVar2);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x0000005c + iVar2);
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0x16;
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0x16;
  fVar20 = (float)vDrawFrame((CCNode *)this,&stack0x00000168 + iVar2,
                             *(CCPoint *)(&stack0x00000050 + iVar2),
                             *(CCPoint *)(&stack0x00000054 + iVar2),*piVar18,
                             *(int *)(&stack0xfffffff0 + iVar2));
  if (*(int *)(&stack0x00000008 + iVar2) == 0xb) {
    pcVar7 = *(char **)((*(int *)(this + 0x110) + -1) * 0x20 +
                       *(int *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ec498));
    pcVar8 = &UNK_000ec442 + DAT_000ec49c;
  }
  else {
    pcVar8 = (char *)(DAT_000ec804 + 0xec4b0);
    pcVar7 = *(char **)(*(int *)(&stack0x00000010 + iVar2) * 4 +
                       *(int *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ec800));
  }
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString(pcVar7,pcVar8,fVar20);
  iVar3 = *piVar6;
  (&stack0x00000029)[iVar2] = 0xc1;
  (&stack0x0000002a)[iVar2] = 0;
  pcVar12 = *(code **)(iVar3 + 0xf4);
  (&stack0x00000028)[iVar2] = 0xff;
  uVar21 = (*pcVar12)(piVar6);
  pcVar12 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000060 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  uVar21 = (*pcVar12)(piVar6,&stack0x00000060 + iVar2);
  pcVar12 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000068 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  (*pcVar12)(piVar6,&stack0x00000068 + iVar2);
  uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x1a,0x1a);
  iVar3 = *(int *)(&stack0x00000008 + iVar2);
  if (iVar3 == 0xb) {
    iVar15 = *(int *)((int)&iStack_4 + iVar2);
    iVar3 = *(int *)(this + 0x110);
    *(Hero_HeroSkill **)(&stack0x00000004 + iVar2) = this + 0xfc;
    iVar9 = *(int *)(*(int *)(iVar15 + DAT_000ecc18) + (iVar3 + -1) * 0x20 + 8);
    *(int *)(&stack0x00000018 + iVar2) = *(int *)(iVar15 + DAT_000ecc18);
    if (iVar9 != 0) {
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(iVar15 + DAT_000ecc1c);
      piVar13 = *(int **)(iVar15 + DAT_000ecc24);
      iVar16 = *piVar13;
      piVar6 = *(int **)(iVar15 + DAT_000ecc28);
      *(int **)(&stack0x00000014 + iVar2) = piVar6;
      pcVar7 = (char *)(DAT_000ecc30 + 0xec8b4);
      sprintf(&stack0x00000190 + iVar2,(char *)(DAT_000ecc20 + 0xec88c),iVar9,
              (int)*(short *)(*(char *)(iVar16 + iVar3 * 0xc + *piVar6 * 0x6c + DAT_000ecc2c) * 2 +
                             *(int *)(&stack0x0000000c + iVar2)));
      *(char **)(&stack0x00000000 + iVar2) = pcVar7;
      piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x00000190 + iVar2,pcVar7,extraout_s0_08);
      pcVar12 = *(code **)(*piVar6 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000a0 + iVar2),extraout_s0_09,extraout_s1_05)
      ;
      uVar21 = (*pcVar12)(piVar6,&stack0x000000a0 + iVar2);
      pcVar12 = *(code **)(*piVar6 + 0x3c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000a8 + iVar2),(float)uVar21,
                 (float)((ulonglong)uVar21 >> 0x20));
      (*pcVar12)(piVar6,&stack0x000000a8 + iVar2);
      uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x1f,0x1f);
      iVar3 = *piVar13 +
              **(int **)(&stack0x00000014 + iVar2) * 0x6c +
              *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x14) * 0xc;
      if (*(char *)(iVar3 + *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x18) + DAT_000ecc40) <
          '\n') {
        sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ecc44 + 0xec93c),
                (int)*(short *)((*(char *)(iVar3 + DAT_000ecc2c) + 1) * 2 +
                               *(int *)(&stack0x0000000c + iVar2)));
        piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                                   (&stack0x000001f4 + iVar2,*(char **)(&stack0x00000000 + iVar2),
                                    extraout_s0_10);
        pcVar12 = *(code **)(*piVar13 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000b0 + iVar2),extraout_s0_11,extraout_s1_06);
        (*pcVar12)(piVar13,&stack0x000000b0 + iVar2);
        iVar3 = *piVar13;
        (&stack0x00000035)[iVar2] = 0xc1;
        (&stack0x00000034)[iVar2] = 0xff;
        (&stack0x00000036)[iVar2] = 0;
        (**(code **)(iVar3 + 0xf4))(piVar13);
        pcVar12 = *(code **)(*piVar13 + 0x3c);
        puVar11 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
        uVar4 = __addsf3(*puVar11,DAT_000ecc3c);
        uVar21 = __addsf3(uVar4,DAT_000ecc48);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000b8 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar13,&stack0x000000b8 + iVar2);
        uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x20,0x20);
      }
    }
    iVar3 = *(int *)(this + 0x110);
    *(Hero_HeroSkill **)(&stack0x00000004 + iVar2) = this + 0xfc;
    iVar9 = *(int *)(*(int *)(&stack0x00000018 + iVar2) + (iVar3 + -1) * 0x20 + 0x10);
    if (iVar9 != 0) {
      iVar16 = *(int *)((int)&iStack_4 + iVar2);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(iVar16 + DAT_000ecc1c);
      piVar13 = *(int **)(iVar16 + DAT_000ecc24);
      iVar15 = *piVar13;
      piVar6 = *(int **)(iVar16 + DAT_000ecc28);
      *(int **)(&stack0x00000014 + iVar2) = piVar6;
      pcVar7 = (char *)(DAT_000ecc50 + 0xeca0e);
      sprintf(&stack0x00000190 + iVar2,(char *)(DAT_000ecc4c + 0xec9e6),iVar9,
              (int)*(short *)((*(char *)(iVar15 + iVar3 * 0xc + *piVar6 * 0x6c + DAT_000ecc2c) + 0xb
                              ) * 2 + *(int *)(&stack0x0000000c + iVar2)));
      *(char **)(&stack0x00000000 + iVar2) = pcVar7;
      piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x00000190 + iVar2,pcVar7,extraout_s0_12);
      pcVar12 = *(code **)(*piVar6 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000c0 + iVar2),extraout_s0_13,extraout_s1_07)
      ;
      uVar21 = (*pcVar12)(piVar6,&stack0x000000c0 + iVar2);
      pcVar12 = *(code **)(*piVar6 + 0x3c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000c8 + iVar2),(float)uVar21,
                 (float)((ulonglong)uVar21 >> 0x20));
      (*pcVar12)(piVar6,&stack0x000000c8 + iVar2);
      uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x21,0x21);
      iVar3 = *piVar13 +
              **(int **)(&stack0x00000014 + iVar2) * 0x6c +
              *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x14) * 0xc;
      if (*(char *)(iVar3 + *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x18) + DAT_000ecc40) <
          '\n') {
        sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ecc58 + 0xeca98),
                (int)*(short *)((*(char *)(iVar3 + DAT_000ecc2c) + 0xc) * 2 +
                               *(int *)(&stack0x0000000c + iVar2)));
        piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                                   (&stack0x000001f4 + iVar2,*(char **)(&stack0x00000000 + iVar2),
                                    extraout_s0_14);
        pcVar12 = *(code **)(*piVar13 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000d0 + iVar2),extraout_s0_15,extraout_s1_08);
        (*pcVar12)(piVar13,&stack0x000000d0 + iVar2);
        iVar3 = *piVar13;
        (&stack0x00000038)[iVar2] = 0xff;
        (&stack0x00000039)[iVar2] = 0xc1;
        (&stack0x0000003a)[iVar2] = 0;
        (**(code **)(iVar3 + 0xf4))(piVar13);
        pcVar12 = *(code **)(*piVar13 + 0x3c);
        puVar11 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
        uVar4 = __addsf3(*puVar11,DAT_000ecc3c);
        uVar21 = __addsf3(uVar4,DAT_000ecc48);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000d8 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar13,&stack0x000000d8 + iVar2);
        uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x22,0x22);
      }
    }
    iVar15 = *(int *)(this + 0x110);
    *(Hero_HeroSkill **)(&stack0x00000000 + iVar2) = this + 0xfc;
    iVar3 = *(int *)(&stack0x00000018 + iVar2) + (iVar15 + -1) * 0x20;
    iVar9 = *(int *)(iVar3 + 0x14);
    if (iVar9 != 0) {
      iVar16 = *(int *)((int)&iStack_4 + iVar2);
      *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(iVar3 + 0x18);
      piVar6 = *(int **)(iVar16 + DAT_000ecc24);
      *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(iVar16 + DAT_000ecc28);
      if (*(int *)(&stack0x00000014 + iVar2) == 0) {
        iVar3 = *piVar6;
        *(undefined4 *)(&stack0x0000001c + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed000);
        pcVar7 = (char *)(DAT_000ed00c + 0xecd08);
        sprintf(&stack0x00000190 + iVar2,(char *)(DAT_000ed004 + 0xeccec),iVar9,
                (int)*(short *)((*(char *)(iVar3 + iVar15 * 0xc +
                                                   **(int **)(&stack0x0000000c + iVar2) * 0x6c +
                                          DAT_000ed008) + 0x16) * 2 +
                               *(int *)(&stack0x0000001c + iVar2)));
        *(char **)(&stack0x00000004 + iVar2) = pcVar7;
        piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                                   (&stack0x00000190 + iVar2,pcVar7,extraout_s0_20);
        pcVar12 = *(code **)(*piVar13 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000100 + iVar2),extraout_s0_21,extraout_s1_11);
        uVar21 = (*pcVar12)(piVar13,&stack0x00000100 + iVar2);
        pcVar12 = *(code **)(*piVar13 + 0x3c);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000108 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar13,&stack0x00000108 + iVar2);
        uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x25,0x25);
        iVar3 = *piVar6 + **(int **)(&stack0x0000000c + iVar2) * 0x6c +
                          *(int *)(*(int *)(&stack0x00000000 + iVar2) + 0x14) * 0xc;
        if ('\t' < *(char *)(iVar3 + *(int *)(*(int *)(&stack0x00000000 + iVar2) + 0x18) +
                            DAT_000ed014)) goto LAB_000ece16;
        sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ed018 + 0xecd92),
                (int)*(short *)((*(char *)(iVar3 + DAT_000ed008) + 0x17) * 2 +
                               *(int *)(&stack0x0000001c + iVar2)));
        piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                  (&stack0x000001f4 + iVar2,*(char **)(&stack0x00000004 + iVar2),
                                   extraout_s0_22);
        pcVar12 = *(code **)(*piVar6 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000110 + iVar2),extraout_s0_23,extraout_s1_12);
        (*pcVar12)(piVar6,&stack0x00000110 + iVar2);
        iVar3 = *piVar6;
        (&stack0x00000040)[iVar2] = 0xff;
        (&stack0x00000041)[iVar2] = 0xc1;
        (&stack0x00000042)[iVar2] = (&stack0x00000014)[iVar2];
        (**(code **)(iVar3 + 0xf4))(piVar6);
        pcVar12 = *(code **)(*piVar6 + 0x3c);
        puVar11 = (undefined4 *)(**(code **)(*piVar13 + 0x7c))(piVar13);
        uVar4 = __addsf3(*puVar11,DAT_000ecff4);
        uVar21 = __addsf3(uVar4,DAT_000ecff8);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000118 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar6,&stack0x00000118 + iVar2);
        pcVar12 = *(code **)(*(int *)this + 0xcc);
        uVar4 = 0x26;
      }
      else {
        iVar3 = *piVar6;
        *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(iVar16 + DAT_000ecc5c);
        pcVar7 = (char *)(DAT_000ecc64 + 0xecb74);
        sprintf(&stack0x00000190 + iVar2,(char *)(DAT_000ecc60 + 0xecb58),iVar9,
                (int)*(short *)((*(char *)(iVar3 + iVar15 * 0xc +
                                                   **(int **)(&stack0x0000000c + iVar2) * 0x6c +
                                          DAT_000ecc2c) + 0x16) * 2 +
                               *(int *)(&stack0x00000014 + iVar2)));
        *(char **)(&stack0x00000004 + iVar2) = pcVar7;
        piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                                   (&stack0x00000190 + iVar2,pcVar7,extraout_s0_16);
        pcVar12 = *(code **)(*piVar13 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000e0 + iVar2),extraout_s0_17,extraout_s1_09);
        uVar21 = (*pcVar12)(piVar13,&stack0x000000e0 + iVar2);
        pcVar12 = *(code **)(*piVar13 + 0x3c);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000e8 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar13,&stack0x000000e8 + iVar2);
        uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x23,0x23);
        iVar3 = *piVar6 + **(int **)(&stack0x0000000c + iVar2) * 0x6c +
                          *(int *)(*(int *)(&stack0x00000000 + iVar2) + 0x14) * 0xc;
        if ('\t' < *(char *)(iVar3 + *(int *)(*(int *)(&stack0x00000000 + iVar2) + 0x18) +
                            DAT_000ecc40)) goto LAB_000ece16;
        sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ecc6c + 0xecc00),
                (int)*(short *)((*(char *)(iVar3 + DAT_000ecc2c) + 0x17) * 2 +
                               *(int *)(&stack0x00000014 + iVar2)));
        piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                  (&stack0x000001f4 + iVar2,*(char **)(&stack0x00000004 + iVar2),
                                   extraout_s0_18);
        pcVar12 = *(code **)(*piVar6 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000f0 + iVar2),extraout_s0_19,extraout_s1_10);
        (*pcVar12)(piVar6,&stack0x000000f0 + iVar2);
        iVar3 = *piVar6;
        (&stack0x0000003c)[iVar2] = 0xff;
        (&stack0x0000003d)[iVar2] = 0xc1;
        (&stack0x0000003e)[iVar2] = 0;
        (**(code **)(iVar3 + 0xf4))(piVar6);
        pcVar12 = *(code **)(*piVar6 + 0x3c);
        puVar11 = (undefined4 *)(**(code **)(*piVar13 + 0x7c))(piVar13);
        uVar4 = __addsf3(*puVar11,DAT_000ecff4);
        uVar21 = __addsf3(uVar4,DAT_000ecff8);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x000000f8 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar6,&stack0x000000f8 + iVar2);
        pcVar12 = *(code **)(*(int *)this + 0xcc);
        uVar4 = 0x24;
      }
      uVar21 = (*pcVar12)(this,piVar6,uVar4,uVar4);
    }
LAB_000ece16:
    iVar3 = *(int *)(this + 0x110);
    *(Hero_HeroSkill **)(&stack0x00000004 + iVar2) = this + 0xfc;
    iVar9 = *(int *)(*(int *)(&stack0x00000018 + iVar2) + (iVar3 + -1) * 0x20 + 0x18);
    if (iVar9 != 0) {
      *(undefined4 *)(&stack0x0000000c + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed01c);
      piVar13 = *(int **)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed024);
      iVar15 = *piVar13;
      piVar6 = *(int **)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed028);
      *(int **)(&stack0x00000014 + iVar2) = piVar6;
      pcVar7 = (char *)(DAT_000ed02c + 0xece64);
      sprintf(&stack0x00000190 + iVar2,(char *)(DAT_000ed020 + 0xece3c),iVar9,
              (int)*(short *)((*(char *)(iVar15 + iVar3 * 0xc + *piVar6 * 0x6c + DAT_000ed008) +
                              0x21) * 2 + *(int *)(&stack0x0000000c + iVar2)));
      *(char **)(&stack0x00000000 + iVar2) = pcVar7;
      piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x00000190 + iVar2,pcVar7,extraout_s0_24);
      pcVar12 = *(code **)(*piVar6 + 0x74);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000120 + iVar2),extraout_s0_25,extraout_s1_13)
      ;
      uVar21 = (*pcVar12)(piVar6,&stack0x00000120 + iVar2);
      pcVar12 = *(code **)(*piVar6 + 0x3c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000128 + iVar2),(float)uVar21,
                 (float)((ulonglong)uVar21 >> 0x20));
      (*pcVar12)(piVar6,&stack0x00000128 + iVar2);
      uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x27,0x27);
      iVar3 = *piVar13 +
              **(int **)(&stack0x00000014 + iVar2) * 0x6c +
              *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x14) * 0xc;
      if (*(char *)(iVar3 + *(int *)(*(int *)(&stack0x00000004 + iVar2) + 0x18) + DAT_000ed014) <
          '\n') {
        sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ed034 + 0xecef0),
                (int)*(short *)((*(char *)(iVar3 + DAT_000ed008) + 0x22) * 2 +
                               *(int *)(&stack0x0000000c + iVar2)));
        piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                                   (&stack0x000001f4 + iVar2,*(char **)(&stack0x00000000 + iVar2),
                                    extraout_s0_26);
        pcVar12 = *(code **)(*piVar13 + 0x74);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000130 + iVar2),extraout_s0_27,extraout_s1_14);
        (*pcVar12)(piVar13,&stack0x00000130 + iVar2);
        iVar3 = *piVar13;
        (&stack0x00000044)[iVar2] = 0xff;
        (&stack0x00000045)[iVar2] = 0xc1;
        (&stack0x00000046)[iVar2] = 0;
        (**(code **)(iVar3 + 0xf4))(piVar13);
        pcVar12 = *(code **)(*piVar13 + 0x3c);
        puVar11 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
        uVar4 = __addsf3(*puVar11,DAT_000ecff4);
        uVar21 = __addsf3(uVar4,DAT_000ecff8);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000138 + iVar2),(float)uVar21,
                   (float)((ulonglong)uVar21 >> 0x20));
        (*pcVar12)(piVar13,&stack0x00000138 + iVar2);
        uVar21 = (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x28,0x28);
      }
    }
    pcVar7 = *(char **)(*(int *)(&stack0x00000018 + iVar2) + (*(int *)(this + 0x110) + -1) * 0x20 +
                       0x1c);
    fVar20 = (float)cocos2d::CCSize::CCSize
                              ((CCSize *)(&stack0x00000140 + iVar2),(float)uVar21,
                               (float)((ulonglong)uVar21 >> 0x20));
    *puVar19 = DAT_000ed118;
    piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                              (pcVar7,(CCSize *)(&stack0x00000140 + iVar2),0,
                               (char *)(DAT_000ed12c + 0xed0fa),fVar20);
    iVar3 = *piVar6;
    (&stack0x00000048)[iVar2] = 0x7e;
    (&stack0x00000049)[iVar2] = 0xde;
    (&stack0x0000004a)[iVar2] = 0xff;
    uVar21 = (**(code **)(iVar3 + 0xf4))();
    pcVar12 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000148 + iVar2),(float)uVar21,
               (float)((ulonglong)uVar21 >> 0x20));
    uVar21 = (*pcVar12)(piVar6,&stack0x00000148 + iVar2);
    pcVar12 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000150 + iVar2),(float)uVar21,
               (float)((ulonglong)uVar21 >> 0x20));
    (*pcVar12)(piVar6,&stack0x00000150 + iVar2);
    fVar20 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar6,0x29,0x29);
    if (*(int *)(&stack0x00000008 + iVar2) == 0xb) {
      pcVar8 = (char *)(DAT_000ed114 + 0xed062);
      pcVar7 = *(char **)(*(int *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed110) +
                          (*(int *)(this + 0x110) + -1) * 0x20 + 0xc);
    }
    else {
      pcVar8 = (char *)(DAT_000ed04c + 0xecff0);
      pcVar7 = *(char **)(*(int *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ed048) +
                          *(int *)(&stack0x00000010 + iVar2) * 0x10 + 8);
    }
    piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString(pcVar7,pcVar8,fVar20);
    pcVar12 = *(code **)(*piVar6 + 0x74);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000158 + iVar2),extraout_s0_28,extraout_s1_15);
    (*pcVar12)(piVar6,&stack0x00000158 + iVar2);
    iVar3 = *piVar6;
    (&stack0x0000004c)[iVar2] = 0xff;
    (&stack0x0000004d)[iVar2] = 0xff;
    (&stack0x0000004e)[iVar2] = 0xff;
    uVar21 = (**(code **)(iVar3 + 0xf4))(piVar6);
    pcVar12 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000160 + iVar2),(float)uVar21,
               (float)((ulonglong)uVar21 >> 0x20));
    (*pcVar12)(piVar6,&stack0x00000160 + iVar2);
    (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x1b,0x1b);
    SetUpgrade_Button(this,*(int *)(&stack0x00000008 + iVar2));
    if (*(int *)(&stack0x00000258 + iVar2) == **(int **)(&stack0x00000020 + iVar2)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  memset(&stack0x00000190 + iVar2,0,100);
  iVar9 = *(int *)((int)&iStack_4 + iVar2);
  uVar10 = (uint)(iVar3 != 7 && 1 < iVar3 - 4U);
  *(uint *)(&stack0x0000000c + iVar2) = uVar10;
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(iVar9 + DAT_000ec814);
  *(undefined4 *)(&stack0x00000000 + iVar2) = *(undefined4 *)(iVar9 + DAT_000ec818);
  piVar6 = *(int **)(iVar9 + DAT_000ec81c);
  *(undefined4 *)(&stack0x00000018 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ec820);
  if ((uVar10 == 0) || (*(int *)(&stack0x00000008 + iVar2) == 9)) {
    if ((*(int *)(&stack0x00000008 + iVar2) != 9) && (*(int *)(&stack0x00000008 + iVar2) != 7)) {
      pcVar7 = (char *)(DAT_000ec830 + 0xec5b8);
      goto LAB_000ec5b6;
    }
    pcVar7 = (char *)(DAT_000ec828 + 0xec57c);
    uVar4 = *(undefined4 *)
             (*(int *)(&stack0x00000004 + iVar2) + *(int *)(&stack0x00000010 + iVar2) * 0x10 + 4);
    iVar3 = *(short *)(*(int *)(&stack0x00000000 + iVar2) +
                      (*(int *)(&stack0x00000010 + iVar2) * 0xb +
                      (int)*(char *)(**(int **)(&stack0x00000018 + iVar2) * 0x6c +
                                     *(int *)(this + 0x110) * 0xc + *piVar6 + *(int *)(this + 0x114)
                                    + DAT_000ec82c)) * 2) + 0x28;
  }
  else {
    pcVar7 = (char *)(DAT_000ec824 + 0xec562);
LAB_000ec5b6:
    uVar4 = *(undefined4 *)
             (*(int *)(&stack0x00000004 + iVar2) + *(int *)(&stack0x00000010 + iVar2) * 0x10 + 4);
    iVar3 = (int)*(short *)(*(int *)(&stack0x00000000 + iVar2) +
                           (*(int *)(&stack0x00000010 + iVar2) * 0xb +
                           (int)*(char *)(**(int **)(&stack0x00000018 + iVar2) * 0x6c +
                                          *(int *)(this + 0x110) * 0xc + *piVar6 +
                                          *(int *)(this + 0x114) + DAT_000ec82c)) * 2);
  }
  sprintf(&stack0x00000190 + iVar2,pcVar7,uVar4,iVar3);
  piVar13 = (int *)cocos2d::CCLabelTTF::labelWithString
                             (&stack0x00000190 + iVar2,(char *)(DAT_000ec834 + 0xec604),
                              extraout_s0_03);
  iVar3 = *piVar13;
  (&stack0x0000002c)[iVar2] = 0xff;
  (&stack0x0000002d)[iVar2] = 0xff;
  (&stack0x0000002e)[iVar2] = 0xff;
  uVar21 = (**(code **)(iVar3 + 0xf4))();
  pcVar12 = *(code **)(*piVar13 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000070 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  uVar21 = (*pcVar12)(piVar13,&stack0x00000070 + iVar2);
  pcVar12 = *(code **)(*piVar13 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000078 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  (*pcVar12)(piVar13,&stack0x00000078 + iVar2);
  (**(code **)(*(int *)this + 0xcc))(this,piVar13,0x1c,0x1c);
  iVar15 = *piVar6;
  iVar3 = **(int **)(&stack0x00000018 + iVar2);
  iVar9 = *(int *)(this + 0x110);
  iVar16 = iVar15 + iVar3 * 0x6c + iVar9 * 0xc;
  if ('\t' < *(char *)(*(int *)(&stack0x00000008 + iVar2) + iVar16 + DAT_000ec82c))
  goto LAB_000ec78e;
  if ((*(int *)(&stack0x0000000c + iVar2) == 0) || (*(int *)(&stack0x00000008 + iVar2) == 9)) {
    if ((*(int *)(&stack0x00000008 + iVar2) != 9) && (*(int *)(&stack0x00000008 + iVar2) != 7)) {
      cVar1 = *(char *)(iVar15 + iVar3 * 0x6c + iVar9 * 0xc + *(int *)(this + 0x114) + DAT_000ec82c)
      ;
      pcVar7 = (char *)(DAT_000ec848 + 0xec704);
      goto LAB_000ec702;
    }
    pcVar7 = (char *)(DAT_000ec844 + 0xec6e0);
    iVar3 = *(short *)(*(int *)(&stack0x00000000 + iVar2) +
                      (*(int *)(&stack0x00000010 + iVar2) * 0xb +
                       (int)*(char *)(iVar15 + iVar3 * 0x6c + iVar9 * 0xc + *(int *)(this + 0x114) +
                                     DAT_000ec82c) + 1) * 2) + 0x28;
  }
  else {
    cVar1 = *(char *)(iVar16 + *(int *)(this + 0x114) + DAT_000ec82c);
    pcVar7 = (char *)(DAT_000ec840 + 0xec6a0);
LAB_000ec702:
    iVar3 = (int)*(short *)(*(int *)(&stack0x00000000 + iVar2) +
                           (*(int *)(&stack0x00000010 + iVar2) * 0xb + (int)cVar1 + 1) * 2);
  }
  sprintf(&stack0x000001f4 + iVar2,pcVar7,iVar3);
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (&stack0x000001f4 + iVar2,(char *)(DAT_000ec84c + 0xec722),
                             extraout_s0_04);
  pcVar12 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000080 + iVar2),extraout_s0_05,extraout_s1_03);
  (*pcVar12)(piVar6,&stack0x00000080 + iVar2);
  iVar3 = *piVar6;
  (&stack0x00000030)[iVar2] = 0xff;
  (&stack0x00000031)[iVar2] = 0xc1;
  (&stack0x00000032)[iVar2] = 0;
  (**(code **)(iVar3 + 0xf4))(piVar6);
  pcVar12 = *(code **)(*piVar6 + 0x3c);
  puVar11 = (undefined4 *)(**(code **)(*piVar13 + 0x7c))(piVar13);
  uVar4 = __addsf3(*puVar11,DAT_000ec810);
  uVar21 = __addsf3(uVar4,DAT_000ec850);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000088 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  (*pcVar12)(piVar6,&stack0x00000088 + iVar2);
  (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x1d,0x1d);
LAB_000ec78e:
  iVar3 = *(int *)(*(int *)((int)&iStack_4 + iVar2) + DAT_000ec854);
  if ((*(int *)(&stack0x00000008 + iVar2) != 0) &&
     (*(char *)(iVar3 + *(int *)(&stack0x00000010 + iVar2)) == '\0')) {
    FUN_000ecf74();
  }
  sprintf(&stack0x000001f4 + iVar2,(char *)(DAT_000ec858 + 0xec7b2),
          (int)*(char *)(iVar3 + *(int *)(&stack0x00000010 + iVar2)));
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (&stack0x000001f4 + iVar2,(char *)(DAT_000ec85c + 0xec7be),
                             extraout_s0_06);
  pcVar12 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000090 + iVar2),extraout_s0_07,extraout_s1_04);
  uVar21 = (*pcVar12)(piVar6,&stack0x00000090 + iVar2);
  pcVar12 = *(code **)(*piVar6 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000098 + iVar2),(float)uVar21,(float)((ulonglong)uVar21 >> 0x20))
  ;
  (*pcVar12)(piVar6,&stack0x00000098 + iVar2);
  (**(code **)(*(int *)this + 0xcc))(this,piVar6,0x1e,0x1e);
  FUN_000ecf74();
  return;
}


