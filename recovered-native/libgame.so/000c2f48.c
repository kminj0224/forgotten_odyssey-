/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c2f48  Symbol: vDrawScript_Unit */

/* vDrawScript_Unit(char const*, char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint, int,
   int, int, bool, bool) */

void vDrawScript_Unit(char *param_1,char *param_2,char *param_3,CCNode *param_4,CCPoint param_5,
                     int param_6,int param_7,int param_8,bool param_9,bool param_10)

{
  int iVar1;
  undefined uVar2;
  uchar uVar3;
  CCLayer *this;
  int **ppiVar4;
  void *pvVar5;
  undefined *puVar6;
  CCSpriteFrameCache *this_00;
  CCNode *pCVar7;
  CCTextureCache *this_01;
  CCArray *this_02;
  CCFiniteTimeAction *pCVar8;
  CCPoint CVar9;
  undefined *__src;
  char *pcVar10;
  undefined4 uVar11;
  CCSize CVar12;
  _KG_Animation *p_Var13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  code **ppcVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  code *pcVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  float fVar70;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  undefined8 uVar71;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float fVar72;
  float extraout_s1_08;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
  float fVar73;
  float extraout_s2_11;
  float extraout_s2_12;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  int *piStack_4;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  int *piVar34;
  int *piVar35;
  undefined4 *puVar36;
  int *piVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  int *piVar40;
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
  undefined4 *puVar63;
  undefined4 *puVar64;
  undefined4 *puVar65;
  undefined4 *puVar66;
  undefined4 *puVar67;
  undefined4 *puVar68;
  undefined4 *puVar69;
  
  iVar1 = DAT_000c32bc;
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  piVar34 = (int *)(&stack0xffffffec + DAT_000c32bc);
  piVar35 = (int *)(&stack0xffffffec + DAT_000c32bc);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  piVar37 = (int *)(&stack0xffffffec + DAT_000c32bc);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  piVar40 = (int *)(&stack0xffffffec + DAT_000c32bc);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar56 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar59 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar61 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar63 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar64 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar65 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar66 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar67 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar68 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  puVar69 = (undefined4 *)(&stack0xffffffec + DAT_000c32bc);
  *(char **)(&stack0x00000060 + DAT_000c32bc) = param_3;
  *(char **)(&stack0x00000068 + DAT_000c32bc) = param_1;
  *(uint *)(&stack0x00000074 + DAT_000c32bc) = (uint)(byte)(&stack0x00000348)[DAT_000c32bc];
  *(char **)(&stack0x0000006c + DAT_000c32bc) = param_2;
  iVar23 = DAT_000c32c0 + 0xc2f66;
  *(uint *)(&stack0x00000054 + DAT_000c32bc) = (uint)(byte)(&stack0x0000034c)[DAT_000c32bc];
  puVar20 = *(undefined4 **)(iVar23 + DAT_000c32c4);
  *(undefined4 *)(&stack0x00000058 + DAT_000c32bc) =
       *(undefined4 *)(&stack0x00000334 + DAT_000c32bc);
  uVar15 = *puVar20;
  *(undefined4 *)(&stack0x0000005c + DAT_000c32bc) =
       *(undefined4 *)(&stack0x00000338 + DAT_000c32bc);
  iVar22 = *(int *)(&stack0x00000344 + DAT_000c32bc);
  *(undefined4 *)(&stack0x00000318 + DAT_000c32bc) = uVar15;
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x000000f4 + DAT_000c32bc));
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000104 + iVar1));
  sprintf(&stack0x00000250 + iVar1,(char *)(DAT_000c32c8 + 0xc2f8e),
          *(undefined4 *)(&stack0x00000068 + iVar1),*(undefined4 *)(&stack0x0000006c + iVar1));
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x00000064 + iVar1) = this;
  uVar71 = cocos2d::CCLayer::CCLayer(this);
  piVar16 = *(int **)(iVar23 + DAT_000c32cc);
  *(undefined4 **)(&stack0x0000007c + iVar1) = puVar20;
  *(int **)(&stack0x00000080 + iVar1) = piVar16;
  pcVar21 = *(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x3c);
  if (*piVar16 == 2) {
    uVar15 = __addsf3(*(undefined4 *)(&stack0x00000058 + iVar1),
                      *(undefined4 *)(&stack0x00000058 + iVar1));
    *(undefined4 *)(&stack0x00000078 + iVar1) = uVar15;
    uVar71 = __addsf3(*(undefined4 *)(&stack0x0000005c + iVar1),
                      *(undefined4 *)(&stack0x0000005c + iVar1));
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar1),(float)uVar71,
               (float)((ulonglong)uVar71 >> 0x20));
    uVar15 = *(undefined4 *)(&stack0x00000064 + iVar1);
    puVar6 = &stack0x00000088;
  }
  else {
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000090 + iVar1),(float)uVar71,
               (float)((ulonglong)uVar71 >> 0x20));
    uVar15 = *(undefined4 *)(&stack0x00000064 + iVar1);
    puVar6 = &stack0x00000090;
  }
  uVar71 = (*pcVar21)(uVar15,puVar6 + iVar1);
  pcVar21 = *(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000098 + iVar1),(float)uVar71,(float)((ulonglong)uVar71 >> 0x20))
  ;
  (*pcVar21)(*(undefined4 *)(&stack0x00000064 + iVar1),&stack0x00000098 + iVar1);
  (**(code **)(*(int *)param_4 + 0xcc))
            (param_4,*(undefined4 *)(&stack0x00000064 + iVar1),
             *(undefined4 *)(&stack0x0000033c + iVar1),*(undefined4 *)(&stack0x00000340 + iVar1));
  ppiVar4 = (int **)operator_new(0x24);
  piVar16 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar16);
  ppiVar4[1] = piVar16;
  Init_Unit_Stage((_Unit_Stage *)ppiVar4);
  ppiVar4[4] = *(int **)(&stack0x00000058 + iVar1);
  ppiVar4[5] = *(int **)(&stack0x0000005c + iVar1);
  piVar16 = (int *)operator_new(0x2c);
  iVar24 = 0;
  *ppiVar4 = piVar16;
  do {
    *(int **)(&stack0x00000058 + iVar1) = *ppiVar4;
    pvVar5 = operator_new(0x298);
    *(void **)(iVar24 * 4 + *(int *)(&stack0x00000058 + iVar1)) = pvVar5;
    iVar24 = iVar24 + 1;
    (*ppiVar4)[8] = 1;
  } while (iVar24 != 8);
  iVar24 = 1;
  (*ppiVar4)[9] = 1;
  anim_Lode_copy(&stack0x00000250 + iVar1,(_KG_Anit *)**ppiVar4,*(char **)(&stack0x0000006c + iVar1)
                );
  do {
    piVar16 = *ppiVar4;
    *(int *)(&stack0x00000058 + iVar1) = iVar24 * 4;
    operator_delete((void *)piVar16[iVar24]);
    iVar24 = iVar24 + 1;
    *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + (int)*ppiVar4) = 0;
  } while (iVar24 != 8);
  fVar70 = extraout_s0;
  if (*(int *)(&stack0x00000340 + iVar1) != 2) {
    if (iVar22 == 4) {
      ppiVar4[1][0x16] = DAT_000c32ec;
      iVar22 = DAT_000c3304;
      *puVar27 = DAT_000c32fc;
      cocos2d::CCRect::CCRect
                ((CCRect *)(&stack0x00000134 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                 extraout_s3);
      memcpy(&stack0x000000f4 + iVar1,&stack0x00000134 + iVar1,0x10);
      iVar22 = *(int *)(**(int **)(iVar23 + DAT_000c32e8) +
                        **(int **)(iVar23 + DAT_000c32e4) * 0x2d0 + iVar22);
      fVar70 = extraout_s2_02;
      fVar72 = extraout_s3_02;
      uVar71 = CONCAT44(extraout_s1_02,extraout_s0_02);
      if ((iVar22 != 0) &&
         (uVar71 = CONCAT44(extraout_s1_02,extraout_s0_02), *(int *)(&stack0x00000054 + iVar1) != 0)
         ) {
        uVar15 = *(undefined4 *)(**ppiVar4 + 8);
        goto LAB_000c31f8;
      }
    }
    else if (iVar22 < 5) {
      if (iVar22 == 2) {
        ppiVar4[1][0x16] = DAT_000c32ec;
        iVar22 = DAT_000c32f4;
        *puVar26 = DAT_000c32f0;
        cocos2d::CCRect::CCRect
                  ((CCRect *)(&stack0x00000124 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                   extraout_s3);
        memcpy(&stack0x000000f4 + iVar1,&stack0x00000124 + iVar1,0x10);
        iVar22 = *(int *)(**(int **)(iVar23 + DAT_000c32e8) +
                          **(int **)(iVar23 + DAT_000c32e4) * 0x2d0 + iVar22);
        fVar70 = extraout_s2_01;
        fVar72 = extraout_s3_01;
        uVar71 = CONCAT44(extraout_s1_01,extraout_s0_01);
        if ((iVar22 != 0) &&
           (uVar71 = CONCAT44(extraout_s1_01,extraout_s0_01),
           *(int *)(&stack0x00000054 + iVar1) != 0)) {
          uVar15 = *(undefined4 *)(**ppiVar4 + 0x74);
LAB_000c31f8:
          iVar22 = *(int *)(iVar23 + DAT_000c3314) + iVar22 * 0xc;
LAB_000c329c:
          uVar71 = FUN_001ed9dc(uVar15,*(undefined4 *)(iVar22 + 8));
          fVar70 = extraout_s2_05;
          fVar72 = extraout_s3_05;
        }
      }
      else if (iVar22 < 3) {
        if (iVar22 != 1) {
LAB_000c333c:
          *puVar32 = DAT_000c36c4;
          cocos2d::CCRect::CCRect
                    ((CCRect *)(&stack0x00000184 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                     extraout_s3);
          puVar6 = &stack0x000000f4 + iVar1;
          __src = &stack0x00000184 + iVar1;
          goto LAB_000c3350;
        }
        ppiVar4[1][0x16] = DAT_000c32d4;
        *puVar25 = DAT_000c32dc;
        cocos2d::CCRect::CCRect
                  ((CCRect *)(&stack0x00000114 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                   extraout_s3);
        memcpy(&stack0x000000f4 + iVar1,&stack0x00000114 + iVar1,0x10);
        iVar22 = *(int *)(**(int **)(iVar23 + DAT_000c32e8) +
                          **(int **)(iVar23 + DAT_000c32e4) * 0x2d0 + 0x26c0);
        fVar70 = extraout_s2_00;
        fVar72 = extraout_s3_00;
        uVar71 = CONCAT44(extraout_s1_00,extraout_s0_00);
        if ((iVar22 != 0) &&
           (uVar71 = CONCAT44(extraout_s1_00,extraout_s0_00),
           *(int *)(&stack0x00000054 + iVar1) != 0)) {
          uVar15 = *(undefined4 *)(**ppiVar4 + 0x50);
          goto LAB_000c31f8;
        }
      }
      else {
        *puVar28 = DAT_000c3308;
        cocos2d::CCRect::CCRect
                  ((CCRect *)(&stack0x00000144 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                   extraout_s3);
        memcpy(&stack0x000000f4 + iVar1,&stack0x00000144 + iVar1,0x10);
        uVar71 = CONCAT44(extraout_s1_03,extraout_s0_03);
        iVar22 = *(int *)(**(int **)(iVar23 + DAT_000c32e8) +
                          **(int **)(iVar23 + DAT_000c32e4) * 0x2d0 + DAT_000c3310);
        fVar70 = extraout_s2_03;
        fVar72 = extraout_s3_03;
        if ((iVar22 != 0) &&
           (uVar71 = CONCAT44(extraout_s1_03,extraout_s0_03),
           *(int *)(&stack0x00000054 + iVar1) != 0)) {
          uVar15 = *(undefined4 *)(**ppiVar4 + 0x18);
          goto LAB_000c31f8;
        }
      }
    }
    else {
      if (iVar22 == 8) {
        *puVar29 = DAT_000c3318;
        cocos2d::CCRect::CCRect
                  ((CCRect *)(&stack0x00000154 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                   extraout_s3);
        puVar6 = &stack0x000000f4 + iVar1;
        __src = &stack0x00000154 + iVar1;
      }
      else {
        if (iVar22 != DAT_000c32d0) {
          if (iVar22 != 5) goto LAB_000c333c;
          ppiVar4[1][0x16] = DAT_000c3324;
          *puVar30 = DAT_000c332c;
          cocos2d::CCRect::CCRect
                    ((CCRect *)(&stack0x00000164 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                     extraout_s3);
          memcpy(&stack0x000000f4 + iVar1,&stack0x00000164 + iVar1,0x10);
          piVar16 = *(int **)(iVar23 + DAT_000c32e8);
          piVar17 = *(int **)(iVar23 + DAT_000c32e4);
          iVar22 = *(int *)(*piVar16 + *piVar17 * 0x2d0 + 0x2800);
          fVar70 = extraout_s2_04;
          fVar72 = extraout_s3_04;
          uVar71 = CONCAT44(extraout_s1_04,extraout_s0_04);
          if ((iVar22 == 0) ||
             (uVar71 = CONCAT44(extraout_s1_04,extraout_s0_04),
             *(int *)(&stack0x00000054 + iVar1) == 0)) goto LAB_000c3356;
          uVar15 = *(undefined4 *)(**ppiVar4 + 4);
          uVar11 = *(undefined4 *)(*(int *)(iVar23 + DAT_000c3314) + iVar22 * 0xc + 8);
          *(int *)(&stack0x00000054 + iVar1) = *(int *)(iVar23 + DAT_000c3314);
          FUN_001ed9dc(uVar15,uVar11);
          uVar15 = *(undefined4 *)(**ppiVar4 + 8);
          iVar22 = *(int *)(&stack0x00000054 + iVar1) +
                   *(int *)(*piVar16 + *piVar17 * 0x2d0 + 0x2800) * 0xc;
          goto LAB_000c329c;
        }
        *puVar31 = DAT_000c3334;
        cocos2d::CCRect::CCRect
                  ((CCRect *)(&stack0x00000174 + iVar1),extraout_s0,extraout_s1,extraout_s2,
                   extraout_s3);
        puVar6 = &stack0x000000f4 + iVar1;
        __src = &stack0x00000174 + iVar1;
      }
LAB_000c3350:
      memcpy(puVar6,__src,0x10);
      fVar70 = extraout_s2_06;
      fVar72 = extraout_s3_06;
      uVar71 = CONCAT44(extraout_s1_05,extraout_s0_05);
    }
LAB_000c3356:
    *puVar33 = *(undefined4 *)(&stack0x00000100 + iVar1);
    cocos2d::CCRect::CCRect
              ((CCRect *)(&stack0x00000194 + iVar1),(float)uVar71,(float)((ulonglong)uVar71 >> 0x20)
               ,fVar70,fVar72);
    memcpy(&stack0x00000104 + iVar1,&stack0x00000194 + iVar1,0x10);
    piVar16 = (int *)__fixsfsi(*(undefined4 *)(&stack0x000000fc + iVar1));
    ppiVar4[2] = piVar16;
    piVar16 = (int *)__fixsfsi(*(undefined4 *)(&stack0x00000100 + iVar1));
    ppiVar4[3] = piVar16;
    *(int **)(&stack0x00000054 + iVar1) = ppiVar4[1];
    *(undefined **)(&stack0x0000005c + iVar1) = &stack0x000001a4 + iVar1;
    uVar15 = __mulsf3(*(int *)(&stack0x000000fc + iVar1) + -0x80000000,0x3f000000);
    iVar22 = *(int *)(&stack0x00000100 + iVar1);
    *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
    uVar71 = __mulsf3(iVar22 + -0x80000000,0x3f000000);
    *piVar34 = iVar22;
    cocos2d::CCRect::CCRect
              ((CCRect *)(&stack0x000001a4 + iVar1),(float)uVar71,(float)((ulonglong)uVar71 >> 0x20)
               ,extraout_s2_07,extraout_s3_07);
    iVar22 = *(int *)(&stack0x00000054 + iVar1);
    puVar20 = *(undefined4 **)(&stack0x0000005c + iVar1);
    uVar15 = puVar20[1];
    uVar11 = puVar20[2];
    *(undefined4 *)(iVar22 + 0xf8) = *puVar20;
    *(undefined4 *)(iVar22 + 0xfc) = uVar15;
    *(undefined4 *)(iVar22 + 0x100) = uVar11;
    *(undefined4 *)(iVar22 + 0x104) = puVar20[3];
    piVar17 = ppiVar4[1];
    *(undefined **)(&stack0x00000058 + iVar1) = &stack0x000001b4 + iVar1;
    uVar15 = __mulsf3(piVar17[0x40],0x3f000000);
    iVar22 = *(int *)(&stack0x00000110 + iVar1);
    *(undefined4 *)(&stack0x00000054 + iVar1) = uVar15;
    uVar71 = __mulsf3(iVar22 + -0x80000000,0x3f000000);
    *piVar35 = iVar22;
    fVar70 = (float)cocos2d::CCRect::CCRect
                              ((CCRect *)(&stack0x000001b4 + iVar1),(float)uVar71,
                               (float)((ulonglong)uVar71 >> 0x20),extraout_s2_08,extraout_s3_08);
    piVar16 = *(int **)(&stack0x00000058 + iVar1);
    iVar22 = piVar16[1];
    iVar24 = piVar16[2];
    piVar17[0x42] = *piVar16;
    piVar17[0x43] = iVar22;
    piVar17[0x44] = iVar24;
    piVar17[0x45] = piVar16[3];
  }
  if ((*(int *)(&stack0x00000060 + iVar1) != 0) && (*(int *)(&stack0x00000074 + iVar1) == 0)) {
    this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    fVar70 = (float)cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
                              (this_00,*(char **)(&stack0x00000060 + iVar1));
  }
  for (iVar22 = 0; piVar16 = (int *)**ppiVar4, iVar22 < *(int *)(*piVar16 + 4); iVar22 = iVar22 + 1)
  {
    if (*(int *)(&stack0x00000060 + iVar1) == 0) {
      uVar15 = *(undefined4 *)piVar16[iVar22];
      *(int *)(&stack0x00000054 + iVar1) = iVar22 * 4;
      *puVar38 = uVar15;
      sprintf(&stack0x000002b4 + iVar1,(char *)(DAT_000c36d0 + 0xc34ce),
              *(undefined4 *)(&stack0x00000068 + iVar1),DAT_000c36d4 + 0xc34d0);
      iVar14 = **ppiVar4;
      iVar24 = *(int *)(iVar14 + 0x284);
      *(undefined4 *)(&stack0x00000054 + iVar1) =
           *(undefined4 *)(*(int *)(&stack0x00000054 + iVar1) + iVar14);
      uVar15 = __floatsisf(iVar24 / 2);
      *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
      uVar71 = __floatsisf(*(int *)(iVar14 + 0x280) / 2 + 0x19);
      uVar71 = cocos2d::CCSize::CCSize
                         ((CCSize *)(&stack0x000000b8 + iVar1),(float)uVar71,
                          (float)((ulonglong)uVar71 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000c0 + iVar1),(float)uVar71,
                 (float)((ulonglong)uVar71 >> 0x20));
      iVar24 = **ppiVar4;
      uVar15 = __floatsisf(*(undefined4 *)(iVar24 + 0x288));
      uVar15 = __addsf3(uVar15,*(undefined4 *)(&stack0x000000f4 + iVar1));
      *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
      uVar71 = __floatsisf(*(undefined4 *)(iVar24 + 0x28c));
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000c8 + iVar1),(float)uVar71,
                 (float)((ulonglong)uVar71 >> 0x20));
      pCVar7 = *(CCNode **)(&stack0x00000064 + iVar1);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x000000c0 + iVar1);
      p_Var13 = *(_KG_Animation **)(&stack0x00000054 + iVar1);
      *(int *)(&stack0xfffffff0 + iVar1) = iVar22;
      *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000000c4 + iVar1);
      *(int *)(&stack0xfffffff4 + iVar1) = iVar22;
      *(undefined4 *)((int)&param_5 + iVar1) = *(undefined4 *)(&stack0x000000c8 + iVar1);
      *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x000000cc + iVar1);
      *puVar39 = *(undefined4 *)(&stack0x000000bc + iVar1);
      piVar16 = (int *)vScriptImgDraw_Fram(pCVar7,&stack0x000002b4 + iVar1,p_Var13,
                                           *(CCSize *)(&stack0x000000b8 + iVar1),*piVar40,
                                           *(int *)(&stack0xfffffff0 + iVar1),
                                           *(CCPoint *)(&stack0xfffffff4 + iVar1),
                                           *(CCSize *)(&stack0xfffffff8 + iVar1));
    }
    else {
      uVar15 = *(undefined4 *)piVar16[iVar22];
      *(undefined4 **)(&stack0x00000054 + iVar1) = (undefined4 *)piVar16[iVar22];
      iVar24 = piVar16[0xa1];
      *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
      uVar15 = __floatsisf(iVar24 / 2);
      *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
      uVar71 = __floatsisf(piVar16[0xa0] / 2 + 0x19);
      uVar71 = cocos2d::CCSize::CCSize
                         ((CCSize *)(&stack0x000000a0 + iVar1),(float)uVar71,
                          (float)((ulonglong)uVar71 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000a8 + iVar1),(float)uVar71,
                 (float)((ulonglong)uVar71 >> 0x20));
      iVar24 = **ppiVar4;
      uVar15 = __floatsisf(*(undefined4 *)(iVar24 + 0x288));
      uVar15 = __addsf3(uVar15,*(undefined4 *)(&stack0x000000f4 + iVar1));
      *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
      uVar71 = __floatsisf(*(undefined4 *)(iVar24 + 0x28c));
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000b0 + iVar1),(float)uVar71,
                 (float)((ulonglong)uVar71 >> 0x20));
      pCVar7 = *(CCNode **)(&stack0x00000064 + iVar1);
      pcVar10 = *(char **)(&stack0x00000058 + iVar1);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x000000a8 + iVar1);
      p_Var13 = *(_KG_Animation **)(&stack0x00000054 + iVar1);
      *(int *)(&stack0xfffffff0 + iVar1) = iVar22;
      *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000000ac + iVar1);
      *(int *)(&stack0xfffffff4 + iVar1) = iVar22;
      *(undefined4 *)((int)&param_5 + iVar1) = *(undefined4 *)(&stack0x000000b0 + iVar1);
      *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x000000b4 + iVar1);
      *puVar36 = *(undefined4 *)(&stack0x000000a4 + iVar1);
      piVar16 = (int *)vScriptImgDraw_Fram_Plist
                                 (pCVar7,pcVar10,p_Var13,*(CCSize *)(&stack0x000000a0 + iVar1),
                                  *piVar37,*(int *)(&stack0xfffffff0 + iVar1),
                                  *(CCPoint *)(&stack0xfffffff4 + iVar1),
                                  *(CCSize *)(&stack0xfffffff8 + iVar1));
    }
    if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000c3a08 + 0xc36e6));
    }
    *(int *)(&stack0x00000054 + iVar1) = **ppiVar4;
    *(undefined4 *)(&stack0x00000058 + iVar1) = *(undefined4 *)(iVar23 + DAT_000c36d8);
    uVar15 = __floatsisf(*(int *)(*(int *)(&stack0x00000054 + iVar1) + 0x284) / 2);
    uVar15 = __subsf3(**(undefined4 **)(&stack0x00000058 + iVar1),uVar15);
    *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
    uVar15 = __floatsisf(*(int *)(*(int *)(&stack0x00000054 + iVar1) + 0x280) / 2);
    uVar71 = __subsf3(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 4),uVar15);
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x000001d8 + iVar1),(float)uVar71,(float)((ulonglong)uVar71 >> 0x20)
              );
    piVar17 = *ppiVar4;
    *(int *)(&stack0x00000058 + iVar1) = iVar22 * 4;
    *(undefined4 *)(&stack0x00000054 + iVar1) = *(undefined4 *)(iVar22 * 4 + *piVar17);
    puVar20 = (undefined4 *)(**(code **)(*piVar16 + 0x38))(piVar16);
    iVar24 = *(int *)(&stack0x00000054 + iVar1);
    iVar14 = *(int *)(&stack0x00000058 + iVar1);
    *(undefined4 *)(iVar24 + 0x20) = *puVar20;
    *(undefined4 *)(iVar24 + 0x24) = puVar20[1];
    uVar15 = *(undefined4 *)(*(int *)(iVar14 + **ppiVar4) + 100);
    *(undefined4 *)(&stack0x00000054 + iVar1) = uVar15;
    iVar24 = __aeabi_fcmpeq(uVar15,DAT_000c36dc);
    if (iVar24 == 0) {
      (**(code **)(*piVar16 + 0x24))(piVar16,*(undefined4 *)(&stack0x00000054 + iVar1));
    }
    iVar24 = *(int *)(iVar22 * 4 + **ppiVar4);
    uVar15 = *(undefined4 *)(iVar24 + 0x38);
    *(int *)(&stack0x00000058 + iVar1) = iVar24;
    *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
    iVar24 = __aeabi_fcmpeq(uVar15,DAT_000c36dc);
    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
    if ((iVar24 == 0) ||
       (iVar24 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x4c),0),
       iVar24 != 0)) {
      iVar24 = __aeabi_fcmpeq(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x4c),0);
      if (iVar24 != 0) {
        uVar15 = *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x60);
        *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
        iVar24 = __aeabi_fcmpeq(uVar15,0);
        if (iVar24 == 0) {
          iVar24 = __aeabi_fcmpeq(*(undefined4 *)(&stack0x0000005c + iVar1),DAT_000c36dc);
          ppcVar18 = (code **)(*(int *)(&stack0x00000054 + iVar1) + 0xec);
          if (iVar24 != 0) goto LAB_000c368c;
          *(code ***)(&stack0x00000054 + iVar1) = ppcVar18;
          uVar2 = __fixunssfsi(*(undefined4 *)(&stack0x00000058 + iVar1));
          pcVar21 = **(code ***)(&stack0x00000054 + iVar1);
          goto LAB_000c3692;
        }
      }
