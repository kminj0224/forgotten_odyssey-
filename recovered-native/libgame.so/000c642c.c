/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c642c  Symbol: vDrawScript_Effect */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* vDrawScript_Effect(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int) */

void vDrawScript_Effect(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,
                       int param_6)

{
  int iVar1;
  undefined uVar2;
  uchar uVar3;
  CCLayer *this;
  int **ppiVar4;
  int *piVar5;
  void *pvVar6;
  CCNode *pCVar7;
  CCTextureCache *this_00;
  CCArray *this_01;
  CCFiniteTimeAction *pCVar8;
  CCPoint CVar9;
  int iVar10;
  _KG_Animation *p_Var11;
  char *pcVar12;
  size_t __n;
  CCSize CVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  CCPoint *pCVar17;
  undefined4 *puVar18;
  code *pcVar19;
  int iVar20;
  int **ppiVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int in_r12;
  undefined4 *puVar24;
  undefined4 in_cr15;
  float extraout_s0;
  float fVar56;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined8 uVar57;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar58;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float fVar59;
  float extraout_s2_01;
  float extraout_s2_02;
  int *apiStack_c [3];
  int *piVar25;
  int *piVar26;
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
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  
  iVar1 = iRam000c67c0;
  puVar24 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  piVar25 = (int *)(&stack0xffffffe4 + iRam000c67c0);
  piVar26 = (int *)(&stack0xffffffe4 + iRam000c67c0);
  puVar27 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar28 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar29 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar30 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar31 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar32 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar33 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar34 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar35 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar36 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar37 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar38 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar39 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar40 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar41 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar42 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar43 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar44 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar45 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar46 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar47 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar48 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar49 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar50 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar51 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar52 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar53 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar54 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  puVar55 = (undefined4 *)(&stack0xffffffe4 + iRam000c67c0);
  *(char **)(&stack0x00000050 + iRam000c67c0) = param_2;
  *(CCPoint *)(&stack0x00000260 + iRam000c67c0) = param_4;
  puVar18 = *(undefined4 **)(iRam000c67c4 + 0xc6440);
  *(char **)(&stack0x00000064 + iRam000c67c0) = param_1;
  *(undefined4 *)(&stack0x00000240 + iRam000c67c0) = *puVar18;
  uVar22 = *(undefined4 *)(&stack0x00000260 + iRam000c67c0);
  uVar23 = *(undefined4 *)(&stack0x00000264 + iRam000c67c0);
  sprintf(&stack0x00000178 + iRam000c67c0,(char *)(iRam000c67c8 + 0xc644c),
          *(undefined4 *)(&stack0x00000064 + iRam000c67c0),
          *(undefined4 *)(&stack0x00000050 + iRam000c67c0));
  *(int *)(&stack0x0000007c + iVar1) = *(int *)(iRam000c67cc + 0xc6462) + 0xc;
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x0000005c + iVar1) = this;
  uVar57 = cocos2d::CCLayer::CCLayer(this);
  *(undefined4 **)(&stack0x00000078 + iVar1) = puVar18;
  iVar14 = **(int **)(iRam000c67d0 + 0xc647a);
  *(int **)(&stack0x00000058 + iVar1) = *(int **)(iRam000c67d0 + 0xc647a);
  if (iVar14 == 2) {
    *(undefined4 *)(&stack0x00000054 + iVar1) =
         *(undefined4 *)(**(int **)(&stack0x0000005c + iVar1) + 0x3c);
    __addsf3(uVar22,uVar22);
    uVar57 = __addsf3(uVar23,uVar23);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000080 + iVar1),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    uVar57 = (**(code **)(&stack0x00000054 + iVar1))
                       (*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000080 + iVar1);
  }
  else {
    pcVar19 = *(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar1),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    uVar57 = (*pcVar19)(*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000088 + iVar1);
  }
  pcVar19 = *(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000090 + iVar1),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20))
  ;
  (*pcVar19)(*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000090 + iVar1);
  (**(code **)(*(int *)param_3 + 0xcc))
            (param_3,*(undefined4 *)(&stack0x0000005c + iVar1),
             *(undefined4 *)(&stack0x00000268 + iVar1),*(undefined4 *)(&stack0x0000026c + iVar1));
  ppiVar4 = (int **)operator_new(0x24);
  piVar5 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar5);
  ppiVar4[1] = piVar5;
  Init_Unit_Stage((_Unit_Stage *)ppiVar4);
  piVar5 = (int *)operator_new(0x2c);
  iVar14 = 0;
  *ppiVar4 = piVar5;
  do {
    piVar5 = *ppiVar4;
    pvVar6 = operator_new(0x298);
    piVar5[iVar14] = (int)pvVar6;
    iVar14 = iVar14 + 1;
    (*ppiVar4)[8] = 1;
  } while (iVar14 != 8);
  pcVar12 = *(char **)(&stack0x00000050 + iVar1);
  (*ppiVar4)[9] = 1;
  anim_Lode_copy(&stack0x00000178 + iVar1,(_KG_Anit *)**ppiVar4,pcVar12);
  iVar14 = 1;
  do {
    iVar20 = iVar14 + 1;
    operator_delete((void *)(*ppiVar4)[iVar14]);
    (*ppiVar4)[iVar14] = 0;
    iVar14 = iVar20;
  } while (iVar20 != 8);
  fVar56 = extraout_s0;
  for (iVar14 = 0; iVar14 < *(int *)(*(int *)**ppiVar4 + 4); iVar14 = iVar14 + 1) {
    uVar22 = *(undefined4 *)((int *)**ppiVar4)[iVar14];
    *(int *)(&stack0x00000050 + iVar1) = iVar14 * 4;
    *puVar24 = uVar22;
    sprintf(&stack0x000001dc + iVar1,(char *)(iRam000c67d4 + 0xc6568),
            *(undefined4 *)(&stack0x00000064 + iVar1),iRam000c67d8 + 0xc656c);
    piVar5 = *ppiVar4;
    if (iVar14 == 0) {
      FUN_000c73be();
    }
    ppiVar21 = (int **)*piVar5;
    piVar5 = *(int **)(*(int *)(&stack0x00000050 + iVar1) + (int)ppiVar21);
    iVar20 = **ppiVar21;
    *(int **)(&stack0x00000050 + iVar1) = piVar5;
    iVar10 = *piVar5;
    uVar57 = CONCAT44(iVar10,iVar20);
    __n = *(size_t *)(iVar20 + -0xc);
    if (__n != *(size_t *)(iVar10 + -0xc)) {
      uVar57 = FUN_000c73be();
    }
    iVar20 = memcmp((void *)uVar57,(void *)((ulonglong)uVar57 >> 0x20),__n);
    if (iVar20 != 0) {
      FUN_000c73be();
    }
    __floatsisf(ppiVar21[0xa1]);
    uVar57 = __floatsisf(ppiVar21[0xa0]);
    uVar57 = cocos2d::CCSize::CCSize
                       ((CCSize *)(&stack0x00000098 + iVar1),(float)uVar57,
                        (float)((ulonglong)uVar57 >> 0x20));
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000a0 + iVar1),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    iVar20 = **ppiVar4;
    __floatsisf(*(undefined4 *)(iVar20 + 0x288));
    uVar57 = __floatsisf(*(undefined4 *)(iVar20 + 0x28c));
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x000000a8 + iVar1),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20)
              );
    pCVar7 = *(CCNode **)(&stack0x0000005c + iVar1);
    p_Var11 = *(_KG_Animation **)(&stack0x00000050 + iVar1);
    *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(&stack0x000000a0 + iVar1);
    uVar22 = *(undefined4 *)(&stack0x000000a4 + iVar1);
    CVar13 = *(CCSize *)(&stack0x00000098 + iVar1);
    *piVar25 = iVar14;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar22;
    *(int *)(&stack0xffffffe8 + iVar1) = iVar14;
    *(undefined4 *)((int)apiStack_c + iVar1) = *(undefined4 *)(&stack0x000000a8 + iVar1);
    *(undefined4 *)((int)apiStack_c + iVar1 + 4) = *(undefined4 *)(&stack0x000000ac + iVar1);
    piVar5 = (int *)vScriptImgDraw_Texture
                              (pCVar7,p_Var11,CVar13,*(int *)(&stack0x0000009c + iVar1),*piVar26,
                               *(CCPoint *)(&stack0xffffffe8 + iVar1),
                               *(CCSize *)(&stack0xffffffec + iVar1));
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(iRam000c67e4 + 0xc674e));
    }
    iVar20 = **ppiVar4;
    *(int *)(&stack0x00000050 + iVar1) = iVar20;
    puVar18 = *(undefined4 **)(iRam000c67dc + 0xc6632);
    uVar22 = __floatsisf(*(int *)(iVar20 + 0x284) / 2);
    uVar22 = __subsf3(*puVar18,uVar22);
    iVar20 = *(int *)(*(int *)(&stack0x00000050 + iVar1) + 0x280);
    *(undefined4 *)(&stack0x00000054 + iVar1) = uVar22;
    uVar22 = __floatsisf(iVar20 / 2);
    uVar57 = __subsf3(puVar18[1],uVar22);
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x00000100 + iVar1),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20)
              );
    piVar15 = *ppiVar4;
    *(int *)(&stack0x00000050 + iVar1) = iVar14 * 4;
    iVar10 = *(int *)(iVar14 * 4 + *piVar15);
    puVar18 = (undefined4 *)(**(code **)(*piVar5 + 0x38))(piVar5);
    iVar20 = *(int *)(&stack0x00000050 + iVar1);
    *(undefined4 *)(iVar10 + 0x20) = *puVar18;
    *(undefined4 *)(iVar10 + 0x24) = puVar18[1];
    iVar10 = *(int *)(iVar20 + **ppiVar4);
    iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar10 + 0x38),uRam000c67e0);
    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
    if ((iVar20 == 0) || (iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar10 + 0x4c),0), iVar20 != 0)) {
      iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar10 + 0x4c),0);
      if (iVar20 != 0) {
        uVar22 = *(undefined4 *)(iVar10 + 0x60);
        *(undefined4 *)(&stack0x00000054 + iVar1) = uVar22;
        iVar20 = __aeabi_fcmpeq(uVar22,0);
        if (iVar20 == 0) {
          uVar2 = __fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar1));
          pcVar19 = *(code **)(*(int *)(&stack0x00000050 + iVar1) + 0xec);
          goto LAB_000c66f4;
        }
      }
