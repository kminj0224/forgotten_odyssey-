/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c1f34  Symbol: vDrawScript_Unit */

/* vDrawScript_Unit(char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int, int) */

void vDrawScript_Unit(char *param_1,char *param_2,CCNode *param_3,CCPoint param_4,int param_5,
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
  undefined *__dest;
  CCArray *this_01;
  CCFiniteTimeAction *pCVar8;
  CCPoint CVar9;
  undefined *__src;
  CCSize CVar10;
  char *pcVar11;
  _KG_Animation *p_Var12;
  int iVar13;
  int **ppiVar14;
  undefined4 uVar15;
  CCPoint *pCVar16;
  undefined4 *puVar17;
  code *pcVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined4 extraout_s0;
  float fVar63;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar64;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  undefined8 uVar65;
  undefined4 extraout_s1;
  float fVar66;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float fVar67;
  float extraout_s1_05;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
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
  undefined4 *puVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  undefined4 *puVar61;
  undefined4 *puVar62;
  
  iVar1 = DAT_000c227c;
  puVar24 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar25 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  piVar26 = (int *)(&stack0xffffffe4 + DAT_000c227c);
  puVar27 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar28 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar29 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar30 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar31 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar32 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar33 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar34 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar35 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar36 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar37 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar38 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar39 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar40 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar41 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar42 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar43 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar44 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar45 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar46 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar47 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar48 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar49 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar50 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar51 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar52 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar53 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar54 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar55 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar56 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar57 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar58 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar59 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar60 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar61 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  puVar62 = (undefined4 *)(&stack0xffffffe4 + DAT_000c227c);
  *(CCPoint *)(&stack0x000002d8 + DAT_000c227c) = param_4;
  *(char **)(&stack0x00000058 + DAT_000c227c) = param_1;
  puVar17 = *(undefined4 **)(DAT_000c2280 + 0xc1f48);
  *(char **)(&stack0x00000054 + DAT_000c227c) = param_2;
  uVar20 = *(undefined4 *)(&stack0x000002d8 + DAT_000c227c);
  uVar21 = *(undefined4 *)(&stack0x000002dc + DAT_000c227c);
  *(undefined4 *)(&stack0x000002b8 + DAT_000c227c) = *puVar17;
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x000000d4 + DAT_000c227c));
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x000000e4 + iVar1));
  sprintf(&stack0x000001f0 + iVar1,(char *)(DAT_000c2284 + 0xc1f68),
          *(undefined4 *)(&stack0x00000058 + iVar1),*(undefined4 *)(&stack0x00000054 + iVar1));
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x0000005c + iVar1) = this;
  uVar65 = cocos2d::CCLayer::CCLayer(this);
  *(undefined4 **)(&stack0x00000078 + iVar1) = puVar17;
  iVar13 = **(int **)(DAT_000c2288 + 0xc1f84);
  *(int **)(&stack0x00000068 + iVar1) = *(int **)(DAT_000c2288 + 0xc1f84);
  if (iVar13 == 2) {
    *(undefined4 *)(&stack0x00000060 + iVar1) =
         *(undefined4 *)(**(int **)(&stack0x0000005c + iVar1) + 0x3c);
    __addsf3(uVar20,uVar20);
    uVar65 = __addsf3(uVar21,uVar21);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000080 + iVar1),(float)uVar65,
               (float)((ulonglong)uVar65 >> 0x20));
    uVar65 = (**(code **)(&stack0x00000060 + iVar1))
                       (*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000080 + iVar1);
  }
  else {
    pcVar18 = *(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar1),(float)uVar65,
               (float)((ulonglong)uVar65 >> 0x20));
    uVar65 = (*pcVar18)(*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000088 + iVar1);
  }
  pcVar18 = *(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000090 + iVar1),(float)uVar65,(float)((ulonglong)uVar65 >> 0x20))
  ;
  (*pcVar18)(*(undefined4 *)(&stack0x0000005c + iVar1),&stack0x00000090 + iVar1);
  (**(code **)(*(int *)param_3 + 0xcc))
            (param_3,*(undefined4 *)(&stack0x0000005c + iVar1),
             *(undefined4 *)(&stack0x000002e0 + iVar1),*(undefined4 *)(&stack0x000002e4 + iVar1));
  ppiVar4 = (int **)operator_new(0x24);
  piVar5 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar5);
  ppiVar4[1] = piVar5;
  Init_Unit_Stage((_Unit_Stage *)ppiVar4);
  piVar5 = (int *)operator_new(0x2c);
  iVar13 = 0;
  *ppiVar4 = piVar5;
  do {
    piVar5 = *ppiVar4;
    pvVar6 = operator_new(0x298);
    piVar5[iVar13] = (int)pvVar6;
    iVar13 = iVar13 + 1;
    (*ppiVar4)[8] = 1;
  } while (iVar13 != 8);
  pcVar11 = *(char **)(&stack0x00000054 + iVar1);
  (*ppiVar4)[9] = 1;
  anim_Lode_copy(&stack0x000001f0 + iVar1,(_KG_Anit *)**ppiVar4,pcVar11);
  iVar13 = 1;
  do {
    iVar19 = iVar13 + 1;
    operator_delete((void *)(*ppiVar4)[iVar13]);
    uVar65 = CONCAT44(extraout_s1,extraout_s0);
    (*ppiVar4)[iVar13] = 0;
    iVar13 = iVar19;
  } while (iVar19 != 8);
  iVar13 = 0;
  fVar64 = extraout_s2;
  fVar67 = extraout_s3;
  while( true ) {
    ppiVar14 = (int **)*ppiVar4;
    *(int *)(&stack0x00000054 + iVar1) = iVar13;
    if (*(int *)(**ppiVar14 + 4) <= *(int *)(&stack0x00000054 + iVar1)) break;
    iVar22 = *(int *)(&stack0x00000054 + iVar1) * 4;
    *puVar24 = *(undefined4 *)(*ppiVar14)[*(int *)(&stack0x00000054 + iVar1)];
    sprintf(&stack0x00000254 + iVar1,(char *)(DAT_000c228c + 0xc2070),
            *(undefined4 *)(&stack0x00000058 + iVar1),DAT_000c2290 + 0xc2072);
    iVar19 = **ppiVar4;
    iVar13 = *(int *)(iVar19 + 0x284);
    *(undefined4 *)(&stack0x00000060 + iVar1) = *(undefined4 *)(iVar22 + iVar19);
    __floatsisf(iVar13 / 2);
    uVar65 = __floatsisf(*(int *)(iVar19 + 0x280) / 2);
    uVar65 = cocos2d::CCSize::CCSize
                       ((CCSize *)(&stack0x00000098 + iVar1),(float)uVar65,
                        (float)((ulonglong)uVar65 >> 0x20));
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x000000a0 + iVar1),(float)uVar65,
               (float)((ulonglong)uVar65 >> 0x20));
    iVar13 = **ppiVar4;
    __floatsisf(*(undefined4 *)(iVar13 + 0x288));
    uVar65 = __floatsisf(*(undefined4 *)(iVar13 + 0x28c));
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x000000a8 + iVar1),(float)uVar65,(float)((ulonglong)uVar65 >> 0x20)
              );
    pCVar7 = *(CCNode **)(&stack0x0000005c + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x000000a0 + iVar1);
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(&stack0x00000054 + iVar1);
    *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(&stack0x00000054 + iVar1);
    *(undefined4 *)((int)apiStack_c + iVar1) = *(undefined4 *)(&stack0x000000a4 + iVar1);
    p_Var12 = *(_KG_Animation **)(&stack0x00000060 + iVar1);
    *(undefined4 *)((int)apiStack_c + iVar1 + 4) = *(undefined4 *)(&stack0x000000a8 + iVar1);
    *(undefined4 *)((int)apiStack_c + iVar1 + 8) = *(undefined4 *)(&stack0x000000ac + iVar1);
    *puVar25 = *(undefined4 *)(&stack0x0000009c + iVar1);
    piVar5 = (int *)vScriptImgDraw_Fram(pCVar7,&stack0x00000254 + iVar1,p_Var12,
                                        *(CCSize *)(&stack0x00000098 + iVar1),*piVar26,
                                        *(int *)(&stack0xffffffe8 + iVar1),
                                        *(CCPoint *)(&stack0xffffffec + iVar1),
                                        *(CCSize *)(&stack0xfffffff0 + iVar1));
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000c2298 + 0xc21b4));
    }
    iVar13 = **ppiVar4;
    *(int *)(&stack0x00000060 + iVar1) = iVar13;
    puVar17 = *(undefined4 **)(DAT_000c2294 + 0xc211c);
    uVar20 = __floatsisf(*(int *)(iVar13 + 0x284) / 2);
    uVar20 = __subsf3(*puVar17,uVar20);
    *(undefined4 *)(&stack0x00000064 + iVar1) = uVar20;
    uVar20 = __floatsisf(*(int *)(*(int *)(&stack0x00000060 + iVar1) + 0x280) / 2);
    uVar65 = __subsf3(puVar17[1],uVar20);
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x00000178 + iVar1),(float)uVar65,(float)((ulonglong)uVar65 >> 0x20)
              );
    iVar13 = *(int *)(iVar22 + **ppiVar4);
    puVar17 = (undefined4 *)(**(code **)(*piVar5 + 0x38))(piVar5);
    *(undefined4 *)(iVar13 + 0x20) = *puVar17;
    *(undefined4 *)(iVar13 + 0x24) = puVar17[1];
    iVar13 = *piVar5;
    uVar2 = __fixunssfsi(*(undefined4 *)(*(int *)(iVar22 + **ppiVar4) + 0x38));
    (**(code **)(iVar13 + 0xec))(piVar5,uVar2);
    (**(code **)(*piVar5 + 0x2c))(piVar5,*(undefined4 *)(*(int *)(iVar22 + **ppiVar4) + 0x18));
    (**(code **)(*piVar5 + 0x34))(piVar5,*(undefined4 *)(*(int *)(iVar22 + **ppiVar4) + 0x1c));
    this_00 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    uVar65 = cocos2d::CCTextureCache::removeAllTextures(this_00);
    iVar13 = *(int *)(&stack0x00000054 + iVar1) + 1;
    fVar64 = extraout_s2_00;
    fVar67 = extraout_s3_00;
  }
  if (**(int **)(&stack0x00000068 + iVar1) == 2) {
    uVar65 = cocos2d::CCNode::setScale(*(CCNode **)(&stack0x0000005c + iVar1),(float)uVar65);
    fVar64 = extraout_s2_01;
    fVar67 = extraout_s3_01;
  }
  fVar66 = (float)((ulonglong)uVar65 >> 0x20);
  fVar63 = (float)uVar65;
  iVar13 = *(int *)(&stack0x000002e4 + iVar1);
  if (iVar13 == 3) {
    *puVar29 = DAT_000c22ac;
    cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000114 + iVar1),fVar63,fVar66,fVar64,fVar67);
    __dest = &stack0x000000d4 + iVar1;
    __src = &stack0x00000114 + iVar1;