LAB_000c365c:
      uVar2 = 0;
      pcVar21 = *(code **)(*(int *)(&stack0x00000054 + iVar1) + 0xec);
    }
    else {
      if (*(int *)(*(int *)(&stack0x00000058 + iVar1) + 0x40) != 0) goto LAB_000c365c;
      ppcVar18 = (code **)(*(int *)(&stack0x00000054 + iVar1) + 0xec);
LAB_000c368c:
      pcVar21 = *ppcVar18;
      uVar2 = 0xff;
    }
LAB_000c3692:
    (*pcVar21)(piVar16,uVar2);
    iVar14 = *piVar16;
    iVar24 = **ppiVar4;
    *(int *)(&stack0x00000054 + iVar1) = iVar22 * 4;
    (**(code **)(iVar14 + 0x2c))(piVar16,*(undefined4 *)(*(int *)(iVar22 * 4 + iVar24) + 0x18));
    (**(code **)(*piVar16 + 0x34))
              (piVar16,*(undefined4 *)
                        (*(int *)(*(int *)(&stack0x00000054 + iVar1) + **ppiVar4) + 0x1c));
    this_01 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    fVar70 = (float)cocos2d::CCTextureCache::removeAllTextures(this_01);
  }
  if (**(int **)(&stack0x00000080 + iVar1) == 2) {
    cocos2d::CCNode::setScale(*(CCNode **)(&stack0x00000064 + iVar1),fVar70);
  }
  piVar17 = *(int **)(&stack0x00000064 + iVar1);
  piVar16 = (int *)(**(code **)(*piVar17 + 0x90))(piVar17);
  (**(code **)(*piVar16 + 0xac))(piVar16,ppiVar4);
  (**(code **)(*piVar17 + 0xac))(*(undefined4 *)(&stack0x00000064 + iVar1),ppiVar4);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x00000064 + iVar1));
  piVar16 = (int *)**ppiVar4;
  *(int **)(&stack0x00000074 + iVar1) = (int *)(*ppiVar4)[9];
  *(undefined4 *)(*piVar16 + 4) = 0x50;
  FUN_000c4330();
  this_02 = (CCArray *)
            (**(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x58))
                      (*(int **)(&stack0x00000064 + iVar1));
  *(CCArray **)(&stack0x0000005c + iVar1) = this_02;
  if (this_02 == (CCArray *)0x0) {
    this_02 = (CCArray *)FUN_000c432e();
  }
  iVar22 = cocos2d::CCArray::count(this_02);
  if (iVar22 != 0) {
    FUN_000c4320();
  }
  FUN_000c432e();
  iVar22 = cocos2d::CCArray::count(*(CCArray **)(&stack0x0000005c + iVar1));
  if (iVar22 == 0) {
    FUN_000c431e();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x0000005c + iVar1),0);
  memset(&stack0x000001d8 + iVar1,0,0x78);
  memset(&stack0x000000e8 + iVar1,0,0xc);
  iVar22 = *(int *)**ppiVar4;
  if (iVar22 == 0) {
    FUN_000c432e();
  }
  uVar15 = *(undefined4 *)(iVar22 + 0x40);
  *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000070 + iVar1) = uVar15;
  *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
  iVar22 = *(int *)(&stack0x00000070 + iVar1);
  if (iVar22 <= *(int *)(&stack0x00000054 + iVar1)) {
    pCVar8 = *(CCFiniteTimeAction **)(&stack0x000001d8 + iVar1);
    if (pCVar8 == (CCFiniteTimeAction *)0x0) {
      pCVar8 = (CCFiniteTimeAction *)FUN_000c431e();
    }
    if (iVar22 == 1) {
      *(int *)(&stack0x00000054 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,0);
    }
    if (iVar22 == 2) {
      *(int *)(&stack0x00000054 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,*(undefined4 *)(&stack0x000001dc + iVar1),0);
    }
    if (iVar22 != 3) {
      if (iVar22 == 4) {
        piVar16 = *ppiVar4;
        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
        *puVar44 = 0;
      }
      else {
        if (iVar22 != 5) {
          if (iVar22 == 6) {
            piVar16 = *ppiVar4;
            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
            *puVar46 = *(undefined4 *)(&stack0x000001e8 + iVar1);
            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x000001ec + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
          }
          else {
            if (iVar22 != 7) {
              if (iVar22 == 8) {
                piVar16 = *ppiVar4;
                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                *puVar48 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x000001ec + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = 0;
              }
              else {
                if (iVar22 != 9) {
                  if (iVar22 == 10) {
                    piVar16 = *ppiVar4;
                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                    uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                    *puVar50 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                    uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                    uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x000001ec + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x000001fc + iVar1);
                    *(undefined4 *)((int)&param_6 + iVar1) = 0;
                  }
                  else {
                    if (iVar22 != 0xb) {
                      if (iVar22 == 0xc) {
                        piVar16 = *ppiVar4;
                        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                        *puVar52 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x000001ec + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x000001f0 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x000001f4 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x000001f8 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000001fc + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x00000200 + iVar1);
                        *(undefined4 *)((int)&param_7 + iVar1) =
                             *(undefined4 *)(&stack0x00000204 + iVar1);
                        *(undefined4 *)((int)&param_8 + iVar1) = 0;
                      }
                      else {
                        if (iVar22 != 0xd) {
                          if (iVar22 == 0xe) {
                            piVar16 = *ppiVar4;
                            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                            *puVar54 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x000001ec + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f0 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f4 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f8 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000001fc + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000200 + iVar1);
                            *(undefined4 *)((int)&param_7 + iVar1) =
                                 *(undefined4 *)(&stack0x00000204 + iVar1);
                            *(undefined4 *)((int)&param_8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000208 + iVar1);
                            *(undefined4 *)(&param_9 + iVar1) =
                                 *(undefined4 *)(&stack0x0000020c + iVar1);
                            *(undefined4 *)(&param_10 + iVar1) = 0;
                          }
                          else {
                            if (iVar22 != 0xf) {
                              if (iVar22 == 0x10) {
                                piVar16 = *ppiVar4;
                                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                *puVar56 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x000001ec + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f8 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000001fc + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000200 + iVar1);
                                *(undefined4 *)((int)&param_7 + iVar1) =
                                     *(undefined4 *)(&stack0x00000204 + iVar1);
                                *(undefined4 *)((int)&param_8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000208 + iVar1);
                                *(undefined4 *)(&param_9 + iVar1) =
                                     *(undefined4 *)(&stack0x0000020c + iVar1);
                                *(undefined4 *)(&param_10 + iVar1) =
                                     *(undefined4 *)(&stack0x00000210 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000214 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
                              }
                              else {
                                if (iVar22 != 0x11) {
                                  if (iVar22 == 0x12) {
                                    piVar16 = *ppiVar4;
                                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                    uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                    *puVar58 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                    uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                    uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x000001ec + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000001fc + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000200 + iVar1);
                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                         *(undefined4 *)(&stack0x00000204 + iVar1);
                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000208 + iVar1);
                                    *(undefined4 *)(&param_9 + iVar1) =
                                         *(undefined4 *)(&stack0x0000020c + iVar1);
                                    *(undefined4 *)(&param_10 + iVar1) =
                                         *(undefined4 *)(&stack0x00000210 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000214 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000218 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000021c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) = 0;
                                  }
                                  else {
                                    if (iVar22 != 0x13) {
                                      if (iVar22 == 0x14) {
                                        piVar16 = *ppiVar4;
                                        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                        *puVar60 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x000001ec + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f0 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f4 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f8 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000001fc + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000200 + iVar1);
                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                             *(undefined4 *)(&stack0x00000204 + iVar1);
                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000208 + iVar1);
                                        *(undefined4 *)(&param_9 + iVar1) =
                                             *(undefined4 *)(&stack0x0000020c + iVar1);
                                        *(undefined4 *)(&param_10 + iVar1) =
                                             *(undefined4 *)(&stack0x00000210 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000214 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000218 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000021c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000220 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000224 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
                                      }
                                      else {
                                        if (iVar22 != 0x15) {
                                          if (iVar22 == 0x16) {
                                            piVar16 = *ppiVar4;
                                            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                            *puVar62 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001ec + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f0 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f4 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f8 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001fc + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000200 + iVar1);
                                            *(undefined4 *)((int)&param_7 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000204 + iVar1);
                                            *(undefined4 *)((int)&param_8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000208 + iVar1);
                                            *(undefined4 *)(&param_9 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000020c + iVar1);
                                            *(undefined4 *)(&param_10 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000210 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000214 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000218 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000021c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000220 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000224 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000228 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000022c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
                                          }
                                          else {
                                            if (iVar22 != 0x17) {
                                              if (iVar22 == 0x18) {
                                                piVar16 = *ppiVar4;
                                                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                                *puVar64 = *(undefined4 *)(&stack0x000001e8 + iVar1)
                                                ;
                                                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001ec + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f8 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001fc + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000200 + iVar1);
                                                *(undefined4 *)((int)&param_7 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000204 + iVar1);
                                                *(undefined4 *)((int)&param_8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000208 + iVar1);
                                                *(undefined4 *)(&param_9 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000020c + iVar1);
                                                *(undefined4 *)(&param_10 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000210 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000214 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000218 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000021c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000220 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000224 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000228 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000022c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000230 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000234 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
                                              }
                                              else {
                                                if (iVar22 != 0x19) {
                                                  if (iVar22 == 0x1a) {
                                                    piVar16 = *ppiVar4;
                                                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x000001dc + iVar1);
                                                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                                    *puVar66 = *(undefined4 *)
                                                                (&stack0x000001e8 + iVar1);
                                                    uVar11 = *(undefined4 *)
                                                              (&stack0x000001e0 + iVar1);
                                                    uVar19 = *(undefined4 *)
                                                              (&stack0x000001e4 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001ec + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001fc + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000200 + iVar1);
                                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000204 + iVar1);
                                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000208 + iVar1);
                                                    *(undefined4 *)(&param_9 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000020c + iVar1);
                                                    *(undefined4 *)(&param_10 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000210 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000214 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000218 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000021c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000220 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000224 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000228 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000022c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000230 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000234 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000238 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000023c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) = 0;
                                                  }
                                                  else {
                                                    if (iVar22 != 0x1b) {
                                                      if (iVar22 == 0x1c) {
                                                        piVar16 = *ppiVar4;
                                                        *(undefined4 *)(&stack0x00000058 + iVar1) =
                                                             0;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x000001dc + iVar1);
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             *piVar16;
                                                        *puVar68 = *(undefined4 *)
                                                                    (&stack0x000001e8 + iVar1);
                                                        uVar11 = *(undefined4 *)
                                                                  (&stack0x000001e0 + iVar1);
                                                        uVar19 = *(undefined4 *)
                                                                  (&stack0x000001e4 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001ec + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f0 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f4 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f8 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001fc + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000200 + iVar1);
                                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000204 + iVar1);
                                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000208 + iVar1);
                                                        *(undefined4 *)(&param_9 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000020c + iVar1);
                                                        *(undefined4 *)(&param_10 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000210 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000214 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000218 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000021c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000220 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000224 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000228 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000022c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000230 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000234 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000238 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000023c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000240 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000244 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             0;
                                                      }
                                                      else {
                                                        if (iVar22 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c435c +
                                                                                 0xc431c));
                                                        }
                                                        piVar16 = *ppiVar4;
                                                        *(undefined4 *)(&stack0x00000058 + iVar1) =
                                                             0;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x000001dc + iVar1);
                                                        *(int *)(&stack0x00000054 + iVar1) =
                                                             *piVar16;
                                                        *puVar69 = *(undefined4 *)
                                                                    (&stack0x000001e8 + iVar1);
                                                        uVar11 = *(undefined4 *)
                                                                  (&stack0x000001e0 + iVar1);
                                                        uVar19 = *(undefined4 *)
                                                                  (&stack0x000001e4 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001ec + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f0 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f4 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001f8 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x000001fc + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000200 + iVar1);
                                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000204 + iVar1);
                                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000208 + iVar1);
                                                        *(undefined4 *)(&param_9 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000020c + iVar1);
                                                        *(undefined4 *)(&param_10 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000210 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000214 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000218 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000021c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000220 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000224 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000228 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000022c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000230 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000234 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000238 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000023c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000240 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000244 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000248 + iVar1);
                                                        *(undefined4 *)(&stack0x00000050 + iVar1) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar8,uVar15,uVar11,uVar19);
                                                    }
                                                    piVar16 = *ppiVar4;
                                                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x000001dc + iVar1);
                                                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                                    *puVar67 = *(undefined4 *)
                                                                (&stack0x000001e8 + iVar1);
                                                    uVar11 = *(undefined4 *)
                                                              (&stack0x000001e0 + iVar1);
                                                    uVar19 = *(undefined4 *)
                                                              (&stack0x000001e4 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001ec + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x000001fc + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000200 + iVar1);
                                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000204 + iVar1);
                                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000208 + iVar1);
                                                    *(undefined4 *)(&param_9 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000020c + iVar1);
                                                    *(undefined4 *)(&param_10 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000210 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000214 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000218 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000021c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000220 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000224 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000228 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000022c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000230 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000234 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000238 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000023c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000240 + iVar1);
                                                    *(undefined4 *)(&stack0x00000048 + iVar1) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar8,uVar15,uVar11,uVar19);
                                                }
                                                piVar16 = *ppiVar4;
                                                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                                *puVar65 = *(undefined4 *)(&stack0x000001e8 + iVar1)
                                                ;
                                                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001ec + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001f8 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x000001fc + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000200 + iVar1);
                                                *(undefined4 *)((int)&param_7 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000204 + iVar1);
                                                *(undefined4 *)((int)&param_8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000208 + iVar1);
                                                *(undefined4 *)(&param_9 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000020c + iVar1);
                                                *(undefined4 *)(&param_10 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000210 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000214 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000218 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000021c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000220 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000224 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000228 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000022c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000230 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000234 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000238 + iVar1);
                                                *(undefined4 *)(&stack0x00000040 + iVar1) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar8,uVar15,uVar11,uVar19);
                                            }
                                            piVar16 = *ppiVar4;
                                            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                            *puVar63 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001ec + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f0 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f4 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001f8 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x000001fc + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000200 + iVar1);
                                            *(undefined4 *)((int)&param_7 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000204 + iVar1);
                                            *(undefined4 *)((int)&param_8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000208 + iVar1);
                                            *(undefined4 *)(&param_9 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000020c + iVar1);
                                            *(undefined4 *)(&param_10 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000210 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000214 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000218 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000021c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000220 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000224 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000228 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000022c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000230 + iVar1);
                                            *(undefined4 *)(&stack0x00000038 + iVar1) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                                        }
                                        piVar16 = *ppiVar4;
                                        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                        *puVar61 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x000001ec + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f0 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f4 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x000001f8 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x000001fc + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000200 + iVar1);
                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                             *(undefined4 *)(&stack0x00000204 + iVar1);
                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000208 + iVar1);
                                        *(undefined4 *)(&param_9 + iVar1) =
                                             *(undefined4 *)(&stack0x0000020c + iVar1);
                                        *(undefined4 *)(&param_10 + iVar1) =
                                             *(undefined4 *)(&stack0x00000210 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000214 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000218 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000021c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000220 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000224 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                             *(undefined4 *)(&stack0x00000228 + iVar1);
                                        *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                                    }
                                    piVar16 = *ppiVar4;
                                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                    uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                    *puVar59 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                    uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                    uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x000001ec + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x000001fc + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000200 + iVar1);
                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                         *(undefined4 *)(&stack0x00000204 + iVar1);
                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000208 + iVar1);
                                    *(undefined4 *)(&param_9 + iVar1) =
                                         *(undefined4 *)(&stack0x0000020c + iVar1);
                                    *(undefined4 *)(&param_10 + iVar1) =
                                         *(undefined4 *)(&stack0x00000210 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000214 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000218 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000021c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                         *(undefined4 *)(&stack0x00000220 + iVar1);
                                    *(undefined4 *)(&stack0x00000028 + iVar1) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                                }
                                piVar16 = *ppiVar4;
                                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                                *puVar57 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x000001ec + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x000001f8 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x000001fc + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000200 + iVar1);
                                *(undefined4 *)((int)&param_7 + iVar1) =
                                     *(undefined4 *)(&stack0x00000204 + iVar1);
                                *(undefined4 *)((int)&param_8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000208 + iVar1);
                                *(undefined4 *)(&param_9 + iVar1) =
                                     *(undefined4 *)(&stack0x0000020c + iVar1);
                                *(undefined4 *)(&param_10 + iVar1) =
                                     *(undefined4 *)(&stack0x00000210 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000214 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                     *(undefined4 *)(&stack0x00000218 + iVar1);
                                *(undefined4 *)(&stack0x00000020 + iVar1) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                            }
                            piVar16 = *ppiVar4;
                            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                            *puVar55 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x000001ec + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f0 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f4 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x000001f8 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x000001fc + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000200 + iVar1);
                            *(undefined4 *)((int)&param_7 + iVar1) =
                                 *(undefined4 *)(&stack0x00000204 + iVar1);
                            *(undefined4 *)((int)&param_8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000208 + iVar1);
                            *(undefined4 *)(&param_9 + iVar1) =
                                 *(undefined4 *)(&stack0x0000020c + iVar1);
                            *(undefined4 *)(&param_10 + iVar1) =
                                 *(undefined4 *)(&stack0x00000210 + iVar1);
                            *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                        }
                        piVar16 = *ppiVar4;
                        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                        *puVar53 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x000001ec + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x000001f0 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x000001f4 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x000001f8 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x000001fc + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x00000200 + iVar1);
                        *(undefined4 *)((int)&param_7 + iVar1) =
                             *(undefined4 *)(&stack0x00000204 + iVar1);
                        *(undefined4 *)((int)&param_8 + iVar1) =
                             *(undefined4 *)(&stack0x00000208 + iVar1);
                        *(undefined4 *)(&param_9 + iVar1) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                    }
                    piVar16 = *ppiVar4;
                    *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                    uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                    *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                    *puVar51 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                    uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                    uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x000001ec + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x000001f0 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x000001f4 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x000001f8 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x000001fc + iVar1);
                    *(undefined4 *)((int)&param_6 + iVar1) =
                         *(undefined4 *)(&stack0x00000200 + iVar1);
                    *(undefined4 *)((int)&param_7 + iVar1) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
                }
                piVar16 = *ppiVar4;
                *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
                uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
                *(int *)(&stack0x00000054 + iVar1) = *piVar16;
                *puVar49 = *(undefined4 *)(&stack0x000001e8 + iVar1);
                uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
                uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x000001ec + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x000001f0 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x000001f4 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000001f8 + iVar1)
                ;
                *(undefined4 *)((int)&param_5 + iVar1) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
            }
            piVar16 = *ppiVar4;
            *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
            uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
            *(int *)(&stack0x00000054 + iVar1) = *piVar16;
            *puVar47 = *(undefined4 *)(&stack0x000001e8 + iVar1);
            uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
            uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x000001ec + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x000001f0 + iVar1);
            *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
        }
        piVar16 = *ppiVar4;
        *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
        uVar15 = *(undefined4 *)(&stack0x000001dc + iVar1);
        *(int *)(&stack0x00000054 + iVar1) = *piVar16;
        uVar11 = *(undefined4 *)(&stack0x000001e0 + iVar1);
        uVar19 = *(undefined4 *)(&stack0x000001e4 + iVar1);
        *puVar45 = *(undefined4 *)(&stack0x000001e8 + iVar1);
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar15,uVar11,uVar19);
    }
    *(int *)(&stack0x00000054 + iVar1) = **ppiVar4;
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar8,*(undefined4 *)(&stack0x000001dc + iVar1),
               *(undefined4 *)(&stack0x000001e0 + iVar1),0);
  }
  *(int **)(&stack0x00000060 + iVar1) = *ppiVar4;
  if (*(int *)(&stack0x00000054 + iVar1) != 0) {
LAB_000c3948:
    iVar23 = ***(int ***)(&stack0x00000060 + iVar1);
    uVar15 = *(undefined4 *)(iVar23 + *(int *)(&stack0x00000054 + iVar1) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000060 + iVar1) = uVar15;
    iVar22 = __aeabi_fcmpeq(uVar15,0);
    if (iVar22 == 0) {
      uVar15 = __subsf3(*(undefined4 *)(&stack0x00000060 + iVar1),
                        *(undefined4 *)(&stack0x000000ec + iVar1));
      *(undefined4 *)(&stack0x000000e8 + iVar1) = uVar15;
      *(undefined4 *)(&stack0x000000ec + iVar1) = *(undefined4 *)(&stack0x00000060 + iVar1);
    }
    else {
      *(CCPoint **)(&stack0x000000e8 + iVar1) = DAT_000c3a10;
      *(CCPoint **)(&stack0x000000ec + iVar1) = DAT_000c3a10;
    }
    if (*(int *)(&stack0x00000058 + iVar1) == 0) {
      *(undefined4 *)(&stack0x0000006c + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
      iVar22 = iVar23 + *(int *)(&stack0x00000054 + iVar1) * 0x1c;
      *(int *)(&stack0x00000060 + iVar1) = *(int *)(&stack0x00000054 + iVar1) * 0x1c;
      uVar15 = *(undefined4 *)(iVar22 + 0x50);
      *(int *)(&stack0x00000068 + iVar1) = iVar22;
      uVar15 = __mulsf3(uVar15,0x3f000000);
      uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar23 + 0x20));
      *(undefined4 *)(&stack0x00000078 + iVar1) = uVar15;
      uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000068 + iVar1) + 0x54),0x3f000000);
      uVar71 = __subsf3(*(undefined4 *)(iVar23 + 0x24),uVar15);
      uVar71 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000e0 + iVar1),(float)uVar71,
                          (float)((ulonglong)uVar71 >> 0x20));
      piVar16 = (int *)**ppiVar4;
      iVar22 = *piVar16 + *(int *)(&stack0x00000060 + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar22 + 0x60);
      uVar15 = *(undefined4 *)(iVar22 + 100);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000058 + iVar1);
      *(int **)((int)&piStack_4 + iVar1) = piVar16;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
      CVar9 = *(CCPoint *)(&stack0x0000006c + iVar1);
      CVar12 = *(CCSize *)(&stack0x000000e0 + iVar1);
      *puVar43 = *(undefined4 *)(iVar22 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar71,CVar9,CVar12,(float)((ulonglong)uVar71 >> 0x20),extraout_s2_12,
                SUB41(*(undefined4 *)(&stack0x000000e4 + iVar1),0),*(_KG_Anit **)(iVar22 + 0x58));
    }
    *(undefined4 *)(&stack0x00000068 + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
    iVar22 = iVar23 + *(int *)(&stack0x00000054 + iVar1) * 0x1c;
    *(int *)(&stack0x00000058 + iVar1) = *(int *)(&stack0x00000054 + iVar1) * 0x1c;
    uVar15 = *(undefined4 *)(iVar22 + 0x50);
    *(int *)(&stack0x00000060 + iVar1) = iVar22;
    uVar15 = __mulsf3(uVar15,0x3f000000);
    uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar23 + 0x20));
    *(undefined4 *)(&stack0x0000006c + iVar1) = uVar15;
    uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000060 + iVar1) + 0x54),0x3f000000);
    uVar71 = __subsf3(*(undefined4 *)(iVar23 + 0x24),uVar15);
    uVar71 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000d8 + iVar1),(float)uVar71,
                        (float)((ulonglong)uVar71 >> 0x20));
    piVar16 = (int *)**ppiVar4;
    iVar22 = *piVar16 + *(int *)(&stack0x00000058 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar22 + 0x60);
    uVar15 = *(undefined4 *)(iVar22 + 100);
    *(int **)((int)&piStack_4 + iVar1) = piVar16;
    CVar9 = *(CCPoint *)(&stack0x00000068 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 1;
    CVar12 = *(CCSize *)(&stack0x000000d8 + iVar1);
    *puVar42 = *(undefined4 *)(iVar22 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar71,CVar9,CVar12,(float)((ulonglong)uVar71 >> 0x20),extraout_s2_11,
              SUB41(*(undefined4 *)(&stack0x000000dc + iVar1),0),*(_KG_Anit **)(iVar22 + 0x58));
  }
  *(undefined4 *)(&stack0x00000068 + iVar1) = 0;
  piVar16 = **(int ***)(&stack0x00000060 + iVar1);
  *(undefined4 *)(&stack0x0000006c + iVar1) = 0;
  uVar15 = *(undefined4 *)(*piVar16 + 0x4c);
  iVar22 = __aeabi_fcmpgt(uVar15,0);
  if (iVar22 == 0) goto LAB_000c3948;
  *(undefined4 *)(&stack0x000000ec + iVar1) = uVar15;
  uVar15 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_06);
  *(undefined4 *)(&stack0x00000060 + iVar1) = uVar15;
  memset(&stack0x000001c4 + iVar1,*(int *)(&stack0x00000054 + iVar1),0x14);
  iVar23 = *(int *)(*(int *)(&stack0x0000006c + iVar1) +
                   *(int *)(*(int *)(&stack0x00000068 + iVar1) + (int)*ppiVar4));
  uVar15 = *(undefined4 *)(iVar23 + 0x50);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
  iVar22 = __aeabi_fcmpgt(uVar15,DAT_000c3a0c);
  if ((iVar22 == 0) &&
     (iVar22 = __aeabi_fcmpgt(*(undefined4 *)(iVar23 + 0x54),DAT_000c3a0c), iVar22 == 0)) {
    iVar22 = *(int *)(&stack0x00000054 + iVar1);
  }
  else {
    uVar15 = __addsf3(*(undefined4 *)(&stack0x00000058 + iVar1),*(undefined4 *)(iVar23 + 0x20));
    uVar11 = *(undefined4 *)(iVar23 + 0x54);
    *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
    uVar71 = __subsf3(*(undefined4 *)(iVar23 + 0x24),uVar11);
    fVar70 = (float)cocos2d::CCPoint::CCPoint
                              ((CCPoint *)(&stack0x000000d0 + iVar1),(float)uVar71,
                               (float)((ulonglong)uVar71 >> 0x20));
    uVar15 = cocos2d::CCMoveTo::actionWithDuration(fVar70,DAT_000c3a10);
    iVar22 = 1;
    *(undefined4 *)(&stack0x000001c4 + iVar1) = uVar15;
  }
  iVar23 = *(int *)**ppiVar4;
  *(int *)(&stack0x00000058 + iVar1) = iVar23;
  uVar15 = *(undefined4 *)(iVar23 + 0x58);
  *(undefined4 *)(&stack0x00000068 + iVar1) = uVar15;
  iVar23 = __aeabi_fcmpgt(uVar15,DAT_000c3a0c);
  fVar70 = extraout_s0_07;
  fVar72 = extraout_s1_06;
  fVar73 = extraout_s2_09;
  if ((iVar23 != 0) ||
     (iVar23 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x5c),
                              DAT_000c3a0c), fVar70 = extraout_s0_08, fVar72 = extraout_s1_07,
     fVar73 = extraout_s2_10, iVar23 != 0)) {
    uVar15 = cocos2d::CCScaleTo::actionWithDuration(fVar70,fVar72,fVar73);
    *(undefined4 *)(&stack0x000001c4 + iVar22 * 4 + iVar1) = uVar15;
    iVar22 = iVar22 + 1;
  }
  uVar15 = *(undefined4 *)(*(int *)**ppiVar4 + 0x60);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
  iVar23 = __aeabi_fcmplt(uVar15,DAT_000c3a18);
  if (iVar23 == 0) {
    iVar23 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x00000058 + iVar1),DAT_000c3a1c);
    if (iVar23 == 0) goto LAB_000c38ca;
    fVar70 = (float)__fixunssfsi(*(undefined4 *)(&stack0x00000058 + iVar1));
    uVar3 = (uchar)DAT_000c3a14;
  }
  else {
    uVar3 = (uchar)DAT_000c3a14;
    fVar70 = extraout_s0_09;
  }
  uVar15 = cocos2d::CCFadeTo::actionWithDuration(fVar70,uVar3);
  *(undefined4 *)(&stack0x000001c4 + iVar22 * 4 + iVar1) = uVar15;
  iVar22 = iVar22 + 1;
