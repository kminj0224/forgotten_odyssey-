/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001063f0  Symbol: DrawScript_UI */

/* UI::DrawScript_UI() */

void __thiscall UI::DrawScript_UI(UI *this)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined uVar4;
  Unit_Money *this_00;
  int *piVar5;
  int **ppiVar6;
  void *pvVar7;
  CCSpriteFrameCache *pCVar8;
  CCObject *this_01;
  CCDirector *this_02;
  CCTextureCache *this_03;
  CCTexture2D *pCVar9;
  CCNode *pCVar10;
  int *piVar11;
  Draw_Number *pDVar12;
  int *piVar13;
  undefined4 uVar14;
  CCPoint CVar15;
  int iVar16;
  int *piVar17;
  int **ppiVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  char *pcVar22;
  int iVar23;
  code *pcVar24;
  undefined4 *puVar25;
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
  float fVar46;
  float extraout_s0_15;
  undefined8 uVar47;
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
  int *piStack_4;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  int *piVar31;
  undefined4 *puVar32;
  int *piVar33;
  undefined4 *puVar34;
  int *piVar35;
  undefined4 *puVar36;
  int *piVar37;
  undefined4 *puVar38;
  int *piVar39;
  undefined4 *puVar40;
  int *piVar41;
  undefined4 *puVar42;
  int *piVar43;
  undefined4 *puVar44;
  int *piVar45;
  
  iVar3 = DAT_0010672c;
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  puVar27 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  puVar29 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar31 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar32 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar33 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar34 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar35 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar37 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar39 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar40 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar41 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar42 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar43 = (int *)(&stack0xffffffec + DAT_0010672c);
  puVar44 = (undefined4 *)(&stack0xffffffec + DAT_0010672c);
  piVar45 = (int *)(&stack0xffffffec + DAT_0010672c);
  *(UI **)(&stack0x00000008 + DAT_0010672c) = this;
  *(int *)(&stack0x00000004 + DAT_0010672c) = DAT_00106734 + 0x106404;
  puVar19 = *(undefined4 **)(DAT_00106734 + 0x106404 + DAT_00106730);
  *(undefined4 *)(&stack0x00000280 + DAT_0010672c) = *puVar19;
  memset(&stack0x0000021c + DAT_0010672c,0,100);
  uVar47 = cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000034 + iVar3));
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x0000003c + iVar3),(float)uVar47,(float)((ulonglong)uVar47 >> 0x20))
  ;
  *(undefined4 *)(&stack0x00000034 + iVar3) = *(undefined4 *)(&stack0x0000003c + iVar3);
  *(undefined4 *)(&stack0x00000038 + iVar3) = *(undefined4 *)(&stack0x00000040 + iVar3);
  strcpy(&stack0x0000021c + iVar3,(char *)(DAT_00106740 + 0x10642e));
  this_00 = (Unit_Money *)operator_new(0x11c);
  Unit_Money::Unit_Money(this_00);
  *(Unit_Money **)(*(int *)(&stack0x00000008 + iVar3) + 300) = this_00;
  piVar5 = (int *)operator_new(0x110);
  uVar47 = cocos2d::CCLayer::CCLayer((CCLayer *)piVar5);
  uVar21 = *(undefined4 *)(&stack0x00000038 + iVar3);
  piVar13 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106744);
  *(undefined4 **)(&stack0x00000018 + iVar3) = puVar19;
  iVar16 = *piVar13;
  *(int **)(&stack0x00000014 + iVar3) = piVar13;
  if (iVar16 == 2) {
    pcVar24 = *(code **)(*piVar5 + 0x3c);
    __addsf3(*(undefined4 *)(&stack0x00000034 + iVar3));
    uVar47 = __addsf3(uVar21,uVar21);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x00000044 + iVar3),(float)uVar47,
               (float)((ulonglong)uVar47 >> 0x20));
    (*pcVar24)(piVar5,&stack0x00000044 + iVar3);
  }
  else {
    pcVar24 = *(code **)(*piVar5 + 0x3c);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)(&stack0x0000004c + iVar3),(float)uVar47,
               (float)((ulonglong)uVar47 >> 0x20));
    (*pcVar24)(piVar5,&stack0x0000004c + iVar3);
  }
  uVar47 = (**(code **)(*piVar5 + 0x6c))(piVar5,0);
  pcVar24 = *(code **)(*piVar5 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x00000054 + iVar3),(float)uVar47,(float)((ulonglong)uVar47 >> 0x20))
  ;
  (*pcVar24)(piVar5,&stack0x00000054 + iVar3);
  (**(code **)(**(int **)(&stack0x00000008 + iVar3) + 0xcc))
            (*(undefined4 *)(&stack0x00000008 + iVar3),piVar5,0xffffffff,1);
  ppiVar6 = (int **)operator_new(0x24);
  piVar13 = (int *)operator_new(0x140);
  cocos2d::CCRect::CCRect((CCRect *)(piVar13 + 0x3e));
  cocos2d::CCRect::CCRect((CCRect *)(piVar13 + 0x42));
  ppiVar6[1] = piVar13;
  Init_Unit_Stage((_Unit_Stage *)ppiVar6);
  piVar13 = (int *)operator_new(0x2c);
  iVar16 = 0;
  *ppiVar6 = piVar13;
  do {
    piVar13 = *ppiVar6;
    pvVar7 = operator_new(0x298);
    piVar13[iVar16] = (int)pvVar7;
    iVar16 = iVar16 + 1;
    (*ppiVar6)[8] = 1;
    iVar20 = DAT_00106748;
  } while (iVar16 != 8);
  (*ppiVar6)[9] = 1;
  anim_Lode_copy(&stack0x0000021c + iVar3,(_KG_Anit *)**ppiVar6,(char *)(iVar20 + 0x10652e));
  pCVar8 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar8,(char *)(DAT_0010674c + 0x10653e));
  iVar16 = 1;
  do {
    iVar20 = iVar16 + 1;
    operator_delete((void *)(*ppiVar6)[iVar16]);
    (*ppiVar6)[iVar16] = 0;
    iVar16 = iVar20;
  } while (iVar20 != 8);
  iVar16 = 0;
  while (ppiVar18 = (int **)*ppiVar6, *(int *)(&stack0xfffffff8 + iVar3) = iVar16,
        *(int *)(&stack0xfffffff8 + iVar3) < *(int *)(**ppiVar18 + 4)) {
    if (*(int *)(&stack0xfffffff8 + iVar3) == 4) {
      piVar13 = (int *)operator_new(0x120);
      uVar47 = Money::Money((Money *)piVar13);
      iVar16 = *(int *)(&stack0x00000008 + iVar3);
      *(int **)(iVar16 + 0x110) = piVar13;
      *(undefined4 *)((int)&piStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x128);
      *(undefined4 *)(&stack0x00000000 + iVar3) = **(undefined4 **)(**ppiVar6 + 0x10);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x0000005c + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      uVar21 = *(undefined4 *)(&stack0xfffffff8 + iVar3);
      uVar14 = *(undefined4 *)(&stack0x0000005c + iVar3);
      *puVar25 = uVar21;
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar21;
      uVar21 = (**(code **)((int)&piStack_4 + iVar3))
                         (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),uVar14,
                          *(undefined4 *)(&stack0x00000060 + iVar3));
      (**(code **)(*piVar5 + 0xcc))
                (piVar5,uVar21,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                 *(undefined4 *)(&stack0xfffffff8 + iVar3));
      this_01 = *(CCObject **)(iVar16 + 0x110);
LAB_00106610:
      cocos2d::CCObject::release(this_01);
    }
    else {
      if (*(int *)(&stack0xfffffff8 + iVar3) == 7) {
        piVar13 = (int *)operator_new(0x120);
        uVar47 = Mana::Mana((Mana *)piVar13);
        iVar16 = *(int *)(&stack0x00000008 + iVar3);
        *(int **)(iVar16 + 0x114) = piVar13;
        *(undefined4 *)((int)&piStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x128);
        *(undefined4 *)(&stack0x00000000 + iVar3) = **(undefined4 **)(**ppiVar6 + 0x1c);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000064 + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        uVar21 = *(undefined4 *)(&stack0xfffffff8 + iVar3);
        uVar14 = *(undefined4 *)(&stack0x00000064 + iVar3);
        *puVar26 = uVar21;
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar21;
        uVar21 = (**(code **)((int)&piStack_4 + iVar3))
                           (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),uVar14,
                            *(undefined4 *)(&stack0x00000068 + iVar3));
        (**(code **)(*piVar5 + 0xcc))
                  (piVar5,uVar21,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                   *(undefined4 *)(&stack0xfffffff8 + iVar3));
        this_01 = *(CCObject **)(iVar16 + 0x114);
        goto LAB_00106610;
      }
      if (*(int *)(&stack0xfffffff8 + iVar3) == 0x18) {
        piVar13 = (int *)operator_new(0x11c);
        uVar47 = Hero_HP::Hero_HP((Hero_HP *)piVar13);
        iVar16 = *(int *)(&stack0x00000008 + iVar3);
        *(int **)(iVar16 + 0x118) = piVar13;
        *(undefined4 *)((int)&piStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x128);
        *(undefined4 *)(&stack0x00000000 + iVar3) = **(undefined4 **)(**ppiVar6 + 0x60);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x0000006c + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        uVar21 = *(undefined4 *)(&stack0xfffffff8 + iVar3);
        uVar14 = *(undefined4 *)(&stack0x0000006c + iVar3);
        *puVar27 = uVar21;
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar21;
        uVar21 = (**(code **)((int)&piStack_4 + iVar3))
                           (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),uVar14,
                            *(undefined4 *)(&stack0x00000070 + iVar3));
        (**(code **)(*piVar5 + 0xcc))
                  (piVar5,uVar21,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                   *(undefined4 *)(&stack0xfffffff8 + iVar3));
        this_01 = *(CCObject **)(iVar16 + 0x118);
        goto LAB_00106610;
      }
      if (*(int *)(&stack0xfffffff8 + iVar3) == 0x14) {
        piVar13 = (int *)operator_new(0x11c);
        uVar47 = Level_Bar::Level_Bar((Level_Bar *)piVar13);
        iVar16 = *(int *)(&stack0x00000008 + iVar3);
        *(int **)(iVar16 + 0x120) = piVar13;
        *(undefined4 *)((int)&piStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x128);
        *(undefined4 *)(&stack0x00000000 + iVar3) = **(undefined4 **)(**ppiVar6 + 0x50);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000074 + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        uVar21 = *(undefined4 *)(&stack0xfffffff8 + iVar3);
        uVar14 = *(undefined4 *)(&stack0x00000074 + iVar3);
        *puVar28 = uVar21;
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar21;
        uVar21 = (**(code **)((int)&piStack_4 + iVar3))
                           (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),uVar14,
                            *(undefined4 *)(&stack0x00000078 + iVar3));
        (**(code **)(*piVar5 + 0xcc))
                  (piVar5,uVar21,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                   *(undefined4 *)(&stack0xfffffff8 + iVar3));
        this_01 = *(CCObject **)(iVar16 + 0x120);
        goto LAB_00106610;
      }
      if (*(int *)(&stack0xfffffff8 + iVar3) == 0x1c) {
        piVar13 = (int *)operator_new(0x11c);
        uVar47 = Monster_HP::Monster_HP((Monster_HP *)piVar13);
        iVar16 = *(int *)(&stack0x00000008 + iVar3);
        *(int **)(iVar16 + 0x11c) = piVar13;
        *(undefined4 *)((int)&piStack_4 + iVar3) = *(undefined4 *)(*piVar13 + 0x128);
        *(undefined4 *)(&stack0x00000000 + iVar3) = **(undefined4 **)(**ppiVar6 + 0x70);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x0000007c + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        uVar21 = *(undefined4 *)(&stack0xfffffff8 + iVar3);
        uVar14 = *(undefined4 *)(&stack0x0000007c + iVar3);
        *puVar29 = uVar21;
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar21;
        uVar21 = (**(code **)((int)&piStack_4 + iVar3))
                           (piVar13,*(undefined4 *)(&stack0x00000000 + iVar3),uVar14,
                            *(undefined4 *)(&stack0x00000080 + iVar3));
        (**(code **)(*piVar5 + 0xcc))
                  (piVar5,uVar21,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                   *(undefined4 *)(&stack0xfffffff8 + iVar3));
        this_01 = *(CCObject **)(iVar16 + 0x11c);
        goto LAB_00106610;
      }
      iVar16 = *(int *)(&stack0x00000004 + iVar3);
      *(int *)(&stack0x00000028 + iVar3) = *(int *)(iVar16 + DAT_00106b04) + 0xc;
      if ((*(int *)(&stack0xfffffff8 + iVar3) - 0xbU < 8) &&
         (*(char *)(**(int **)(iVar16 + DAT_00106b08) + **(int **)(iVar16 + DAT_00106b10) * 9 +
                    *(int *)(&stack0xfffffff8 + iVar3) + DAT_00106b0c) == '\0')) {
        FUN_001ed9dc(*(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar3) * 4 + **ppiVar6),
                     DAT_00106b14 + 0x10678e);
      }
      this_02 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
      uVar21 = cocos2d::CCDirector::getContentScaleFactor(this_02);
      iVar16 = __aeabi_fcmpeq(uVar21,0x40000000);
      uVar21 = **(undefined4 **)(**ppiVar6 + *(int *)(&stack0xfffffff8 + iVar3) * 4);
      if (iVar16 == 0) {
        FUN_001ed9dc(&stack0x00000028 + iVar3,uVar21);
      }
      else {
        FUN_001ed9dc(&stack0x00000028 + iVar3,uVar21);
        FUN_001edeb0(&stack0x00000028 + iVar3,
                     *(int *)(*(int *)(&stack0x00000028 + iVar3) + -0xc) + -4,
                     DAT_00106b18 + 0x1067c6);
      }
      piVar13 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName
                                 (*(char **)(&stack0x00000028 + iVar3));
      piVar17 = *ppiVar6;
      iVar16 = **(int **)(&stack0x00000014 + iVar3);
      *(int *)((int)&piStack_4 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) << 2;
      iVar20 = *piVar13;
      if (iVar16 == 2) {
        uVar21 = __addsf3(*(undefined4 *)
                           (*(int *)(*piVar17 + *(int *)((int)&piStack_4 + iVar3)) + 0x10));
        pcVar24 = *(code **)(iVar20 + 0x7c);
        *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
        puVar19 = (undefined4 *)(*pcVar24)(piVar13);
        uVar21 = __addsf3(*(undefined4 *)(&stack0x00000000 + iVar3),*puVar19);
        uVar21 = __mulsf3(uVar21,0x3f000000);
        piVar17 = *ppiVar6;
        *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
        uVar21 = __addsf3(*(int *)(*(int *)(*piVar17 + *(int *)((int)&piStack_4 + iVar3)) + 0x14) +
                          -0x80000000);
        iVar16 = (**(code **)(*piVar13 + 0x7c))(piVar13);
        uVar21 = __subsf3(uVar21,*(undefined4 *)(iVar16 + 4));
        uVar47 = __mulsf3(uVar21,0x3f000000);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x00000084 + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        *(undefined4 *)(&stack0x00000034 + iVar3) = *(undefined4 *)(&stack0x00000084 + iVar3);
        uVar21 = *(undefined4 *)(&stack0x00000088 + iVar3);
      }
      else {
        *(undefined4 *)(&stack0x00000000 + iVar3) =
             *(undefined4 *)(*(int *)(*piVar17 + *(int *)((int)&piStack_4 + iVar3)) + 0x10);
        puVar19 = (undefined4 *)(**(code **)(iVar20 + 0x7c))();
        uVar21 = __addsf3(*(undefined4 *)(&stack0x00000000 + iVar3),*puVar19);
        uVar21 = __mulsf3(uVar21,0x3f000000);
        piVar17 = *ppiVar6;
        *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
        iVar20 = *(int *)(*(int *)(*piVar17 + *(int *)((int)&piStack_4 + iVar3)) + 0x14);
        iVar16 = (**(code **)(*piVar13 + 0x7c))(piVar13);
        uVar21 = __subsf3(iVar20 + -0x80000000,*(undefined4 *)(iVar16 + 4));
        uVar47 = __mulsf3(uVar21,0x3f000000);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)(&stack0x0000008c + iVar3),(float)uVar47,
                   (float)((ulonglong)uVar47 >> 0x20));
        *(undefined4 *)(&stack0x00000034 + iVar3) = *(undefined4 *)(&stack0x0000008c + iVar3);
        uVar21 = *(undefined4 *)(&stack0x00000090 + iVar3);
      }
      *(undefined4 *)(&stack0x00000038 + iVar3) = uVar21;
      (**(code **)(*piVar13 + 0x3c))(piVar13,&stack0x00000034 + iVar3);
      (**(code **)(*piVar5 + 0xcc))
                (piVar5,piVar13,*(undefined4 *)(&stack0xfffffff8 + iVar3),
                 *(undefined4 *)(&stack0xfffffff8 + iVar3));
      iVar16 = **ppiVar6;
      *(undefined4 *)((int)&piStack_4 + iVar3) =
           *(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106b1c);
      uVar21 = __floatsisf(*(int *)(iVar16 + 0x284) / 2);
      uVar21 = __subsf3(**(undefined4 **)((int)&piStack_4 + iVar3),uVar21);
      iVar16 = *(int *)(iVar16 + 0x280);
      *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
      uVar21 = __floatsisf(iVar16 / 2);
      uVar47 = __subsf3(*(undefined4 *)(*(int *)((int)&piStack_4 + iVar3) + 4),uVar21);
      cocos2d::CCSize::CCSize
                ((CCSize *)(&stack0x00000094 + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      iVar16 = **ppiVar6;
      *(int *)((int)&piStack_4 + iVar3) = *(int *)(&stack0xfffffff8 + iVar3) * 4;
      iVar16 = *(int *)(*(int *)(&stack0xfffffff8 + iVar3) * 4 + iVar16);
      puVar19 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
      *(undefined4 *)(iVar16 + 0x20) = *puVar19;
      *(undefined4 *)(iVar16 + 0x24) = puVar19[1];
      uVar21 = *(undefined4 *)(*(int *)(*(int *)((int)&piStack_4 + iVar3) + **ppiVar6) + 0x38);
      iVar16 = __aeabi_fcmpeq(uVar21,0);
      *(int *)((int)&piStack_4 + iVar3) = *piVar13;
      if ((iVar16 == 0) && (iVar16 = __aeabi_fcmpeq(uVar21,DAT_00106b20), iVar16 == 0)) {
        *(int *)((int)&piStack_4 + iVar3) = *(int *)((int)&piStack_4 + iVar3) + 0xec;
        uVar4 = __fixunssfsi(uVar21);
        pcVar24 = **(code ***)((int)&piStack_4 + iVar3);
LAB_0010698c:
        (*pcVar24)(piVar13,uVar4);
      }
      else {
        iVar16 = __aeabi_fcmpeq(uVar21,DAT_00106b20);
        if (iVar16 != 0) {
          uVar4 = 0xff;
          pcVar24 = *(code **)(*(int *)((int)&piStack_4 + iVar3) + 0xec);
          goto LAB_0010698c;
        }
      }
      iVar16 = *(int *)(&stack0xfffffff8 + iVar3);
      (**(code **)(*piVar13 + 0x2c))
                (piVar13,*(undefined4 *)(*(int *)(iVar16 * 4 + **ppiVar6) + 0x18));
      (**(code **)(*piVar13 + 0x34))
                (piVar13,*(undefined4 *)(*(int *)(iVar16 * 4 + **ppiVar6) + 0x1c));
      this_03 = (CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache();
      cocos2d::CCTextureCache::removeAllTextures(this_03);
      FUN_001ed6b8(&stack0x00000028 + iVar3);
    }
    iVar16 = *(int *)(&stack0xfffffff8 + iVar3) + 1;
  }
  uVar47 = cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x0000009c + iVar3));
  uVar47 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)(&stack0x000000a4 + iVar3),(float)uVar47,
                      (float)((ulonglong)uVar47 >> 0x20));
  *(undefined4 *)(&stack0x0000009c + iVar3) = *(undefined4 *)(&stack0x000000a4 + iVar3);
  *(undefined4 *)(&stack0x000000a0 + iVar3) = *(undefined4 *)(&stack0x000000a8 + iVar3);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)(&stack0x000000ac + iVar3),(float)uVar47,(float)((ulonglong)uVar47 >> 0x20))
  ;
  CVar15 = *(CCPoint *)(&stack0x000000ac + iVar3);
  iVar16 = *(int *)(&stack0x000000b0 + iVar3);
  *puVar30 = 100;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 100;
  vDrawImage((CCNode *)piVar5,(char *)(DAT_00106b30 + 0x106a04),CVar15,iVar16,*piVar31);
  piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,100);
  pCVar9 = (CCTexture2D *)(**(code **)(*piVar13 + 0x118))();
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000b4 + iVar3),extraout_s0,extraout_s1);
  CVar15 = *(CCPoint *)(&stack0x000000b4 + iVar3);
  *puVar32 = 0x65;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0x65;
  vDrawTexture((CCNode *)piVar5,pCVar9,CVar15,*(int *)(&stack0x000000b8 + iVar3),*piVar33);
  piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,100);
  pCVar9 = (CCTexture2D *)(**(code **)(*piVar13 + 0x118))();
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000bc + iVar3),extraout_s0_00,extraout_s1_00);
  CVar15 = *(CCPoint *)(&stack0x000000bc + iVar3);
  *puVar34 = 0x66;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0x66;
  vDrawTexture((CCNode *)piVar5,pCVar9,CVar15,*(int *)(&stack0x000000c0 + iVar3),*piVar35);
  piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,100);
  pCVar9 = (CCTexture2D *)(**(code **)(*piVar13 + 0x118))();
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000c4 + iVar3),extraout_s0_01,extraout_s1_01);
  CVar15 = *(CCPoint *)(&stack0x000000c4 + iVar3);
  *puVar36 = 0x67;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0x67;
  vDrawTexture((CCNode *)piVar5,pCVar9,CVar15,*(int *)(&stack0x000000c8 + iVar3),*piVar37);
  piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,100);
  puVar19 = (undefined4 *)(**(code **)(*piVar13 + 0x7c))();
  uVar21 = puVar19[1];
  *(undefined4 *)(&stack0x00000010 + iVar3) = *puVar19;
  *(undefined4 *)(&stack0x0000000c + iVar3) = uVar21;
  uVar21 = (**(code **)(***(int ***)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106b40) + 0xa8))();
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar21;
  memset(&stack0x00000154 + iVar3,0,200);
  iVar16 = *(int *)(*(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4) + 4);
  if (iVar16 == 1) {
    puVar19 = *(undefined4 **)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106b44);
    pcVar22 = (char *)(DAT_00106b48 + 0x106ade);
    sprintf(&stack0x00000154 + iVar3,pcVar22,*puVar19);
    sprintf(&stack0x00000186 + iVar3,pcVar22,puVar19[4]);
    sprintf(&stack0x000001b8 + iVar3,pcVar22,puVar19[8]);
    uVar21 = puVar19[0xc];
  }
  else if (iVar16 == 2) {
    iVar16 = *(int *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ed0);
    pcVar22 = (char *)(DAT_00106ed4 + 0x106b5e);
    sprintf(&stack0x00000154 + iVar3,pcVar22,*(undefined4 *)(iVar16 + 0xb0));
    sprintf(&stack0x00000186 + iVar3,pcVar22,*(undefined4 *)(iVar16 + 0xc0));
    sprintf(&stack0x000001b8 + iVar3,pcVar22,*(undefined4 *)(iVar16 + 0xd0));
    uVar21 = *(undefined4 *)(iVar16 + 0xe0);
  }
  else if (iVar16 == 4) {
    iVar16 = *(int *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ed0);
    pcVar22 = (char *)(DAT_00106ed8 + 0x106ba0);
    uVar21 = *(undefined4 *)(iVar16 + 0x160);
    *(int *)((int)&piStack_4 + iVar3) = iVar16;
    sprintf(&stack0x00000154 + iVar3,pcVar22,uVar21);
    sprintf(&stack0x00000186 + iVar3,pcVar22,*(undefined4 *)(iVar16 + 0x170));
    iVar16 = *(int *)((int)&piStack_4 + iVar3);
    sprintf(&stack0x000001b8 + iVar3,pcVar22,*(undefined4 *)(iVar16 + 0x180));
    uVar21 = *(undefined4 *)(iVar16 + 400);
  }
  else {
    if (iVar16 == 3) {
      iVar20 = *(int *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ed0);
      pcVar22 = (char *)(DAT_00106edc + 0x106bec);
      sprintf(&stack0x00000154 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x210));
      sprintf(&stack0x00000186 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x220));
      sprintf(&stack0x000001b8 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x230));
      iVar16 = 0x90;
    }
    else {
      if (iVar16 != 5) goto LAB_00106c68;
      iVar20 = *(int *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ed0);
      pcVar22 = (char *)(DAT_00106ee0 + 0x106c2e);
      sprintf(&stack0x00000154 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x2c0));
      sprintf(&stack0x00000186 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x2d0));
      sprintf(&stack0x000001b8 + iVar3,pcVar22,*(undefined4 *)(iVar20 + 0x2e0));
      iVar16 = 0xbc;
    }
    uVar21 = *(undefined4 *)(iVar20 + iVar16 * 4);
  }
  sprintf(&stack0x000001ea + iVar3,pcVar22,uVar21);
