/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c661a  Symbol: FUN_000c661a */

/* WARNING: Removing unreachable block (ram,0x000c683e) */
/* WARNING: Removing unreachable block (ram,0x000c69f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c661a(int *param_1)

{
  CCPoint *pCVar1;
  undefined uVar2;
  uchar uVar3;
  undefined4 uVar4;
  CCTextureCache *this;
  CCArray *this_00;
  CCArray *this_01;
  CCFiniteTimeAction *pCVar5;
  size_t __n;
  int iVar6;
  int iVar7;
  code *pcVar8;
  CCPoint *pCVar9;
  int **ppiVar10;
  undefined4 *puVar11;
  int iVar12;
  int **unaff_r5;
  int *piVar13;
  int unaff_r7;
  int in_r12;
  undefined4 in_cr15;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar15;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar16;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float fVar17;
  float extraout_s2_01;
  int *param_13;
  int *param_14;
  undefined4 in_stack_00000080;
  CCSize in_stack_000000b4;
  int in_stack_000000b8;
  CCSize in_stack_000000bc;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  CCSize in_stack_000000f4;
  undefined4 in_stack_000000f8;
  CCPoint *in_stack_000000fc;
  CCPoint *in_stack_00000100;
  CCFiniteTimeAction *in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  CCFiniteTimeAction *in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined4 in_stack_0000013c;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_0000014c;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_0000015c;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_0000016c;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_0000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000018c;
  
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(iRam000c67e4 + 0xc674e));
    }
    iVar7 = **unaff_r5;
    puVar11 = *(undefined4 **)(iRam000c67dc + 0xc6632);
    uVar4 = __floatsisf(*(int *)(iVar7 + 0x284) / 2);
    __subsf3(*puVar11,uVar4);
    uVar4 = __floatsisf(*(int *)(iVar7 + 0x280) / 2);
    uVar15 = __subsf3(puVar11[1],uVar4);
    cocos2d::CCSize::CCSize
              ((CCSize *)&stack0x0000011c,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    iVar7 = *(int *)(unaff_r7 * 4 + **unaff_r5);
    puVar11 = (undefined4 *)(**(code **)(*param_1 + 0x38))(param_1);
    *(undefined4 *)(iVar7 + 0x20) = *puVar11;
    *(undefined4 *)(iVar7 + 0x24) = puVar11[1];
    iVar12 = *(int *)(unaff_r7 * 4 + **unaff_r5);
    iVar7 = __aeabi_fcmpeq(*(undefined4 *)(iVar12 + 0x38),uRam000c67e0);
    iVar6 = *param_1;
    if ((iVar7 == 0) || (iVar7 = __aeabi_fcmpeq(*(undefined4 *)(iVar12 + 0x4c),0), iVar7 != 0)) {
      iVar7 = __aeabi_fcmpeq(*(undefined4 *)(iVar12 + 0x4c),0);
      if (iVar7 != 0) {
        uVar4 = *(undefined4 *)(iVar12 + 0x60);
        iVar7 = __aeabi_fcmpeq(uVar4,0);
        if (iVar7 == 0) {
          uVar2 = __fixunssfsi(uVar4);
          pcVar8 = *(code **)(iVar6 + 0xec);
          goto LAB_000c66f4;
        }
      }
LAB_000c66d6:
      uVar2 = 0;
      pcVar8 = *(code **)(iVar6 + 0xec);
    }
    else {
      if (*(int *)(iVar12 + 0x40) != 0) goto LAB_000c66d6;
      uVar2 = 0xff;
      pcVar8 = *(code **)(iVar6 + 0xec);
    }
LAB_000c66f4:
    (*pcVar8)(param_1,uVar2);
    iVar7 = unaff_r7 * 4;
    iVar12 = *(int *)(iVar7 + **unaff_r5);
    iVar6 = __aeabi_fcmpeq(*(undefined4 *)(iVar12 + 0x5c),uRam000c67e0);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x2c))(param_1,*(undefined4 *)(iVar12 + 0x58));
      iVar6 = *param_1;
      uVar4 = *(undefined4 *)(*(int *)(iVar7 + **unaff_r5) + 0x5c);
    }
    else {
      (**(code **)(*param_1 + 0x2c))(param_1,*(undefined4 *)(iVar12 + 0x18));
      iVar6 = *param_1;
      uVar4 = *(undefined4 *)(*(int *)(iVar7 + **unaff_r5) + 0x1c);
    }
    (**(code **)(iVar6 + 0x34))(param_1,uVar4);
    this = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar14 = (float)cocos2d::CCTextureCache::removeAllTextures(this);
    unaff_r7 = unaff_r7 + 1;
    if (*(int *)(*(int *)**unaff_r5 + 4) <= unaff_r7) {
      if (*param_13 == 2) {
        cocos2d::CCNode::setScale((CCNode *)param_14,fVar14);
      }
      (**(code **)(*param_14 + 0xac))(param_14,unaff_r5);
      cocos2d::CCObject::release((CCObject *)param_14);
      *(undefined4 *)(*(int *)**unaff_r5 + 4) = 0x50;
      FUN_000c73a2();
      pcVar8 = *(code **)(*param_14 + 0x58);
      this_00 = (CCArray *)(*pcVar8)(param_14);
      this_01 = this_00;
      if (this_00 == (CCArray *)0x0) {
        this_01 = (CCArray *)FUN_000c73a0();
      }
      iVar7 = cocos2d::CCArray::count(this_01);
      if (iVar7 != 0) {
        FUN_000c7392();
      }
      FUN_000c73a0();
      coprocessor_load(0xf,in_cr15,in_r12 + 0x3fc);
      *(code **)pcVar8 = pcVar8;
      *(code **)(pcVar8 + 4) = pcVar8;
      *(undefined4 *)(pcVar8 + 8) = 0;
      iVar7 = cocos2d::CCArray::count(this_00);
      if (iVar7 == 0) {
        FUN_000c7390();
      }
      cocos2d::CCArray::objectAtIndex(this_00,0);
      memset(&stack0x0000011c,0,0x78);
      memset(&stack0x000000fc,0,0xc);
      iVar7 = *(int *)(*unaff_r5)[(int)pcVar8];
      if (iVar7 == 0) {
        FUN_000c73a0();
      }
      iVar7 = *(int *)(iVar7 + 0x40);
      if (iVar7 < 1) {
        pCVar5 = in_stack_0000011c;
        if (in_stack_0000011c == (CCFiniteTimeAction *)0x0) {
          pCVar5 = (CCFiniteTimeAction *)FUN_000c7390();
        }
        if (iVar7 == 1) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,0);
        }
        if (iVar7 == 2) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,0);
        }
        if (iVar7 == 3) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,0);
        }
        if ((iVar7 == 4) || (iVar7 == 5)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 6) || (iVar7 == 7)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 8) || (iVar7 == 9)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 10) || (iVar7 == 0xb)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0xc) || (iVar7 == 0xd)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0xe) || (iVar7 == 0xf)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0x10) || (iVar7 == 0x11)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0x12) || (iVar7 == 0x13)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0x14) || (iVar7 == 0x15)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0x16) || (iVar7 == 0x17)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 == 0x18) || (iVar7 == 0x19)) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
        if ((iVar7 != 0x1a) && (iVar7 != 0x1b)) {
          if ((iVar7 != 0x1c) && (iVar7 != 0x1d)) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_000c7458 + 0xc738e));
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128)
          ;
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCSequence::actions(pCVar5,in_stack_00000120,in_stack_00000124,in_stack_00000128);
      }
      piVar13 = *unaff_r5;
      uVar4 = *(undefined4 *)(*(int *)piVar13[(int)pcVar8] + 0x4c);
      iVar7 = __aeabi_fcmpgt(uVar4,0);
      if (iVar7 == 0) {
        iVar6 = *(int *)piVar13[(int)pcVar8];
        pCVar9 = *(CCPoint **)(iVar6 + 0x4c);
        iVar7 = __aeabi_fcmpeq(pCVar9,0);
        if (iVar7 == 0) {
          in_stack_000000fc = (CCPoint *)__subsf3(pCVar9,in_stack_00000100);
        }
        else {
          in_stack_000000fc = _DAT_000c6c00;
          pCVar9 = _DAT_000c6c00;
        }
        pCVar1 = in_stack_000000fc;
        in_stack_00000100 = pCVar9;
        uVar4 = __mulsf3(*(undefined4 *)(iVar6 + 0x50),0x3f000000);
        __addsf3(uVar4,*(undefined4 *)(iVar6 + 0x20));
        uVar4 = __mulsf3(*(undefined4 *)(iVar6 + 0x54),0x3f000000);
        uVar15 = __subsf3(*(undefined4 *)(iVar6 + 0x24),uVar4);
        uVar15 = cocos2d::CCPoint::CCPoint
                           ((CCPoint *)&stack0x000000f4,(float)uVar15,
                            (float)((ulonglong)uVar15 >> 0x20));
                    /* WARNING: Subroutine does not return */
        KG_action((float)uVar15,(CCPoint)pCVar1,in_stack_000000f4,(float)((ulonglong)uVar15 >> 0x20)
                  ,extraout_s2_01,SUB41(in_stack_000000f8,0),
                  *(_KG_Anit **)(*(int *)(*unaff_r5)[(int)pcVar8] + 0x58));
      }
      in_stack_00000100 = (CCPoint *)uVar4;
      pCVar5 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
      memset(&stack0x00000108,0,0x14);
      iVar6 = *(int *)(*unaff_r5)[(int)pcVar8];
      iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x50),_DAT_000c6bfc);
      fVar14 = extraout_s0_00;
      fVar16 = extraout_s1;
      if ((iVar7 == 0) &&
         (iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar6 + 0x54),_DAT_000c6bfc),
         fVar14 = extraout_s0_01, fVar16 = extraout_s1_00, iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        fVar14 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x000000e4,fVar14,fVar16);
        in_stack_00000108 =
             (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar14,_DAT_000c6c00);
        iVar7 = 1;
      }
      iVar12 = *(int *)(*unaff_r5)[(int)pcVar8];
      iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar12 + 0x58),_DAT_000c6bfc);
      fVar14 = extraout_s0_02;
      fVar16 = extraout_s1_01;
      fVar17 = extraout_s2;
      if ((iVar6 != 0) ||
         (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar12 + 0x5c),_DAT_000c6bfc),
         fVar14 = extraout_s0_03, fVar16 = extraout_s1_02, fVar17 = extraout_s2_00, iVar6 != 0)) {
        uVar4 = cocos2d::CCScaleTo::actionWithDuration(fVar14,fVar16,fVar17);
        (&stack0x00000108)[iVar7] = (CCFiniteTimeAction *)uVar4;
        iVar7 = iVar7 + 1;
      }
      uVar4 = *(undefined4 *)(*(int *)(*unaff_r5)[(int)pcVar8] + 0x60);
      iVar6 = __aeabi_fcmplt(uVar4,_DAT_000c6c08);
      if (iVar6 == 0) {
        iVar6 = __aeabi_fcmpgt(uVar4,_DAT_000c6c0c);
        if (iVar6 == 0) goto LAB_000c692e;
        fVar14 = (float)__fixunssfsi(uVar4);
        uVar3 = (uchar)_DAT_000c6c04;
      }
      else {
        uVar3 = (uchar)_DAT_000c6c04;
        fVar14 = extraout_s0_04;
      }
      uVar4 = cocos2d::CCFadeTo::actionWithDuration(fVar14,uVar3);
      (&stack0x00000108)[iVar7] = (CCFiniteTimeAction *)uVar4;
      iVar7 = iVar7 + 1;