LAB_000c38ca:
  uVar15 = *(undefined4 *)(*(int *)**ppiVar4 + 100);
  *(undefined4 *)(&stack0x00000058 + iVar1) = uVar15;
  iVar23 = __aeabi_fcmpgt(uVar15,DAT_000c3a1c);
  if (iVar23 == 0) {
    if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000060 + iVar1),0);
    }
  }
  else {
    uVar15 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_10,extraout_s1_08);
    *(undefined4 *)(&stack0x000001c4 + iVar22 * 4 + iVar1) = uVar15;
    iVar22 = iVar22 + 1;
  }
  pCVar8 = *(CCFiniteTimeAction **)(&stack0x000001c4 + iVar1);
  if (iVar22 == 1) {
    uVar15 = cocos2d::CCSpawn::actions(pCVar8,0);
  }
  else {
    uVar15 = *(undefined4 *)(&stack0x000001c8 + iVar1);
    if (iVar22 == 2) {
      uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,0);
    }
    else {
      uVar11 = *(undefined4 *)(&stack0x000001cc + iVar1);
      if (iVar22 == 3) {
        uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,uVar11,0);
      }
      else {
        uVar19 = *(undefined4 *)(&stack0x000001d0 + iVar1);
        *puVar41 = 0;
        uVar15 = cocos2d::CCSpawn::actions(pCVar8,uVar15,uVar11,uVar19);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000060 + iVar1),uVar15,0);
}