LAB_00106c68:
  uVar21 = cocos2d::CCNode::getChildByTag((CCNode *)piVar5,100);
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
  __mulsf3(*(undefined4 *)(&stack0x00000010 + iVar3),0x3f000000);
  uVar21 = __mulsf3(*(undefined4 *)(&stack0x0000000c + iVar3),0x3f000000);
  *(undefined4 *)((int)&piStack_4 + iVar3) = uVar21;
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000cc + iVar3),extraout_s0_02,extraout_s1_02);
  iVar16 = *(int *)(&stack0x000000d0 + iVar3);
  CVar15 = *(CCPoint *)(&stack0x000000cc + iVar3);
  pCVar10 = *(CCNode **)(&stack0x00000000 + iVar3);
  *puVar38 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  vDrawImage(pCVar10,&stack0x00000154 + iVar3,CVar15,iVar16,*piVar39);
  uVar21 = cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x65);
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000d4 + iVar3),extraout_s0_03,extraout_s1_03);
  iVar16 = *(int *)(&stack0x000000d8 + iVar3);
  CVar15 = *(CCPoint *)(&stack0x000000d4 + iVar3);
  pCVar10 = *(CCNode **)(&stack0x00000000 + iVar3);
  *puVar40 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  vDrawImage(pCVar10,&stack0x00000186 + iVar3,CVar15,iVar16,*piVar41);
  uVar21 = cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x66);
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000dc + iVar3),extraout_s0_04,extraout_s1_04);
  iVar16 = *(int *)(&stack0x000000e0 + iVar3);
  CVar15 = *(CCPoint *)(&stack0x000000dc + iVar3);
  pCVar10 = *(CCNode **)(&stack0x00000000 + iVar3);
  *puVar42 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  vDrawImage(pCVar10,&stack0x000001b8 + iVar3,CVar15,iVar16,*piVar43);
  uVar21 = cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x67);
  *(undefined4 *)(&stack0x00000000 + iVar3) = uVar21;
  cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000e4 + iVar3),extraout_s0_05,extraout_s1_05);
  CVar15 = *(CCPoint *)(&stack0x000000e4 + iVar3);
  iVar16 = *(int *)(&stack0x000000e8 + iVar3);
  pCVar10 = *(CCNode **)(&stack0x00000000 + iVar3);
  *puVar44 = 0;
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
  vDrawImage(pCVar10,&stack0x000001ea + iVar3,CVar15,iVar16,*piVar45);
  piVar13 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ee8);
  cVar1 = *(char *)(*(int *)(*(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4) + 4) * 0xc +
                    *piVar13 * 0x6c + **(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ee4)
                   + DAT_00106eec);
  *(int **)((int)&piStack_4 + iVar3) = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106ee4);
  *(int **)(&stack0x00000000 + iVar3) = piVar13;
  if (cVar1 < '\x01') {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x65);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  else {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x65);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  (*pcVar24)(piVar13,'\0' < cVar1);
  cVar1 = *(char *)(**(int **)((int)&piStack_4 + iVar3) +
                    *(int *)(*(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4) + 4) * 0xc +
                    **(int **)(&stack0x00000000 + iVar3) * 0x6c + DAT_00106ef0);
  if (cVar1 < '\x01') {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x66);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  else {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x66);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  (*pcVar24)(piVar13,'\0' < cVar1);
  cVar1 = *(char *)(**(int **)((int)&piStack_4 + iVar3) +
                    *(int *)(*(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4) + 4) * 0xc +
                    **(int **)(&stack0x00000000 + iVar3) * 0x6c + DAT_00106ef4);
  if (cVar1 < '\x01') {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x67);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  else {
    piVar13 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x67);
    pcVar24 = *(code **)(*piVar13 + 0x6c);
  }
  (*pcVar24)(piVar13,'\0' < cVar1);
  if (*(int *)(*(int *)(*(int *)(&stack0xfffffff8 + iVar3) + 4) + 4) - 1U < 2) {
    pCVar10 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)piVar5,0x65);
    Hero_Skill_Button_Effect(*(UI **)(&stack0x00000008 + iVar3),pCVar10);
  }
  *(int ***)(&stack0x0000000c + iVar3) = ppiVar6;
  piVar13 = *(int **)(&stack0x00000000 + iVar3);
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
  do {
    while( true ) {
      piVar17 = (int *)Draw_Number::node();
      pcVar24 = *(code **)(*piVar17 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000ec + iVar3),extraout_s0_06,extraout_s1_06)
      ;
      (*pcVar24)(piVar17,&stack0x000000ec + iVar3);
      (**(code **)(*piVar17 + 0x80))
                (piVar17,*(undefined4 *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106efc));
      pCVar10 = (CCNode *)
                cocos2d::CCNode::getChildByTag
                          ((CCNode *)piVar5,*(int *)(&stack0xfffffff8 + iVar3) + 100);
      piVar11 = (int *)cocos2d::CCNode::getChildByTag(pCVar10,0);
      (**(code **)(*piVar11 + 0xcc))(piVar11,piVar17,1,1);
      Draw_Number::SetNumberFont((Draw_Number *)piVar17,0xc);
      iVar16 = *(int *)(*(int *)(&stack0x00000004 + iVar3) + DAT_00106f00);
      if (*(int *)(&stack0xfffffff8 + iVar3) != 0) break;
      uVar21 = 1;
      iVar16 = Get_Mana((int)*(char *)(iVar16 + (*(char *)(**(int **)((int)&piStack_4 + iVar3) +
                                                           *piVar13 + DAT_00106f04 + 4) + -1) * 0xb)
                       );
      Draw_Number::SetNumber((Draw_Number *)piVar17,iVar16,2);
LAB_00106f3c:
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar21;
    }
    if (*(int *)(&stack0xfffffff8 + iVar3) == 1) {
      uVar21 = 2;
      iVar16 = Get_Mana((int)*(char *)(iVar16 + (*(char *)(**(int **)((int)&piStack_4 + iVar3) +
                                                           *piVar13 + DAT_00106f04 + 4) + -1) * 0xb
                                      + 1));
      Draw_Number::SetNumber((Draw_Number *)piVar17,iVar16,2);
      goto LAB_00106f3c;
    }
    if (*(int *)(&stack0xfffffff8 + iVar3) == 2) {
      uVar21 = 3;
      iVar16 = Get_Mana((int)*(char *)(iVar16 + (*(char *)(**(int **)((int)&piStack_4 + iVar3) +
                                                           *piVar13 + DAT_00107180 + 4) + -1) * 0xb
                                      + 2));
      Draw_Number::SetNumber
                ((Draw_Number *)piVar17,iVar16,*(CCTextAlignment *)(&stack0xfffffff8 + iVar3));
      goto LAB_00106f3c;
    }
    iVar16 = Get_Mana((int)*(char *)(iVar16 + (*(char *)(**(int **)((int)&piStack_4 + iVar3) +
                                                         *piVar13 + DAT_00107180 + 4) + -1) * 0xb +
                                    3));
    Draw_Number::SetNumber((Draw_Number *)piVar17,iVar16,2);
    iVar16 = *(int *)(&stack0xfffffff8 + iVar3);
    *(int *)(&stack0xfffffff8 + iVar3) = iVar16 + 1;
    if (iVar16 + 1 == 4) {
      uVar21 = *(undefined4 *)(&stack0x0000000c + iVar3);
      piVar13 = (int *)Draw_Number::node();
      iVar23 = *(int *)(&stack0x00000008 + iVar3);
      *(int **)(&stack0x0000000c + iVar3) = piVar13;
      *(int **)(iVar23 + 0x138) = piVar13;
      pcVar24 = *(code **)(*piVar13 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000f4 + iVar3),extraout_s0_07,extraout_s1_07)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0x0000000c + iVar3),&stack0x000000f4 + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x138),0x32,0x32);
      Draw_Number::SetNumberFont(*(Draw_Number **)(iVar23 + 0x138),3);
      pDVar12 = *(Draw_Number **)(iVar23 + 0x138);
      iVar16 = **(int **)((int)&piStack_4 + iVar3);
      iVar20 = **(int **)(&stack0x00000000 + iVar3);
      piVar13 = *(int **)(*(int *)(&stack0x00000004 + iVar3) + DAT_0010718c);
      *(int **)(&stack0x0000000c + iVar3) = piVar13;
      Draw_Number::SetNumber
                (pDVar12,*(int *)(iVar16 + (iVar20 * 9 + *piVar13 + DAT_00107190) * 4 + 4),0);
      piVar13 = (int *)Draw_Number::node();
      *(int **)(iVar23 + 0x13c) = piVar13;
      iVar16 = *piVar13;
      *(int **)(&stack0x00000010 + iVar3) = piVar13;
      pcVar24 = *(code **)(iVar16 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x000000fc + iVar3),extraout_s0_08,extraout_s1_08)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0x00000010 + iVar3),&stack0x000000fc + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x13c),0x33,0x33);
      Draw_Number::SetNumberFont
                (*(Draw_Number **)(iVar23 + 0x13c),*(int *)(&stack0xfffffff8 + iVar3));
      Draw_Number::SetMoney
                (*(Draw_Number **)(iVar23 + 0x13c),
                 *(int *)(**(int **)((int)&piStack_4 + iVar3) +
                          (**(int **)(&stack0x00000000 + iVar3) + DAT_0010719c) * 4 + 4),0);
      piVar13 = (int *)Draw_Number::node();
      *(int **)(iVar23 + 0x140) = piVar13;
      iVar16 = *piVar13;
      *(int **)(&stack0xfffffff8 + iVar3) = piVar13;
      pcVar24 = *(code **)(iVar16 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000104 + iVar3),extraout_s0_09,extraout_s1_09)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0xfffffff8 + iVar3),&stack0x00000104 + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x140),0x34,0x34);
      Draw_Number::SetNumberFont(*(Draw_Number **)(iVar23 + 0x140),5);
      pDVar12 = *(Draw_Number **)(iVar23 + 0x140);
      puVar19 = *(undefined4 **)(*(int *)(&stack0x00000004 + iVar3) + DAT_001071a8);
      *(undefined4 **)(&stack0xfffffff8 + iVar3) = puVar19;
      iVar16 = __fixsfsi(*(undefined4 *)*puVar19);
      Draw_Number::SetNumber(pDVar12,iVar16,2);
      piVar13 = (int *)Draw_Number::node();
      *(int **)(iVar23 + 0x144) = piVar13;
      iVar16 = *piVar13;
      *(int **)(&stack0x00000004 + iVar3) = piVar13;
      pcVar24 = *(code **)(iVar16 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x0000010c + iVar3),extraout_s0_10,extraout_s1_10)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0x00000004 + iVar3),&stack0x0000010c + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x144),0x33,0x33);
      Draw_Number::SetNumberFont(*(Draw_Number **)(iVar23 + 0x144),5);
      pDVar12 = *(Draw_Number **)(iVar23 + 0x144);
      iVar16 = __fixsfsi(*(undefined4 *)(**(int **)(&stack0xfffffff8 + iVar3) + 4));
      Draw_Number::SetNumber(pDVar12,iVar16,0);
      piVar13 = (int *)Draw_Number::node();
      *(int **)(iVar23 + 0x148) = piVar13;
      iVar16 = *piVar13;
      *(int **)(&stack0x00000004 + iVar3) = piVar13;
      pcVar24 = *(code **)(iVar16 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x00000114 + iVar3),extraout_s0_11,extraout_s1_11)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0x00000004 + iVar3),&stack0x00000114 + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x148),0x35,0x35);
      Draw_Number::SetNumberFont(*(Draw_Number **)(iVar23 + 0x148),6);
      pDVar12 = *(Draw_Number **)(iVar23 + 0x148);
      iVar16 = __fixsfsi(*(undefined4 *)(**(int **)(&stack0xfffffff8 + iVar3) + 8));
      Draw_Number::SetNumber(pDVar12,iVar16,2);
      piVar13 = (int *)Draw_Number::node();
      *(int **)(iVar23 + 0x14c) = piVar13;
      iVar16 = *piVar13;
      *(int **)(&stack0x00000004 + iVar3) = piVar13;
      pcVar24 = *(code **)(iVar16 + 0x3c);
      cocos2d::CCPoint::CCPoint((CCPoint *)(&stack0x0000011c + iVar3),extraout_s0_12,extraout_s1_12)
      ;
      (*pcVar24)(*(undefined4 *)(&stack0x00000004 + iVar3),&stack0x0000011c + iVar3);
      (**(code **)(*piVar5 + 0xcc))(piVar5,*(undefined4 *)(iVar23 + 0x14c),0x36,0x36);
      Draw_Number::SetNumberFont(*(Draw_Number **)(iVar23 + 0x14c),6);
      pDVar12 = *(Draw_Number **)(iVar23 + 0x14c);
      iVar16 = __fixsfsi(*(undefined4 *)(**(int **)(&stack0xfffffff8 + iVar3) + 0xc));
      Draw_Number::SetNumber(pDVar12,iVar16,0);
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 0;
      do {
        if (*(int *)(&stack0xfffffff8 + iVar3) == 0) {
          piVar13 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001071b8 + 0x107168));
          pcVar24 = *(code **)(*piVar13 + 0x3c);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(&stack0x00000124 + iVar3),extraout_s0_13,extraout_s1_13);
          puVar2 = &stack0x00000124;
        }
        else {
          piVar13 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00107360 + 0x1071ca));
          pcVar24 = *(code **)(*piVar13 + 0x3c);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(&stack0x0000012c + iVar3),extraout_s0_14,extraout_s1_14);
          puVar2 = &stack0x0000012c;
        }
        (*pcVar24)(piVar13,puVar2 + iVar3);
        fVar46 = (float)(**(code **)(*piVar5 + 0xcc))
                                  (piVar5,piVar13,*(int *)(&stack0xfffffff8 + iVar3) + 0x37);
        iVar16 = *(int *)(&stack0xfffffff8 + iVar3);
        *(int *)(&stack0xfffffff8 + iVar3) = iVar16 + 1;
      } while (iVar16 + 1 != 2);
      if (**(int **)(&stack0x00000014 + iVar3) == 2) {
        cocos2d::CCNode::setScale((CCNode *)piVar5,fVar46);
      }
      (**(code **)(*piVar5 + 0xac))(piVar5,uVar21);
      cocos2d::CCObject::release((CCObject *)piVar5);
      pCVar8 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
      cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile
                (pCVar8,(char *)(DAT_0010736c + 0x10722e));
      iVar16 = DAT_00107374;
      (&stack0x00000030)[iVar3] = 0;
      iVar23 = **(int **)((int)&piStack_4 + iVar3);
      *(undefined4 *)(&stack0x0000002c + iVar3) = 0;
      iVar20 = **(int **)(&stack0x00000000 + iVar3) * 9 + **(int **)(&stack0x0000000c + iVar3);
      uVar21 = __floatsisf(*(undefined4 *)(iVar23 + (iVar20 + DAT_00107370) * 4 + 4));
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar21;
      uVar21 = __floatsisf(*(undefined4 *)(iVar23 + (iVar20 + DAT_00107378) * 4 + 4));
      uVar21 = __mulsf3(uVar21,DAT_0010737c);
      uVar21 = __addsf3(uVar21,DAT_00107380);
      uVar21 = __divsf3(*(undefined4 *)(&stack0xfffffff8 + iVar3),uVar21);
      __mulsf3(uVar21,DAT_00107384);
      uVar21 = __fixsfsi();
      pcVar22 = (char *)(DAT_00107388 + 0x107294);
      sprintf(&stack0x0000002c + iVar3,(char *)(iVar16 + 0x107260),uVar21);
      piVar5 = (int *)cocos2d::CCLabelTTF::labelWithString
                                (&stack0x0000002c + iVar3,pcVar22,extraout_s0_15);
      pcVar24 = *(code **)(*piVar5 + 0xf4);
      (&stack0x00000020)[iVar3] = 0xff;
      (&stack0x00000021)[iVar3] = 0xff;
      (&stack0x00000022)[iVar3] = 0xff;
      uVar47 = (*pcVar24)();
      pcVar24 = *(code **)(*piVar5 + 0x3c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000134 + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      uVar47 = (*pcVar24)(piVar5,&stack0x00000134 + iVar3);
      pcVar24 = *(code **)(*piVar5 + 0x74);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x0000013c + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      (*pcVar24)(piVar5,&stack0x0000013c + iVar3);
      fVar46 = (float)(**(code **)(**(int **)(&stack0x00000008 + iVar3) + 0xcc))
                                (*(undefined4 *)(&stack0x00000008 + iVar3),piVar5,0x37,0x37);
      piVar5 = (int *)cocos2d::CCLabelTTF::labelWithString
                                ((char *)(DAT_00107398 + 0x1072fa),pcVar22,fVar46);
      pcVar24 = *(code **)(*piVar5 + 0xf4);
      (&stack0x00000024)[iVar3] = 0xff;
      (&stack0x00000025)[iVar3] = 0xff;
      (&stack0x00000026)[iVar3] = 0xff;
      uVar47 = (*pcVar24)();
      pcVar24 = *(code **)(*piVar5 + 0x3c);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x00000144 + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      uVar47 = (*pcVar24)(piVar5,&stack0x00000144 + iVar3);
      pcVar24 = *(code **)(*piVar5 + 0x74);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)(&stack0x0000014c + iVar3),(float)uVar47,
                 (float)((ulonglong)uVar47 >> 0x20));
      (*pcVar24)(piVar5,&stack0x0000014c + iVar3);
      (**(code **)(**(int **)(&stack0x00000008 + iVar3) + 0xcc))
                (*(undefined4 *)(&stack0x00000008 + iVar3),piVar5,0x38,0x38);
      if (*(int *)(&stack0x00000280 + iVar3) == **(int **)(&stack0x00000018 + iVar3)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