LAB_000c22d0:
    memcpy(__dest,__src,0x10);
    uVar65 = CONCAT44(extraout_s1_00,extraout_s0_00);
    fVar64 = extraout_s2_02;
    fVar67 = extraout_s3_02;
  }
  else {
    if (3 < iVar13) {
      iVar13 = *(int *)(&stack0x000002e4 + iVar1);
      if (iVar13 == DAT_000c229c) {
        *puVar31 = DAT_000c22ac;
        cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000134 + iVar1),fVar63,fVar66,fVar64,fVar67);
        __dest = &stack0x000000d4 + iVar1;
        __src = &stack0x00000134 + iVar1;
      }
      else if (iVar13 == DAT_000c22a0) {
        *puVar32 = DAT_000c25d8;
        cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000144 + iVar1),fVar63,fVar66,fVar64,fVar67);
        __dest = &stack0x000000d4 + iVar1;
        __src = &stack0x00000144 + iVar1;
      }
      else {
        if (iVar13 != 7) goto LAB_000c22d6;
        *puVar30 = DAT_000c22ac;
        cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000124 + iVar1),fVar63,fVar66,fVar64,fVar67);
        __dest = &stack0x000000d4 + iVar1;
        __src = &stack0x00000124 + iVar1;
      }
      goto LAB_000c22d0;
    }
    if (iVar13 == 1) {
      ppiVar4[1][0x16] = DAT_000c22a4;
      *puVar27 = DAT_000c22ac;
      cocos2d::CCRect::CCRect((CCRect *)(&stack0x000000f4 + iVar1),fVar63,fVar66,fVar64,fVar67);
      __dest = &stack0x000000d4 + iVar1;
      __src = &stack0x000000f4 + iVar1;
      goto LAB_000c22d0;
    }
    if (iVar13 == 2) {
      ppiVar4[1][0x16] = DAT_000c22b4;
      *puVar28 = DAT_000c22ac;
      cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000104 + iVar1),fVar63,fVar66,fVar64,fVar67);
      __dest = &stack0x000000d4 + iVar1;
      __src = &stack0x00000104 + iVar1;
      goto LAB_000c22d0;
    }
  }
