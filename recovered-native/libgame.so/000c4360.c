/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c4360  Symbol: vDrawScript_Lethal */

/* vDrawScript_Lethal(char const*, char const*, char const*, cocos2d::CCNode*, cocos2d::CCPoint,
   int, int, int, bool) */

void vDrawScript_Lethal(char *param_1,char *param_2,char *param_3,CCNode *param_4,CCPoint param_5,
                       int param_6,int param_7,int param_8,bool param_9)

{
  int iVar1;
  uchar uVar2;
  CCNode *pCVar3;
  int *piVar4;
  CCLayer *this;
  int **ppiVar5;
  void *pvVar6;
  CCSpriteFrameCache *this_00;
  CCTextureCache *this_01;
  CCArray *this_02;
  CCFiniteTimeAction *pCVar7;
  CCPoint CVar8;
  uint uVar9;
  CCSize CVar10;
  int iVar11;
  char *pcVar12;
  _KG_Animation *p_Var13;
  int **ppiVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  code *pcVar19;
  int iVar20;
  char **ppcVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar58;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar59;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar60;
  float extraout_s1_02;
  float extraout_s2;
  float extraout_s2_00;
  float fVar61;
  float extraout_s2_01;
  float extraout_s2_02;
  int *piStack_4;
  int *piVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
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
  
  iVar1 = DAT_000c46a4;
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  piVar25 = (int *)(&stack0xffffffec + DAT_000c46a4);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  piVar28 = (int *)(&stack0xffffffec + DAT_000c46a4);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar33 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar35 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar37 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar49 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar56 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_000c46a4);
  puVar18 = *(undefined4 **)(DAT_000c46a8 + 0xc4372);
  *(uint *)(&stack0x00000070 + DAT_000c46a4) = (uint)(byte)(&stack0x00000298)[DAT_000c46a4];
  *(char **)(&stack0x00000060 + DAT_000c46a4) = param_1;
  uVar15 = *puVar18;
  *(char **)(&stack0x0000005c + DAT_000c46a4) = param_3;
  *(char **)(&stack0x00000058 + DAT_000c46a4) = param_2;
  *(undefined4 *)(&stack0x00000268 + DAT_000c46a4) = uVar15;
  uVar15 = *(undefined4 *)(&stack0x00000284 + DAT_000c46a4);
  uVar22 = *(undefined4 *)(&stack0x00000288 + DAT_000c46a4);
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x000000f4 + DAT_000c46a4));
  cocos2d::CCRect::CCRect((CCRect *)(&stack0x00000104 + iVar1));
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000c46ac + 0xc4396),1);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,0);
  (**(code **)(*piVar4 + 0x38))();
  sprintf(&stack0x000001a0 + iVar1,(char *)(DAT_000c46b0 + 0xc43b2),
          *(undefined4 *)(&stack0x00000060 + iVar1),*(undefined4 *)(&stack0x00000058 + iVar1));
  this = (CCLayer *)operator_new(0x110);
  *(CCLayer **)(&stack0x00000064 + iVar1) = this;
  uVar59 = cocos2d::CCLayer::CCLayer(this);
  *(undefined4 **)(&stack0x00000080 + iVar1) = puVar18;
  iVar11 = **(int **)(DAT_000c46b4 + 0xc43ce);
  *(int **)(&stack0x00000074 + iVar1) = *(int **)(DAT_000c46b4 + 0xc43ce);
  if (iVar11 == 2) {
    *(undefined4 *)(&stack0x00000068 + iVar1) =
         *(undefined4 *)(**(int **)(&stack0x00000064 + iVar1) + 0x3c);
    __addsf3(uVar15,uVar15);
    uVar59 = __addsf3(uVar22,uVar22);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000088 + iVar1),(float)uVar59,
               (float)((ulonglong)uVar59 >> 0x20));
    uVar59 = (**(code **)(&stack0x00000068 + iVar1))
                       (*(undefined4 *)(&stack0x00000064 + iVar1),&stack0x00000088 + iVar1);
  }
  else {
    pcVar19 = *(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000090 + iVar1),(float)uVar59,
               (float)((ulonglong)uVar59 >> 0x20));
    uVar59 = (*pcVar19)(*(undefined4 *)(&stack0x00000064 + iVar1),&stack0x00000090 + iVar1);
  }
  pcVar19 = *(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000098 + iVar1),(float)uVar59,(float)((ulonglong)uVar59 >> 0x20))
  ;
  (*pcVar19)(*(undefined4 *)(&stack0x00000064 + iVar1),&stack0x00000098 + iVar1);
  (**(code **)(*(int *)param_4 + 0xcc))
            (param_4,*(undefined4 *)(&stack0x00000064 + iVar1),
             *(undefined4 *)(&stack0x0000028c + iVar1),*(undefined4 *)(&stack0x00000290 + iVar1));
  ppiVar5 = (int **)operator_new(0x24);
  piVar4 = (int *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State((_KG_Unit_State *)piVar4);
  ppiVar5[1] = piVar4;
  Init_Unit_Stage((_Unit_Stage *)ppiVar5);
  piVar4 = (int *)operator_new(0x2c);
  iVar11 = 0;
  *ppiVar5 = piVar4;
  do {
    piVar4 = *ppiVar5;
    pvVar6 = operator_new(0x298);
    piVar4[iVar11] = (int)pvVar6;
    iVar11 = iVar11 + 1;
    (*ppiVar5)[8] = 1;
  } while (iVar11 != 8);
  pcVar12 = *(char **)(&stack0x00000058 + iVar1);
  (*ppiVar5)[9] = 1;
  anim_Lode_copy(&stack0x000001a0 + iVar1,(_KG_Anit *)**ppiVar5,pcVar12);
  iVar11 = 1;
  do {
    iVar20 = iVar11 + 1;
    operator_delete((void *)(*ppiVar5)[iVar11]);
    (*ppiVar5)[iVar11] = 0;
    iVar11 = iVar20;
  } while (iVar20 != 8);
  uVar59 = CONCAT44(extraout_s1,extraout_s0);
  if ((*(int *)(&stack0x0000005c + iVar1) != 0) &&
     (uVar59 = CONCAT44(extraout_s1,extraout_s0), *(int *)(&stack0x00000070 + iVar1) == 0)) {
    this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    uVar59 = cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
                       (this_00,*(char **)(&stack0x0000005c + iVar1));
  }
  iVar11 = 0;
  while( true ) {
    piVar4 = (int *)**ppiVar5;
    if (*(int *)(*piVar4 + 4) <= iVar11) break;
    if (*(int *)(&stack0x0000005c + iVar1) == 0) {
      *puVar26 = *(undefined4 *)piVar4[iVar11];
      sprintf(&stack0x00000204 + iVar1,(char *)(DAT_000c46b8 + 0xc4522),
              *(undefined4 *)(&stack0x00000060 + iVar1),DAT_000c46bc + 0xc4524);
      iVar23 = **ppiVar5;
      iVar20 = *(int *)(iVar23 + 0x284);
      *(undefined4 *)(&stack0x00000058 + iVar1) = *(undefined4 *)(iVar11 * 4 + iVar23);
      __floatsisf(iVar20 / 2);
      uVar59 = __floatsisf(*(int *)(iVar23 + 0x280) / 2 + 0x19);
      uVar59 = cocos2d::CCSize::CCSize
                         ((CCSize *)(&stack0x000000b8 + iVar1),(float)uVar59,
                          (float)((ulonglong)uVar59 >> 0x20));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x000000c0 + iVar1),(float)uVar59,
                 (float)((ulonglong)uVar59 >> 0x20));
      iVar20 = **ppiVar5;
      uVar15 = __floatsisf(*(undefined4 *)(iVar20 + 0x288));
      __addsf3(uVar15,*(undefined4 *)(&stack0x000000f4 + iVar1));
      uVar59 = __floatsisf(*(undefined4 *)(iVar20 + 0x28c));
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000c8 + iVar1),(float)uVar59,
                 (float)((ulonglong)uVar59 >> 0x20));
      pCVar3 = *(CCNode **)(&stack0x00000064 + iVar1);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x000000c0 + iVar1);
      p_Var13 = *(_KG_Animation **)(&stack0x00000058 + iVar1);
      *(int *)(&stack0xfffffff0 + iVar1) = iVar11;
      *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000000c4 + iVar1);
      *(int *)(&stack0xfffffff4 + iVar1) = iVar11;
      *(undefined4 *)((int)&param_5 + iVar1) = *(undefined4 *)(&stack0x000000c8 + iVar1);
      *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x000000cc + iVar1);
      *puVar27 = *(undefined4 *)(&stack0x000000bc + iVar1);
      piVar4 = (int *)vScriptImgDraw_Fram(pCVar3,&stack0x00000204 + iVar1,p_Var13,
                                          *(CCSize *)(&stack0x000000b8 + iVar1),*piVar28,
                                          *(int *)(&stack0xfffffff0 + iVar1),
                                          *(CCPoint *)(&stack0xfffffff4 + iVar1),
                                          *(CCSize *)(&stack0xfffffff8 + iVar1));
    }
    else {
      ppcVar21 = (char **)piVar4[iVar11];
      pcVar12 = *ppcVar21;
      uVar59 = cocos2d::CCSize::CCSize
                         ((CCSize *)(&stack0x000000a0 + iVar1),(float)uVar59,
                          (float)((ulonglong)uVar59 >> 0x20));
      uVar59 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000a8 + iVar1),(float)uVar59,
                          (float)((ulonglong)uVar59 >> 0x20));
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x000000b0 + iVar1),(float)uVar59,
                 (float)((ulonglong)uVar59 >> 0x20));
      pCVar3 = *(CCNode **)(&stack0x00000064 + iVar1);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x000000a8 + iVar1);
      *(int *)(&stack0xfffffff0 + iVar1) = iVar11;
      *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x000000ac + iVar1);
      *(int *)(&stack0xfffffff4 + iVar1) = iVar11;
      *(undefined4 *)((int)&param_5 + iVar1) = *(undefined4 *)(&stack0x000000b0 + iVar1);
      *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x000000b4 + iVar1);
      *puVar24 = *(undefined4 *)(&stack0x000000a4 + iVar1);
      piVar4 = (int *)vScriptImgDraw_Fram_Plist
                                (pCVar3,pcVar12,(_KG_Animation *)ppcVar21,
                                 *(CCSize *)(&stack0x000000a0 + iVar1),*piVar25,
                                 *(int *)(&stack0xfffffff0 + iVar1),
                                 *(CCPoint *)(&stack0xfffffff4 + iVar1),
                                 *(CCSize *)(&stack0xfffffff8 + iVar1));
    }
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000c4a54 + 0xc47c0));
    }
    puVar18 = *(undefined4 **)(DAT_000c46c0 + 0xc45cc);
    *(int *)(&stack0x00000058 + iVar1) = **ppiVar5;
    uVar15 = __floatsisf(*(int *)(*(int *)(&stack0x00000058 + iVar1) + 0x284) / 2);
    uVar15 = __subsf3(*puVar18,uVar15);
    iVar20 = *(int *)(*(int *)(&stack0x00000058 + iVar1) + 0x280);
    *(undefined4 *)(&stack0x00000068 + iVar1) = uVar15;
    uVar15 = __floatsisf(iVar20 / 2);
    uVar59 = __subsf3(puVar18[1],uVar15);
    cocos2d::CCSize::CCSize
              ((CCSize *)(&stack0x00000128 + iVar1),(float)uVar59,(float)((ulonglong)uVar59 >> 0x20)
              );
    piVar16 = *ppiVar5;
    *(int *)(&stack0x00000058 + iVar1) = iVar11 * 4;
    iVar20 = *(int *)(iVar11 * 4 + *piVar16);
    puVar18 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
    uVar15 = DAT_000c46c4;
    *(undefined4 *)(iVar20 + 0x20) = *puVar18;
    *(undefined4 *)(iVar20 + 0x24) = puVar18[1];
    uVar22 = *(undefined4 *)(*(int *)(*(int *)(&stack0x00000058 + iVar1) + **ppiVar5) + 100);
    iVar20 = __aeabi_fcmpeq(uVar22,uVar15);
    if (iVar20 == 0) {
      (**(code **)(*piVar4 + 0x24))(piVar4,uVar22);
    }
    iVar23 = *(int *)(iVar11 * 4 + **ppiVar5);
    iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar23 + 0x38),DAT_000c46c4);
    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
    if ((iVar20 == 0) || (iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar23 + 0x4c),0), iVar20 != 0)) {
      iVar20 = __aeabi_fcmpeq(*(undefined4 *)(iVar23 + 0x4c),0);
      if (iVar20 != 0) {
        uVar15 = *(undefined4 *)(iVar23 + 0x60);
        *(undefined4 *)(&stack0x00000068 + iVar1) = uVar15;
        iVar20 = __aeabi_fcmpeq(uVar15,0);
        if (iVar20 == 0) {
          uVar9 = __fixunssfsi(*(undefined4 *)(&stack0x00000068 + iVar1));
          uVar9 = uVar9 & 0xff;
          pcVar19 = *(code **)(*(int *)(&stack0x00000058 + iVar1) + 0xec);
          goto LAB_000c46da;
        }
      }
      pcVar19 = *(code **)(*(int *)(&stack0x00000058 + iVar1) + 0xec);
LAB_000c46a0:
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(iVar23 + 0x40);
      pcVar19 = *(code **)(*(int *)(&stack0x00000058 + iVar1) + 0xec);
      if (uVar9 != 0) goto LAB_000c46a0;
    }
