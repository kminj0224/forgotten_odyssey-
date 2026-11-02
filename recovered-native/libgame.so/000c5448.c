/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c5448  Symbol: vDrawScript_Lode */

/* vDrawScript_Lode(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int, bool,
   bool) */

void vDrawScript_Lode(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,
                     int param_6,bool param_7,bool param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  uchar uVar4;
  CCLayer *this;
  int **ppiVar5;
  void **ppvVar6;
  void *pvVar7;
  CCDirector *this_00;
  CCNode *pCVar8;
  CCTextureCache *this_01;
  CCArray *this_02;
  CCFiniteTimeAction *pCVar9;
  CCPoint CVar10;
  undefined4 uVar11;
  int extraout_r1;
  CCSize CVar12;
  int *piVar13;
  _KG_Animation *p_Var14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  CCPoint *pCVar18;
  undefined4 *puVar19;
  code *pcVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  int in_r12;
  undefined4 *puVar24;
  undefined4 in_cr15;
  float fVar56;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar57;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar58;
  float extraout_s1_02;
  float extraout_s2;
  float extraout_s2_00;
  float fVar59;
  float extraout_s2_01;
  float extraout_s2_02;
  int *apiStack_c [3];
  undefined4 *puVar25;
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
  
  iVar2 = iRam000c57e0;
  puVar24 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar25 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  piVar26 = (int *)(&stack0xffffffe4 + iRam000c57e0);
  puVar27 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar28 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar29 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar30 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar31 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar32 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar33 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar34 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar35 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar36 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar37 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar38 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar39 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar40 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar41 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar42 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar43 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar44 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar45 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar46 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar47 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar48 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar49 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar50 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar51 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar52 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar53 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar54 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  puVar55 = (undefined4 *)(&stack0xffffffe4 + iRam000c57e0);
  *(CCPoint *)(&stack0x00000250 + iRam000c57e0) = param_4;
  *(char **)(&stack0x00000064 + iRam000c57e0) = param_1;
  *(uint *)(&stack0x00000058 + iRam000c57e0) = (uint)(byte)(&stack0x00000260)[iRam000c57e0];
  puVar19 = *(undefined4 **)(iRam000c57e4 + 0xc5462);
  *(char **)(&stack0x00000054 + iRam000c57e0) = param_2;
  *(uint *)(&stack0x00000060 + iRam000c57e0) = (uint)(byte)(&stack0x00000264)[iRam000c57e0];
  *(undefined4 *)(&stack0x00000230 + iRam000c57e0) = *puVar19;
  *(undefined4 *)(&stack0x00000050 + iRam000c57e0) =
       *(undefined4 *)(&stack0x00000254 + iRam000c57e0);
  uVar22 = *(undefined4 *)(&stack0x00000250 + iRam000c57e0);
  sprintf(&stack0x00000168 + iRam000c57e0,(char *)(iRam000c57e8 + 0xc5476),
          *(undefined4 *)(&stack0x00000064 + iRam000c57e0),
          *(undefined4 *)(&stack0x00000054 + iRam000c57e0));
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x0000005c + iVar2) = this;
  uVar57 = cocos2d::CCLayer::CCLayer(this);
  *(undefined4 **)(&stack0x00000078 + iVar2) = puVar19;
  piVar13 = *(int **)(iRam000c57ec + 0xc549a);
  *(int **)(&stack0x00000068 + iVar2) = piVar13;
  pcVar20 = *(code **)(**(int **)(&stack0x0000005c + iVar2) + 0x3c);
  if (*piVar13 == 2) {
    __addsf3(uVar22,uVar22);
    uVar57 = __addsf3(*(undefined4 *)(&stack0x00000050 + iVar2),
                      *(undefined4 *)(&stack0x00000050 + iVar2));
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000080 + iVar2),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    uVar22 = *(undefined4 *)(&stack0x0000005c + iVar2);
    puVar1 = &stack0x00000080;
  }
  else {
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar2),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    uVar22 = *(undefined4 *)(&stack0x0000005c + iVar2);
    puVar1 = &stack0x00000088;
  }
  uVar57 = (*pcVar20)(uVar22,puVar1 + iVar2);
  pcVar20 = *(code **)(**(int **)(&stack0x0000005c + iVar2) + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000090 + iVar2),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20))
  ;
  (*pcVar20)(*(undefined4 *)(&stack0x0000005c + iVar2),&stack0x00000090 + iVar2);
  (**(code **)(*(int *)param_3 + 0xcc))
            (param_3,*(undefined4 *)(&stack0x0000005c + iVar2),
             *(undefined4 *)(&stack0x00000258 + iVar2),*(undefined4 *)(&stack0x0000025c + iVar2));
  ppiVar5 = (int **)operator_new(0x24);
  piVar13 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar13);
  ppiVar5[1] = piVar13;
  Init_Unit_Stage((_Unit_Stage *)ppiVar5);
  ppvVar6 = (void **)operator_new(0x2c);
  *ppiVar5 = (int *)ppvVar6;
  pvVar7 = operator_new(0x298);
  *ppvVar6 = pvVar7;
  (*ppiVar5)[9] = 1;
  fVar56 = (float)anim_Lode_copy(&stack0x00000168 + iVar2,(_KG_Anit *)**ppiVar5,
                                 *(char **)(&stack0x00000054 + iVar2));
  iVar23 = iRam000c57f0;
  if (*(int *)(&stack0x00000058 + iVar2) != 0) {
    this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::getContentScaleFactor(this_00);
    puVar19 = *(undefined4 **)(iVar23 + 0xc5554);
    uVar22 = puVar19[1];
    *(_ccColor4B *)(&stack0x0000007c + iVar2) = (_ccColor4B)0x0;
    (&stack0x0000007d)[iVar2] = 0;
    (&stack0x0000007e)[iVar2] = 0;
    (&stack0x0000007f)[iVar2] = 0xb2;
    uVar22 = __addsf3(uVar22);
    uVar11 = *puVar19;
    *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
    uVar57 = __addsf3(uVar11);
    piVar13 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                               ((_ccColor4B *)(&stack0x0000007c + iVar2),(float)uVar57,
                                (float)((ulonglong)uVar57 >> 0x20));
    pcVar20 = *(code **)(*piVar13 + 0x3c);
    cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000098 + iVar2),extraout_s0,extraout_s1);
    (*pcVar20)(piVar13,&stack0x00000098 + iVar2);
    fVar56 = (float)(**(code **)(**(int **)(&stack0x0000005c + iVar2) + 0xcc))
                              (*(int **)(&stack0x0000005c + iVar2),piVar13,0xffffffff,0xffffffff);
  }
  iVar23 = 1;
  do {
    iVar15 = iVar23 + 1;
    (*ppiVar5)[iVar23] = 0;
    iVar23 = iVar15;
  } while (iVar15 != 8);
  for (iVar23 = 0; iVar23 < *(int *)(*(int *)**ppiVar5 + 4); iVar23 = iVar23 + 1) {
    uVar22 = *(undefined4 *)((int *)**ppiVar5)[iVar23];
    *(int *)(&stack0x00000050 + iVar2) = iVar23 * 4;
    *puVar24 = uVar22;
    sprintf(&stack0x000001cc + iVar2,(char *)(iRam000c57f4 + 0xc55d4),
            *(undefined4 *)(&stack0x00000064 + iVar2),iRam000c57f8 + 0xc55d6);
    iVar15 = **ppiVar5;
    uVar22 = *(undefined4 *)(iVar15 + 0x284);
    *(undefined4 *)(&stack0x00000054 + iVar2) =
         *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + iVar15);
    __floatsisf(uVar22);
    uVar57 = __floatsisf(*(undefined4 *)(iVar15 + 0x280));
    uVar57 = cocos2d::CCSize::CCSize
                       ((CCSize *)(&stack0x000000a0 + iVar2),(float)uVar57,
                        (float)((ulonglong)uVar57 >> 0x20));
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000a8 + iVar2),(float)uVar57,
               (float)((ulonglong)uVar57 >> 0x20));
    iVar15 = **ppiVar5;
    __floatsisf(*(undefined4 *)(iVar15 + 0x288));
    uVar57 = __floatsisf(*(undefined4 *)(iVar15 + 0x28c));
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x000000b0 + iVar2),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20)
              );
    pCVar8 = *(CCNode **)(&stack0x0000005c + iVar2);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x000000a8 + iVar2);
    p_Var14 = *(_KG_Animation **)(&stack0x00000054 + iVar2);
    *(int *)(&stack0xffffffe8 + iVar2) = iVar23;
    *(undefined4 *)((int)apiStack_c + iVar2) = *(undefined4 *)(&stack0x000000ac + iVar2);
    *(int *)(&stack0xffffffec + iVar2) = iVar23;
    *(undefined4 *)((int)apiStack_c + iVar2 + 4) = *(undefined4 *)(&stack0x000000b0 + iVar2);
    *(undefined4 *)((int)apiStack_c + iVar2 + 8) = *(undefined4 *)(&stack0x000000b4 + iVar2);
    *puVar25 = *(undefined4 *)(&stack0x000000a4 + iVar2);
    piVar13 = (int *)vScriptImgDraw_Fram(pCVar8,&stack0x000001cc + iVar2,p_Var14,
                                         *(CCSize *)(&stack0x000000a0 + iVar2),*piVar26,
                                         *(int *)(&stack0xffffffe8 + iVar2),
                                         *(CCPoint *)(&stack0xffffffec + iVar2),
                                         *(CCSize *)(&stack0xfffffff0 + iVar2));
    if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(iRam000c5804 + 0xc578a));
    }
    iVar15 = **ppiVar5;
    *(int *)(&stack0x00000054 + iVar2) = iVar15;
    puVar19 = *(undefined4 **)(iRam000c57fc + 0xc5676);
    uVar22 = __floatsisf(*(int *)(iVar15 + 0x284) / 2);
    uVar22 = __subsf3(*puVar19,uVar22);
    iVar15 = *(int *)(*(int *)(&stack0x00000054 + iVar2) + 0x280);
    *(undefined4 *)(&stack0x00000058 + iVar2) = uVar22;
    uVar22 = __floatsisf(iVar15 / 2);
    uVar57 = __subsf3(puVar19[1],uVar22);
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x000000f0 + iVar2),(float)uVar57,(float)((ulonglong)uVar57 >> 0x20)
              );
    iVar21 = *(int *)(*(int *)(&stack0x00000050 + iVar2) + **ppiVar5);
    puVar19 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
    iVar15 = *(int *)(&stack0x00000050 + iVar2);
    *(undefined4 *)(iVar21 + 0x20) = *puVar19;
    *(undefined4 *)(iVar21 + 0x24) = puVar19[1];
    uVar22 = *(undefined4 *)(*(int *)(iVar15 + **ppiVar5) + 100);
    iVar15 = __aeabi_fcmpeq(uVar22,uRam000c5800);
    if (iVar15 == 0) {
      (**(code **)(*piVar13 + 0x24))(piVar13,uVar22);
    }
    iVar21 = *(int *)(iVar23 * 4 + **ppiVar5);
    iVar15 = __aeabi_fcmpeq(*(undefined4 *)(iVar21 + 0x38),uRam000c5800);
    *(int *)(&stack0x00000050 + iVar2) = *piVar13;
    if ((iVar15 == 0) || (iVar15 = __aeabi_fcmpeq(*(undefined4 *)(iVar21 + 0x4c),0), iVar15 != 0)) {
      iVar15 = __aeabi_fcmpeq(*(undefined4 *)(iVar21 + 0x4c),0);
      if (iVar15 != 0) {
        uVar22 = *(undefined4 *)(iVar21 + 0x60);
        *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
        iVar15 = __aeabi_fcmpeq(uVar22,0);
        if (iVar15 == 0) {
          uVar3 = __fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar2));
          pcVar20 = *(code **)(*(int *)(&stack0x00000050 + iVar2) + 0xec);
          goto LAB_000c5756;
        }
      }