LAB_000c22d6:
  *puVar33 = *(undefined4 *)(&stack0x000000e0 + iVar1);
  cocos2d::CCRect::CCRect
            ((CCRect *)(&stack0x00000154 + iVar1),(float)uVar65,(float)((ulonglong)uVar65 >> 0x20),
             fVar64,fVar67);
  memcpy(&stack0x000000e4 + iVar1,&stack0x00000154 + iVar1,0x10);
  piVar23 = *(int **)(&stack0x0000005c + iVar1);
  piVar5 = (int *)(**(code **)(*piVar23 + 0x90))(piVar23);
  (**(code **)(*piVar5 + 0xac))(piVar5,ppiVar4);
  (**(code **)(*piVar23 + 0xac))(*(undefined4 *)(&stack0x0000005c + iVar1),ppiVar4);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x0000005c + iVar1));
  piVar5 = (int *)**ppiVar4;
  *(int **)(&stack0x00000070 + iVar1) = (int *)(*ppiVar4)[9];
  *(undefined4 *)(*piVar5 + 4) = 0x50;
  FUN_000c2f10();
  this_01 = (CCArray *)
            (**(code **)(**(int **)(&stack0x0000005c + iVar1) + 0x58))
                      (*(int **)(&stack0x0000005c + iVar1));
  *(CCArray **)(&stack0x00000060 + iVar1) = this_01;
  if (this_01 == (CCArray *)0x0) {
    this_01 = (CCArray *)FUN_000c2f0e();
  }
  iVar13 = cocos2d::CCArray::count(this_01);
  if (iVar13 != 0) {
    FUN_000c2f00();
  }
  FUN_000c2f0e();
  iVar13 = cocos2d::CCArray::count(*(CCArray **)(&stack0x00000060 + iVar1));
  if (iVar13 == 0) {
    FUN_000c2efe();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x00000060 + iVar1),0);
  memset(&stack0x00000178 + iVar1,0,0x78);
  memset(&stack0x000000c8 + iVar1,0,0xc);
  iVar13 = *(int *)**ppiVar4;
  if (iVar13 == 0) {
    FUN_000c2f0e();
  }
  uVar20 = *(undefined4 *)(iVar13 + 0x40);
  *(undefined4 *)(&stack0x00000050 + iVar1) = 0;
  *(undefined4 *)(&stack0x0000006c + iVar1) = uVar20;
  *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
  iVar13 = *(int *)(&stack0x0000006c + iVar1);
  if (iVar13 <= *(int *)(&stack0x00000050 + iVar1)) {
    pCVar8 = *(CCFiniteTimeAction **)(&stack0x00000178 + iVar1);
    if (pCVar8 == (CCFiniteTimeAction *)0x0) {
      pCVar8 = (CCFiniteTimeAction *)FUN_000c2efe();
    }
    if (iVar13 == 1) {
      *(int *)(&stack0x00000050 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,0);
    }
    if (iVar13 == 2) {
      *(int *)(&stack0x00000050 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,*(undefined4 *)(&stack0x0000017c + iVar1),0);
    }
    if (iVar13 != 3) {
      if (iVar13 == 4) {
        piVar5 = *ppiVar4;
        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
        *puVar37 = 0;
      }
      else {
        if (iVar13 != 5) {
          if (iVar13 == 6) {
            piVar5 = *ppiVar4;
            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
            *puVar39 = *(undefined4 *)(&stack0x00000188 + iVar1);
            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
            *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(&stack0x0000018c + iVar1);
            *(undefined4 *)(&stack0xffffffec + iVar1) = 0;
          }
          else {
            if (iVar13 != 7) {
              if (iVar13 == 8) {
                piVar5 = *ppiVar4;
                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                *puVar41 = *(undefined4 *)(&stack0x00000188 + iVar1);
                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                     *(undefined4 *)(&stack0x0000018c + iVar1);
                *(undefined4 *)(&stack0xffffffec + iVar1) =
                     *(undefined4 *)(&stack0x00000190 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x00000194 + iVar1);
                *(undefined4 *)((int)apiStack_c + iVar1) = 0;
              }
              else {
                if (iVar13 != 9) {
                  if (iVar13 == 10) {
                    piVar5 = *ppiVar4;
                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                    uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                    *puVar43 = *(undefined4 *)(&stack0x00000188 + iVar1);
                    uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                    uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                         *(undefined4 *)(&stack0x0000018c + iVar1);
                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                         *(undefined4 *)(&stack0x00000190 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x00000194 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1) =
                         *(undefined4 *)(&stack0x00000198 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                         *(undefined4 *)(&stack0x0000019c + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) = 0;
                  }
                  else {
                    if (iVar13 != 0xb) {
                      if (iVar13 == 0xc) {
                        piVar5 = *ppiVar4;
                        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                        *puVar45 = *(undefined4 *)(&stack0x00000188 + iVar1);
                        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                             *(undefined4 *)(&stack0x0000018c + iVar1);
                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                             *(undefined4 *)(&stack0x00000190 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x00000194 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1) =
                             *(undefined4 *)(&stack0x00000198 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                             *(undefined4 *)(&stack0x0000019c + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                             *(undefined4 *)(&stack0x000001a0 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000001a4 + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) = 0;
                      }
                      else {
                        if (iVar13 != 0xd) {
                          if (iVar13 == 0xe) {
                            piVar5 = *ppiVar4;
                            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                            *puVar47 = *(undefined4 *)(&stack0x00000188 + iVar1);
                            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                 *(undefined4 *)(&stack0x0000018c + iVar1);
                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                 *(undefined4 *)(&stack0x00000190 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x00000194 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                 *(undefined4 *)(&stack0x00000198 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                 *(undefined4 *)(&stack0x0000019c + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                 *(undefined4 *)(&stack0x000001a0 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000001a4 + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x000001a8 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x000001ac + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
                          }
                          else {
                            if (iVar13 != 0xf) {
                              if (iVar13 == 0x10) {
                                piVar5 = *ppiVar4;
                                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                *puVar49 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                     *(undefined4 *)(&stack0x0000018c + iVar1);
                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                     *(undefined4 *)(&stack0x00000190 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x00000194 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                     *(undefined4 *)(&stack0x00000198 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                     *(undefined4 *)(&stack0x0000019c + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                     *(undefined4 *)(&stack0x000001a0 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000001a4 + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x000001a8 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x000001ac + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x000001b0 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x000001b4 + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
                              }
                              else {
                                if (iVar13 != 0x11) {
                                  if (iVar13 == 0x12) {
                                    piVar5 = *ppiVar4;
                                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                    uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                    *puVar51 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                    uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                    uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                         *(undefined4 *)(&stack0x00000190 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x00000194 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                         *(undefined4 *)(&stack0x00000198 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                         *(undefined4 *)(&stack0x0000019c + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                         *(undefined4 *)(&stack0x000001a0 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000001a4 + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x000001a8 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x000001ac + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x000001b0 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x000001b4 + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x000001b8 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x000001bc + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
                                  }
                                  else {
                                    if (iVar13 != 0x13) {
                                      if (iVar13 == 0x14) {
                                        piVar5 = *ppiVar4;
                                        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                        *puVar53 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                             *(undefined4 *)(&stack0x0000018c + iVar1);
                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                             *(undefined4 *)(&stack0x00000190 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x00000194 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                             *(undefined4 *)(&stack0x00000198 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                             *(undefined4 *)(&stack0x0000019c + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                             *(undefined4 *)(&stack0x000001a0 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000001a4 + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x000001a8 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x000001ac + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x000001b0 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x000001b4 + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x000001b8 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x000001bc + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x000001c0 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x000001c4 + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) = 0;
                                      }
                                      else {
                                        if (iVar13 != 0x15) {
                                          if (iVar13 == 0x16) {
                                            piVar5 = *ppiVar4;
                                            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                            *puVar55 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000018c + iVar1);
                                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                 *(undefined4 *)(&stack0x00000190 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000194 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000198 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                 *(undefined4 *)(&stack0x0000019c + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                 *(undefined4 *)(&stack0x000001a0 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001a4 + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001a8 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001ac + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b0 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b4 + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b8 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001bc + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c0 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c4 + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c8 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001cc + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
                                          }
                                          else {
                                            if (iVar13 != 0x17) {
                                              if (iVar13 == 0x18) {
                                                piVar5 = *ppiVar4;
                                                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                                *puVar57 = *(undefined4 *)(&stack0x00000188 + iVar1)
                                                ;
                                                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000018c + iVar1);
                                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                     *(undefined4 *)(&stack0x00000190 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000194 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000198 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                     *(undefined4 *)(&stack0x0000019c + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                     *(undefined4 *)(&stack0x000001a0 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001a4 + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001a8 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001ac + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b0 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b4 + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b8 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001bc + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c0 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c4 + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c8 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001cc + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001d0 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001d4 + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
                                              }
                                              else {
                                                if (iVar13 != 0x19) {
                                                  if (iVar13 == 0x1a) {
                                                    piVar5 = *ppiVar4;
                                                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                                    uVar20 = *(undefined4 *)
                                                              (&stack0x0000017c + iVar1);
                                                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                                    *puVar59 = *(undefined4 *)
                                                                (&stack0x00000188 + iVar1);
                                                    uVar21 = *(undefined4 *)
                                                              (&stack0x00000180 + iVar1);
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x00000184 + iVar1);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                         *(undefined4 *)(&stack0x00000190 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000194 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000198 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                         *(undefined4 *)(&stack0x0000019c + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                         *(undefined4 *)(&stack0x000001a0 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001a4 + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001a8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001ac + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001bc + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001cc + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001dc + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
                                                  }
                                                  else {
                                                    if (iVar13 != 0x1b) {
                                                      if (iVar13 == 0x1c) {
                                                        piVar5 = *ppiVar4;
                                                        *(undefined4 *)(&stack0x00000054 + iVar1) =
                                                             0;
                                                        uVar20 = *(undefined4 *)
                                                                  (&stack0x0000017c + iVar1);
                                                        *(int *)(&stack0x00000050 + iVar1) = *piVar5
                                                        ;
                                                        *puVar61 = *(undefined4 *)
                                                                    (&stack0x00000188 + iVar1);
                                                        uVar21 = *(undefined4 *)
                                                                  (&stack0x00000180 + iVar1);
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x00000184 + iVar1);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000018c + iVar1);
                                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000190 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000194 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000198 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x0000019c + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x000001a0 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001a4 + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001a8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001ac + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001bc + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001cc + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001dc + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001e0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001e4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             0;
                                                      }
                                                      else {
                                                        if (iVar13 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c2f44 +
                                                                                 0xc2efc));
                                                        }
                                                        piVar5 = *ppiVar4;
                                                        *(undefined4 *)(&stack0x00000054 + iVar1) =
                                                             0;
                                                        uVar20 = *(undefined4 *)
                                                                  (&stack0x0000017c + iVar1);
                                                        *(int *)(&stack0x00000050 + iVar1) = *piVar5
                                                        ;
                                                        *puVar62 = *(undefined4 *)
                                                                    (&stack0x00000188 + iVar1);
                                                        uVar21 = *(undefined4 *)
                                                                  (&stack0x00000180 + iVar1);
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x00000184 + iVar1);
                                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000018c + iVar1);
                                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000190 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000194 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000198 + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4)
                                                             = *(undefined4 *)
                                                                (&stack0x0000019c + iVar1);
                                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8)
                                                             = *(undefined4 *)
                                                                (&stack0x000001a0 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001a4 + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001a8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001ac + iVar1);
                                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001b8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001bc + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001c8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001cc + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001d8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001dc + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001e0 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001e4 + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001e8 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar8,uVar20,uVar21,uVar15);
                                                    }
                                                    piVar5 = *ppiVar4;
                                                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                                    uVar20 = *(undefined4 *)
                                                              (&stack0x0000017c + iVar1);
                                                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                                    *puVar60 = *(undefined4 *)
                                                                (&stack0x00000188 + iVar1);
                                                    uVar21 = *(undefined4 *)
                                                              (&stack0x00000180 + iVar1);
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x00000184 + iVar1);
                                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                         *(undefined4 *)(&stack0x00000190 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000194 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000198 + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                         *(undefined4 *)(&stack0x0000019c + iVar1);
                                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                         *(undefined4 *)(&stack0x000001a0 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001a4 + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001a8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001ac + iVar1);
                                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001b8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001bc + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001c8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001cc + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d4 + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001d8 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001dc + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x000001e0 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar8,uVar20,uVar21,uVar15);
                                                }
                                                piVar5 = *ppiVar4;
                                                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                                *puVar58 = *(undefined4 *)(&stack0x00000188 + iVar1)
                                                ;
                                                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000018c + iVar1);
                                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                     *(undefined4 *)(&stack0x00000190 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000194 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000198 + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                     *(undefined4 *)(&stack0x0000019c + iVar1);
                                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                     *(undefined4 *)(&stack0x000001a0 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001a4 + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001a8 + iVar1);
                                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001ac + iVar1);
                                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b0 + iVar1);
                                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b4 + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001b8 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001bc + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c0 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c4 + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001c8 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001cc + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x000001d0 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001d4 + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001d8 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar8,uVar20,uVar21,uVar15);
                                            }
                                            piVar5 = *ppiVar4;
                                            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                            *puVar56 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000018c + iVar1);
                                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                                 *(undefined4 *)(&stack0x00000190 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000194 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000198 + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                                 *(undefined4 *)(&stack0x0000019c + iVar1);
                                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                                 *(undefined4 *)(&stack0x000001a0 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001a4 + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001a8 + iVar1);
                                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001ac + iVar1);
                                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b0 + iVar1);
                                            *(undefined4 *)(&stack0x00000010 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b4 + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001b8 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001bc + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c0 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c4 + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001c8 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001cc + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x000001d0 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                                        }
                                        piVar5 = *ppiVar4;
                                        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                        *puVar54 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                             *(undefined4 *)(&stack0x0000018c + iVar1);
                                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                                             *(undefined4 *)(&stack0x00000190 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x00000194 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1) =
                                             *(undefined4 *)(&stack0x00000198 + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                             *(undefined4 *)(&stack0x0000019c + iVar1);
                                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                             *(undefined4 *)(&stack0x000001a0 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000001a4 + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x000001a8 + iVar1);
                                        *(undefined4 *)(&stack0x00000008 + iVar1) =
                                             *(undefined4 *)(&stack0x000001ac + iVar1);
                                        *(undefined4 *)(&stack0x0000000c + iVar1) =
                                             *(undefined4 *)(&stack0x000001b0 + iVar1);
                                        *(undefined4 *)(&stack0x00000010 + iVar1) =
                                             *(undefined4 *)(&stack0x000001b4 + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x000001b8 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x000001bc + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x000001c0 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x000001c4 + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x000001c8 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                                    }
                                    piVar5 = *ppiVar4;
                                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                    uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                    *puVar52 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                    uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                    uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                                         *(undefined4 *)(&stack0x00000190 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x00000194 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1) =
                                         *(undefined4 *)(&stack0x00000198 + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                         *(undefined4 *)(&stack0x0000019c + iVar1);
                                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                         *(undefined4 *)(&stack0x000001a0 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000001a4 + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x000001a8 + iVar1);
                                    *(undefined4 *)(&stack0x00000008 + iVar1) =
                                         *(undefined4 *)(&stack0x000001ac + iVar1);
                                    *(undefined4 *)(&stack0x0000000c + iVar1) =
                                         *(undefined4 *)(&stack0x000001b0 + iVar1);
                                    *(undefined4 *)(&stack0x00000010 + iVar1) =
                                         *(undefined4 *)(&stack0x000001b4 + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x000001b8 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x000001bc + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x000001c0 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                                }
                                piVar5 = *ppiVar4;
                                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                                *puVar50 = *(undefined4 *)(&stack0x00000188 + iVar1);
                                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                     *(undefined4 *)(&stack0x0000018c + iVar1);
                                *(undefined4 *)(&stack0xffffffec + iVar1) =
                                     *(undefined4 *)(&stack0x00000190 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x00000194 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1) =
                                     *(undefined4 *)(&stack0x00000198 + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                     *(undefined4 *)(&stack0x0000019c + iVar1);
                                *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                     *(undefined4 *)(&stack0x000001a0 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000001a4 + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x000001a8 + iVar1);
                                *(undefined4 *)(&stack0x00000008 + iVar1) =
                                     *(undefined4 *)(&stack0x000001ac + iVar1);
                                *(undefined4 *)(&stack0x0000000c + iVar1) =
                                     *(undefined4 *)(&stack0x000001b0 + iVar1);
                                *(undefined4 *)(&stack0x00000010 + iVar1) =
                                     *(undefined4 *)(&stack0x000001b4 + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x000001b8 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                            }
                            piVar5 = *ppiVar4;
                            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                            *puVar48 = *(undefined4 *)(&stack0x00000188 + iVar1);
                            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                            *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                                 *(undefined4 *)(&stack0x0000018c + iVar1);
                            *(undefined4 *)(&stack0xffffffec + iVar1) =
                                 *(undefined4 *)(&stack0x00000190 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x00000194 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1) =
                                 *(undefined4 *)(&stack0x00000198 + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                                 *(undefined4 *)(&stack0x0000019c + iVar1);
                            *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                                 *(undefined4 *)(&stack0x000001a0 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000001a4 + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x000001a8 + iVar1);
                            *(undefined4 *)(&stack0x00000008 + iVar1) =
                                 *(undefined4 *)(&stack0x000001ac + iVar1);
                            *(undefined4 *)(&stack0x0000000c + iVar1) =
                                 *(undefined4 *)(&stack0x000001b0 + iVar1);
                            *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                        }
                        piVar5 = *ppiVar4;
                        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                        *puVar46 = *(undefined4 *)(&stack0x00000188 + iVar1);
                        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                        *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                             *(undefined4 *)(&stack0x0000018c + iVar1);
                        *(undefined4 *)(&stack0xffffffec + iVar1) =
                             *(undefined4 *)(&stack0x00000190 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x00000194 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1) =
                             *(undefined4 *)(&stack0x00000198 + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                             *(undefined4 *)(&stack0x0000019c + iVar1);
                        *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                             *(undefined4 *)(&stack0x000001a0 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000001a4 + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x000001a8 + iVar1);
                        *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                    }
                    piVar5 = *ppiVar4;
                    *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                    uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                    *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                    *puVar44 = *(undefined4 *)(&stack0x00000188 + iVar1);
                    uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                    uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                    *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                         *(undefined4 *)(&stack0x0000018c + iVar1);
                    *(undefined4 *)(&stack0xffffffec + iVar1) =
                         *(undefined4 *)(&stack0x00000190 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x00000194 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1) =
                         *(undefined4 *)(&stack0x00000198 + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 4) =
                         *(undefined4 *)(&stack0x0000019c + iVar1);
                    *(undefined4 *)((int)apiStack_c + iVar1 + 8) =
                         *(undefined4 *)(&stack0x000001a0 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
                }
                piVar5 = *ppiVar4;
                *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
                uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
                *(int *)(&stack0x00000050 + iVar1) = *piVar5;
                *puVar42 = *(undefined4 *)(&stack0x00000188 + iVar1);
                uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
                uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
                *(undefined4 *)(&stack0xffffffe8 + iVar1) =
                     *(undefined4 *)(&stack0x0000018c + iVar1);
                *(undefined4 *)(&stack0xffffffec + iVar1) =
                     *(undefined4 *)(&stack0x00000190 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x00000194 + iVar1);
                *(undefined4 *)((int)apiStack_c + iVar1) = *(undefined4 *)(&stack0x00000198 + iVar1)
                ;
                *(undefined4 *)((int)apiStack_c + iVar1 + 4) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
            }
            piVar5 = *ppiVar4;
            *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
            uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
            *(int *)(&stack0x00000050 + iVar1) = *piVar5;
            *puVar40 = *(undefined4 *)(&stack0x00000188 + iVar1);
            uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
            uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
            *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(&stack0x0000018c + iVar1);
            *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)(&stack0x00000190 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
        }
        piVar5 = *ppiVar4;
        *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
        uVar20 = *(undefined4 *)(&stack0x0000017c + iVar1);
        *(int *)(&stack0x00000050 + iVar1) = *piVar5;
        uVar21 = *(undefined4 *)(&stack0x00000180 + iVar1);
        uVar15 = *(undefined4 *)(&stack0x00000184 + iVar1);
        *puVar38 = *(undefined4 *)(&stack0x00000188 + iVar1);
        *(undefined4 *)(&stack0xffffffe8 + iVar1) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar20,uVar21,uVar15);
    }
    *(int *)(&stack0x00000050 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar8,*(undefined4 *)(&stack0x0000017c + iVar1),
               *(undefined4 *)(&stack0x00000180 + iVar1),0);
  }
  ppiVar14 = (int **)*ppiVar4;
  *(int ***)(&stack0x00000058 + iVar1) = ppiVar14;
  if (*(int *)(&stack0x00000050 + iVar1) != 0) {
LAB_000c2518:
    iVar19 = ***(int ***)(&stack0x00000058 + iVar1);
    uVar20 = *(undefined4 *)(iVar19 + *(int *)(&stack0x00000050 + iVar1) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000058 + iVar1) = uVar20;
    iVar13 = __aeabi_fcmpeq(uVar20,0);
    if (iVar13 == 0) {
      uVar20 = __subsf3(*(undefined4 *)(&stack0x00000058 + iVar1),
                        *(undefined4 *)(&stack0x000000cc + iVar1));
      pCVar16 = *(CCPoint **)(&stack0x00000058 + iVar1);
      *(undefined4 *)(&stack0x000000c8 + iVar1) = uVar20;
    }
    else {
      *(CCPoint **)(&stack0x000000c8 + iVar1) = DAT_000c25e8;
      pCVar16 = DAT_000c25e8;
    }
    *(CCPoint **)(&stack0x000000cc + iVar1) = pCVar16;
    if (*(int *)(&stack0x00000054 + iVar1) == 0) {
      iVar13 = iVar19 + *(int *)(&stack0x00000050 + iVar1) * 0x1c;
      *(int *)(&stack0x00000058 + iVar1) = *(int *)(&stack0x00000050 + iVar1) * 0x1c;
      *(undefined4 *)(&stack0x00000068 + iVar1) = *(undefined4 *)(&stack0x000000c8 + iVar1);
      uVar20 = *(undefined4 *)(iVar13 + 0x50);
      *(int *)(&stack0x00000064 + iVar1) = iVar13;
      uVar20 = __mulsf3(uVar20,0x3f000000);
      uVar20 = __addsf3(uVar20,*(undefined4 *)(iVar19 + 0x20));
      *(undefined4 *)(&stack0x00000074 + iVar1) = uVar20;
      uVar20 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000064 + iVar1) + 0x54),0x3f000000);
      uVar65 = __subsf3(*(undefined4 *)(iVar19 + 0x24),uVar20);
      uVar65 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000c0 + iVar1),(float)uVar65,
                          (float)((ulonglong)uVar65 >> 0x20));
      piVar5 = (int *)**ppiVar4;
      iVar13 = *piVar5 + *(int *)(&stack0x00000058 + iVar1);
      *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(iVar13 + 0x60);
      uVar20 = *(undefined4 *)(iVar13 + 100);
      *(int **)((int)apiStack_c + iVar1) = piVar5;
      CVar9 = *(CCPoint *)(&stack0x00000068 + iVar1);
      *(undefined4 *)(&stack0xffffffec + iVar1) = uVar20;
      CVar10 = *(CCSize *)(&stack0x000000c0 + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000054 + iVar1);
      *puVar36 = *(undefined4 *)(iVar13 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar65,CVar9,CVar10,(float)((ulonglong)uVar65 >> 0x20),extraout_s2_06,
                SUB41(*(undefined4 *)(&stack0x000000c4 + iVar1),0),*(_KG_Anit **)(iVar13 + 0x58));
    }
    *(undefined4 *)(&stack0x00000064 + iVar1) = *(undefined4 *)(&stack0x000000c8 + iVar1);
    iVar13 = iVar19 + *(int *)(&stack0x00000050 + iVar1) * 0x1c;
    uVar20 = *(undefined4 *)(iVar13 + 0x50);
    *(int *)(&stack0x00000058 + iVar1) = iVar13;
    *(int *)(&stack0x00000054 + iVar1) = *(int *)(&stack0x00000050 + iVar1) * 0x1c;
    uVar20 = __mulsf3(uVar20,0x3f000000);
    uVar20 = __addsf3(uVar20,*(undefined4 *)(iVar19 + 0x20));
    *(undefined4 *)(&stack0x00000068 + iVar1) = uVar20;
    uVar20 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x54),0x3f000000);
    uVar65 = __subsf3(*(undefined4 *)(iVar19 + 0x24),uVar20);
    uVar65 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000b8 + iVar1),(float)uVar65,
                        (float)((ulonglong)uVar65 >> 0x20));
    piVar5 = (int *)**ppiVar4;
    iVar13 = *piVar5 + *(int *)(&stack0x00000054 + iVar1);
    *(undefined4 *)(&stack0xffffffe8 + iVar1) = *(undefined4 *)(iVar13 + 0x60);
    uVar20 = *(undefined4 *)(iVar13 + 100);
    *(int **)((int)apiStack_c + iVar1) = piVar5;
    CVar9 = *(CCPoint *)(&stack0x00000064 + iVar1);
    *(undefined4 *)(&stack0xffffffec + iVar1) = uVar20;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
    CVar10 = *(CCSize *)(&stack0x000000b8 + iVar1);
    *puVar35 = *(undefined4 *)(iVar13 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar65,CVar9,CVar10,(float)((ulonglong)uVar65 >> 0x20),extraout_s2_05,
              SUB41(*(undefined4 *)(&stack0x000000bc + iVar1),0),*(_KG_Anit **)(iVar13 + 0x58));
  }
  *(undefined4 *)(&stack0x00000064 + iVar1) = 0;
  piVar5 = *ppiVar14;
  *(undefined4 *)(&stack0x00000068 + iVar1) = 0;
  uVar20 = *(undefined4 *)(*piVar5 + 0x4c);
  iVar13 = __aeabi_fcmpgt(uVar20,0);
  if (iVar13 == 0) goto LAB_000c2518;
  *(undefined4 *)(&stack0x000000cc + iVar1) = uVar20;
  uVar20 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_01);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar20;
  memset(&stack0x00000164 + iVar1,*(int *)(&stack0x00000050 + iVar1),0x14);
  iVar19 = *(int *)(*(int *)(&stack0x00000068 + iVar1) +
                   *(int *)(*(int *)(&stack0x00000064 + iVar1) + (int)*ppiVar4));
  iVar13 = __aeabi_fcmpgt(*(undefined4 *)(iVar19 + 0x50),DAT_000c25e4);
  fVar64 = extraout_s0_02;
  fVar67 = extraout_s1_01;
  if ((iVar13 == 0) &&
     (iVar13 = __aeabi_fcmpgt(*(undefined4 *)(iVar19 + 0x54),DAT_000c25e4), fVar64 = extraout_s0_03,
     fVar67 = extraout_s1_02, iVar13 == 0)) {
    iVar13 = *(int *)(&stack0x00000050 + iVar1);
  }
  else {
    fVar64 = (float)cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000b0 + iVar1),fVar64,fVar67);
    uVar20 = cocos2d::CCMoveTo::actionWithDuration(fVar64,DAT_000c25e8);
    iVar13 = 1;
    *(undefined4 *)(&stack0x00000164 + iVar1) = uVar20;
  }
  uVar20 = *(undefined4 *)(*(int *)**ppiVar4 + 0x58);
  *(int *)(&stack0x00000054 + iVar1) = *(int *)**ppiVar4;
  *(undefined4 *)(&stack0x00000064 + iVar1) = uVar20;
  iVar19 = __aeabi_fcmpgt(uVar20,DAT_000c25e4);
  fVar64 = extraout_s0_04;
  fVar67 = extraout_s1_03;
  fVar63 = extraout_s2_03;
  if ((iVar19 != 0) ||
     (iVar19 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000054 + iVar1) + 0x5c),
                              DAT_000c25e4), fVar64 = extraout_s0_05, fVar67 = extraout_s1_04,
     fVar63 = extraout_s2_04, iVar19 != 0)) {
    uVar20 = cocos2d::CCScaleTo::actionWithDuration(fVar64,fVar67,fVar63);
    *(undefined4 *)(&stack0x00000164 + iVar13 * 4 + iVar1) = uVar20;
    iVar13 = iVar13 + 1;
  }
  uVar20 = *(undefined4 *)(*(int *)**ppiVar4 + 0x60);
  *(undefined4 *)(&stack0x00000054 + iVar1) = uVar20;
  iVar19 = __aeabi_fcmplt(uVar20,DAT_000c25f0);
  if (iVar19 == 0) {
    iVar19 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000054 + iVar1),DAT_000c25f4);
    if (iVar19 == 0) goto LAB_000c249a;
    fVar64 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000054 + iVar1));
    uVar3 = (uchar)DAT_000c25ec;
  }
  else {
    uVar3 = (uchar)DAT_000c25ec;
    fVar64 = extraout_s0_06;
  }
  uVar20 = cocos2d::CCFadeTo::actionWithDuration(fVar64,uVar3);
  *(undefined4 *)(&stack0x00000164 + iVar13 * 4 + iVar1) = uVar20;
  iVar13 = iVar13 + 1;
LAB_000c249a:
  uVar20 = *(undefined4 *)(*(int *)**ppiVar4 + 100);
  *(undefined4 *)(&stack0x00000054 + iVar1) = uVar20;
  iVar19 = __aeabi_fcmpgt(uVar20,DAT_000c25f8);
  if (iVar19 == 0) {
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar1),0);
    }
  }
  else {
    uVar20 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_07,extraout_s1_05);
    *(undefined4 *)(&stack0x00000164 + iVar13 * 4 + iVar1) = uVar20;
    iVar13 = iVar13 + 1;
  }
  pCVar8 = *(CCFiniteTimeAction **)(&stack0x00000164 + iVar1);
  if (iVar13 == 1) {
    uVar20 = cocos2d::CCSpawn::actions(pCVar8,0);
  }
  else {
    uVar20 = *(undefined4 *)(&stack0x00000168 + iVar1);
    if (iVar13 == 2) {
      uVar20 = cocos2d::CCSpawn::actions(pCVar8,uVar20,0);
    }
    else {
      uVar21 = *(undefined4 *)(&stack0x0000016c + iVar1);
      if (iVar13 == 3) {
        uVar20 = cocos2d::CCSpawn::actions(pCVar8,uVar20,uVar21,0);
      }
      else {
        uVar15 = *(undefined4 *)(&stack0x00000170 + iVar1);
        *puVar34 = 0;
        uVar20 = cocos2d::CCSpawn::actions(pCVar8,uVar20,uVar21,uVar15);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000058 + iVar1),uVar20,0);
}