LAB_000c46da:
    (*pcVar19)(piVar4,uVar9);
    iVar20 = iVar11 * 4;
    if (*(int *)(&stack0x00000290 + iVar1) == DAT_000c4a4c) {
      iVar23 = *(int *)(**ppiVar5 + iVar20);
      uVar15 = *(undefined4 *)(iVar23 + 0x18);
      *(int *)(&stack0x00000058 + iVar1) = iVar23;
      uVar15 = __addsf3(uVar15);
      *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x18) = uVar15;
      uVar15 = *(undefined4 *)(*(int *)(**ppiVar5 + iVar20) + 0x1c);
      *(int *)(&stack0x00000058 + iVar1) = *(int *)(**ppiVar5 + iVar20);
      uVar15 = __addsf3(uVar15);
      *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x1c) = uVar15;
      (**(code **)(*piVar4 + 0x2c))(piVar4,*(undefined4 *)(*(int *)(**ppiVar5 + iVar20) + 0x18));
      iVar23 = 0;
      (**(code **)(*piVar4 + 0x34))(piVar4,*(undefined4 *)(*(int *)(**ppiVar5 + iVar20) + 0x1c));
      *(int *)(&stack0x00000068 + iVar1) = iVar20;
      do {
        iVar20 = *(int *)(*(int *)(&stack0x00000068 + iVar1) + **ppiVar5) + iVar23 * 0x1c;
        uVar15 = *(undefined4 *)(iVar20 + 0x58);
        *(int *)(&stack0x00000058 + iVar1) = iVar20;
        iVar20 = __aeabi_fcmpeq(uVar15,DAT_000c4a50);
        if (iVar20 == 0) {
          uVar15 = __addsf3(uVar15,uVar15);
          *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x58) = uVar15;
        }
        iVar20 = *(int *)(*(int *)(&stack0x00000068 + iVar1) + **ppiVar5) + iVar23 * 0x1c;
        uVar15 = *(undefined4 *)(iVar20 + 0x5c);
        *(int *)(&stack0x00000058 + iVar1) = iVar20;
        iVar20 = __aeabi_fcmpeq(uVar15,DAT_000c4a50);
        if (iVar20 == 0) {
          uVar15 = __addsf3(uVar15,uVar15);
          *(undefined4 *)(*(int *)(&stack0x00000058 + iVar1) + 0x5c) = uVar15;
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0x50);
    }
    else {
      (**(code **)(*piVar4 + 0x2c))(piVar4,*(undefined4 *)(*(int *)(**ppiVar5 + iVar20) + 0x18));
      (**(code **)(*piVar4 + 0x34))(piVar4,*(undefined4 *)(*(int *)(**ppiVar5 + iVar20) + 0x1c));
    }
    this_01 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
    uVar59 = cocos2d::CCTextureCache::removeAllTextures(this_01);
    iVar11 = iVar11 + 1;
  }
  if (**(int **)(&stack0x00000074 + iVar1) == 2) {
    cocos2d::CCNode::setScale(*(CCNode **)(&stack0x00000064 + iVar1),(float)uVar59);
  }
  piVar16 = *(int **)(&stack0x00000064 + iVar1);
  piVar4 = (int *)(**(code **)(*piVar16 + 0x90))(piVar16);
  (**(code **)(*piVar4 + 0xac))(piVar4,ppiVar5);
  (**(code **)(*piVar16 + 0xac))(*(undefined4 *)(&stack0x00000064 + iVar1),ppiVar5);
  cocos2d::CCObject::release(*(CCObject **)(&stack0x00000064 + iVar1));
  piVar4 = (int *)**ppiVar5;
  *(int **)(&stack0x00000078 + iVar1) = (int *)(*ppiVar5)[9];
  *(undefined4 *)(*piVar4 + 4) = 0x50;
  FUN_000c5418();
  this_02 = (CCArray *)
            (**(code **)(**(int **)(&stack0x00000064 + iVar1) + 0x58))
                      (*(int **)(&stack0x00000064 + iVar1));
  *(CCArray **)(&stack0x00000068 + iVar1) = this_02;
  if (this_02 == (CCArray *)0x0) {
    this_02 = (CCArray *)FUN_000c5416();
  }
  iVar11 = cocos2d::CCArray::count(this_02);
  if (iVar11 != 0) {
    FUN_000c5408();
  }
  FUN_000c5416();
  iVar11 = cocos2d::CCArray::count(*(CCArray **)(&stack0x00000068 + iVar1));
  if (iVar11 == 0) {
    FUN_000c5406();
  }
  cocos2d::CCArray::objectAtIndex(*(CCArray **)(&stack0x00000068 + iVar1),0);
  memset(&stack0x00000128 + iVar1,0,0x78);
  memset(&stack0x000000e8 + iVar1,0,0xc);
  iVar11 = *(int *)**ppiVar5;
  if (iVar11 == 0) {
    FUN_000c5416();
  }
  uVar15 = *(undefined4 *)(iVar11 + 0x40);
  *(undefined4 *)(&stack0x00000058 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000074 + iVar1) = uVar15;
  *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
  if (*(int *)(&stack0x00000074 + iVar1) <= *(int *)(&stack0x00000058 + iVar1)) {
    uVar59 = CONCAT44(*(int *)(&stack0x00000074 + iVar1),*(int *)(&stack0x00000128 + iVar1));
    if (*(int *)(&stack0x00000128 + iVar1) == 0) {
      uVar59 = FUN_000c5406();
    }
    iVar11 = (int)((ulonglong)uVar59 >> 0x20);
    pCVar7 = (CCFiniteTimeAction *)uVar59;
    if (iVar11 == 1) {
      *(int *)(&stack0x00000058 + iVar1) = **ppiVar5;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar7,0);
    }
    if (iVar11 == 2) {
      *(int *)(&stack0x00000058 + iVar1) = **ppiVar5;
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar7,*(undefined4 *)(&stack0x0000012c + iVar1),0);
    }
    if (iVar11 != 3) {
      if (iVar11 == 4) {
        piVar4 = *ppiVar5;
        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
        *puVar32 = 0;
      }
      else {
        if (iVar11 != 5) {
          if (iVar11 == 6) {
            piVar4 = *ppiVar5;
            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
            *puVar34 = *(undefined4 *)(&stack0x00000138 + iVar1);
            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000013c + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
          }
          else {
            if (iVar11 != 7) {
              if (iVar11 == 8) {
                piVar4 = *ppiVar5;
                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                *puVar36 = *(undefined4 *)(&stack0x00000138 + iVar1);
                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x0000013c + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x00000140 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x00000144 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = 0;
              }
              else {
                if (iVar11 != 9) {
                  if (iVar11 == 10) {
                    piVar4 = *ppiVar5;
                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                    uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                    *puVar38 = *(undefined4 *)(&stack0x00000138 + iVar1);
                    uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                    uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x0000013c + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x00000140 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x00000144 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x00000148 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x0000014c + iVar1);
                    *(undefined4 *)((int)&param_6 + iVar1) = 0;
                  }
                  else {
                    if (iVar11 != 0xb) {
                      if (iVar11 == 0xc) {
                        piVar4 = *ppiVar5;
                        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                        *puVar40 = *(undefined4 *)(&stack0x00000138 + iVar1);
                        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x0000013c + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x00000140 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x00000144 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x00000148 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x0000014c + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x00000150 + iVar1);
                        *(undefined4 *)((int)&param_7 + iVar1) =
                             *(undefined4 *)(&stack0x00000154 + iVar1);
                        *(undefined4 *)((int)&param_8 + iVar1) = 0;
                      }
                      else {
                        if (iVar11 != 0xd) {
                          if (iVar11 == 0xe) {
                            piVar4 = *ppiVar5;
                            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                            *puVar42 = *(undefined4 *)(&stack0x00000138 + iVar1);
                            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                            *(undefined4 *)((int)&param_7 + iVar1) =
                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                            *(undefined4 *)((int)&param_8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000158 + iVar1);
                            *(undefined4 *)(&param_9 + iVar1) =
                                 *(undefined4 *)(&stack0x0000015c + iVar1);
                            *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
                          }
                          else {
                            if (iVar11 != 0xf) {
                              if (iVar11 == 0x10) {
                                piVar4 = *ppiVar5;
                                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                *puVar44 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                *(undefined4 *)((int)&param_7 + iVar1) =
                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                *(undefined4 *)((int)&param_8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                *(undefined4 *)(&param_9 + iVar1) =
                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x00000160 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000164 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
                              }
                              else {
                                if (iVar11 != 0x11) {
                                  if (iVar11 == 0x12) {
                                    piVar4 = *ppiVar5;
                                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                    uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                    *puVar46 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                    uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                    uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                    *(undefined4 *)(&param_9 + iVar1) =
                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000168 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000016c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) = 0;
                                  }
                                  else {
                                    if (iVar11 != 0x13) {
                                      if (iVar11 == 0x14) {
                                        piVar4 = *ppiVar5;
                                        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                        *puVar48 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x0000013c + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x00000140 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000144 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x00000148 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x0000014c + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000150 + iVar1);
                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                             *(undefined4 *)(&stack0x00000154 + iVar1);
                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000158 + iVar1);
                                        *(undefined4 *)(&param_9 + iVar1) =
                                             *(undefined4 *)(&stack0x0000015c + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000160 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000164 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000168 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000016c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000170 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000174 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) = 0;
                                      }
                                      else {
                                        if (iVar11 != 0x15) {
                                          if (iVar11 == 0x16) {
                                            piVar4 = *ppiVar5;
                                            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                            *puVar50 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                                            *(undefined4 *)((int)&param_7 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                                            *(undefined4 *)((int)&param_8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000158 + iVar1);
                                            *(undefined4 *)(&param_9 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000015c + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000160 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000164 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000168 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000016c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000170 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000174 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000178 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000017c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) = 0;
                                          }
                                          else {
                                            if (iVar11 != 0x17) {
                                              if (iVar11 == 0x18) {
                                                piVar4 = *ppiVar5;
                                                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                                *puVar52 = *(undefined4 *)(&stack0x00000138 + iVar1)
                                                ;
                                                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                                *(undefined4 *)((int)&param_7 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                                *(undefined4 *)((int)&param_8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                                *(undefined4 *)(&param_9 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000160 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000164 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000168 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000016c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000170 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000174 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000178 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000017c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000180 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000184 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) = 0;
                                              }
                                              else {
                                                if (iVar11 != 0x19) {
                                                  if (iVar11 == 0x1a) {
                                                    piVar4 = *ppiVar5;
                                                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                                    *puVar54 = *(undefined4 *)
                                                                (&stack0x00000138 + iVar1);
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                    uVar17 = *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                                    *(undefined4 *)(&param_9 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000168 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000016c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000170 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000174 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000178 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000017c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000180 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000184 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000188 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) = 0;
                                                  }
                                                  else {
                                                    if (iVar11 != 0x1b) {
                                                      if (iVar11 == 0x1c) {
                                                        piVar4 = *ppiVar5;
                                                        *(undefined4 *)(&stack0x0000005c + iVar1) =
                                                             0;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x0000012c + iVar1);
                                                        *(int *)(&stack0x00000058 + iVar1) = *piVar4
                                                        ;
                                                        *puVar56 = *(undefined4 *)
                                                                    (&stack0x00000138 + iVar1);
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x00000130 + iVar1);
                                                        uVar17 = *(undefined4 *)
                                                                  (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar1);
                                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar1);
                                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar1);
                                                        *(undefined4 *)(&param_9 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000160 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000164 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000168 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000016c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000170 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000174 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000178 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000017c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000180 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000184 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000188 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000018c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000190 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000194 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             0;
                                                      }
                                                      else {
                                                        if (iVar11 != 0x1d) {
                    /* WARNING: Subroutine does not return */
                                                          cocos2d::CCLog((char *)(DAT_000c5444 +
                                                                                 0xc5404));
                                                        }
                                                        piVar4 = *ppiVar5;
                                                        *(undefined4 *)(&stack0x0000005c + iVar1) =
                                                             0;
                                                        uVar15 = *(undefined4 *)
                                                                  (&stack0x0000012c + iVar1);
                                                        *(int *)(&stack0x00000058 + iVar1) = *piVar4
                                                        ;
                                                        *puVar57 = *(undefined4 *)
                                                                    (&stack0x00000138 + iVar1);
                                                        uVar22 = *(undefined4 *)
                                                                  (&stack0x00000130 + iVar1);
                                                        uVar17 = *(undefined4 *)
                                                                  (&stack0x00000134 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000013c + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000140 + iVar1);
                                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000144 + iVar1);
                                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000148 + iVar1);
                                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000014c + iVar1);
                                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000150 + iVar1);
                                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000154 + iVar1);
                                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000158 + iVar1);
                                                        *(undefined4 *)(&param_9 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000015c + iVar1);
                                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000160 + iVar1);
                                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000164 + iVar1);
                                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000168 + iVar1);
                                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000016c + iVar1);
                                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000170 + iVar1);
                                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000174 + iVar1);
                                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000178 + iVar1);
                                                        *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000017c + iVar1);
                                                        *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000180 + iVar1);
                                                        *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000184 + iVar1);
                                                        *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000188 + iVar1);
                                                        *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x0000018c + iVar1);
                                                        *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000190 + iVar1);
                                                        *(undefined4 *)(&stack0x00000048 + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000194 + iVar1);
                                                        *(undefined4 *)(&stack0x0000004c + iVar1) =
                                                             *(undefined4 *)
                                                              (&stack0x00000198 + iVar1);
                                                        *(undefined4 *)(&stack0x00000050 + iVar1) =
                                                             0;
                                                      }
                    /* WARNING: Subroutine does not return */
                                                      cocos2d::CCSequence::actions
                                                                (pCVar7,uVar15,uVar22,uVar17);
                                                    }
                                                    piVar4 = *ppiVar5;
                                                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                                    uVar15 = *(undefined4 *)
                                                              (&stack0x0000012c + iVar1);
                                                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                                    *puVar55 = *(undefined4 *)
                                                                (&stack0x00000138 + iVar1);
                                                    uVar22 = *(undefined4 *)
                                                              (&stack0x00000130 + iVar1);
                                                    uVar17 = *(undefined4 *)
                                                              (&stack0x00000134 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                                    *(undefined4 *)(&param_9 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000168 + iVar1);
                                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000016c + iVar1);
                                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000170 + iVar1);
                                                    *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000174 + iVar1);
                                                    *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000178 + iVar1);
                                                    *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000017c + iVar1);
                                                    *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000180 + iVar1);
                                                    *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000184 + iVar1);
                                                    *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                         *(undefined4 *)(&stack0x00000188 + iVar1);
                                                    *(undefined4 *)(&stack0x00000040 + iVar1) =
                                                         *(undefined4 *)(&stack0x0000018c + iVar1);
                                                    *(undefined4 *)(&stack0x00000044 + iVar1) =
                                                         *(undefined4 *)(&stack0x00000190 + iVar1);
                                                    *(undefined4 *)(&stack0x00000048 + iVar1) = 0;
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  cocos2d::CCSequence::actions
                                                            (pCVar7,uVar15,uVar22,uVar17);
                                                }
                                                piVar4 = *ppiVar5;
                                                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                                *puVar53 = *(undefined4 *)(&stack0x00000138 + iVar1)
                                                ;
                                                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                                *(undefined4 *)((int)&param_5 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                                *(undefined4 *)((int)&param_6 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                                *(undefined4 *)((int)&param_7 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                                *(undefined4 *)((int)&param_8 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                                *(undefined4 *)(&param_9 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000160 + iVar1);
                                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000164 + iVar1);
                                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000168 + iVar1);
                                                *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000016c + iVar1);
                                                *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000170 + iVar1);
                                                *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000174 + iVar1);
                                                *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000178 + iVar1);
                                                *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                     *(undefined4 *)(&stack0x0000017c + iVar1);
                                                *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000180 + iVar1);
                                                *(undefined4 *)(&stack0x00000038 + iVar1) =
                                                     *(undefined4 *)(&stack0x00000184 + iVar1);
                                                *(undefined4 *)(&stack0x0000003c + iVar1) =
                                                     *(undefined4 *)(&stack0x00000188 + iVar1);
                                                *(undefined4 *)(&stack0x00000040 + iVar1) = 0;
                                              }
                    /* WARNING: Subroutine does not return */
                                              cocos2d::CCSequence::actions
                                                        (pCVar7,uVar15,uVar22,uVar17);
                                            }
                                            piVar4 = *ppiVar5;
                                            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                            *puVar51 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                                            *(undefined4 *)((int)&param_5 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                                            *(undefined4 *)((int)&param_6 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                                            *(undefined4 *)((int)&param_7 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                                            *(undefined4 *)((int)&param_8 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000158 + iVar1);
                                            *(undefined4 *)(&param_9 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000015c + iVar1);
                                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000160 + iVar1);
                                            *(undefined4 *)(&stack0x00000018 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000164 + iVar1);
                                            *(undefined4 *)(&stack0x0000001c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000168 + iVar1);
                                            *(undefined4 *)(&stack0x00000020 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000016c + iVar1);
                                            *(undefined4 *)(&stack0x00000024 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000170 + iVar1);
                                            *(undefined4 *)(&stack0x00000028 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000174 + iVar1);
                                            *(undefined4 *)(&stack0x0000002c + iVar1) =
                                                 *(undefined4 *)(&stack0x00000178 + iVar1);
                                            *(undefined4 *)(&stack0x00000030 + iVar1) =
                                                 *(undefined4 *)(&stack0x0000017c + iVar1);
                                            *(undefined4 *)(&stack0x00000034 + iVar1) =
                                                 *(undefined4 *)(&stack0x00000180 + iVar1);
                                            *(undefined4 *)(&stack0x00000038 + iVar1) = 0;
                                          }
                    /* WARNING: Subroutine does not return */
                                          cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                                        }
                                        piVar4 = *ppiVar5;
                                        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                        *puVar49 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                             *(undefined4 *)(&stack0x0000013c + iVar1);
                                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                             *(undefined4 *)(&stack0x00000140 + iVar1);
                                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000144 + iVar1);
                                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                                             *(undefined4 *)(&stack0x00000148 + iVar1);
                                        *(undefined4 *)((int)&param_5 + iVar1) =
                                             *(undefined4 *)(&stack0x0000014c + iVar1);
                                        *(undefined4 *)((int)&param_6 + iVar1) =
                                             *(undefined4 *)(&stack0x00000150 + iVar1);
                                        *(undefined4 *)((int)&param_7 + iVar1) =
                                             *(undefined4 *)(&stack0x00000154 + iVar1);
                                        *(undefined4 *)((int)&param_8 + iVar1) =
                                             *(undefined4 *)(&stack0x00000158 + iVar1);
                                        *(undefined4 *)(&param_9 + iVar1) =
                                             *(undefined4 *)(&stack0x0000015c + iVar1);
                                        *(undefined4 *)(&stack0x00000014 + iVar1) =
                                             *(undefined4 *)(&stack0x00000160 + iVar1);
                                        *(undefined4 *)(&stack0x00000018 + iVar1) =
                                             *(undefined4 *)(&stack0x00000164 + iVar1);
                                        *(undefined4 *)(&stack0x0000001c + iVar1) =
                                             *(undefined4 *)(&stack0x00000168 + iVar1);
                                        *(undefined4 *)(&stack0x00000020 + iVar1) =
                                             *(undefined4 *)(&stack0x0000016c + iVar1);
                                        *(undefined4 *)(&stack0x00000024 + iVar1) =
                                             *(undefined4 *)(&stack0x00000170 + iVar1);
                                        *(undefined4 *)(&stack0x00000028 + iVar1) =
                                             *(undefined4 *)(&stack0x00000174 + iVar1);
                                        *(undefined4 *)(&stack0x0000002c + iVar1) =
                                             *(undefined4 *)(&stack0x00000178 + iVar1);
                                        *(undefined4 *)(&stack0x00000030 + iVar1) = 0;
                                      }
                    /* WARNING: Subroutine does not return */
                                      cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                                    }
                                    piVar4 = *ppiVar5;
                                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                    uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                    *puVar47 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                    uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                    uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                         *(undefined4 *)(&stack0x0000013c + iVar1);
                                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                         *(undefined4 *)(&stack0x00000140 + iVar1);
                                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000144 + iVar1);
                                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                                         *(undefined4 *)(&stack0x00000148 + iVar1);
                                    *(undefined4 *)((int)&param_5 + iVar1) =
                                         *(undefined4 *)(&stack0x0000014c + iVar1);
                                    *(undefined4 *)((int)&param_6 + iVar1) =
                                         *(undefined4 *)(&stack0x00000150 + iVar1);
                                    *(undefined4 *)((int)&param_7 + iVar1) =
                                         *(undefined4 *)(&stack0x00000154 + iVar1);
                                    *(undefined4 *)((int)&param_8 + iVar1) =
                                         *(undefined4 *)(&stack0x00000158 + iVar1);
                                    *(undefined4 *)(&param_9 + iVar1) =
                                         *(undefined4 *)(&stack0x0000015c + iVar1);
                                    *(undefined4 *)(&stack0x00000014 + iVar1) =
                                         *(undefined4 *)(&stack0x00000160 + iVar1);
                                    *(undefined4 *)(&stack0x00000018 + iVar1) =
                                         *(undefined4 *)(&stack0x00000164 + iVar1);
                                    *(undefined4 *)(&stack0x0000001c + iVar1) =
                                         *(undefined4 *)(&stack0x00000168 + iVar1);
                                    *(undefined4 *)(&stack0x00000020 + iVar1) =
                                         *(undefined4 *)(&stack0x0000016c + iVar1);
                                    *(undefined4 *)(&stack0x00000024 + iVar1) =
                                         *(undefined4 *)(&stack0x00000170 + iVar1);
                                    *(undefined4 *)(&stack0x00000028 + iVar1) = 0;
                                  }
                    /* WARNING: Subroutine does not return */
                                  cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                                }
                                piVar4 = *ppiVar5;
                                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                                *puVar45 = *(undefined4 *)(&stack0x00000138 + iVar1);
                                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                     *(undefined4 *)(&stack0x0000013c + iVar1);
                                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                     *(undefined4 *)(&stack0x00000140 + iVar1);
                                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000144 + iVar1);
                                *(undefined4 *)((int)&piStack_4 + iVar1) =
                                     *(undefined4 *)(&stack0x00000148 + iVar1);
                                *(undefined4 *)((int)&param_5 + iVar1) =
                                     *(undefined4 *)(&stack0x0000014c + iVar1);
                                *(undefined4 *)((int)&param_6 + iVar1) =
                                     *(undefined4 *)(&stack0x00000150 + iVar1);
                                *(undefined4 *)((int)&param_7 + iVar1) =
                                     *(undefined4 *)(&stack0x00000154 + iVar1);
                                *(undefined4 *)((int)&param_8 + iVar1) =
                                     *(undefined4 *)(&stack0x00000158 + iVar1);
                                *(undefined4 *)(&param_9 + iVar1) =
                                     *(undefined4 *)(&stack0x0000015c + iVar1);
                                *(undefined4 *)(&stack0x00000014 + iVar1) =
                                     *(undefined4 *)(&stack0x00000160 + iVar1);
                                *(undefined4 *)(&stack0x00000018 + iVar1) =
                                     *(undefined4 *)(&stack0x00000164 + iVar1);
                                *(undefined4 *)(&stack0x0000001c + iVar1) =
                                     *(undefined4 *)(&stack0x00000168 + iVar1);
                                *(undefined4 *)(&stack0x00000020 + iVar1) = 0;
                              }
                    /* WARNING: Subroutine does not return */
                              cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                            }
                            piVar4 = *ppiVar5;
                            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                            *puVar43 = *(undefined4 *)(&stack0x00000138 + iVar1);
                            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                            *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                                 *(undefined4 *)(&stack0x0000013c + iVar1);
                            *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                                 *(undefined4 *)(&stack0x00000140 + iVar1);
                            *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000144 + iVar1);
                            *(undefined4 *)((int)&piStack_4 + iVar1) =
                                 *(undefined4 *)(&stack0x00000148 + iVar1);
                            *(undefined4 *)((int)&param_5 + iVar1) =
                                 *(undefined4 *)(&stack0x0000014c + iVar1);
                            *(undefined4 *)((int)&param_6 + iVar1) =
                                 *(undefined4 *)(&stack0x00000150 + iVar1);
                            *(undefined4 *)((int)&param_7 + iVar1) =
                                 *(undefined4 *)(&stack0x00000154 + iVar1);
                            *(undefined4 *)((int)&param_8 + iVar1) =
                                 *(undefined4 *)(&stack0x00000158 + iVar1);
                            *(undefined4 *)(&param_9 + iVar1) =
                                 *(undefined4 *)(&stack0x0000015c + iVar1);
                            *(undefined4 *)(&stack0x00000014 + iVar1) =
                                 *(undefined4 *)(&stack0x00000160 + iVar1);
                            *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
                          }
                    /* WARNING: Subroutine does not return */
                          cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                        }
                        piVar4 = *ppiVar5;
                        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                        *puVar41 = *(undefined4 *)(&stack0x00000138 + iVar1);
                        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                        *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                             *(undefined4 *)(&stack0x0000013c + iVar1);
                        *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                             *(undefined4 *)(&stack0x00000140 + iVar1);
                        *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                             *(undefined4 *)(&stack0x00000144 + iVar1);
                        *(undefined4 *)((int)&piStack_4 + iVar1) =
                             *(undefined4 *)(&stack0x00000148 + iVar1);
                        *(undefined4 *)((int)&param_5 + iVar1) =
                             *(undefined4 *)(&stack0x0000014c + iVar1);
                        *(undefined4 *)((int)&param_6 + iVar1) =
                             *(undefined4 *)(&stack0x00000150 + iVar1);
                        *(undefined4 *)((int)&param_7 + iVar1) =
                             *(undefined4 *)(&stack0x00000154 + iVar1);
                        *(undefined4 *)((int)&param_8 + iVar1) =
                             *(undefined4 *)(&stack0x00000158 + iVar1);
                        *(undefined4 *)(&param_9 + iVar1) = 0;
                      }
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                    }
                    piVar4 = *ppiVar5;
                    *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                    uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                    *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                    *puVar39 = *(undefined4 *)(&stack0x00000138 + iVar1);
                    uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                    uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                    *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                         *(undefined4 *)(&stack0x0000013c + iVar1);
                    *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                         *(undefined4 *)(&stack0x00000140 + iVar1);
                    *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                         *(undefined4 *)(&stack0x00000144 + iVar1);
                    *(undefined4 *)((int)&piStack_4 + iVar1) =
                         *(undefined4 *)(&stack0x00000148 + iVar1);
                    *(undefined4 *)((int)&param_5 + iVar1) =
                         *(undefined4 *)(&stack0x0000014c + iVar1);
                    *(undefined4 *)((int)&param_6 + iVar1) =
                         *(undefined4 *)(&stack0x00000150 + iVar1);
                    *(undefined4 *)((int)&param_7 + iVar1) = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
                }
                piVar4 = *ppiVar5;
                *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
                uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
                *(int *)(&stack0x00000058 + iVar1) = *piVar4;
                *puVar37 = *(undefined4 *)(&stack0x00000138 + iVar1);
                uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
                uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
                *(undefined4 *)(&stack0xfffffff0 + iVar1) =
                     *(undefined4 *)(&stack0x0000013c + iVar1);
                *(undefined4 *)(&stack0xfffffff4 + iVar1) =
                     *(undefined4 *)(&stack0x00000140 + iVar1);
                *(undefined4 *)(&stack0xfffffff8 + iVar1) =
                     *(undefined4 *)(&stack0x00000144 + iVar1);
                *(undefined4 *)((int)&piStack_4 + iVar1) = *(undefined4 *)(&stack0x00000148 + iVar1)
                ;
                *(undefined4 *)((int)&param_5 + iVar1) = 0;
              }
                    /* WARNING: Subroutine does not return */
              cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
            }
            piVar4 = *ppiVar5;
            *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
            uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
            *(int *)(&stack0x00000058 + iVar1) = *piVar4;
            *puVar35 = *(undefined4 *)(&stack0x00000138 + iVar1);
            uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
            uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000013c + iVar1);
            *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000140 + iVar1);
            *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
        }
        piVar4 = *ppiVar5;
        *(undefined4 *)(&stack0x0000005c + iVar1) = 0;
        uVar15 = *(undefined4 *)(&stack0x0000012c + iVar1);
        *(int *)(&stack0x00000058 + iVar1) = *piVar4;
        uVar22 = *(undefined4 *)(&stack0x00000130 + iVar1);
        uVar17 = *(undefined4 *)(&stack0x00000134 + iVar1);
        *puVar33 = *(undefined4 *)(&stack0x00000138 + iVar1);
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
      }
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar7,uVar15,uVar22,uVar17);
    }
    *(int *)(&stack0x00000058 + iVar1) = **ppiVar5;
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions
              (pCVar7,*(undefined4 *)(&stack0x0000012c + iVar1),
               *(undefined4 *)(&stack0x00000130 + iVar1),0);
  }
  ppiVar14 = (int **)*ppiVar5;
  *(int ***)(&stack0x00000060 + iVar1) = ppiVar14;
  if (*(int *)(&stack0x00000058 + iVar1) != 0) {
LAB_000c4a20:
    iVar20 = ***(int ***)(&stack0x00000060 + iVar1);
    uVar15 = *(undefined4 *)(iVar20 + *(int *)(&stack0x00000058 + iVar1) * 0x1c + 0x4c);
    *(undefined4 *)(&stack0x00000060 + iVar1) = uVar15;
    iVar11 = __aeabi_fcmpeq(uVar15,0);
    if (iVar11 == 0) {
      uVar15 = __subsf3(*(undefined4 *)(&stack0x00000060 + iVar1),
                        *(undefined4 *)(&stack0x000000ec + iVar1));
      *(undefined4 *)(&stack0x000000e8 + iVar1) = uVar15;
      *(undefined4 *)(&stack0x000000ec + iVar1) = *(undefined4 *)(&stack0x00000060 + iVar1);
    }
    else {
      *(CCPoint **)(&stack0x000000e8 + iVar1) = DAT_000c4a5c;
      *(CCPoint **)(&stack0x000000ec + iVar1) = DAT_000c4a5c;
    }
    if (*(int *)(&stack0x0000005c + iVar1) == 0) {
      *(undefined4 *)(&stack0x00000070 + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
      *(int *)(&stack0x00000060 + iVar1) = *(int *)(&stack0x00000058 + iVar1) * 0x1c;
      iVar11 = iVar20 + *(int *)(&stack0x00000058 + iVar1) * 0x1c;
      uVar15 = *(undefined4 *)(iVar11 + 0x50);
      *(int *)(&stack0x0000006c + iVar1) = iVar11;
      uVar15 = __mulsf3(uVar15,0x3f000000);
      uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar20 + 0x20));
      *(undefined4 *)(&stack0x0000007c + iVar1) = uVar15;
      uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x0000006c + iVar1) + 0x54),0x3f000000);
      uVar59 = __subsf3(*(undefined4 *)(iVar20 + 0x24),uVar15);
      uVar59 = cocos2d::CCPoint::CCPoint
                         ((CCPoint *)(&stack0x000000e0 + iVar1),(float)uVar59,
                          (float)((ulonglong)uVar59 >> 0x20));
      piVar4 = (int *)**ppiVar5;
      iVar11 = *piVar4 + *(int *)(&stack0x00000060 + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar11 + 0x60);
      uVar15 = *(undefined4 *)(iVar11 + 100);
      *(int **)((int)&piStack_4 + iVar1) = piVar4;
      CVar8 = *(CCPoint *)(&stack0x00000070 + iVar1);
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
      CVar10 = *(CCSize *)(&stack0x000000e0 + iVar1);
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x0000005c + iVar1);
      *puVar31 = *(undefined4 *)(iVar11 + 0x5c);
                    /* WARNING: Subroutine does not return */
      KG_action((float)uVar59,CVar8,CVar10,(float)((ulonglong)uVar59 >> 0x20),extraout_s2_02,
                SUB41(*(undefined4 *)(&stack0x000000e4 + iVar1),0),*(_KG_Anit **)(iVar11 + 0x58));
    }
    *(undefined4 *)(&stack0x0000006c + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
    iVar11 = iVar20 + *(int *)(&stack0x00000058 + iVar1) * 0x1c;
    *(int *)(&stack0x0000005c + iVar1) = *(int *)(&stack0x00000058 + iVar1) * 0x1c;
    uVar15 = *(undefined4 *)(iVar11 + 0x50);
    *(int *)(&stack0x00000060 + iVar1) = iVar11;
    uVar15 = __mulsf3(uVar15,0x3f000000);
    uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar20 + 0x20));
    *(undefined4 *)(&stack0x00000070 + iVar1) = uVar15;
    uVar15 = __mulsf3(*(undefined4 *)(*(int *)(&stack0x00000060 + iVar1) + 0x54),0x3f000000);
    uVar59 = __subsf3(*(undefined4 *)(iVar20 + 0x24),uVar15);
    uVar59 = cocos2d::CCPoint::CCPoint
                       ((CCPoint *)(&stack0x000000d8 + iVar1),(float)uVar59,
                        (float)((ulonglong)uVar59 >> 0x20));
    piVar4 = (int *)**ppiVar5;
    iVar11 = *piVar4 + *(int *)(&stack0x0000005c + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar11 + 0x60);
    uVar15 = *(undefined4 *)(iVar11 + 100);
    *(int **)((int)&piStack_4 + iVar1) = piVar4;
    CVar8 = *(CCPoint *)(&stack0x0000006c + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar15;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = 1;
    CVar10 = *(CCSize *)(&stack0x000000d8 + iVar1);
    *puVar30 = *(undefined4 *)(iVar11 + 0x5c);
                    /* WARNING: Subroutine does not return */
    KG_action((float)uVar59,CVar8,CVar10,(float)((ulonglong)uVar59 >> 0x20),extraout_s2_01,
              SUB41(*(undefined4 *)(&stack0x000000dc + iVar1),0),*(_KG_Anit **)(iVar11 + 0x58));
  }
  piVar4 = *ppiVar14;
  *(undefined4 *)(&stack0x0000006c + iVar1) = 0;
  iVar11 = *piVar4;
  *(undefined4 *)(&stack0x00000070 + iVar1) = 0;
  uVar15 = *(undefined4 *)(iVar11 + 0x4c);
  iVar11 = __aeabi_fcmpgt(uVar15,0);
  if (iVar11 == 0) goto LAB_000c4a20;
  *(undefined4 *)(&stack0x000000ec + iVar1) = uVar15;
  uVar15 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_00);
  *(undefined4 *)(&stack0x00000060 + iVar1) = uVar15;
  memset(&stack0x00000114 + iVar1,*(int *)(&stack0x00000058 + iVar1),0x14);
  iVar20 = *(int *)(*(int *)(&stack0x00000070 + iVar1) +
                   *(int *)(*(int *)(&stack0x0000006c + iVar1) + (int)*ppiVar5));
  uVar15 = *(undefined4 *)(iVar20 + 0x50);
  *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
  iVar11 = __aeabi_fcmpgt(uVar15,DAT_000c4a58);
  if ((iVar11 == 0) &&
     (iVar11 = __aeabi_fcmpgt(*(undefined4 *)(iVar20 + 0x54),DAT_000c4a58), iVar11 == 0)) {
    iVar11 = *(int *)(&stack0x00000058 + iVar1);
  }
  else {
    uVar15 = __addsf3(*(undefined4 *)(&stack0x0000005c + iVar1),*(undefined4 *)(iVar20 + 0x20));
    uVar22 = *(undefined4 *)(iVar20 + 0x54);
    *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
    uVar59 = __subsf3(*(undefined4 *)(iVar20 + 0x24),uVar22);
    fVar58 = (float)cocos2d::CCPoint::CCPoint
                              ((CCPoint *)(&stack0x000000d0 + iVar1),(float)uVar59,
                               (float)((ulonglong)uVar59 >> 0x20));
    uVar15 = cocos2d::CCMoveTo::actionWithDuration(fVar58,DAT_000c4a5c);
    iVar11 = 1;
    *(undefined4 *)(&stack0x00000114 + iVar1) = uVar15;
  }
  uVar15 = *(undefined4 *)(*(int *)**ppiVar5 + 0x58);
  *(int *)(&stack0x0000005c + iVar1) = *(int *)**ppiVar5;
  *(undefined4 *)(&stack0x0000006c + iVar1) = uVar15;
  iVar20 = __aeabi_fcmpgt(uVar15,DAT_000c4a58);
  fVar58 = extraout_s0_01;
  fVar60 = extraout_s1_00;
  fVar61 = extraout_s2;
  if ((iVar20 != 0) ||
     (iVar20 = __aeabi_fcmpgt(*(undefined4 *)(*(int *)(&stack0x0000005c + iVar1) + 0x5c),
                              DAT_000c4a58), fVar58 = extraout_s0_02, fVar60 = extraout_s1_01,
     fVar61 = extraout_s2_00, iVar20 != 0)) {
    uVar15 = cocos2d::CCScaleTo::actionWithDuration(fVar58,fVar60,fVar61);
    *(undefined4 *)(&stack0x00000114 + iVar11 * 4 + iVar1) = uVar15;
    iVar11 = iVar11 + 1;
  }
  uVar15 = *(undefined4 *)(*(int *)**ppiVar5 + 0x60);
  *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
  iVar20 = __aeabi_fcmplt(uVar15,DAT_000c4a64);
  if (iVar20 == 0) {
    iVar20 = __aeabi_fcmpgt(*(undefined4 *)(&stack0x0000005c + iVar1),DAT_000c4a68);
    if (iVar20 == 0) goto LAB_000c49a2;
    fVar58 = (float)__fixunssfsi(*(undefined4 *)(&stack0x0000005c + iVar1));
    uVar2 = (uchar)DAT_000c4a60;
  }
  else {
    uVar2 = (uchar)DAT_000c4a60;
    fVar58 = extraout_s0_03;
  }
  uVar15 = cocos2d::CCFadeTo::actionWithDuration(fVar58,uVar2);
  *(undefined4 *)(&stack0x00000114 + iVar11 * 4 + iVar1) = uVar15;
  iVar11 = iVar11 + 1;