LAB_000c5738:
      uVar3 = 0;
      pcVar20 = *(code **)(*(int *)(&stack0x00000050 + iVar2) + 0xec);
    }
    else {
      if (*(int *)(iVar21 + 0x40) != 0) goto LAB_000c5738;
      uVar3 = 0xff;
      pcVar20 = *(code **)(*(int *)(&stack0x00000050 + iVar2) + 0xec);
    }
LAB_000c5756:
    (*pcVar20)(piVar13,uVar3);
    (**(code **)(*piVar13 + 0x2c))(piVar13,*(undefined4 *)(*(int *)(iVar23 * 4 + **ppiVar5) + 0x18))
    ;
    (**(code **)(*piVar13 + 0x34))(piVar13,*(undefined4 *)(*(int *)(iVar23 * 4 + **ppiVar5) + 0x1c))
    ;
    this_01 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar56 = (float)cocos2d::CCTextureCache::removeAllTextures(this_01);
  }
  if (**(int **)(&stack0x00000068 + iVar2) == 2) {
    cocos2d::CCNode::setScale(*(CCNode **)(&stack0x0000005c + iVar2),fVar56);
  }
  (**(code **)(**(int **)(&stack0x0000005c + iVar2) + 0xac))
            (*(int **)(&stack0x0000005c + iVar2),ppiVar5);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x0000005c + iVar2));
  if (*(int *)(&stack0x00000060 + iVar2) == 0) {
    FUN_000c640a();
  }
  piVar13 = (int *)**ppiVar5;
  *(int **)(&stack0x00000070 + iVar2) = (int *)(*ppiVar5)[9];
  iVar23 = *piVar13;
  *(undefined4 *)(iVar23 + 4) = 0x50;
  FUN_000c63f4();
  coprocessor_store(0xf,in_cr15,in_r12 + 0x3fc);
  *(int *)iVar23 = iVar23;
  *(int *)(iVar23 + 4) = iVar23;
  *(int ***)(iVar23 + 8) = ppiVar5;
  piVar13 = (int *)((int)ppiVar5 + -0x75);
  this_02 = (CCArray *)
            (**(code **)(**(int **)(&stack0x0000005c + iVar2) + 0x58))
                      (*(int **)(&stack0x0000005c + iVar2),extraout_r1 + -0x142);
  *(CCArray **)(&stack0x00000064 + iVar2) = this_02;
  if (this_02 == (CCArray *)0x0) {
    this_02 = (CCArray *)FUN_000c63f2();
  }
  iVar15 = cocos2d::CCArray::count(this_02);
  if (iVar15 != 0) {
    FUN_000c63e4();
  }
  FUN_000c63f2();
  iVar15 = cocos2d::CCArray::count(*(CCArray **)(&stack0x00000064 + iVar2));
  if (iVar15 == 0) {
    FUN_000c63e2();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x00000064 + iVar2),0);
  memset(&stack0x000000f0 + iVar2,0,0x78);
  memset(&stack0x000000d0 + iVar2,0,0xc);
  iVar15 = **(int **)(iVar23 * 4 + *piVar13);
  if (iVar15 == 0) {
    FUN_000c63f2();
  }
  uVar22 = *(undefined4 *)(iVar15 + 0x40);
  *(undefined4 *)(&stack0x00000050 + iVar2) = 0;
  *(undefined4 *)(&stack0x0000006c + iVar2) = uVar22;
  *(undefined4 *)(&stack0x00000054 + iVar2) = 0;
  iVar15 = *(int *)(&stack0x0000006c + iVar2);
  if (iVar15 <= *(int *)(&stack0x00000050 + iVar2)) {
    pCVar9 = *(CCFiniteTimeAction **)(&stack0x000000f0 + iVar2);
    if (pCVar9 == (CCFiniteTimeAction *)0x0) {
      pCVar9 = (CCFiniteTimeAction *)FUN_000c63e2();
    }
    if (iVar15 == 1) {
      *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + *piVar13);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar9,0);
    }
    if (iVar15 == 2) {
      *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + *piVar13);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar9,*(undefined4 *)(&stack0x000000f4 + iVar2),0);
    }
    if (iVar15 != 3) {
      if (iVar15 == 4) {
        iVar15 = *piVar13;
        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
        *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
        *puVar30 = 0;
      }
      else {
        if (iVar15 != 5) {
          if (iVar15 == 6) {
            iVar15 = *piVar13;
            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
            *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
            *puVar32 = *(undefined4 *)(&stack0x00000100 + iVar2);
            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
            *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(&stack0x00000104 + iVar2);
            *(undefined4 *)(&stack0xffffffec + iVar2) = 0;
          }
          else {
            if (iVar15 != 7) {
              if (iVar15 == 8) {
                iVar15 = *piVar13;
                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
                *puVar34 = *(undefined4 *)(&stack0x00000100 + iVar2);
                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                     *(undefined4 *)(&stack0x00000104 + iVar2);
                *(undefined4 *)(&stack0xffffffec + iVar2) =
                     *(undefined4 *)(&stack0x00000108 + iVar2);
                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                     *(undefined4 *)(&stack0x0000010c + iVar2);
                *(undefined4 *)((int)apiStack_c + iVar2) = 0;
              }
              else {
                if (iVar15 != 9) {
                  if (iVar15 == 10) {
                    iVar15 = *piVar13;
                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                    uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                    *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15)
                    ;
                    *puVar36 = *(undefined4 *)(&stack0x00000100 + iVar2);
                    uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                    uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                         *(undefined4 *)(&stack0x00000104 + iVar2);
                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                         *(undefined4 *)(&stack0x00000108 + iVar2);
                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                         *(undefined4 *)(&stack0x0000010c + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2) =
                         *(undefined4 *)(&stack0x00000110 + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                         *(undefined4 *)(&stack0x00000114 + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) = 0;
                  }
                  else {
                    if (iVar15 != 0xb) {
                      if (iVar15 == 0xc) {
                        iVar15 = *piVar13;
                        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                             *(undefined4 *)(iVar23 * 4 + iVar15);
                        *puVar38 = *(undefined4 *)(&stack0x00000100 + iVar2);
                        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                             *(undefined4 *)(&stack0x00000104 + iVar2);
                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                             *(undefined4 *)(&stack0x00000108 + iVar2);
                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                             *(undefined4 *)(&stack0x0000010c + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2) =
                             *(undefined4 *)(&stack0x00000110 + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                             *(undefined4 *)(&stack0x00000114 + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                             *(undefined4 *)(&stack0x00000118 + iVar2);
                        *(undefined4 *)((int)&param_5 + iVar2) =
                             *(undefined4 *)(&stack0x0000011c + iVar2);
                        *(undefined4 *)((int)&param_6 + iVar2) = 0;
                      }
                      else {
                        if (iVar15 != 0xd) {
                          if (iVar15 == 0xe) {
                            iVar15 = *piVar13;
                            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                            *(undefined4 *)(&stack0x00000050 + iVar2) =
                                 *(undefined4 *)(iVar23 * 4 + iVar15);
                            *puVar40 = *(undefined4 *)(&stack0x00000100 + iVar2);
                            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                            *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                 *(undefined4 *)(&stack0x00000104 + iVar2);
                            *(undefined4 *)(&stack0xffffffec + iVar2) =
                                 *(undefined4 *)(&stack0x00000108 + iVar2);
                            *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                 *(undefined4 *)(&stack0x0000010c + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2) =
                                 *(undefined4 *)(&stack0x00000110 + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                 *(undefined4 *)(&stack0x00000114 + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                 *(undefined4 *)(&stack0x00000118 + iVar2);
                            *(undefined4 *)((int)&param_5 + iVar2) =
                                 *(undefined4 *)(&stack0x0000011c + iVar2);
                            *(undefined4 *)((int)&param_6 + iVar2) =
                                 *(undefined4 *)(&stack0x00000120 + iVar2);
                            *(undefined4 *)(&param_7 + iVar2) =
                                 *(undefined4 *)(&stack0x00000124 + iVar2);
                            *(undefined4 *)(&param_8 + iVar2) = 0;
                          }
                          else {
                            if (iVar15 != 0xf) {
                              if (iVar15 == 0x10) {
                                iVar15 = *piVar13;
                                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                *(undefined4 *)(&stack0x00000050 + iVar2) =
                                     *(undefined4 *)(iVar23 * 4 + iVar15);
                                *puVar42 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                     *(undefined4 *)(&stack0x00000104 + iVar2);
                                *(undefined4 *)(&stack0xffffffec + iVar2) =
                                     *(undefined4 *)(&stack0x00000108 + iVar2);
                                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                     *(undefined4 *)(&stack0x0000010c + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2) =
                                     *(undefined4 *)(&stack0x00000110 + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                     *(undefined4 *)(&stack0x00000114 + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                     *(undefined4 *)(&stack0x00000118 + iVar2);
                                *(undefined4 *)((int)&param_5 + iVar2) =
                                     *(undefined4 *)(&stack0x0000011c + iVar2);
                                *(undefined4 *)((int)&param_6 + iVar2) =
                                     *(undefined4 *)(&stack0x00000120 + iVar2);
                                *(undefined4 *)(&param_7 + iVar2) =
                                     *(undefined4 *)(&stack0x00000124 + iVar2);
                                *(undefined4 *)(&param_8 + iVar2) =
                                     *(undefined4 *)(&stack0x00000128 + iVar2);
                                *(undefined4 *)(&stack0x00000010 + iVar2) =
                                     *(undefined4 *)(&stack0x0000012c + iVar2);
                                *(undefined4 *)(&stack0x00000014 + iVar2) = 0;
                              }
                              else {
                                if (iVar15 != 0x11) {
                                  if (iVar15 == 0x12) {
                                    iVar15 = *piVar13;
                                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                    uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                    *(undefined4 *)(&stack0x00000050 + iVar2) =
                                         *(undefined4 *)(iVar23 * 4 + iVar15);
                                    *puVar44 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                    uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                    uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                         *(undefined4 *)(&stack0x00000104 + iVar2);
                                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                                         *(undefined4 *)(&stack0x00000108 + iVar2);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                         *(undefined4 *)(&stack0x0000010c + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2) =
                                         *(undefined4 *)(&stack0x00000110 + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                         *(undefined4 *)(&stack0x00000114 + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                         *(undefined4 *)(&stack0x00000118 + iVar2);
                                    *(undefined4 *)((int)&param_5 + iVar2) =
                                         *(undefined4 *)(&stack0x0000011c + iVar2);
                                    *(undefined4 *)((int)&param_6 + iVar2) =
                                         *(undefined4 *)(&stack0x00000120 + iVar2);
                                    *(undefined4 *)(&param_7 + iVar2) =
                                         *(undefined4 *)(&stack0x00000124 + iVar2);
                                    *(undefined4 *)(&param_8 + iVar2) =
                                         *(undefined4 *)(&stack0x00000128 + iVar2);
                                    *(undefined4 *)(&stack0x00000010 + iVar2) =
                                         *(undefined4 *)(&stack0x0000012c + iVar2);
                                    *(undefined4 *)(&stack0x00000014 + iVar2) =
                                         *(undefined4 *)(&stack0x00000130 + iVar2);
                                    *(undefined4 *)(&stack0x00000018 + iVar2) =
                                         *(undefined4 *)(&stack0x00000134 + iVar2);
                                    *(undefined4 *)(&stack0x0000001c + iVar2) = 0;
                                  }
                                  else {
                                    if (iVar15 != 0x13) {
                                      if (iVar15 == 0x14) {
                                        iVar15 = *piVar13;
                                        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                                             *(undefined4 *)(iVar23 * 4 + iVar15);
                                        *puVar46 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                             *(undefined4 *)(&stack0x00000104 + iVar2);
                                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                                             *(undefined4 *)(&stack0x00000108 + iVar2);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                             *(undefined4 *)(&stack0x0000010c + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2) =
                                             *(undefined4 *)(&stack0x00000110 + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                             *(undefined4 *)(&stack0x00000114 + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                             *(undefined4 *)(&stack0x00000118 + iVar2);
                                        *(undefined4 *)((int)&param_5 + iVar2) =
                                             *(undefined4 *)(&stack0x0000011c + iVar2);
                                        *(undefined4 *)((int)&param_6 + iVar2) =
                                             *(undefined4 *)(&stack0x00000120 + iVar2);
                                        *(undefined4 *)(&param_7 + iVar2) =
                                             *(undefined4 *)(&stack0x00000124 + iVar2);
                                        *(undefined4 *)(&param_8 + iVar2) =
                                             *(undefined4 *)(&stack0x00000128 + iVar2);
                                        *(undefined4 *)(&stack0x00000010 + iVar2) =
                                             *(undefined4 *)(&stack0x0000012c + iVar2);
                                        *(undefined4 *)(&stack0x00000014 + iVar2) =
                                             *(undefined4 *)(&stack0x00000130 + iVar2);
                                        *(undefined4 *)(&stack0x00000018 + iVar2) =
                                             *(undefined4 *)(&stack0x00000134 + iVar2);
                                        *(undefined4 *)(&stack0x0000001c + iVar2) =
                                             *(undefined4 *)(&stack0x00000138 + iVar2);
                                        *(undefined4 *)(&stack0x00000020 + iVar2) =
                                             *(undefined4 *)(&stack0x0000013c + iVar2);
                                        *(undefined4 *)(&stack0x00000024 + iVar2) = 0;
                                      }
                                      else {
                                        if (iVar15 != 0x15) {
                                          if (iVar15 == 0x16) {
                                            iVar15 = *piVar13;
                                            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                            *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                 *(undefined4 *)(iVar23 * 4 + iVar15);
                                            *puVar48 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000104 + iVar2);
                                            *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                 *(undefined4 *)(&stack0x00000108 + iVar2);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000010c + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2) =
                                                 *(undefined4 *)(&stack0x00000110 + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar2);
                                            *(undefined4 *)((int)&param_5 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar2);
                                            *(undefined4 *)((int)&param_6 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000120 + iVar2);
                                            *(undefined4 *)(&param_7 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000124 + iVar2);
                                            *(undefined4 *)(&param_8 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000128 + iVar2);
                                            *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000012c + iVar2);
                                            *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000130 + iVar2);
                                            *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000134 + iVar2);
                                            *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                 *(undefined4 *)(&stack0x00000138 + iVar2);
                                            *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar2);
                                            *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar2);
                                            *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar2);
                                            *(undefined4 *)(&stack0x0000002c + iVar2) = 0;
                                          }
                                          else {
                                            if (iVar15 != 0x17) {
                                              if (iVar15 == 0x18) {
                                                iVar15 = *piVar13;
                                                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                                *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                     *(undefined4 *)(iVar23 * 4 + iVar15);
                                                *puVar50 = *(undefined4 *)(&stack0x00000100 + iVar2)
                                                ;
                                                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000104 + iVar2);
                                                *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                     *(undefined4 *)(&stack0x00000108 + iVar2);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000010c + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000110 + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar2);
                                                *(undefined4 *)((int)&param_5 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar2);
                                                *(undefined4 *)((int)&param_6 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar2);
                                                *(undefined4 *)(&param_7 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar2);
                                                *(undefined4 *)(&param_8 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000128 + iVar2);
                                                *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000012c + iVar2);
                                                *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000130 + iVar2);
                                                *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000134 + iVar2);
                                                *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000138 + iVar2);
                                                *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar2);
                                                *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar2);
                                                *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar2);
                                                *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar2);
                                                *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar2);
                                                *(undefined4 *)(&stack0x00000034 + iVar2) = 0;
                                              }
                                              else {
                                                if (iVar15 != 0x19) {
                                                  if (iVar15 == 0x1a) {
                                                    iVar15 = *piVar13;
                                                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x000000f4 + iVar2);
                                                    *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                         *(undefined4 *)(iVar23 * 4 + iVar15);
                                                    *puVar52 = *(undefined4 *)
                                                                (&stack0x00000100 + iVar2);
                                                    uVar11 = *(undefined4 *)
                                                              (&stack0x000000f8 + iVar2);
                                                    uVar17 = *(undefined4 *)
                                                              (&stack0x000000fc + iVar2);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000104 + iVar2);
                                                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                         *(undefined4 *)(&stack0x00000108 + iVar2);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000010c + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000110 + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar2);
                                                    *(undefined4 *)((int)&param_5 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar2);
                                                    *(undefined4 *)((int)&param_6 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar2);
                                                    *(undefined4 *)(&param_7 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar2);
                                                    *(undefined4 *)(&param_8 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar2);
                                                    *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar2);
                                                    *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000130 + iVar2);
                                                    *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000134 + iVar2);
                                                    *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000138 + iVar2);
                                                    *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar2);
                                                    *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar2);
                                                    *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar2);
                                                    *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar2);
                                                    *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar2);
                                                    *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar2);
                                                    *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar2);
                                                    *(undefined4 *)(&stack0x0000003c + iVar2) = 0;
                                                  }
                                                  else {
                                                    if (iVar15 != 0x1b) {
                                                      if (iVar15 == 0x1c) {
                                                        iVar15 = *piVar13;
                                                        *(int *)(&stack0x00000054 + iVar2) =
                                                             iVar23 * 4;
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x000000f4 + iVar2);
                                                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                             *(undefined4 *)(iVar23 * 4 + iVar15);
                                                        *puVar54 = *(undefined4 *)
                                                                    (&stack0x00000100 + iVar2);
                                                        uVar11 = *(undefined4 *)
                                                                  (&stack0x000000f8 + iVar2);
                                                        uVar17 = *(undefined4 *)
                                                                  (&stack0x000000fc + iVar2);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000104 + iVar2);
                                                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000108 + iVar2);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000010c + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000110 + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x00000114 + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x00000118 + iVar2);
                                                        *(undefined4 *)((int)&param_5 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar2);
                                                        *(undefined4 *)((int)&param_6 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar2);
                                                        *(undefined4 *)(&param_7 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000124 + iVar2);
                                                        *(undefined4 *)(&param_8 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000128 + iVar2);
                                                        *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar2);
                                                        *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar2);
                                                        *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar2);
                                                        *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000138 + iVar2);
                                                        *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar2);
                                                        *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar2);
                                                        *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar2);
                                                        *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar2);
                                                        *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar2);
                                                        *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar2);
                                                        *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar2);
                                                        *(undefined4 *)(&stack0x0000003c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar2);
                                                        *(undefined4 *)(&stack0x00000040 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar2);
                                                        *(undefined4 *)(&stack0x00000044 + iVar2) =
                                                             0;
                                                      }
                                                      else {
                                                        if (iVar15 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c6428 +
                                                                                 0xc63e0));
                                                        }
                                                        iVar15 = *piVar13;
                                                        *(int *)(&stack0x00000054 + iVar2) =
                                                             iVar23 * 4;
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x000000f4 + iVar2);
                                                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                             *(undefined4 *)(iVar23 * 4 + iVar15);
                                                        *puVar55 = *(undefined4 *)
                                                                    (&stack0x00000100 + iVar2);
                                                        uVar11 = *(undefined4 *)
                                                                  (&stack0x000000f8 + iVar2);
                                                        uVar17 = *(undefined4 *)
                                                                  (&stack0x000000fc + iVar2);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000104 + iVar2);
                                                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000108 + iVar2);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000010c + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000110 + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x00000114 + iVar2);
                                                        *(undefined4 *)((int)apiStack_c + iVar2 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x00000118 + iVar2);
                                                        *(undefined4 *)((int)&param_5 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000011c + iVar2);
                                                        *(undefined4 *)((int)&param_6 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000120 + iVar2);
                                                        *(undefined4 *)(&param_7 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000124 + iVar2);
                                                        *(undefined4 *)(&param_8 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000128 + iVar2);
                                                        *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000012c + iVar2);
                                                        *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000130 + iVar2);
                                                        *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000134 + iVar2);
                                                        *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000138 + iVar2);
                                                        *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar2);
                                                        *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar2);
                                                        *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar2);
                                                        *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar2);
                                                        *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar2);
                                                        *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar2);
                                                        *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar2);
                                                        *(undefined4 *)(&stack0x0000003c + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar2);
                                                        *(undefined4 *)(&stack0x00000040 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar2);
                                                        *(undefined4 *)(&stack0x00000044 + iVar2) =
                                                             *(undefined4 *)
                                                              (&stack0x00000160 + iVar2);
                                                        *(undefined4 *)(&stack0x00000048 + iVar2) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar9,uVar22,uVar11,uVar17);
                                                    }
                                                    iVar15 = *piVar13;
                                                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x000000f4 + iVar2);
                                                    *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                         *(undefined4 *)(iVar23 * 4 + iVar15);
                                                    *puVar53 = *(undefined4 *)
                                                                (&stack0x00000100 + iVar2);
                                                    uVar11 = *(undefined4 *)
                                                              (&stack0x000000f8 + iVar2);
                                                    uVar17 = *(undefined4 *)
                                                              (&stack0x000000fc + iVar2);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000104 + iVar2);
                                                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                         *(undefined4 *)(&stack0x00000108 + iVar2);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000010c + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000110 + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                         *(undefined4 *)(&stack0x00000114 + iVar2);
                                                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                         *(undefined4 *)(&stack0x00000118 + iVar2);
                                                    *(undefined4 *)((int)&param_5 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000011c + iVar2);
                                                    *(undefined4 *)((int)&param_6 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000120 + iVar2);
                                                    *(undefined4 *)(&param_7 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000124 + iVar2);
                                                    *(undefined4 *)(&param_8 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000128 + iVar2);
                                                    *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000012c + iVar2);
                                                    *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000130 + iVar2);
                                                    *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000134 + iVar2);
                                                    *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000138 + iVar2);
                                                    *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar2);
                                                    *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar2);
                                                    *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar2);
                                                    *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar2);
                                                    *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar2);
                                                    *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar2);
                                                    *(undefined4 *)(&stack0x00000038 + iVar2) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar2);
                                                    *(undefined4 *)(&stack0x0000003c + iVar2) =
                                                         *(undefined4 *)(&stack0x00000158 + iVar2);
                                                    *(undefined4 *)(&stack0x00000040 + iVar2) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar9,uVar22,uVar11,uVar17);
                                                }
                                                iVar15 = *piVar13;
                                                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                                *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                     *(undefined4 *)(iVar23 * 4 + iVar15);
                                                *puVar51 = *(undefined4 *)(&stack0x00000100 + iVar2)
                                                ;
                                                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000104 + iVar2);
                                                *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                     *(undefined4 *)(&stack0x00000108 + iVar2);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000010c + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000110 + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                     *(undefined4 *)(&stack0x00000114 + iVar2);
                                                *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                     *(undefined4 *)(&stack0x00000118 + iVar2);
                                                *(undefined4 *)((int)&param_5 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000011c + iVar2);
                                                *(undefined4 *)((int)&param_6 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000120 + iVar2);
                                                *(undefined4 *)(&param_7 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000124 + iVar2);
                                                *(undefined4 *)(&param_8 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000128 + iVar2);
                                                *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000012c + iVar2);
                                                *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000130 + iVar2);
                                                *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000134 + iVar2);
                                                *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000138 + iVar2);
                                                *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar2);
                                                *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar2);
                                                *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar2);
                                                *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar2);
                                                *(undefined4 *)(&stack0x00000030 + iVar2) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar2);
                                                *(undefined4 *)(&stack0x00000034 + iVar2) =
                                                     *(undefined4 *)(&stack0x00000150 + iVar2);
                                                *(undefined4 *)(&stack0x00000038 + iVar2) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar9,uVar22,uVar11,uVar17);
                                            }
                                            iVar15 = *piVar13;
                                            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                            *(undefined4 *)(&stack0x00000050 + iVar2) =
                                                 *(undefined4 *)(iVar23 * 4 + iVar15);
                                            *puVar49 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000104 + iVar2);
                                            *(undefined4 *)(&stack0xffffffec + iVar2) =
                                                 *(undefined4 *)(&stack0x00000108 + iVar2);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000010c + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2) =
                                                 *(undefined4 *)(&stack0x00000110 + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                                 *(undefined4 *)(&stack0x00000114 + iVar2);
                                            *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                                 *(undefined4 *)(&stack0x00000118 + iVar2);
                                            *(undefined4 *)((int)&param_5 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000011c + iVar2);
                                            *(undefined4 *)((int)&param_6 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000120 + iVar2);
                                            *(undefined4 *)(&param_7 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000124 + iVar2);
                                            *(undefined4 *)(&param_8 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000128 + iVar2);
                                            *(undefined4 *)(&stack0x00000010 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000012c + iVar2);
                                            *(undefined4 *)(&stack0x00000014 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000130 + iVar2);
                                            *(undefined4 *)(&stack0x00000018 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000134 + iVar2);
                                            *(undefined4 *)(&stack0x0000001c + iVar2) =
                                                 *(undefined4 *)(&stack0x00000138 + iVar2);
                                            *(undefined4 *)(&stack0x00000020 + iVar2) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar2);
                                            *(undefined4 *)(&stack0x00000024 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar2);
                                            *(undefined4 *)(&stack0x00000028 + iVar2) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar2);
                                            *(undefined4 *)(&stack0x0000002c + iVar2) =
                                                 *(undefined4 *)(&stack0x00000148 + iVar2);
                                            *(undefined4 *)(&stack0x00000030 + iVar2) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                                        }
                                        iVar15 = *piVar13;
                                        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                                             *(undefined4 *)(iVar23 * 4 + iVar15);
                                        *puVar47 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                             *(undefined4 *)(&stack0x00000104 + iVar2);
                                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                                             *(undefined4 *)(&stack0x00000108 + iVar2);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                             *(undefined4 *)(&stack0x0000010c + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2) =
                                             *(undefined4 *)(&stack0x00000110 + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                             *(undefined4 *)(&stack0x00000114 + iVar2);
                                        *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                             *(undefined4 *)(&stack0x00000118 + iVar2);
                                        *(undefined4 *)((int)&param_5 + iVar2) =
                                             *(undefined4 *)(&stack0x0000011c + iVar2);
                                        *(undefined4 *)((int)&param_6 + iVar2) =
                                             *(undefined4 *)(&stack0x00000120 + iVar2);
                                        *(undefined4 *)(&param_7 + iVar2) =
                                             *(undefined4 *)(&stack0x00000124 + iVar2);
                                        *(undefined4 *)(&param_8 + iVar2) =
                                             *(undefined4 *)(&stack0x00000128 + iVar2);
                                        *(undefined4 *)(&stack0x00000010 + iVar2) =
                                             *(undefined4 *)(&stack0x0000012c + iVar2);
                                        *(undefined4 *)(&stack0x00000014 + iVar2) =
                                             *(undefined4 *)(&stack0x00000130 + iVar2);
                                        *(undefined4 *)(&stack0x00000018 + iVar2) =
                                             *(undefined4 *)(&stack0x00000134 + iVar2);
                                        *(undefined4 *)(&stack0x0000001c + iVar2) =
                                             *(undefined4 *)(&stack0x00000138 + iVar2);
                                        *(undefined4 *)(&stack0x00000020 + iVar2) =
                                             *(undefined4 *)(&stack0x0000013c + iVar2);
                                        *(undefined4 *)(&stack0x00000024 + iVar2) =
                                             *(undefined4 *)(&stack0x00000140 + iVar2);
                                        *(undefined4 *)(&stack0x00000028 + iVar2) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                                    }
                                    iVar15 = *piVar13;
                                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                    uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                    *(undefined4 *)(&stack0x00000050 + iVar2) =
                                         *(undefined4 *)(iVar23 * 4 + iVar15);
                                    *puVar45 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                    uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                    uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                         *(undefined4 *)(&stack0x00000104 + iVar2);
                                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                                         *(undefined4 *)(&stack0x00000108 + iVar2);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                         *(undefined4 *)(&stack0x0000010c + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2) =
                                         *(undefined4 *)(&stack0x00000110 + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                         *(undefined4 *)(&stack0x00000114 + iVar2);
                                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                         *(undefined4 *)(&stack0x00000118 + iVar2);
                                    *(undefined4 *)((int)&param_5 + iVar2) =
                                         *(undefined4 *)(&stack0x0000011c + iVar2);
                                    *(undefined4 *)((int)&param_6 + iVar2) =
                                         *(undefined4 *)(&stack0x00000120 + iVar2);
                                    *(undefined4 *)(&param_7 + iVar2) =
                                         *(undefined4 *)(&stack0x00000124 + iVar2);
                                    *(undefined4 *)(&param_8 + iVar2) =
                                         *(undefined4 *)(&stack0x00000128 + iVar2);
                                    *(undefined4 *)(&stack0x00000010 + iVar2) =
                                         *(undefined4 *)(&stack0x0000012c + iVar2);
                                    *(undefined4 *)(&stack0x00000014 + iVar2) =
                                         *(undefined4 *)(&stack0x00000130 + iVar2);
                                    *(undefined4 *)(&stack0x00000018 + iVar2) =
                                         *(undefined4 *)(&stack0x00000134 + iVar2);
                                    *(undefined4 *)(&stack0x0000001c + iVar2) =
                                         *(undefined4 *)(&stack0x00000138 + iVar2);
                                    *(undefined4 *)(&stack0x00000020 + iVar2) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                                }
                                iVar15 = *piVar13;
                                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                                *(undefined4 *)(&stack0x00000050 + iVar2) =
                                     *(undefined4 *)(iVar23 * 4 + iVar15);
                                *puVar43 = *(undefined4 *)(&stack0x00000100 + iVar2);
                                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                     *(undefined4 *)(&stack0x00000104 + iVar2);
                                *(undefined4 *)(&stack0xffffffec + iVar2) =
                                     *(undefined4 *)(&stack0x00000108 + iVar2);
                                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                     *(undefined4 *)(&stack0x0000010c + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2) =
                                     *(undefined4 *)(&stack0x00000110 + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                     *(undefined4 *)(&stack0x00000114 + iVar2);
                                *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                     *(undefined4 *)(&stack0x00000118 + iVar2);
                                *(undefined4 *)((int)&param_5 + iVar2) =
                                     *(undefined4 *)(&stack0x0000011c + iVar2);
                                *(undefined4 *)((int)&param_6 + iVar2) =
                                     *(undefined4 *)(&stack0x00000120 + iVar2);
                                *(undefined4 *)(&param_7 + iVar2) =
                                     *(undefined4 *)(&stack0x00000124 + iVar2);
                                *(undefined4 *)(&param_8 + iVar2) =
                                     *(undefined4 *)(&stack0x00000128 + iVar2);
                                *(undefined4 *)(&stack0x00000010 + iVar2) =
                                     *(undefined4 *)(&stack0x0000012c + iVar2);
                                *(undefined4 *)(&stack0x00000014 + iVar2) =
                                     *(undefined4 *)(&stack0x00000130 + iVar2);
                                *(undefined4 *)(&stack0x00000018 + iVar2) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                            }
                            iVar15 = *piVar13;
                            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                            *(undefined4 *)(&stack0x00000050 + iVar2) =
                                 *(undefined4 *)(iVar23 * 4 + iVar15);
                            *puVar41 = *(undefined4 *)(&stack0x00000100 + iVar2);
                            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                            *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                                 *(undefined4 *)(&stack0x00000104 + iVar2);
                            *(undefined4 *)(&stack0xffffffec + iVar2) =
                                 *(undefined4 *)(&stack0x00000108 + iVar2);
                            *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                                 *(undefined4 *)(&stack0x0000010c + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2) =
                                 *(undefined4 *)(&stack0x00000110 + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                                 *(undefined4 *)(&stack0x00000114 + iVar2);
                            *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                                 *(undefined4 *)(&stack0x00000118 + iVar2);
                            *(undefined4 *)((int)&param_5 + iVar2) =
                                 *(undefined4 *)(&stack0x0000011c + iVar2);
                            *(undefined4 *)((int)&param_6 + iVar2) =
                                 *(undefined4 *)(&stack0x00000120 + iVar2);
                            *(undefined4 *)(&param_7 + iVar2) =
                                 *(undefined4 *)(&stack0x00000124 + iVar2);
                            *(undefined4 *)(&param_8 + iVar2) =
                                 *(undefined4 *)(&stack0x00000128 + iVar2);
                            *(undefined4 *)(&stack0x00000010 + iVar2) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                        }
                        iVar15 = *piVar13;
                        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                        *(undefined4 *)(&stack0x00000050 + iVar2) =
                             *(undefined4 *)(iVar23 * 4 + iVar15);
                        *puVar39 = *(undefined4 *)(&stack0x00000100 + iVar2);
                        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                        *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                             *(undefined4 *)(&stack0x00000104 + iVar2);
                        *(undefined4 *)(&stack0xffffffec + iVar2) =
                             *(undefined4 *)(&stack0x00000108 + iVar2);
                        *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                             *(undefined4 *)(&stack0x0000010c + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2) =
                             *(undefined4 *)(&stack0x00000110 + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                             *(undefined4 *)(&stack0x00000114 + iVar2);
                        *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                             *(undefined4 *)(&stack0x00000118 + iVar2);
                        *(undefined4 *)((int)&param_5 + iVar2) =
                             *(undefined4 *)(&stack0x0000011c + iVar2);
                        *(undefined4 *)((int)&param_6 + iVar2) =
                             *(undefined4 *)(&stack0x00000120 + iVar2);
                        *(undefined4 *)(&param_7 + iVar2) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                    }
                    iVar15 = *piVar13;
                    *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                    uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                    *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15)
                    ;
                    *puVar37 = *(undefined4 *)(&stack0x00000100 + iVar2);
                    uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                    uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                    *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                         *(undefined4 *)(&stack0x00000104 + iVar2);
                    *(undefined4 *)(&stack0xffffffec + iVar2) =
                         *(undefined4 *)(&stack0x00000108 + iVar2);
                    *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                         *(undefined4 *)(&stack0x0000010c + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2) =
                         *(undefined4 *)(&stack0x00000110 + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2 + 4) =
                         *(undefined4 *)(&stack0x00000114 + iVar2);
                    *(undefined4 *)((int)apiStack_c + iVar2 + 8) =
                         *(undefined4 *)(&stack0x00000118 + iVar2);
                    *(undefined4 *)((int)&param_5 + iVar2) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
                }
                iVar15 = *piVar13;
                *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
                uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
                *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
                *puVar35 = *(undefined4 *)(&stack0x00000100 + iVar2);
                uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
                uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
                *(undefined4 *)(&stack0xffffffe8 + iVar2) =
                     *(undefined4 *)(&stack0x00000104 + iVar2);
                *(undefined4 *)(&stack0xffffffec + iVar2) =
                     *(undefined4 *)(&stack0x00000108 + iVar2);
                *(undefined4 *)(&stack0xfffffff0 + iVar2) =
                     *(undefined4 *)(&stack0x0000010c + iVar2);
                *(undefined4 *)((int)apiStack_c + iVar2) = *(undefined4 *)(&stack0x00000110 + iVar2)
                ;
                *(undefined4 *)((int)apiStack_c + iVar2 + 4) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
            }
            iVar15 = *piVar13;
            *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
            uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
            *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
            *puVar33 = *(undefined4 *)(&stack0x00000100 + iVar2);
            uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
            uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
            *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(&stack0x00000104 + iVar2);
            *(undefined4 *)(&stack0xffffffec + iVar2) = *(undefined4 *)(&stack0x00000108 + iVar2);
            *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
        }
        iVar15 = *piVar13;
        *(int *)(&stack0x00000054 + iVar2) = iVar23 * 4;
        uVar22 = *(undefined4 *)(&stack0x000000f4 + iVar2);
        *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + iVar15);
        uVar11 = *(undefined4 *)(&stack0x000000f8 + iVar2);
        uVar17 = *(undefined4 *)(&stack0x000000fc + iVar2);
        *puVar31 = *(undefined4 *)(&stack0x00000100 + iVar2);
        *(undefined4 *)(&stack0xffffffe8 + iVar2) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar9,uVar22,uVar11,uVar17);
    }
    *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(iVar23 * 4 + *piVar13);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar9,*(undefined4 *)(&stack0x000000f4 + iVar2),
               *(undefined4 *)(&stack0x000000f8 + iVar2),0);
  }
  iVar15 = *piVar13;
  *(int *)(&stack0x00000058 + iVar2) = iVar15;
  if (*(int *)(&stack0x00000050 + iVar2) != 0) {
LAB_000c5a06:
    iVar21 = **(int **)(*(int *)(&stack0x00000058 + iVar2) + iVar23 * 4);
    uVar22 = *(undefined4 *)(iVar21 + *(int *)(&stack0x00000050 + iVar2) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000058 + iVar2) = uVar22;
    iVar15 = __aeabi_fcmpeq(uVar22,0);
    if (iVar15 == 0) {
      uVar22 = __subsf3(*(undefined4 *)(&stack0x00000058 + iVar2),
                        *(undefined4 *)(&stack0x000000d4 + iVar2));
      pCVar18 = *(CCPoint **)(&stack0x00000058 + iVar2);
      *(undefined4 *)(&stack0x000000d0 + iVar2) = uVar22;
    }
    else {
      *(CCPoint **)(&stack0x000000d0 + iVar2) = DAT_000c5c28;
      pCVar18 = DAT_000c5c28;
    }
    *(CCPoint **)(&stack0x000000d4 + iVar2) = pCVar18;
    if (*(int *)(&stack0x00000054 + iVar2) == 0) {
      iVar15 = iVar21 + *(int *)(&stack0x00000050 + iVar2) * 0x1c;
      *(int *)(&stack0x00000058 + iVar2) = *(int *)(&stack0x00000050 + iVar2) * 0x1c;
      *(undefined4 *)(&stack0x00000068 + iVar2) = *(undefined4 *)(&stack0x000000d0 + iVar2);
      uVar22 = *(undefined4 *)(iVar15 + 0x50);
      *(int *)(&stack0x00000060 + iVar2) = iVar15;
      uVar22 = __mulsf3(uVar22,0x3f000000);
      uVar22 = __addsf3(uVar22,*(undefined4 *)(iVar21 + 0x20));
      *(undefined4 *)(&stack0x00000074 + iVar2) = uVar22;
      uVar22 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0x54),0x3f000000);
      uVar57 = __subsf3(*(undefined4 *)(iVar21 + 0x24),uVar22);
      uVar57 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000c8 + iVar2),(float)uVar57,
                          (float)((ulonglong)uVar57 >> 0x20));
      piVar13 = *(int **)(iVar23 * 4 + *piVar13);
      iVar23 = *piVar13 + *(int *)(&stack0x00000058 + iVar2);
      *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(iVar23 + 0x60);
      uVar22 = *(undefined4 *)(iVar23 + 100);
      *(int **)((int)apiStack_c + iVar2) = piVar13;
      CVar10 = *(CCPoint *)(&stack0x00000068 + iVar2);
      *(undefined4 *)(&stack0xffffffec + iVar2) = uVar22;
      CVar12 = *(CCSize *)(&stack0x000000c8 + iVar2);
      *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000054 + iVar2);
      *puVar29 = *(undefined4 *)(iVar23 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar57,CVar10,CVar12,(float)((ulonglong)uVar57 >> 0x20),extraout_s2_02,
                SUB41(*(undefined4 *)(&stack0x000000cc + iVar2),0),*(_KG_Anit **)(iVar23 + 0x58));
    }
    *(undefined4 *)(&stack0x00000060 + iVar2) = *(undefined4 *)(&stack0x000000d0 + iVar2);
    iVar15 = iVar21 + *(int *)(&stack0x00000050 + iVar2) * 0x1c;
    uVar22 = *(undefined4 *)(iVar15 + 0x50);
    *(int *)(&stack0x00000058 + iVar2) = iVar15;
    *(int *)(&stack0x00000054 + iVar2) = *(int *)(&stack0x00000050 + iVar2) * 0x1c;
    uVar22 = __mulsf3(uVar22,0x3f000000);
    uVar22 = __addsf3(uVar22,*(undefined4 *)(iVar21 + 0x20));
    *(undefined4 *)(&stack0x00000068 + iVar2) = uVar22;
    uVar22 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 0x54),0x3f000000);
    uVar57 = __subsf3(*(undefined4 *)(iVar21 + 0x24),uVar22);
    uVar57 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000c0 + iVar2),(float)uVar57,
                        (float)((ulonglong)uVar57 >> 0x20));
    piVar13 = *(int **)(iVar23 * 4 + *piVar13);
    iVar23 = *piVar13 + *(int *)(&stack0x00000054 + iVar2);
    *(undefined4 *)(&stack0xffffffe8 + iVar2) = *(undefined4 *)(iVar23 + 0x60);
    uVar22 = *(undefined4 *)(iVar23 + 100);
    *(int **)((int)apiStack_c + iVar2) = piVar13;
    CVar10 = *(CCPoint *)(&stack0x00000060 + iVar2);
    *(undefined4 *)(&stack0xffffffec + iVar2) = uVar22;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = 1;
    CVar12 = *(CCSize *)(&stack0x000000c0 + iVar2);
    *puVar28 = *(undefined4 *)(iVar23 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar57,CVar10,CVar12,(float)((ulonglong)uVar57 >> 0x20),extraout_s2_01,
              SUB41(*(undefined4 *)(&stack0x000000c4 + iVar2),0),*(_KG_Anit **)(iVar23 + 0x58));
  }
  *(int *)(&stack0x00000060 + iVar2) = iVar23 * 4;
  piVar16 = *(int **)(iVar15 + iVar23 * 4);
  *(undefined4 *)(&stack0x00000068 + iVar2) = 0;
  uVar22 = *(undefined4 *)(*piVar16 + 0x4c);
  iVar15 = __aeabi_fcmpgt(uVar22,0);
  if (iVar15 == 0) goto LAB_000c5a06;
  *(undefined4 *)(&stack0x000000d4 + iVar2) = uVar22;
  uVar22 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_00);
  *(undefined4 *)(&stack0x00000058 + iVar2) = uVar22;
  memset(&stack0x000000dc + iVar2,*(int *)(&stack0x00000050 + iVar2),0x14);
  iVar21 = *(int *)(*(int *)(&stack0x00000068 + iVar2) +
                   *(int *)(*(int *)(&stack0x00000060 + iVar2) + *piVar13));
  uVar22 = *(undefined4 *)(iVar21 + 0x50);
  *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
  iVar15 = __aeabi_fcmpgt(uVar22,DAT_000c5c24);
  if ((iVar15 == 0) &&
     (iVar15 = __aeabi_fcmpgt(*(undefined4 *)(iVar21 + 0x54),DAT_000c5c24), iVar15 == 0)) {
    iVar15 = *(int *)(&stack0x00000050 + iVar2);
  }
  else {
    uVar22 = __addsf3(*(undefined4 *)(&stack0x00000054 + iVar2),*(undefined4 *)(iVar21 + 0x20));
    uVar11 = *(undefined4 *)(iVar21 + 0x54);
    *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
    uVar57 = __subsf3(*(undefined4 *)(iVar21 + 0x24),uVar11);
    fVar56 = (float)cocos2d::CCPoint::CCPoint
                              ((CCPoint *)(&stack0x000000b8 + iVar2),(float)uVar57,
                               (float)((ulonglong)uVar57 >> 0x20));
    uVar22 = cocos2d::CCMoveTo::actionWithDuration(fVar56,DAT_000c5c28);
    iVar15 = 1;
    *(undefined4 *)(&stack0x000000dc + iVar2) = uVar22;
  }
  iVar21 = **(int **)(iVar23 * 4 + *piVar13);
  uVar22 = *(undefined4 *)(iVar21 + 0x58);
  *(int *)(&stack0x00000054 + iVar2) = iVar21;
  *(undefined4 *)(&stack0x00000060 + iVar2) = uVar22;
  iVar21 = __aeabi_fcmpgt(uVar22,DAT_000c5c24);
  fVar56 = extraout_s0_01;
  fVar58 = extraout_s1_00;
  fVar59 = extraout_s2;
  if ((iVar21 != 0) ||
     (iVar21 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000054 + iVar2) + 0x5c),
                              DAT_000c5c24), fVar56 = extraout_s0_02, fVar58 = extraout_s1_01,
     fVar59 = extraout_s2_00, iVar21 != 0)) {
    uVar22 = cocos2d::CCScaleTo::actionWithDuration(fVar56,fVar58,fVar59);
    *(undefined4 *)(&stack0x000000dc + iVar15 * 4 + iVar2) = uVar22;
    iVar15 = iVar15 + 1;
  }
  uVar22 = *(undefined4 *)(**(int **)(iVar23 * 4 + *piVar13) + 0x60);
  *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
  iVar21 = __aeabi_fcmplt(uVar22,DAT_000c5c30);
  if (iVar21 == 0) {
    iVar21 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000054 + iVar2),DAT_000c5c34);
    if (iVar21 == 0) goto LAB_000c5988;
    fVar56 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar2));
    uVar4 = (uchar)DAT_000c5c2c;
  }
  else {
    uVar4 = (uchar)DAT_000c5c2c;
    fVar56 = extraout_s0_03;
  }
  uVar22 = cocos2d::CCFadeTo::actionWithDuration(fVar56,uVar4);
  *(undefined4 *)(&stack0x000000dc + iVar15 * 4 + iVar2) = uVar22;
  iVar15 = iVar15 + 1;