LAB_000c66d6:
      uVar2 = 0;
      pcVar19 = *(code **)(*(int *)(&stack0x00000050 + iVar1) + 0xec);
    }
    else {
      if (*(int *)(iVar10 + 0x40) != 0) goto LAB_000c66d6;
      uVar2 = 0xff;
      pcVar19 = *(code **)(*(int *)(&stack0x00000050 + iVar1) + 0xec);
    }
LAB_000c66f4:
    (*pcVar19)(piVar5,uVar2);
    piVar15 = *ppiVar4;
    *(int *)(&stack0x00000050 + iVar1) = iVar14 * 4;
    iVar10 = *(int *)(iVar14 * 4 + *piVar15);
    iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar10 + 0x5c),uRam000c67e0);
    if (iVar20 == 0) {
      (**(code **)(*piVar5 + 0x2c))(piVar5,*(undefined4 *)(iVar10 + 0x58));
      iVar20 = *piVar5;
      uVar22 = *(undefined4 *)(*(int *)(*(int *)(&stack0x00000050 + iVar1) + **ppiVar4) + 0x5c);
    }
    else {
      (**(code **)(*piVar5 + 0x2c))(piVar5,*(undefined4 *)(iVar10 + 0x18));
      iVar20 = *piVar5;
      uVar22 = *(undefined4 *)(*(int *)(*(int *)(&stack0x00000050 + iVar1) + **ppiVar4) + 0x1c);
    }
    (**(code **)(iVar20 + 0x34))(piVar5,uVar22);
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar56 = (float)cocos2d::CCTextureCache::removeAllTextures(this_00);
  }
  if (**(int **)(&stack0x00000058 + iVar1) == 2) {
    cocos2d::CCNode::setScale(*(CCNode **)(&stack0x0000005c + iVar1),fVar56);
  }
  (**(code **)(**(int **)(&stack0x0000005c + iVar1) + 0xac))
            (*(int **)(&stack0x0000005c + iVar1),ppiVar4);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x0000005c + iVar1));
  piVar5 = (int *)**ppiVar4;
  *(int **)(&stack0x00000070 + iVar1) = (int *)(*ppiVar4)[9];
  *(undefined4 *)(*piVar5 + 4) = 0x50;
  FUN_000c73a2();
  pcVar19 = *(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x58);
  this_01 = (CCArray *)(*pcVar19)(*(int **)(&stack0x0000005c + iVar1));
  *(CCArray **)(&stack0x00000064 + iVar1) = this_01;
  if (this_01 == (CCArray *)0x0) {
    this_01 = (CCArray *)FUN_000c73a0();
  }
  iVar14 = cocos2d::CCArray::count(this_01);
  if (iVar14 != 0) {
    FUN_000c7392();
  }
  FUN_000c73a0();
  coprocessor_load(0xf,in_cr15,in_r12 + 0x3fc);
  *(code **)pcVar19 = pcVar19;
  *(code **)(pcVar19 + 4) = pcVar19;
  *(undefined4 *)(pcVar19 + 8) = 0;
  iVar14 = cocos2d::CCArray::count(*(CCArray **)(&stack0x00000064 + iVar1));
  if (iVar14 == 0) {
    FUN_000c7390();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x00000064 + iVar1),0);
  memset(&stack0x00000100 + iVar1,0,0x78);
  memset(&stack0x000000e0 + iVar1,0,0xc);
  iVar14 = *(int *)(*ppiVar4)[(int)pcVar19];
  if (iVar14 == 0) {
    FUN_000c73a0();
  }
  uVar22 = *(undefined4 *)(iVar14 + 0x40);
  *(undefined4 *)(&stack0x00000050 + iVar1) = 0;
  *(undefined4 *)(&stack0x0000006c + iVar1) = uVar22;
  *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
  iVar14 = *(int *)(&stack0x0000006c + iVar1);
  if (iVar14 <= *(int *)(&stack0x00000050 + iVar1)) {
    pCVar8 = *(CCFiniteTimeAction **)(&stack0x00000100 + iVar1);
    if (pCVar8 == (CCFiniteTimeAction *)0x0) {
      pCVar8 = (CCFiniteTimeAction *)FUN_000c7390();
    }
    if (iVar14 == 1) {
      *(int *)(&stack0x00000050 + iVar1) = (*ppiVar4)[(int)pcVar19];
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,0);
    }
    if (iVar14 == 2) {
      *(int *)(&stack0x00000050 + iVar1) = (*ppiVar4)[(int)pcVar19];
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,*(undefined4 *)(&stack0x00000104 + iVar1),0);
    }
    if (iVar14 != 3) {
      if (iVar14 == 4) {
        piVar5 = *ppiVar4;
        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
        *puVar30 = 0;
      }
      else {
        if (iVar14 != 5) {
          if (iVar14 == 6) {
            piVar5 = *ppiVar4;
            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
            *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
            *puVar32 = *(undefined4 *)(&stack0x00000110 + iVar1);
            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
            *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(&stack0x00000114 + iVar1);
            *(undefined4 *)(&stack0xffffffec + iVar1) = 0;
          }
          else {
            if (iVar14 != 7) {
              if (iVar14 == 8) {
                piVar5 = *ppiVar4;
                *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                *puVar34 = *(undefined4 *)(&stack0x00000110 + iVar1);
                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                     *(undefined4 *)(&stack0x00000114 + iVar1);
                *(undefined4 *)(&stack0xffffffec + iVar1) =
                     *(undefined4 *)(&stack0x00000118 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x0000011c + iVar1);
                *(undefined4 *)((int)apiStack_c + iVar1) = 0;
              }
              else {
                if (iVar14 != 9) {
                  if (iVar14 == 10) {
                    piVar5 = *ppiVar4;
                    *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                    uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                    *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                    *puVar36 = *(undefined4 *)(&stack0x00000110 + iVar1);
                    uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                    uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                         *(undefined4 *)(&stack0x00000114 + iVar1);
                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                         *(undefined4 *)(&stack0x00000118 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x0000011c + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1) =
                         *(undefined4 *)(&stack0x00000120 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                         *(undefined4 *)(&stack0x00000124 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) = 0;
                  }
                  else {
                    if (iVar14 != 0xb) {
                      if (iVar14 == 0xc) {
                        piVar5 = *ppiVar4;
                        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                        *puVar38 = *(undefined4 *)(&stack0x00000110 + iVar1);
                        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                             *(undefined4 *)(&stack0x00000114 + iVar1);
                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                             *(undefined4 *)(&stack0x00000118 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x0000011c + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1) =
                             *(undefined4 *)(&stack0x00000120 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                             *(undefined4 *)(&stack0x00000124 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                             *(undefined4 *)(&stack0x00000128 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x0000012c + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) = 0;
                      }
                      else {
                        if (iVar14 != 0xd) {
                          if (iVar14 == 0xe) {
                            piVar5 = *ppiVar4;
                            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                            *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                            *puVar40 = *(undefined4 *)(&stack0x00000110 + iVar1);
                            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                 *(undefined4 *)(&stack0x00000120 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                 *(undefined4 *)(&stack0x00000124 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                 *(undefined4 *)(&stack0x00000128 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x0000012c + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000130 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x00000134 + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
                          }
                          else {
                            if (iVar14 != 0xf) {
                              if (iVar14 == 0x10) {
                                piVar5 = *ppiVar4;
                                *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                *puVar42 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                     *(undefined4 *)(&stack0x00000128 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x0000012c + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000130 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x00000134 + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x00000138 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
                              }
                              else {
                                if (iVar14 != 0x11) {
                                  if (iVar14 == 0x12) {
                                    piVar5 = *ppiVar4;
                                    *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                    uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                    *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                    *puVar44 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                    uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                    uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000130 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x00000134 + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x00000138 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
                                  }
                                  else {
                                    if (iVar14 != 0x13) {
                                      if (iVar14 == 0x14) {
                                        piVar5 = *ppiVar4;
                                        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                        *puVar46 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000114 + iVar1);
                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                             *(undefined4 *)(&stack0x00000118 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x0000011c + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                             *(undefined4 *)(&stack0x00000120 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                             *(undefined4 *)(&stack0x00000124 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                             *(undefined4 *)(&stack0x00000128 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x0000012c + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000130 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x00000134 + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x00000138 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x0000013c + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000140 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000144 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000148 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000014c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) = 0;
                                      }
                                      else {
                                        if (iVar14 != 0x15) {
                                          if (iVar14 == 0x16) {
                                            piVar5 = *ppiVar4;
                                            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                            *(int *)(&stack0x00000050 + iVar1) =
                                                 piVar5[(int)pcVar19];
                                            *puVar48 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000120 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                 *(undefined4 *)(&stack0x00000124 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                 *(undefined4 *)(&stack0x00000128 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000012c + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000130 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000134 + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000138 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
                                          }
                                          else {
                                            if (iVar14 != 0x17) {
                                              if (iVar14 == 0x18) {
                                                piVar5 = *ppiVar4;
                                                *(int *)(&stack0x00000054 + iVar1) =
                                                     (int)pcVar19 * 4;
                                                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                                *(int *)(&stack0x00000050 + iVar1) =
                                                     piVar5[(int)pcVar19];
                                                *puVar50 = *(undefined4 *)(&stack0x00000110 + iVar1)
                                                ;
                                                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                     *(undefined4 *)(&stack0x00000128 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000012c + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000130 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000134 + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000138 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
                                              }
                                              else {
                                                if (iVar14 != 0x19) {
                                                  if (iVar14 == 0x1a) {
                                                    piVar5 = *ppiVar4;
                                                    *(int *)(&stack0x00000054 + iVar1) =
                                                         (int)pcVar19 * 4;
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x00000104 + iVar1);
                                                    *(int *)(&stack0x00000050 + iVar1) =
                                                         piVar5[(int)pcVar19];
                                                    *puVar52 = *(undefined4 *)
                                                                (&stack0x00000110 + iVar1);
                                                    uVar23 = *(undefined4 *)
                                                              (&stack0x00000108 + iVar1);
                                                    uVar16 = *(undefined4 *)
                                                              (&stack0x0000010c + iVar1);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000130 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000134 + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000138 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
                                                  }
                                                  else {
                                                    if (iVar14 != 0x1b) {
                                                      if (iVar14 == 0x1c) {
                                                        piVar5 = *ppiVar4;
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             (int)pcVar19 * 4;
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x00000104 + iVar1);
                                                        *(int *)(&stack0x00000050 + iVar1) =
                                                             piVar5[(int)pcVar19];
                                                        *puVar54 = *(undefined4 *)
                                                                    (&stack0x00000110 + iVar1);
                                                        uVar23 = *(undefined4 *)
                                                                  (&stack0x00000108 + iVar1);
                                                        uVar16 = *(undefined4 *)
                                                                  (&stack0x0000010c + iVar1);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000114 + iVar1);
                                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000118 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x00000124 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x00000128 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000138 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000160 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000164 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000168 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000016c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             0;
                                                      }
                                                      else {
                                                        if (iVar14 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c7458 +
                                                                                 0xc738e));
                                                        }
                                                        piVar5 = *ppiVar4;
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             (int)pcVar19 * 4;
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x00000104 + iVar1);
                                                        *(int *)(&stack0x00000050 + iVar1) =
                                                             piVar5[(int)pcVar19];
                                                        *puVar55 = *(undefined4 *)
                                                                    (&stack0x00000110 + iVar1);
                                                        uVar23 = *(undefined4 *)
                                                                  (&stack0x00000108 + iVar1);
                                                        uVar16 = *(undefined4 *)
                                                                  (&stack0x0000010c + iVar1);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000114 + iVar1);
                                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000118 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x00000124 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x00000128 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000138 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000160 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000164 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000168 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000016c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000170 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar8,uVar22,uVar23,uVar16);
                                                    }
                                                    piVar5 = *ppiVar4;
                                                    *(int *)(&stack0x00000054 + iVar1) =
                                                         (int)pcVar19 * 4;
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x00000104 + iVar1);
                                                    *(int *)(&stack0x00000050 + iVar1) =
                                                         piVar5[(int)pcVar19];
                                                    *puVar53 = *(undefined4 *)
                                                                (&stack0x00000110 + iVar1);
                                                    uVar23 = *(undefined4 *)
                                                              (&stack0x00000108 + iVar1);
                                                    uVar16 = *(undefined4 *)
                                                              (&stack0x0000010c + iVar1);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000130 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000134 + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000138 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000168 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar8,uVar22,uVar23,uVar16);
                                                }
                                                piVar5 = *ppiVar4;
                                                *(int *)(&stack0x00000054 + iVar1) =
                                                     (int)pcVar19 * 4;
                                                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                                *(int *)(&stack0x00000050 + iVar1) =
                                                     piVar5[(int)pcVar19];
                                                *puVar51 = *(undefined4 *)(&stack0x00000110 + iVar1)
                                                ;
                                                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                     *(undefined4 *)(&stack0x00000128 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000012c + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000130 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000134 + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000138 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000160 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar8,uVar22,uVar23,uVar16);
                                            }
                                            piVar5 = *ppiVar4;
                                            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                            *(int *)(&stack0x00000050 + iVar1) =
                                                 piVar5[(int)pcVar19];
                                            *puVar49 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000120 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                 *(undefined4 *)(&stack0x00000124 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                 *(undefined4 *)(&stack0x00000128 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000012c + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000130 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000134 + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000138 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000158 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                                        }
                                        piVar5 = *ppiVar4;
                                        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                        *puVar47 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000114 + iVar1);
                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                             *(undefined4 *)(&stack0x00000118 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x0000011c + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                             *(undefined4 *)(&stack0x00000120 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                             *(undefined4 *)(&stack0x00000124 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                             *(undefined4 *)(&stack0x00000128 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x0000012c + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000130 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x00000134 + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x00000138 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x0000013c + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000140 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000144 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000148 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000014c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000150 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                                    }
                                    piVar5 = *ppiVar4;
                                    *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                    uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                    *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                    *puVar45 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                    uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                    uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000114 + iVar1);
                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                         *(undefined4 *)(&stack0x00000118 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x0000011c + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                         *(undefined4 *)(&stack0x00000120 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                         *(undefined4 *)(&stack0x00000124 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                         *(undefined4 *)(&stack0x00000128 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x0000012c + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000130 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x00000134 + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x00000138 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                                }
                                piVar5 = *ppiVar4;
                                *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                                *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                                *puVar43 = *(undefined4 *)(&stack0x00000110 + iVar1);
                                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000114 + iVar1);
                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                     *(undefined4 *)(&stack0x00000118 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x0000011c + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                     *(undefined4 *)(&stack0x00000120 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                     *(undefined4 *)(&stack0x00000124 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                     *(undefined4 *)(&stack0x00000128 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x0000012c + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000130 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x00000134 + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x00000138 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                            }
                            piVar5 = *ppiVar4;
                            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                            *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                            *puVar41 = *(undefined4 *)(&stack0x00000110 + iVar1);
                            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000114 + iVar1);
                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                 *(undefined4 *)(&stack0x00000118 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x0000011c + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                 *(undefined4 *)(&stack0x00000120 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                 *(undefined4 *)(&stack0x00000124 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                 *(undefined4 *)(&stack0x00000128 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x0000012c + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000130 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x00000134 + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                 *(undefined4 *)(&stack0x00000138 + iVar1);
                            *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                        }
                        piVar5 = *ppiVar4;
                        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                        *puVar39 = *(undefined4 *)(&stack0x00000110 + iVar1);
                        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                             *(undefined4 *)(&stack0x00000114 + iVar1);
                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                             *(undefined4 *)(&stack0x00000118 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x0000011c + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1) =
                             *(undefined4 *)(&stack0x00000120 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                             *(undefined4 *)(&stack0x00000124 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                             *(undefined4 *)(&stack0x00000128 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x0000012c + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x00000130 + iVar1);
                        *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                    }
                    piVar5 = *ppiVar4;
                    *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                    uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                    *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                    *puVar37 = *(undefined4 *)(&stack0x00000110 + iVar1);
                    uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                    uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                         *(undefined4 *)(&stack0x00000114 + iVar1);
                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                         *(undefined4 *)(&stack0x00000118 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x0000011c + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1) =
                         *(undefined4 *)(&stack0x00000120 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                         *(undefined4 *)(&stack0x00000124 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                         *(undefined4 *)(&stack0x00000128 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
                }
                piVar5 = *ppiVar4;
                *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
                uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
                *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
                *puVar35 = *(undefined4 *)(&stack0x00000110 + iVar1);
                uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
                uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                     *(undefined4 *)(&stack0x00000114 + iVar1);
                *(undefined4 *)(&stack0xffffffec + iVar1) =
                     *(undefined4 *)(&stack0x00000118 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x0000011c + iVar1);
                *(undefined4 *)((int)apiStack_c + iVar1) = *(undefined4 *)(&stack0x00000120 + iVar1)
                ;
                *(undefined4 *)((int)apiStack_c + iVar1 + 4) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
            }
            piVar5 = *ppiVar4;
            *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
            uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
            *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
            *puVar33 = *(undefined4 *)(&stack0x00000110 + iVar1);
            uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
            uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
            *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(&stack0x00000114 + iVar1);
            *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(&stack0x00000118 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
        }
        piVar5 = *ppiVar4;
        *(int *)(&stack0x00000054 + iVar1) = (int)pcVar19 * 4;
        uVar22 = *(undefined4 *)(&stack0x00000104 + iVar1);
        *(int *)(&stack0x00000050 + iVar1) = piVar5[(int)pcVar19];
        uVar23 = *(undefined4 *)(&stack0x00000108 + iVar1);
        uVar16 = *(undefined4 *)(&stack0x0000010c + iVar1);
        *puVar31 = *(undefined4 *)(&stack0x00000110 + iVar1);
        *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar22,uVar23,uVar16);
    }
    *(int *)(&stack0x00000050 + iVar1) = (*ppiVar4)[(int)pcVar19];
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar8,*(undefined4 *)(&stack0x00000104 + iVar1),
               *(undefined4 *)(&stack0x00000108 + iVar1),0);
  }
  piVar5 = *ppiVar4;
  *(int **)(&stack0x00000058 + iVar1) = piVar5;
  if (*(int *)(&stack0x00000050 + iVar1) != 0) {
LAB_000c69b4:
    iVar20 = **(int **)(*(int *)(&stack0x00000058 + iVar1) + (int)pcVar19 * 4);
    uVar22 = *(undefined4 *)(iVar20 + *(int *)(&stack0x00000050 + iVar1) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000058 + iVar1) = uVar22;
    iVar14 = __aeabi_fcmpeq(uVar22,0);
    if (iVar14 == 0) {
      uVar22 = __subsf3(*(undefined4 *)(&stack0x00000058 + iVar1),
                        *(undefined4 *)(&stack0x000000e4 + iVar1));
      pCVar17 = *(CCPoint **)(&stack0x00000058 + iVar1);
      *(undefined4 *)(&stack0x000000e0 + iVar1) = uVar22;
    }
    else {
      *(CCPoint **)(&stack0x000000e0 + iVar1) = _DAT_000c6c00;
      pCVar17 = _DAT_000c6c00;
    }
    *(CCPoint **)(&stack0x000000e4 + iVar1) = pCVar17;
    if (*(int *)(&stack0x00000054 + iVar1) == 0) {
      iVar14 = iVar20 + *(int *)(&stack0x00000050 + iVar1) * 0x1c;
      *(int *)(&stack0x00000058 + iVar1) = *(int *)(&stack0x00000050 + iVar1) * 0x1c;
      *(undefined4 *)(&stack0x00000068 + iVar1) = *(undefined4 *)(&stack0x000000e0 + iVar1);
      uVar22 = *(undefined4 *)(iVar14 + 0x50);
      *(int *)(&stack0x00000060 + iVar1) = iVar14;
      uVar22 = __mulsf3(uVar22,0x3f000000);
      uVar22 = __addsf3(uVar22,*(undefined4 *)(iVar20 + 0x20));
      *(undefined4 *)(&stack0x00000074 + iVar1) = uVar22;
      uVar22 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000060 + iVar1) + 0x54),0x3f000000);
      uVar57 = __subsf3(*(undefined4 *)(iVar20 + 0x24),uVar22);
      uVar57 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000d8 + iVar1),(float)uVar57,
                          (float)((ulonglong)uVar57 >> 0x20));
      piVar5 = (int *)(*ppiVar4)[(int)pcVar19];
      iVar14 = *piVar5 + *(int *)(&stack0x00000058 + iVar1);
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(iVar14 + 0x60);
      uVar22 = *(undefined4 *)(iVar14 + 100);
      *(int **)((int)apiStack_c + iVar1) = piVar5;
      CVar9 = *(CCPoint *)(&stack0x00000068 + iVar1);
      *(undefined4 *)(&stack0xffffffec + iVar1) = uVar22;
      CVar13 = *(CCSize *)(&stack0x000000d8 + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000054 + iVar1);
      *puVar29 = *(undefined4 *)(iVar14 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar57,CVar9,CVar13,(float)((ulonglong)uVar57 >> 0x20),extraout_s2_02,
                SUB41(*(undefined4 *)(&stack0x000000dc + iVar1),0),*(_KG_Anit **)(iVar14 + 0x58));
    }
    *(undefined4 *)(&stack0x00000060 + iVar1) = *(undefined4 *)(&stack0x000000e0 + iVar1);
    iVar14 = iVar20 + *(int *)(&stack0x00000050 + iVar1) * 0x1c;
    uVar22 = *(undefined4 *)(iVar14 + 0x50);
    *(int *)(&stack0x00000058 + iVar1) = iVar14;
    *(int *)(&stack0x00000054 + iVar1) = *(int *)(&stack0x00000050 + iVar1) * 0x1c;
    uVar22 = __mulsf3(uVar22,0x3f000000);
    uVar22 = __addsf3(uVar22,*(undefined4 *)(iVar20 + 0x20));
    *(undefined4 *)(&stack0x00000068 + iVar1) = uVar22;
    uVar22 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x54),0x3f000000);
    uVar57 = __subsf3(*(undefined4 *)(iVar20 + 0x24),uVar22);
    uVar57 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000d0 + iVar1),(float)uVar57,
                        (float)((ulonglong)uVar57 >> 0x20));
    piVar5 = (int *)(*ppiVar4)[(int)pcVar19];
    iVar14 = *piVar5 + *(int *)(&stack0x00000054 + iVar1);
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(iVar14 + 0x60);
    uVar22 = *(undefined4 *)(iVar14 + 100);
    *(int **)((int)apiStack_c + iVar1) = piVar5;
    CVar9 = *(CCPoint *)(&stack0x00000060 + iVar1);
    *(undefined4 *)(&stack0xffffffec + iVar1) = uVar22;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
    CVar13 = *(CCSize *)(&stack0x000000d0 + iVar1);
    *puVar28 = *(undefined4 *)(iVar14 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar57,CVar9,CVar13,(float)((ulonglong)uVar57 >> 0x20),extraout_s2_01,
              SUB41(*(undefined4 *)(&stack0x000000d4 + iVar1),0),*(_KG_Anit **)(iVar14 + 0x58));
  }
  *(int *)(&stack0x00000060 + iVar1) = (int)pcVar19 * 4;
  piVar5 = (int *)piVar5[(int)pcVar19];
  *(undefined4 *)(&stack0x00000068 + iVar1) = 0;
  uVar22 = *(undefined4 *)(*piVar5 + 0x4c);
  iVar14 = __aeabi_fcmpgt(uVar22,0);
  if (iVar14 == 0) goto LAB_000c69b4;
  *(undefined4 *)(&stack0x000000e4 + iVar1) = uVar22;
  uVar22 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_00);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar22;
  memset(&stack0x000000ec + iVar1,*(int *)(&stack0x00000050 + iVar1),0x14);
  iVar20 = *(int *)(*(int *)(&stack0x00000068 + iVar1) +
                   *(int *)(*(int *)(&stack0x00000060 + iVar1) + (int)*ppiVar4));
  iVar14 = __aeabi_fcmpgt(*(undefined4 *)(iVar20 + 0x50),_DAT_000c6bfc);
  fVar56 = extraout_s0_01;
  fVar58 = extraout_s1;
  if ((iVar14 == 0) &&
     (iVar14 = __aeabi_fcmpgt(*(undefined4 *)(iVar20 + 0x54),_DAT_000c6bfc), fVar56 = extraout_s0_02
     , fVar58 = extraout_s1_00, iVar14 == 0)) {
    iVar14 = *(int *)(&stack0x00000050 + iVar1);
  }
  else {
    fVar56 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000c8 + iVar1),fVar56,fVar58);
    uVar22 = cocos2d::CCMoveTo::actionWithDuration(fVar56,_DAT_000c6c00);
    iVar14 = 1;
    *(undefined4 *)(&stack0x000000ec + iVar1) = uVar22;
  }
  uVar22 = *(undefined4 *)(*(int *)(*ppiVar4)[(int)pcVar19] + 0x58);
  *(int *)(&stack0x00000054 + iVar1) = *(int *)(*ppiVar4)[(int)pcVar19];
  *(undefined4 *)(&stack0x00000060 + iVar1) = uVar22;
  iVar20 = __aeabi_fcmpgt(uVar22,_DAT_000c6bfc);
  fVar56 = extraout_s0_03;
  fVar58 = extraout_s1_01;
  fVar59 = extraout_s2;
  if ((iVar20 != 0) ||
     (iVar20 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000054 + iVar1) + 0x5c),
                              _DAT_000c6bfc), fVar56 = extraout_s0_04, fVar58 = extraout_s1_02,
     fVar59 = extraout_s2_00, iVar20 != 0)) {
    uVar22 = cocos2d::CCScaleTo::actionWithDuration(fVar56,fVar58,fVar59);
    *(undefined4 *)(&stack0x000000ec + iVar14 * 4 + iVar1) = uVar22;
    iVar14 = iVar14 + 1;
  }
  uVar22 = *(undefined4 *)(*(int *)(*ppiVar4)[(int)pcVar19] + 0x60);
  *(undefined4 *)(&stack0x00000054 + iVar1) = uVar22;
  iVar20 = __aeabi_fcmplt(uVar22,_DAT_000c6c08);
  if (iVar20 == 0) {
    iVar20 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000054 + iVar1),_DAT_000c6c0c);
    if (iVar20 == 0) goto LAB_000c692e;
    fVar56 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar1));
    uVar3 = (uchar)_DAT_000c6c04;
  }
  else {
    uVar3 = (uchar)_DAT_000c6c04;
    fVar56 = extraout_s0_05;
  }
  uVar22 = cocos2d::CCFadeTo::actionWithDuration(fVar56,uVar3);
  *(undefined4 *)(&stack0x000000ec + iVar14 * 4 + iVar1) = uVar22;
  iVar14 = iVar14 + 1;
LAB_000c692e:
  uVar22 = *(undefined4 *)(*(int *)(*ppiVar4)[(int)pcVar19] + 100);
  *(undefined4 *)(&stack0x00000054 + iVar1) = uVar22;
  iVar20 = __aeabi_fcmpgt(uVar22,_DAT_000c6c10);
  if (iVar20 == 0) {
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar1),0);
    }
  }
  else {
    uVar22 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_06,extraout_s1_03);
    *(undefined4 *)(&stack0x000000ec + iVar14 * 4 + iVar1) = uVar22;
    iVar14 = iVar14 + 1;
  }
  pCVar8 = *(CCFiniteTimeAction **)(&stack0x000000ec + iVar1);
  if (iVar14 == 1) {
    uVar22 = cocos2d::CCSpawn::actions(pCVar8,0);
  }
  else {
    uVar22 = *(undefined4 *)(&stack0x000000f0 + iVar1);
    if (iVar14 == 2) {
      uVar22 = cocos2d::CCSpawn::actions(pCVar8,uVar22,0);
    }
    else {
      uVar23 = *(undefined4 *)(&stack0x000000f4 + iVar1);
      if (iVar14 == 3) {
        uVar22 = cocos2d::CCSpawn::actions(pCVar8,uVar22,uVar23,0);
      }
      else {
        uVar16 = *(undefined4 *)(&stack0x000000f8 + iVar1);
        *puVar27 = 0;
        uVar22 = cocos2d::CCSpawn::actions(pCVar8,uVar22,uVar23,uVar16);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar1),uVar22,0);
}