LAB_000c49a2:
  uVar15 = *(undefined4 *)(*(int *)**ppiVar5 + 100);
  *(undefined4 *)(&stack0x0000005c + iVar1) = uVar15;
  iVar20 = __aeabi_fcmpgt(uVar15,DAT_000c4a50);
  if (iVar20 == 0) {
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000060 + iVar1),0);
    }
  }
  else {
    uVar15 = cocos2d::CCRotateTo::actionWithDuration(extraout_s0_04,extraout_s1_02);
    *(undefined4 *)(&stack0x00000114 + iVar11 * 4 + iVar1) = uVar15;
    iVar11 = iVar11 + 1;
  }
  pCVar7 = *(CCFiniteTimeAction **)(&stack0x00000114 + iVar1);
  if (iVar11 == 1) {
    uVar15 = cocos2d::CCSpawn::actions(pCVar7,0);
  }
  else {
    uVar15 = *(undefined4 *)(&stack0x00000118 + iVar1);
    if (iVar11 == 2) {
      uVar15 = cocos2d::CCSpawn::actions(pCVar7,uVar15,0);
    }
    else {
      uVar22 = *(undefined4 *)(&stack0x0000011c + iVar1);
      if (iVar11 == 3) {
        uVar15 = cocos2d::CCSpawn::actions(pCVar7,uVar15,uVar22,0);
      }
      else {
        uVar17 = *(undefined4 *)(&stack0x00000120 + iVar1);
        *puVar29 = 0;
        uVar15 = cocos2d::CCSpawn::actions(pCVar7,uVar15,uVar22,uVar17);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(*(CCFiniteTimeAction **)(&stack0x00000060 + iVar1),uVar15,0);
}