LAB_000c5988:
  uVar22 = *(undefined4 *)(**(int **)(iVar23 * 4 + *piVar13) + 100);
  *(undefined4 *)(&stack0x00000054 + iVar2) = uVar22;
  iVar23 = __aeabi_fcmpgt(uVar22,DAT_000c5c38);
  if (iVar23 == 0) {
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar2),0);
    }
  }
  else {
    uVar22 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_04,extraout_s1_02);
    *(undefined4 *)(&stack0x000000dc + iVar15 * 4 + iVar2) = uVar22;
    iVar15 = iVar15 + 1;
  }
  pCVar9 = *(CCFiniteTimeAction **)(&stack0x000000dc + iVar2);
  if (iVar15 == 1) {
    uVar22 = cocos2d::CCSpawn::actions(pCVar9,0);
  }
  else {
    uVar22 = *(undefined4 *)(&stack0x000000e0 + iVar2);
    if (iVar15 == 2) {
      uVar22 = cocos2d::CCSpawn::actions(pCVar9,uVar22,0);
    }
    else {
      uVar11 = *(undefined4 *)(&stack0x000000e4 + iVar2);
      if (iVar15 == 3) {
        uVar22 = cocos2d::CCSpawn::actions(pCVar9,uVar22,uVar11,0);
      }
      else {
        uVar17 = *(undefined4 *)(&stack0x000000e8 + iVar2);
        *puVar27 = 0;
        uVar22 = cocos2d::CCSpawn::actions(pCVar9,uVar22,uVar11,uVar17);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar2),uVar22,0);
}