LAB_000c692e:
      iVar6 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(*unaff_r5)[(int)pcVar8] + 100),_DAT_000c6c10);
      if (iVar6 == 0) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar5,0);
        }
      }
      else {
        uVar4 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_05,extraout_s1_03);
        (&stack0x00000108)[iVar7] = (CCFiniteTimeAction *)uVar4;
        iVar7 = iVar7 + 1;
      }
      if (iVar7 == 1) {
        uVar4 = cocos2d::CCSpawn::actions(in_stack_00000108,0);
      }
      else if (iVar7 == 2) {
        uVar4 = cocos2d::CCSpawn::actions(in_stack_00000108,in_stack_0000010c,0);
      }
      else if (iVar7 == 3) {
        uVar4 = cocos2d::CCSpawn::actions(in_stack_00000108,in_stack_0000010c,in_stack_00000110,0);
      }
      else {
        uVar4 = cocos2d::CCSpawn::actions
                          (in_stack_00000108,in_stack_0000010c,in_stack_00000110,in_stack_00000114);
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar5,uVar4,0);
    }
    sprintf(&stack0x000001f8,(char *)(iRam000c67d4 + 0xc6568),in_stack_00000080,
            iRam000c67d8 + 0xc656c);
    piVar13 = *unaff_r5;
    if (unaff_r7 == 0) {
      FUN_000c73be();
    }
    ppiVar10 = (int **)*piVar13;
    piVar13 = ppiVar10[unaff_r7];
    iVar7 = *piVar13;
    uVar15 = CONCAT44(iVar7,**ppiVar10);
    __n = *(size_t *)(**ppiVar10 + -0xc);
    if (__n != *(size_t *)(iVar7 + -0xc)) {
      uVar15 = FUN_000c73be();
    }
    iVar7 = memcmp((void *)uVar15,(void *)((ulonglong)uVar15 >> 0x20),__n);
    if (iVar7 != 0) {
      FUN_000c73be();
    }
    __floatsisf(ppiVar10[0xa1]);
    uVar15 = __floatsisf(ppiVar10[0xa0]);
    uVar15 = cocos2d::CCSize::CCSize
                       ((CCSize *)&stack0x000000b4,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20))
    ;
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x000000bc,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    iVar7 = **unaff_r5;
    __floatsisf(*(undefined4 *)(iVar7 + 0x288));
    uVar15 = __floatsisf(*(undefined4 *)(iVar7 + 0x28c));
    cocos2d::CCSize::CCSize
              ((CCSize *)&stack0x000000c4,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    param_1 = (int *)vScriptImgDraw_Texture
                               ((CCNode *)param_14,(_KG_Animation *)piVar13,in_stack_000000b4,
                                in_stack_000000b8,unaff_r7,unaff_r7,in_stack_000000bc);
  } while( true );
}


