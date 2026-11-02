/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00127440  Symbol: GamePlay */

/* GameScene::GamePlay(float) */

void __thiscall GameScene::GamePlay(GameScene *this,float param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  CCArray *this_00;
  uint uVar4;
  undefined4 *puVar5;
  CParticle *this_01;
  CCNode *pCVar6;
  CCTexture2D *pCVar7;
  CCSprite *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CCNode *pCVar13;
  int **ppiVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  CCArray *pCVar18;
  _Unit_Stage *p_Var19;
  char *pcVar20;
  int *piVar21;
  uint uVar22;
  CCLayer *in_r1;
  undefined4 *extraout_r1;
  undefined *puVar23;
  int iVar24;
  CCPoint *pCVar25;
  CCRect *__src;
  code **ppcVar26;
  CCRect *pCVar27;
  int iVar28;
  int *piVar29;
  int **ppiVar30;
  uint *puVar31;
  Effect *pEVar32;
  CCLayer *pCVar33;
  int iVar34;
  int *piVar35;
  int **ppiVar36;
  int **ppiVar37;
  int iVar38;
  int *piVar39;
  int *piVar40;
  code *pcVar41;
  code *pcVar42;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar43;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar44;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined4 *in_stack_00000084;
  int iStack_1c8;
  int iStack_1c0;
  int **ppiStack_1b8;
  int iStack_1b0;
  int *piStack_1a0;
  CCLayer *pCStack_198;
  int iStack_190;
  undefined auStack_164 [28];
  undefined uStack_148;
  undefined uStack_147;
  undefined uStack_146;
  undefined4 uStack_144;
  undefined uStack_140;
  undefined uStack_13f;
  undefined uStack_13e;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CCPoint aCStack_120 [8];
  CCPoint aCStack_118 [8];
  CCPoint aCStack_110 [8];
  CCPoint aCStack_108 [8];
  CCPoint aCStack_100 [2];
  CCPoint aCStack_f8 [8];
  CCPoint aCStack_f0 [8];
  CCPoint aCStack_e8 [2];
  CCPoint aCStack_e0 [8];
  CCPoint aCStack_d8 [8];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCRect aCStack_58 [16];
  code *pcStack_48;
  code *pcStack_44;
  float afStack_40 [2];
  CCRect aCStack_38 [16];
  CCRect aCStack_28 [20];
  
  iVar34 = DAT_00127694 + 0x12744c;
  ppiVar30 = *(int ***)(iVar34 + DAT_00127698);
  piVar35 = *ppiVar30;
  if ((*(char *)(piVar35 + 0x14) == '\0') &&
     (iVar2 = __aeabi_fcmplt(*(undefined4 *)
                              (*(int *)(iVar34 + DAT_001276a0) +
                               ((**(int **)(iVar34 + DAT_0012769c) + -1) * 10 +
                                **(int **)(iVar34 + DAT_001276a4) + -1) * 0x40 + 0x3c),
                             *(undefined4 *)(this + 0x128)), iVar2 != 0)) {
    *(char *)(piVar35 + 0x14) = '\x01';
  }
  piVar40 = *(int **)(iVar34 + DAT_001276a8);
  piVar35 = *(int **)(iVar34 + DAT_001276ac);
  if (*(int *)(*piVar35 + (*piVar40 + DAT_001276b0) * 4 + 4) == 4) {
    uVar3 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
  }
  if (*(int *)(*piVar35 + (*piVar40 + DAT_001276b0) * 4 + 4) == 5) {
    uVar3 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
  }
  if (*(int *)(*piVar35 + (*piVar40 + DAT_001276b0) * 4 + 4) == 6) {
    uVar3 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
  }
  if (*(int *)(*piVar35 + (*piVar40 + DAT_001276b0) * 4 + 4) == 8) {
    uVar3 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
  }
  if (*(int *)(*piVar35 + (*piVar40 + DAT_001276b0) * 4 + 4) == 9) {
    ppiVar36 = *(int ***)(iVar34 + DAT_001276b4);
    iVar2 = (**(code **)(**ppiVar36 + 0xa8))();
    if ((*(int *)(*(int *)(iVar2 + 4) + 100) == 0) ||
       (iVar2 = (**(code **)(**ppiVar36 + 0xa8))(), *(int *)(*(int *)(iVar2 + 4) + 100) == 1)) {
      uVar3 = Tutorial_Layer::node();
      (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
    }
  }
  UI_Button();
  Hero_Lethal_check();
  ppiVar37 = *(int ***)(iVar34 + DAT_001276b8);
  this_00 = (CCArray *)(**(code **)(**ppiVar37 + 0x58))();
  FUN_00129d5a();
  ppiVar36 = (int **)cocos2d::CCArray::objectAtIndex(this_00,0);
  iVar2 = (*(code *)(*ppiVar36)[0x28])();
  if (iVar2 == DAT_001276bc) {
    FUN_00129d54();
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  if (iVar2 == DAT_001276c0) {
    FUN_00129d54();
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  if (iVar2 == 0x3e0) {
    FUN_00129d54();
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  if (iVar2 == DAT_001276c4) {
    FUN_00129d54();
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  if (iVar2 == DAT_001276c8) {
    FUN_00129d54();
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  piVar40 = *ppiVar36;
  if (iVar2 == -0x1e) {
    piVar40 = (int *)(*(code *)piVar40[0x2a])(ppiVar36);
    if (piVar40 != (int *)0x0) {
      iVar2 = __addsf3(in_r1,piVar40[4]);
      piVar40[4] = iVar2;
      iVar2 = __aeabi_fcmpgt(iVar2,piVar40[3]);
      if ((iVar2 != 0) && (*(char *)(piVar40 + 5) == '\0')) {
        if (*(char *)(*piVar35 + 1) != '\0') {
          pcVar20 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar20,(bool)((char)DAT_001276cc + -0x80));
        }
        pCVar18 = (CCArray *)(**(code **)(**ppiVar37 + 0x58))();
        for (uVar22 = 0; uVar4 = cocos2d::CCArray::count(pCVar18), uVar22 < uVar4;
            uVar22 = uVar22 + 1) {
          piVar35 = (int *)cocos2d::CCArray::objectAtIndex(pCVar18,uVar22);
          iVar2 = (**(code **)(*piVar35 + 0xa0))();
          if ((((((((((iVar2 + DAT_00127a18 != 0) && (iVar2 + DAT_00127a1c != 0)) &&
                    (iVar2 + DAT_00127a20 != 0)) &&
                   ((iVar2 + DAT_00127a24 != 0 && (iVar2 + DAT_00127a28 != 0)))) &&
                  (iVar2 + DAT_00127a2c != 0)) &&
                 (((iVar2 + DAT_00127a30 != 0 && (iVar2 + DAT_00127a34 != 0)) &&
                  ((iVar2 + DAT_00127a38 != 0 &&
                   (((iVar2 + DAT_00127a3c != 0 && (iVar2 != -0x1e)) &&
                    (iVar2 = (**(code **)(*piVar35 + 0xa8))(piVar35), iVar2 != 0)))))))) &&
                ((iVar24 = (**(code **)(*piVar35 + 0xa0))(piVar35), iVar24 + DAT_00127a18 != 0 &&
                 (iVar24 + DAT_00127a1c != 0)))) &&
               ((iVar24 + DAT_00127a20 != 0 &&
                ((((iVar24 + DAT_00127a24 != 0 && (iVar24 + DAT_00127a28 != 0)) &&
                  ((iVar24 + DAT_00127a2c != 0 &&
                   (((iVar24 + DAT_00127a30 != 0 && (iVar24 + DAT_00127a34 != 0)) &&
                    (iVar24 + DAT_00127a38 != 0)))))) &&
                 ((iVar24 + DAT_00127a3c != 0 && (iVar24 != -0x1e)))))))) &&
              ((**(int **)(iVar2 + 4) == 2 || (**(int **)(iVar2 + 4) == 0)))) && (*piVar40 == 1)) {
            puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
            uVar3 = __subsf3(*puVar15,piVar40[6]);
            puVar15 = (undefined4 *)(**(code **)(*piVar35 + 0x38))(piVar35);
            iVar2 = __aeabi_fcmplt(uVar3,*puVar15);
            if (iVar2 != 0) {
              puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
              uVar3 = __addsf3(*puVar15,piVar40[6]);
              puVar15 = (undefined4 *)(**(code **)(*piVar35 + 0x38))(piVar35);
              iVar2 = __aeabi_fcmpgt(uVar3,*puVar15);
              if ((iVar2 != 0) &&
                 (Target_Attack((CCLayer *)piVar35,extraout_s0),
                 *(char *)((int)piVar40 + 0x16) == '\0')) break;
            }
          }
        }
        *(undefined *)(piVar40 + 5) = 1;
      }
    }
    cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 != 0) {
      FUN_00129d54();
    }
    if (piVar40 != (int *)0x0) {
      operator_delete(piVar40);
    }
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)ppiVar36,true);
    iVar2 = *(int *)(this + DAT_00127a40);
    piVar40 = (int *)(iVar2 + 0xfc);
    *(int *)(iVar2 + 0x110) = *(int *)(iVar2 + 0x110) + -1;
    FUN_00129d54();
  }
  iVar2 = (*(code *)piVar40[0x28])(ppiVar36);
  if (iVar2 == 0x3dc) {
    ppiVar37 = (int **)(*ppiVar36)[0xf];
    ppiVar30 = *(int ***)(iVar34 + DAT_00127a44);
    iVar2 = *(int *)(iVar34 + DAT_00127a4c);
    piVar35 = *(int **)(iVar34 + DAT_00127a50);
    pcVar41 = *(code **)(**ppiVar30 + 0x38);
    if (**(int **)(iVar34 + DAT_00127a48) == 2) {
      puVar15 = (undefined4 *)(*pcVar41)();
      uVar3 = __floatsisf(*(undefined4 *)(iVar2 + *piVar35 * 0x18));
      __addsf3(uVar3,*puVar15);
      iVar34 = (**(code **)(**ppiVar30 + 0x38))();
      pcVar41 = (code *)(iVar2 + *piVar35 * 0x18);
      uVar3 = __floatsisf(*(undefined4 *)(pcVar41 + 4));
      uVar44 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
      cocos2d::CCPoint::CCPoint(aCStack_120,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      pCVar25 = aCStack_120;
    }
    else {
      if (**(int **)(iVar34 + DAT_00127a48) != 1) goto LAB_00127940;
      puVar15 = (undefined4 *)(*pcVar41)();
      uVar3 = __floatsisf(*(undefined4 *)(iVar2 + *piVar35 * 0x18 + 8));
      __addsf3(uVar3,*puVar15);
      iVar34 = (**(code **)(**ppiVar30 + 0x38))();
      pcVar41 = (code *)(iVar2 + *piVar35 * 0x18);
      uVar3 = __floatsisf(*(undefined4 *)(pcVar41 + 0xc));
      uVar44 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
      cocos2d::CCPoint::CCPoint(aCStack_118,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      pCVar25 = aCStack_118;
    }
    do {
      (*(code *)ppiVar37)(ppiVar36,pCVar25);
      FUN_00129d54();
      ppiVar30 = ppiVar37;
LAB_00127940:
      puVar15 = (undefined4 *)(*pcVar41)();
      uVar3 = __floatsisf(*(undefined4 *)(iVar2 + *piVar35 * 0x18 + 0x10));
      __addsf3(uVar3,*puVar15);
      iVar34 = (**(code **)(**ppiVar30 + 0x38))();
      pcVar41 = (code *)(iVar2 + *piVar35 * 0x18);
      uVar3 = __floatsisf(*(undefined4 *)(pcVar41 + 0x14));
      uVar44 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
      cocos2d::CCPoint::CCPoint(aCStack_110,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      pCVar25 = aCStack_110;
    } while( true );
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  piVar35 = *ppiVar36;
  if (iVar2 == DAT_00127a54) {
    pcVar41 = (code *)piVar35[0xf];
    (**(code **)(***(int ***)(iVar34 + DAT_00127a44) + 0x38))();
    piVar35 = (int *)(*ppiVar36)[0xe];
    uVar44 = (*(code *)piVar35)(ppiVar36);
    cocos2d::CCPoint::CCPoint(aCStack_108,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
    (*pcVar41)(ppiVar36,aCStack_108);
    Commend((CCLayer *)ppiVar36);
    FUN_00129d54();
  }
  iVar2 = (*(code *)piVar35[0x28])(ppiVar36);
  if (iVar2 == DAT_00127a58) {
    iVar2 = (*(code *)(*ppiVar36)[0x2a])(ppiVar36);
    piVar35 = *(int **)(iVar2 + 4);
    if (*piVar35 != 4) {
      FUN_00129d54();
    }
    iVar24 = piVar35[10];
    iVar28 = piVar35[9];
    iVar38 = __aeabi_fcmpeq(iVar28,iVar24);
    if (iVar38 == 0) {
      uVar3 = __divsf3(iVar28,iVar24);
      iVar24 = __aeabi_fcmpgt(uVar3,0);
      if (iVar24 == 0) {
        piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35[0x4a],1);
        (**(code **)(*piVar35 + 0x34))(piVar35,0);
        piVar35 = (int *)cocos2d::CCNode::getChildByTag(*(CCNode **)(*(int *)(iVar2 + 4) + 0x128),0)
        ;
        (**(code **)(*piVar35 + 0x34))(piVar35,0x3f800000);
        iVar24 = iRam00127e98;
        iVar38 = *(int *)(*(int *)(iVar2 + 4) + 100);
        if (iVar38 == -1) {
          *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 3;
          uVar3 = cocos2d::CCSprite::spriteWithFile((char *)(iVar24 + 0x127ae0));
          pCVar13 = (CCNode *)cocos2d::CCSprite::spriteWithFile((char *)(iRam00127e9c + 0x127aea));
          pcVar41 = (code *)(*ppiVar36)[0x34];
          uVar16 = cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
          (*pcVar41)(ppiVar36,uVar16,1);
          piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea0);
          pcVar41 = *(code **)(*piVar35 + 0xd0);
          pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea0);
          uVar16 = cocos2d::CCNode::getChildByTag(pCVar6,0);
          (*pcVar41)(piVar35,uVar16,1);
          (*(code *)(*ppiVar36)[0x33])(ppiVar36,uVar3,0,0);
          piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea0);
          (**(code **)(*piVar35 + 0xcc))(piVar35,pCVar13,0,0);
          iVar24 = 0x14;
          piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
          uVar44 = (**(code **)(*piVar35 + 0x6c))(piVar35,0);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)aCStack_100,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
          Draw_Castle_Destroy(pCVar13,aCStack_100[0]);
          do {
            iVar24 = iVar24 + -1;
            pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea8);
            piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,1);
            pCVar7 = (CCTexture2D *)(**(code **)(*piVar35 + 0x118))();
            pCVar8 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
            piVar35 = *ppiVar37;
            puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
            __subsf3(*puVar15,uRam00127eac);
            iVar38 = __fixsfsi();
            puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
            __addsf3(*puVar15,uRam00127eac);
            iVar28 = __fixsfsi();
            uVar3 = Random(iVar38,iVar28);
            iVar38 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
            __subsf3(*(undefined4 *)(iVar38 + 4),uRam00127eac);
            iVar38 = __fixsfsi();
            iVar28 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
            __addsf3(*(undefined4 *)(iVar28 + 4),uRam00127eac);
            iVar28 = __fixsfsi();
            iVar38 = Random(iVar38,iVar28);
            iVar28 = Random(-5,0xf);
            iVar9 = Random(5,9);
            iVar10 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
            iVar11 = __floatsisf(uVar3);
            puVar15 = puRam00127eb0;
            iVar10 = __fixsfsi(*(undefined4 *)(iVar10 + 4));
            Particle_Body_Draw((CCLayer *)piVar35,pCVar8,extraout_s0_00,iVar11,iVar38,(int)puVar15,
                               iVar28,iVar9,iVar10);
          } while (iVar24 != 0);
        }
        else if (iVar38 == 3) {
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea0);
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
          cocos2d::CCNode::getChildByTag(pCVar13,0);
          iVar24 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar24 == 0) {
            **(undefined **)(iVar34 + iRam00127eb4) = 1;
            **(undefined4 **)(iVar34 + iRam00127eb8) = 0xf;
            **(undefined **)(iVar34 + iRam00127ebc) = 1;
          }
        }
      }
      else {
        piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35[0x4a],1);
        iVar24 = *piVar35;
        uVar3 = __divsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x24),
                         *(undefined4 *)(*(int *)(iVar2 + 4) + 0x28));
        (**(code **)(iVar24 + 0x34))(piVar35,uVar3);
        piVar35 = (int *)cocos2d::CCNode::getChildByTag(*(CCNode **)(*(int *)(iVar2 + 4) + 0x128),0)
        ;
        (**(code **)(*piVar35 + 0x34))(piVar35,0x3f800000);
      }
      piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
      (**(code **)(*piVar35 + 0x6c))(piVar35,1);
      piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
      pcVar41 = *(code **)(*piVar35 + 0x3c);
      puVar15 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x11c) + 0x38))();
      __addsf3(*puVar15,uRam00127ec0);
      iVar24 = (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x11c) + 0x38))();
      uVar3 = __addsf3(*(undefined4 *)(iVar24 + 4),*(undefined4 *)(*(int *)(iVar2 + 4) + 0x104));
      uVar44 = __subsf3(uVar3,uRam00127ec4);
      cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      (*pcVar41)(piVar35,aCStack_f8);
    }
    else {
      (**(code **)(*(int *)piVar35[0x4a] + 0x6c))((int *)piVar35[0x4a],0);
    }
    iVar24 = *(int *)(iVar2 + 4);
    if (*(char *)(iVar24 + 0x6c) == '\0') {
      FUN_00129d54();
    }
    uVar3 = __addsf3(*(undefined4 *)(iVar24 + 0x68),in_r1);
    *(undefined4 *)(iVar24 + 0x68) = uVar3;
    piVar35 = *(int **)(iVar2 + 4);
    uVar44 = __extendsfdf2(piVar35[0x1a]);
    iVar24 = __aeabi_dcmpgt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),uRam00127e90,uRam00127e94);
    if (iVar24 == 0) {
      FUN_00129d54();
    }
    iVar24 = *piVar35;
    if (iVar24 == 4) {
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
      (**(code **)(*piVar35 + 0xf4))();
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ea0);
      piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
      puVar23 = auStack_164;
      pcVar41 = *(code **)(*piVar35 + 0xf4);
LAB_001282c2:
      *puVar23 = 0xff;
      puVar23[1] = 0xff;
      puVar23[2] = 0xff;
      (*pcVar41)();
      ppiVar36 = ppiVar37;
    }
    else if (iVar24 == 5) {
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
      auStack_164[4] = 0xff;
      auStack_164[5] = 0xff;
      auStack_164[6] = 0xff;
      (**(code **)(*piVar35 + 0xf4))();
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iRam00127ec8);
      piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
      puVar23 = auStack_164 + 8;
      pcVar41 = *(code **)(*piVar35 + 0xf4);
      goto LAB_001282c2;
    }
LAB_001282ca:
    *(undefined *)(*(int *)(iVar2 + 4) + 0x6c) = 0;
    piVar35 = *(int **)(iVar2 + 4);
    piVar35[0x1a] = 0;
    FUN_00129d54();
  }
  else {
    iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
    if (iVar2 == 3) {
      FUN_00129d54();
    }
    puVar5 = (undefined4 *)(*(code *)(*ppiVar36)[0x28])(ppiVar36);
    piVar35 = *ppiVar36;
    puVar15 = puRam00127eb0;
    if (puVar5 == puRam00127eb0) {
      this_01 = (CParticle *)(*(code *)piVar35[0x2a])(ppiVar36);
      CParticle::setAcc(this_01,extraout_s0_01,extraout_s1,extraout_s2);
      fVar43 = (float)__mulsf3(in_r1,uRam00127ed0);
      CParticle::updateState(this_01,fVar43);
      uVar44 = CParticle::getPos(this_01,&fStack_12c,&fStack_128,&fStack_124);
      pcVar41 = (code *)(*ppiVar36)[0xf];
      cocos2d::CCPoint::CCPoint(aCStack_f0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      (*pcVar41)(ppiVar36,aCStack_f0);
      ppcVar26 = &pcStack_44;
      CParticle::getVel(this_01,(float *)&pcStack_48,(float *)ppcVar26,afStack_40);
      iVar2 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
      iVar2 = __aeabi_fcmplt(*(undefined4 *)(iVar2 + 4),0);
      if (((iVar2 == 0) &&
          ((((iVar2 = __aeabi_fcmplt(pcStack_48,0x3f800000), pcVar41 = pcStack_48, iVar2 == 0 ||
             (iVar2 = __aeabi_fcmpgt(pcStack_48,uRam00127ed4), iVar2 == 0)) ||
            (iVar2 = __aeabi_fcmplt(pcStack_44,0x3f800000), pcVar41 = pcStack_44, iVar2 == 0)) ||
           (iVar2 = __aeabi_fcmpgt(pcStack_44,uRam00127ed4), iVar2 == 0)))) &&
         (iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this_01 + 0x34),0x40000000), iVar2 == 0)) {
        FUN_00129d54();
      }
      free(this_01);
      piVar35 = (int *)(*ppiVar36)[0x2b];
      (*(code *)piVar35)(ppiVar36,0);
      FUN_00128d46();
      if (piVar35 != (int *)0x0) {
        puVar15 = in_stack_00000084;
        if (ppcVar26 == (code **)0x0) goto LAB_00127ed8;
        iVar2 = (int)pcVar41 << 0xf;
        uVar22 = (int)ppcVar26 + (-(uint)(((uint)pcVar41 & 0x20000) == 0) - (int)pcVar41);
        func_0xffef0eb6(uVar22 >> ((uint)ppiVar36 & 0x1f) | uVar22 << 0x20 - ((uint)ppiVar36 & 0x1f)
                        ,(int)pcVar41 << 0xf);
        func_0x002eceba();
        func_0xffeb8ebe();
        *(int *)iVar2 = iVar2;
        *(code **)(iVar2 + 4) = pcVar41;
        *(int ***)(iVar2 + 8) = ppiVar36;
        in_stack_00000084 = extraout_r1;
      }
      piVar35 = *(int **)(pcVar41 + 8);
      ppiVar36 = *(int ***)(pcVar41 + 0xc);
      *in_stack_00000084 = *(undefined4 *)(pcVar41 + 4);
      in_stack_00000084[1] = piVar35;
      in_stack_00000084[2] = pcVar41 + 0x14;
      puVar15 = in_stack_00000084 + 3;
    }
LAB_00127ed8:
    iVar2 = (*(code *)piVar35[0x28])(ppiVar36,puVar15);
    piVar35 = *ppiVar36;
    if (iVar2 == 0x3e4) {
      iVar2 = (*(code *)piVar35[0x2a])(ppiVar36);
      piVar35 = *(int **)(iVar2 + 4);
      iVar24 = *piVar35;
      if (((iVar24 == 5) || (iVar24 == 3)) || (iVar24 == 7)) {
        iVar24 = piVar35[9];
        iVar38 = __aeabi_fcmple(iVar24,0);
        if (iVar38 == 0) {
          iVar38 = *(int *)(*(int *)(this + 0x120) + 0x114);
          uVar3 = __divsf3(iVar24,piVar35[10]);
          *(undefined4 *)(iVar38 + 0x118) = uVar3;
        }
        else {
          *(undefined4 *)(*(int *)(*(int *)(this + 0x120) + 0x114) + 0x118) = 0;
        }
      }
      piVar35 = *(int **)(iVar2 + 4);
      if (*piVar35 == 5) {
        iVar28 = piVar35[9];
        iVar38 = piVar35[10];
        iVar24 = __aeabi_fcmpeq(iVar28);
        if (iVar24 == 0) {
          uVar3 = __divsf3(iVar28,iVar38);
          iVar24 = __aeabi_fcmpgt(uVar3,0);
          if (iVar24 == 0) {
            piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35[0x4a],1);
            (**(code **)(*piVar35 + 0x34))(piVar35,0);
            piVar35 = (int *)cocos2d::CCNode::getChildByTag
                                       (*(CCNode **)(*(int *)(iVar2 + 4) + 0x128),0);
            (**(code **)(*piVar35 + 0x34))(piVar35,0x3f800000);
            iVar24 = *(int *)(*(int *)(iVar2 + 4) + 100);
            if (iVar24 == -1) {
              *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 3;
              if (**ppiVar30 == 2) {
                ppiStack_1b8 = (int **)cocos2d::CCSprite::spriteWithFile
                                                 ((char *)(DAT_00128318 + 0x127fea));
                pcVar20 = (char *)(DAT_0012831c + 0x127ff4);
              }
              else {
                ppiStack_1b8 = (int **)cocos2d::CCSprite::spriteWithFile
                                                 ((char *)(DAT_00128320 + 0x127ffa));
                pcVar20 = (char *)(DAT_00128324 + 0x128004);
              }
              pCVar13 = (CCNode *)cocos2d::CCSprite::spriteWithFile(pcVar20);
              pcVar41 = (code *)(*ppiVar36)[0x34];
              uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
              (*pcVar41)(ppiVar36,uVar3,1);
              piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_00128328);
              pcVar41 = *(code **)(*piVar35 + 0xd0);
              pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_00128328);
              uVar3 = cocos2d::CCNode::getChildByTag(pCVar6,0);
              (*pcVar41)(piVar35,uVar3,1);
              (*(code *)(*ppiVar36)[0x33])(ppiVar36,ppiStack_1b8,0,0);
              piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_00128328);
              (**(code **)(*piVar35 + 0xcc))(piVar35,pCVar13,0,0);
              iVar24 = 0x14;
              piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
              uVar44 = (**(code **)(*piVar35 + 0x6c))(piVar35,0);
              cocos2d::CCPoint::CCPoint
                        ((CCPoint *)aCStack_e8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
              Draw_Castle_Destroy(pCVar13,aCStack_e8[0]);
              do {
                iVar24 = iVar24 + -1;
                pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,0x3e4);
                piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,1);
                pCVar7 = (CCTexture2D *)(**(code **)(*piVar35 + 0x118))();
                pCVar8 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
                piVar35 = *ppiVar37;
                puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
                __subsf3(*puVar15,DAT_00128330);
                iVar38 = __fixsfsi();
                puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
                __addsf3(*puVar15,DAT_00128330);
                iVar28 = __fixsfsi();
                uVar3 = Random(iVar38,iVar28);
                iVar38 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
                __subsf3(*(undefined4 *)(iVar38 + 4),DAT_00128330);
                iVar38 = __fixsfsi();
                iVar28 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
                __addsf3(*(undefined4 *)(iVar28 + 4),DAT_00128330);
                iVar28 = __fixsfsi();
                iVar28 = Random(iVar38,iVar28);
                iVar9 = Random(-5,0xf);
                iVar10 = Random(5,9);
                iVar11 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
                iVar12 = __floatsisf(uVar3);
                iVar38 = DAT_00128334;
                iVar11 = __fixsfsi(*(undefined4 *)(iVar11 + 4));
                Particle_Body_Draw((CCLayer *)piVar35,pCVar8,extraout_s0_02,iVar12,iVar28,iVar38,
                                   iVar9,iVar10,iVar11);
              } while (iVar24 != 0);
              **(undefined **)(iVar34 + DAT_00128338) = 1;
            }
            else if (iVar24 == 3) {
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_00128328);
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
              cocos2d::CCNode::getChildByTag(pCVar13,0);
              iVar24 = cocos2d::CCNode::numberOfRunningActions();
              if (iVar24 == 0) {
                **(undefined4 **)(iVar34 + DAT_0012833c) = 0xe;
                **(undefined **)(iVar34 + DAT_00128340) = 1;
                Monster_Item_Drop(false);
              }
            }
          }
          else {
            piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35[0x4a],1);
            iVar24 = *piVar35;
            uVar3 = __divsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x24),
                             *(undefined4 *)(*(int *)(iVar2 + 4) + 0x28));
            (**(code **)(iVar24 + 0x34))(piVar35,uVar3);
            piVar35 = (int *)cocos2d::CCNode::getChildByTag
                                       (*(CCNode **)(*(int *)(iVar2 + 4) + 0x128),0);
            (**(code **)(*piVar35 + 0x34))(piVar35,0x3f800000);
          }
          piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
          (**(code **)(*piVar35 + 0x6c))(piVar35,1);
          piVar35 = *(int **)(*(int *)(iVar2 + 4) + 0x128);
          pcVar41 = *(code **)(*piVar35 + 0x3c);
          puVar15 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x11c) + 0x38))();
          __addsf3(*puVar15,DAT_00128344);
          iVar24 = (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x11c) + 0x38))();
          uVar3 = __addsf3(*(undefined4 *)(iVar24 + 4),*(undefined4 *)(*(int *)(iVar2 + 4) + 0x104))
          ;
          uVar44 = __subsf3(uVar3,DAT_00128348);
          cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
          (*pcVar41)(piVar35,aCStack_e0);
        }
        else {
          (**(code **)(*(int *)piVar35[0x4a] + 0x6c))((int *)piVar35[0x4a],0);
        }
      }
      iVar24 = *(int *)(iVar2 + 4);
      if (*(char *)(iVar24 + 0x6c) == '\0') {
        FUN_00129d54();
      }
      uVar3 = __addsf3(*(undefined4 *)(iVar24 + 0x68),in_r1);
      *(undefined4 *)(iVar24 + 0x68) = uVar3;
      piVar35 = *(int **)(iVar2 + 4);
      uVar44 = __extendsfdf2(piVar35[0x1a]);
      iVar24 = __aeabi_dcmpgt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),DAT_00128310,DAT_00128314
                             );
      if (iVar24 == 0) {
        FUN_00129d54();
      }
      iVar24 = *piVar35;
      if (iVar24 == 4) {
        piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
        auStack_164[12] = 0xff;
        auStack_164[13] = 0xff;
        auStack_164[14] = 0xff;
        (**(code **)(*piVar35 + 0xf4))();
        pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_0012834c);
        piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
        puVar23 = auStack_164 + 0x10;
        pcVar41 = *(code **)(*piVar35 + 0xf4);
      }
      else {
        if (iVar24 != 5) goto LAB_001282ca;
        piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,0);
        auStack_164[20] = 0xff;
        auStack_164[21] = 0xff;
        auStack_164[22] = 0xff;
        (**(code **)(*piVar35 + 0xf4))();
        pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,DAT_00128328);
        piVar35 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
        puVar23 = auStack_164 + 0x18;
        pcVar41 = *(code **)(*piVar35 + 0xf4);
      }
      goto LAB_001282c2;
    }
  }
  iVar2 = (*(code *)piVar35[0x28])(ppiVar36);
  if (iVar2 == DAT_00128350) {
    ppiStack_1b8 = *(int ***)(iVar34 + DAT_00128354);
    if (*(char *)ppiStack_1b8 == '\0') {
      ppiStack_1b8 = *(int ***)(iVar34 + DAT_001286e4);
      if (*(char *)ppiStack_1b8 == '\0') {
        FUN_00129d54();
      }
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,2);
      piVar35 = (int *)(**(code **)(*piVar35 + 0xa8))();
      iVar2 = DAT_001286e8;
    }
    else {
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,2);
      piVar35 = (int *)(**(code **)(*piVar35 + 0xa8))();
      iVar2 = DAT_00128358;
    }
    ppiVar14 = *(int ***)(iVar34 + iVar2);
    piVar40 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
    iVar2 = (**(code **)(*piVar40 + 0xa8))();
    iVar24 = *(int *)(piVar35[1] + 100);
    if (iVar24 != 3) {
      FUN_00129d54();
    }
    pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar36,2);
    cocos2d::CCNode::getChildByTag(pCVar13,*(int *)(*(int *)(*piVar35 + 4) + 0x290));
    iVar38 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar38 != 0) {
      FUN_00129d54();
    }
    KG_removeChild((CCNode *)ppiVar36,true);
    pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_001286ec);
    KG_removeChild(pCVar13,true);
    if (*(int *)(*(int *)(iVar2 + 4) + 4) == 4) {
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar37,iVar24);
      KG_removeChild(pCVar13,true);
      piVar35 = *ppiVar37;
      pcVar41 = *(code **)(*piVar35 + 0xd0);
      uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)piVar35,iVar24);
      (*pcVar41)(piVar35,uVar3,1);
    }
    piVar35 = *ppiVar37;
    pcVar41 = *(code **)(*piVar35 + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)piVar35,2);
    (*pcVar41)(piVar35,uVar3,1);
    *(char *)ppiStack_1b8 = '\0';
    piVar35 = *ppiVar14;
    (**(code **)(*piVar35 + 0x6c))(piVar35,1);
    FUN_00129d54();
    ppiVar36 = ppiStack_1b8;
  }
  iVar2 = (*(code *)(*ppiVar36)[0x28])(ppiVar36);
  pcVar41 = (code *)(*ppiVar36)[0x2a];
  if (iVar2 == DAT_001286f0) {
    FUN_00128c62();
  }
  ppiVar14 = (int **)(*pcVar41)(ppiVar36);
  if (ppiVar14 == (int **)0x0) {
    FUN_00128c4a();
  }
  piVar35 = ppiVar14[1];
  if (*piVar35 != 2) {
    if (piVar35[1] != (*ppiVar30)[0xb]) {
      FUN_00129d74();
    }
    if (**(int ***)(iVar34 + DAT_001286e8) == (int *)0x0) goto LAB_001284da;
    iVar2 = (**(code **)(***(int ***)(iVar34 + DAT_001286e8) + 0x68))();
    if (iVar2 == 0) goto LAB_001284da;
    FUN_00129d74();
    goto LAB_001284da;
  }
  iVar2 = piVar35[9];
  iVar24 = piVar35[10];
  iVar38 = *(int *)(*(int *)(this + 0x120) + 0x110);
  while( true ) {
    uVar3 = __divsf3(iVar2,iVar24);
    *(undefined4 *)(iVar38 + 0x118) = uVar3;
    FUN_00129d94();
    iVar2 = (**(code **)(***(int ***)(iVar34 + DAT_001286e8) + 0x68))();
    if ((iVar2 == 0) && (*ppiVar14[1] != 7)) {
      FUN_00129d94();
    }
LAB_001284da:
    piVar35 = ppiVar14[1];
    iVar2 = piVar35[9];
    iVar24 = __aeabi_fcmple(iVar2,0);
    if (iVar24 != 0) break;
    iVar38 = *(int *)(*(int *)(this + 0x120) + 0x114);
    iVar24 = piVar35[10];
  }
  iVar2 = *(int *)(*(int *)(this + 0x120) + 0x114);
  puVar31 = (uint *)(iVar2 + 0xfc);
  *(undefined4 *)(iVar2 + 0x118) = 0;
  FUN_00129d94();
  if (3 < *puVar31) {
    FUN_00128c4a();
    return;
  }
  if (1 < *puVar31 - 2) {
    piVar35 = (int *)puVar31[0x46];
    if (piVar35 != (int *)0x0) {
      pcVar41 = *(code **)(*piVar35 + 0x3c);
      (**(code **)(*(int *)puVar31[0x47] + 0x38))();
      iVar2 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      uVar44 = __addsf3(*(undefined4 *)(iVar2 + 4),DAT_001286f4);
      cocos2d::CCPoint::CCPoint(aCStack_d8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      (*pcVar41)(piVar35,aCStack_d8);
    }
    piVar35 = (int *)ppiVar14[1][0x48];
    if (piVar35 != (int *)0x0) {
      pcVar41 = *(code **)(*piVar35 + 0x3c);
      (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      iVar2 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      uVar44 = __addsf3(*(undefined4 *)(iVar2 + 4),0x40000000);
      cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      (*pcVar41)(piVar35,aCStack_d0);
    }
  }
  piVar35 = ppiVar14[1];
  iVar2 = piVar35[0x4a];
  if ((iVar2 != 0) && ((piVar35[0x19] == 2 || (*(char *)(piVar35 + 0x49) != '\0')))) {
    iVar38 = piVar35[9];
    iVar28 = piVar35[10];
    uVar3 = __divsf3(iVar38,iVar28);
    iVar24 = __aeabi_fcmpgt(uVar3,0);
    if (iVar24 == 0) {
      if (*piVar35 != 2) {
        (**(code **)(**ppiVar37 + 0xd0))(*ppiVar37,iVar2,1);
        ppiVar14[1][0x4a] = 0;
      }
    }
    else {
      iVar2 = __aeabi_fcmpgt(iVar38,iVar28);
      if (iVar2 != 0) {
        piVar35[9] = iVar28;
      }
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],1);
      iVar2 = *piVar35;
      uVar3 = __divsf3(ppiVar14[1][9],ppiVar14[1][10]);
      (**(code **)(iVar2 + 0x2c))(piVar35,uVar3);
      piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
      (**(code **)(*piVar35 + 0x2c))(piVar35,0x3f800000);
    }
    piVar40 = ppiVar14[1];
    piVar35 = (int *)piVar40[0x4a];
    if (piVar35 != (int *)0x0) {
      iVar2 = *piVar35;
      if (*piVar40 - 2U < 2) {
        piVar39 = *(int **)(iVar34 + DAT_00128a48);
        iVar24 = *(int *)(iVar34 + DAT_00128a4c);
        if (*piVar40 == 2) {
          pcVar41 = *(code **)(iVar2 + 0x3c);
          ppiVar30 = *(int ***)(iVar34 + DAT_00128a50);
          pcVar42 = *(code **)(**ppiVar30 + 0x38);
          if (**(int **)(iVar34 + DAT_00128a54) == 2) {
            puVar15 = (undefined4 *)(*pcVar42)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18));
            __addsf3(uVar3,*puVar15);
            iVar34 = (**(code **)(**ppiVar30 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
            uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 4));
            uVar44 = __addsf3(uVar3,uVar16);
            cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
            pCVar25 = aCStack_c0;
          }
          else if (**(int **)(iVar34 + DAT_00128a54) == 1) {
            puVar15 = (undefined4 *)(*pcVar42)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 8));
            __addsf3(uVar3,*puVar15);
            iVar34 = (**(code **)(**ppiVar30 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
            uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0xc));
            uVar44 = __addsf3(uVar3,uVar16);
            cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
            pCVar25 = aCStack_b8;
          }
          else {
            puVar15 = (undefined4 *)(*pcVar42)();
            uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x10));
            __addsf3(uVar3,*puVar15);
            iVar34 = (**(code **)(**ppiVar30 + 0x38))();
            uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
            uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x14));
            uVar44 = __addsf3(uVar3,uVar16);
            cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
            pCVar25 = aCStack_b0;
          }
        }
        else {
          pcVar41 = *(code **)(iVar2 + 0x3c);
          ppiVar30 = *(int ***)(iVar34 + DAT_00128a58);
          puVar15 = (undefined4 *)(**(code **)(**ppiVar30 + 0x38))();
          uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x10));
          __addsf3(uVar3,*puVar15);
          iVar34 = (**(code **)(**ppiVar30 + 0x38))();
          uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
          uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar34 + 4));
          uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x14));
          uVar44 = __addsf3(uVar3,uVar16);
          cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
          pCVar25 = aCStack_a8;
        }
      }
      else {
        if (piVar40[1] == 0xaa) {
          uVar3 = 0xfffffff1;
          ppiStack_1b8 = (int **)0x3c;
        }
        else {
          uVar3 = 0;
          ppiStack_1b8 = (int **)0x14;
        }
        pcVar41 = *(code **)(iVar2 + 0x3c);
        puVar15 = (undefined4 *)(**(code **)(*(int *)piVar40[0x47] + 0x38))();
        uVar16 = *puVar15;
        piVar35 = (int *)ppiVar14[1][0x4a];
        piVar40 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35,0);
        puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x7c))();
        uVar17 = __mulsf3(*puVar15,0x3f000000);
        uVar16 = __subsf3(uVar16,uVar17);
        uVar3 = __floatsisf(uVar3);
        __addsf3(uVar16,uVar3);
        iVar34 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
        uVar3 = __addsf3(*(undefined4 *)(iVar34 + 4),ppiVar14[1][0x41]);
        uVar16 = __floatsisf(ppiStack_1b8);
        uVar44 = __addsf3(uVar3,uVar16);
        cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
        pCVar25 = aCStack_c8;
      }
      (*pcVar41)(piVar35,pCVar25);
    }
    *(undefined *)(ppiVar14[1] + 0x49) = 0;
    FUN_00128c4a();
    return;
  }
  uVar3 = __divsf3(piVar35[9],piVar35[10]);
  iVar24 = __aeabi_fcmplt(uVar3,0);
  if ((iVar24 != 0) && (*piVar35 != 2)) {
    (**(code **)(**ppiVar37 + 0xd0))(*ppiVar37,iVar2,1);
    ppiVar14[1][0x4a] = 0;
  }
  if ((CCNode *)ppiVar14[1][0x4a] == (CCNode *)0x0) {
    FUN_00128c4a();
    return;
  }
  piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
  uVar3 = (**(code **)(*piVar35 + 0x28))();
  iVar2 = __aeabi_fcmpeq(uVar3,0x3f800000);
  if (iVar2 == 0) {
    FUN_00128c4a();
    return;
  }
  piVar35 = ppiVar14[1];
  iVar2 = __addsf3(piVar35[0x4b],in_r1);
  piVar35[0x4b] = iVar2;
  piVar35 = ppiVar14[1];
  iVar2 = __aeabi_fcmpgt(piVar35[0x4b],0x40000000);
  if (iVar2 != 0) {
    piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35[0x4a],1);
    (**(code **)(*piVar35 + 0x2c))(piVar35,0);
    piVar35 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
    (**(code **)(*piVar35 + 0x2c))(piVar35,0);
    ppiVar14[1][0x4b] = 0;
  }
  piVar40 = ppiVar14[1];
  piVar35 = (int *)piVar40[0x4a];
  if (piVar35 == (int *)0x0) {
    FUN_00128c4a();
    return;
  }
  iVar2 = *piVar35;
  if (*piVar40 - 2U < 2) {
    piVar39 = *(int **)(iVar34 + iRam00128dcc);
    iVar24 = *(int *)(iVar34 + iRam00128dd0);
    if (*piVar40 == 2) {
      pcVar41 = *(code **)(iVar2 + 0x3c);
      ppiVar30 = *(int ***)(iVar34 + iRam00128dd4);
      pcVar42 = *(code **)(**ppiVar30 + 0x38);
      if (**(int **)(iVar34 + iRam00128dd8) == 2) {
        puVar15 = (undefined4 *)(*pcVar42)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18));
        __addsf3(uVar3,*puVar15);
        iVar2 = (**(code **)(**ppiVar30 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 4));
        uVar44 = __addsf3(uVar3,uVar16);
        cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
        pCVar25 = aCStack_98;
      }
      else if (**(int **)(iVar34 + iRam00128dd8) == 1) {
        puVar15 = (undefined4 *)(*pcVar42)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 8));
        __addsf3(uVar3,*puVar15);
        iVar2 = (**(code **)(**ppiVar30 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0xc));
        uVar44 = __addsf3(uVar3,uVar16);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
        pCVar25 = aCStack_90;
      }
      else {
        puVar15 = (undefined4 *)(*pcVar42)();
        uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x10));
        __addsf3(uVar3,*puVar15);
        iVar2 = (**(code **)(**ppiVar30 + 0x38))();
        uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
        uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x14));
        uVar44 = __addsf3(uVar3,uVar16);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
        pCVar25 = aCStack_88;
      }
    }
    else {
      pcVar41 = *(code **)(iVar2 + 0x3c);
      ppiVar30 = *(int ***)(iVar34 + iRam00128ddc);
      puVar15 = (undefined4 *)(**(code **)(**ppiVar30 + 0x38))();
      uVar3 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x10));
      __addsf3(uVar3,*puVar15);
      iVar2 = (**(code **)(**ppiVar30 + 0x38))();
      uVar3 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
      uVar3 = __addsf3(uVar3,*(undefined4 *)(iVar2 + 4));
      uVar16 = __floatsisf(*(undefined4 *)(iVar24 + *piVar39 * 0x18 + 0x14));
      uVar44 = __addsf3(uVar3,uVar16);
      cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
      pCVar25 = aCStack_80;
    }
  }
  else {
    if (piVar40[1] == 0xaa) {
      uVar3 = 0xfffffff1;
      ppiStack_1b8 = (int **)0x3c;
    }
    else {
      uVar3 = 0;
      ppiStack_1b8 = (int **)0x14;
    }
    pcVar41 = *(code **)(iVar2 + 0x3c);
    puVar15 = (undefined4 *)(**(code **)(*(int *)piVar40[0x47] + 0x38))();
    uVar16 = *puVar15;
    piVar35 = (int *)ppiVar14[1][0x4a];
    piVar40 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar35,0);
    puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x7c))();
    uVar17 = __mulsf3(*puVar15,0x3f000000);
    uVar16 = __subsf3(uVar16,uVar17);
    uVar3 = __floatsisf(uVar3);
    __addsf3(uVar16,uVar3);
    iVar2 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
    uVar3 = __addsf3(*(undefined4 *)(iVar2 + 4),ppiVar14[1][0x41]);
    uVar16 = __floatsisf(ppiStack_1b8);
    uVar44 = __addsf3(uVar3,uVar16);
    cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
    pCVar25 = aCStack_a0;
  }
  fVar43 = (float)(*pcVar41)(piVar35,pCVar25);
  pcVar41 = *(code **)(this + 0x120);
  attack(fVar43,in_r1,(CCLayer *)ppiVar36,*(CCLayer **)(this + iRam00128de0));
  FUN_00129d54();
  piVar35 = (int *)(*pcVar41)(ppiVar36);
  pcVar42 = (code *)(*ppiVar36)[0xf];
  pcVar41 = (code *)(*ppiVar36)[0xe];
  if (*piVar35 == 0) {
    puVar15 = (undefined4 *)(*pcVar41)();
    __addsf3(*puVar15,piVar35[3]);
    iVar2 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
    uVar44 = __addsf3(*(undefined4 *)(iVar2 + 4),piVar35[4]);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
    (*pcVar42)(ppiVar36,aCStack_78);
    puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
    iVar2 = __aeabi_fcmpgt(*puVar15,uRam00128de4);
    if (iVar2 == 0) {
      puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
      uVar3 = __addsf3(piVar35[5],uRam00128de8);
      iVar2 = __aeabi_fcmpgt(*puVar15,uVar3);
LAB_00128d38:
      if (iVar2 == 0) {
        FUN_00129d84();
      }
    }
  }
  else {
    puVar15 = (undefined4 *)(*pcVar41)(ppiVar36);
    __subsf3(*puVar15,piVar35[3]);
    iVar2 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
    uVar44 = __addsf3(*(undefined4 *)(iVar2 + 4),piVar35[4]);
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
    (*pcVar42)(ppiVar36,aCStack_70);
    puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
    iVar2 = __aeabi_fcmplt(*puVar15,0);
    if (iVar2 == 0) {
      puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
      uVar3 = __subsf3(piVar35[5],uRam00128de8);
      iVar2 = __aeabi_fcmplt(*puVar15,uVar3);
      goto LAB_00128d38;
    }
  }
  operator_delete(piVar35);
  (**(code **)(**ppiVar37 + 0xd0))(*ppiVar37,ppiVar36,1);
  FUN_00129d54();
  puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
  uVar3 = __mulsf3(piVar35[0x18],0x3f000000);
  __subsf3(*puVar15,uVar3);
  iVar2 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
  iVar2 = __subsf3(*(undefined4 *)(iVar2 + 4),uRam00128dec);
  (*(code *)(*ppiVar36)[0x1f])(ppiVar36);
  iVar24 = (*(code *)(*ppiVar36)[0x1f])(ppiVar36);
  uVar44 = __addsf3(*(undefined4 *)(iVar24 + 4),uRam00128dec);
  cocos2d::CCRect::CCRect
            (aCStack_58,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20),extraout_s2_00,extraout_s3)
  ;
  pCVar18 = (CCArray *)(**(code **)(**ppiVar37 + 0x58))();
  FUN_00129d44();
  func_0xffe6ddce();
  func_0xfff65dd2();
  func_0x0031ddd6();
  func_0x0037ddda();
  uVar44 = func_0x0032ddde();
  *(undefined2 *)uVar44 = (short)uVar44;
  if (piVar35 == (int *)0x0) {
    FUN_00129d54((undefined2 *)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)ppiVar36 * iVar2);
  }
  piVar40 = (int *)cocos2d::CCArray::objectAtIndex(pCVar18,(uint)pcVar42);
  iVar2 = (**(code **)(*piVar40 + 0xa0))();
  if (iVar2 == -0x1e) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291ac == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b0 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b4 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291b8 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291bc == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291c0 == 0) {
    iVar2 = FUN_00129d3e();
  }
  if (iVar2 + DAT_001291c4 == 0) {
    FUN_00129d3e();
  }
  p_Var19 = (_Unit_Stage *)(**(code **)(*piVar40 + 0xa8))(piVar40);
  if (p_Var19 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar24 = *(int *)(p_Var19 + 4);
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar24 + 0x24),0);
  if (iVar2 == 0) {
    FUN_00129d3e();
  }
  iVar2 = *(int *)(iVar24 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&pcStack_48);
  if (**(int **)(p_Var19 + 4) == 5) {
    puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x38))();
    __addsf3(*puVar15,DAT_001291c8);
    iVar24 = (**(code **)(*piVar40 + 0x38))(piVar40);
    uVar44 = __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              (aCStack_38,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20),extraout_s2_01,
               extraout_s3_00);
    __src = aCStack_38;
  }
  else {
    (**(code **)(*piVar40 + 0x38))(piVar40);
    iVar24 = (**(code **)(*piVar40 + 0x38))(piVar40);
    iVar38 = *(int *)(p_Var19 + 4);
    uVar3 = *(undefined4 *)(iVar38 + 0x104);
    __subsf3(*(undefined4 *)(iVar24 + 4),uVar3);
    __mulsf3(*(undefined4 *)(iVar38 + 0x100),0x3f000000);
    uVar44 = __addsf3(uVar3,uVar3);
    cocos2d::CCRect::CCRect
              (aCStack_28,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20),extraout_s2_02,
               extraout_s3_01);
    __src = aCStack_28;
  }
  pCVar27 = (CCRect *)0x10;
  memcpy(&pcStack_48,__src,0x10);
  if (*piVar35 == 0) {
    iVar24 = **(int **)(p_Var19 + 4);
    if (((iVar24 != 3) && (iVar24 != 1)) && (iVar24 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*piVar35 != 1) {
      FUN_00129d3e();
    }
    iVar24 = **(int **)(p_Var19 + 4);
    if (((iVar24 != 2) && (iVar24 != 0)) && (iVar24 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar24 = cocos2d::CCRect::CCRectIntersectsRect(aCStack_58,(CCRect *)&pcStack_48,pCVar27);
  fVar43 = extraout_s0_03;
  if (iVar24 == 0) {
    fVar43 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)piVar35 + 0x19) == '\0') {
    if (*(char *)(piVar35 + 7) == '\0') {
      if (*(char *)((int)piVar35 + 0x1a) == '\0') {
        if (((*(char *)((int)piVar35 + 0x1b) == '\0') && (*(char *)(piVar35 + 6) == '\0')) &&
           (*(char *)((int)piVar35 + 0x1e) == '\0')) {
          if ((**(char **)(iVar34 + DAT_001294b8) != '\0') && (**(int **)(p_Var19 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar32 = *(Effect **)(this + DAT_001294bc);
          if (pEVar32 != (Effect *)0x0) {
            if (*piVar35 == 1) {
              pCVar33 = **(CCLayer ***)(iVar34 + DAT_001294c0);
              puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
              uVar3 = *puVar15;
              puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0x1f])(ppiVar36);
              uVar16 = __mulsf3(*puVar15,0x3f000000);
              __subsf3(uVar3,uVar16);
              iStack_1c0 = __fixsfsi();
              iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
              __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001294c4);
              iVar24 = __fixsfsi();
              iVar38 = (**(code **)(*piVar40 + 0x14))(piVar40);
              uVar1 = *(undefined *)((int)piVar35 + 0x1d);
              iVar28 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar32,pCVar33,iVar28,iStack_1c0,iVar24,iVar38,(bool)uVar1);
            }
            else if (*piVar35 == 0) {
              pCVar33 = **(CCLayer ***)(iVar34 + DAT_001294c0);
              puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
              iStack_1c0 = __fixsfsi(*puVar15);
              iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
              iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
              iVar38 = (**(code **)(*piVar40 + 0x14))(piVar40);
              uVar1 = *(undefined *)((int)piVar35 + 0x1d);
              iVar28 = 1;
              goto LAB_001292e2;
            }
            uStack_138 = CONCAT13(uStack_138._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)piVar40,uStack_138,p_Var19);
          }
        }
      }
      else {
        SetStun((CCLayer *)piVar40,fVar43);
      }
    }
    else {
      pEVar32 = *(Effect **)(this + DAT_001291d8);
      if ((pEVar32 != (Effect *)0x0) &&
         (piVar35[0x15] != 0xb && (piVar35[0x14] != 0xb && piVar35[0x13] != 0xb))) {
        pCVar33 = **(CCLayer ***)(iVar34 + DAT_001291dc);
        puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x38))(piVar40);
        iVar24 = __fixsfsi(*puVar15);
        iVar38 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
        iVar38 = __fixsfsi(*(undefined4 *)(iVar38 + 4));
        iVar28 = (**(code **)(*piVar40 + 0x14))(piVar40);
        Effect::Effect_Draw(pEVar32,pCVar33,5,iVar24,iVar38,iVar28,false);
        uStack_140 = 0xff;
        uStack_13f = 0x7f;
        uStack_13e = 0x7f;
        (**(code **)(*piVar40 + 0xf4))(piVar40);
        uStack_13c = CONCAT13(uStack_13c._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)piVar40,uStack_13c,p_Var19);
        *(undefined *)(*(int *)(p_Var19 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar32 = *(Effect **)(this + DAT_001291d8);
    if ((pEVar32 != (Effect *)0x0) &&
       (piVar35[0x15] != 0xb && (piVar35[0x14] != 0xb && piVar35[0x13] != 0xb))) {
      pCVar33 = **(CCLayer ***)(iVar34 + DAT_001291dc);
      puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x38))(piVar40);
      iVar24 = __fixsfsi(*puVar15);
      iVar38 = (**(code **)(*piVar40 + 0x38))(piVar40);
      uVar3 = *(undefined4 *)(iVar38 + 4);
      iVar38 = (**(code **)(*piVar40 + 0x7c))(piVar40);
      uVar16 = __mulsf3(*(undefined4 *)(iVar38 + 4),0x3f000000);
      __addsf3(uVar3,uVar16);
      iVar38 = __fixsfsi();
      iVar28 = (**(code **)(*piVar40 + 0x14))(piVar40);
      Effect::Effect_Draw(pEVar32,pCVar33,0xa0,iVar24,iVar38,iVar28,*(bool *)((int)piVar35 + 0x1d));
      if ((**(int **)(p_Var19 + 4) != 3) &&
         ((iVar24 = (*(int **)(p_Var19 + 4))[1],
          iVar24 != *(int *)(**(int **)(iVar34 + DAT_001291e0) + 0x2c) && (iVar24 != DAT_001291e4)))
         ) {
        uStack_146 = 0xff;
        uStack_148 = 0x7f;
        uStack_147 = 0x7f;
        (**(code **)(*piVar40 + 0xf4))(piVar40);
        uStack_144 = CONCAT13(uStack_144._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)piVar40,uStack_144,p_Var19);
        *(undefined *)(*(int *)(p_Var19 + 4) + 0x90) = 1;
        iVar24 = cocos2d::CCNode::getChildByTag((CCNode *)piVar40,0);
        if ((iVar24 == 0) &&
           (iVar24 = cocos2d::CCNode::getChildByTag((CCNode *)piVar40,DAT_001291e8), iVar24 == 0)) {
          piVar39 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar41 = *(code **)(*piVar39 + 0x74);
          cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0_04,extraout_s1_00);
          (*pcVar41)(piVar39,aCStack_68);
          pcVar41 = *(code **)(*piVar39 + 0x3c);
          puVar15 = (undefined4 *)(**(code **)(*piVar40 + 0x7c))(piVar40);
          uVar44 = __mulsf3(*puVar15,0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar44,(float)((ulonglong)uVar44 >> 0x20));
          (*pcVar41)(piVar39,aCStack_60);
          (**(code **)(*piVar40 + 0xcc))(piVar40,piVar39,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)piVar35 + 0x1e) != '\0') {
    iStack_1c0 = 0;
    piStack_1a0 = piVar35;
    do {
      iVar24 = piVar35[8];
      if (iVar24 <= iStack_1c0) {
        FUN_00129d06();
        return;
      }
      piVar39 = (int *)piStack_1a0[9];
      if (piVar39 == piVar40) {
        FUN_00129d06();
      }
      if (iStack_1c0 != iVar24 + -1) {
        if (piVar39 != (int *)0x0) goto LAB_00129a5e;
        piVar35[iStack_1c0 + 9] = (int)piVar40;
        if (*(char *)(*(int *)(p_Var19 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var19 + 4) + 0x84) = (char)piVar39;
        }
        *(undefined *)(*(int *)(p_Var19 + 4) + 0x124) = 1;
        pcVar20 = *(char **)(iVar34 + DAT_001294b8);
        if ((*pcVar20 != '\0') && (**(int **)(p_Var19 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*piVar35 == 1) {
          pEVar32 = *(Effect **)(this + DAT_001294bc);
          pCVar33 = **(CCLayer ***)(iVar34 + DAT_001294c0);
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
          uVar3 = *puVar15;
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0x1f])(ppiVar36);
          uVar16 = __mulsf3(*puVar15,0x3f000000);
          __subsf3(uVar3,uVar16);
          piStack_1a0 = (int *)__fixsfsi();
          iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
          __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001294c4);
          iVar24 = __fixsfsi();
          iVar38 = (**(code **)(*piVar40 + 0x14))(piVar40);
          uVar1 = *(undefined *)((int)piVar35 + 0x1d);
          iVar28 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar32,pCVar33,iVar28,(int)piStack_1a0,iVar24,iVar38,(bool)uVar1);
        }
        else if (*piVar35 == 0) {
          pEVar32 = *(Effect **)(this + DAT_001294bc);
          pCVar33 = **(CCLayer ***)(iVar34 + DAT_001294c0);
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
          piStack_1a0 = (int *)__fixsfsi(*puVar15);
          iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
          iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
          iVar38 = (**(code **)(*piVar40 + 0x14))(piVar40);
          uVar1 = *(undefined *)((int)piVar35 + 0x1d);
          iVar28 = 1;
          goto LAB_00129436;
        }
        uStack_134 = CONCAT13(uStack_134._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar40,uStack_134,p_Var19);
        if ((piVar35[0x15] == 0xb) || (piVar35[0x14] == 0xb || piVar35[0x13] == 0xb))
        goto LAB_00129470;
        piVar39 = *(int **)(p_Var19 + 4);
        if ((*pcVar20 != '\0') && (*piVar39 == 2)) {
          FUN_00129da2();
        }
        if (((iVar2 + DAT_001294cc == 0) || (iVar2 + DAT_001294d0 == 0)) || (iVar2 == DAT_001294d4))
        {
          iVar2 = __mulsf3(piVar35[1],0x3f000000);
          iVar24 = piVar39[9];
        }
        else {
          iVar24 = piVar39[9];
          iVar2 = piVar35[1];
        }
        iVar2 = __subsf3(iVar24,iVar2);
        piVar39[9] = iVar2;
        uVar44 = __extendsfdf2(piVar35[1]);
        uVar45 = __extendsfdf2(piVar35[2]);
        uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                 (int)((ulonglong)uVar45 >> 0x20));
        iVar2 = __truncdfsf2();
        piVar35[1] = iVar2;
        if ((*(int *)(*(int *)(p_Var19 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(iVar34 + DAT_001297b8) + 1) != '\0')) {
          pcVar20 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar20,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar30 = *(int ***)(iVar34 + DAT_001297c0);
        piVar39 = *ppiVar30;
        if ((piVar39[0x10] == 0) &&
           ((piVar21 = *(int **)(p_Var19 + 4), *piVar21 == 3 || (piVar21[1] == piVar39[0xb])))) {
          uVar44 = __extendsfdf2(piVar21[9]);
          uVar45 = __extendsfdf2(piVar21[10]);
          uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar24 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                                  (int)((ulonglong)uVar45 >> 0x20));
          iVar2 = DAT_001297c4;
          if (iVar24 != 0) {
            piVar39[0x10] = 1;
            iVar2 = *(int *)(iVar34 + iVar2);
            piVar21 = *(int **)(iVar34 + DAT_001297c8);
            piVar29 = *(int **)(iVar34 + DAT_001297cc);
            if ((*(int **)(p_Var19 + 4))[1] == piVar39[0xb]) {
              uVar3 = __mulsf3(*(undefined4 *)
                                (iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x30),
                               0x3f000000);
LAB_001295ee:
              iVar24 = __fixsfsi(uVar3);
              piVar39[0x11] = iVar24;
            }
            else if (**(int **)(p_Var19 + 4) == 3) {
              uVar3 = *(undefined4 *)(iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x30);
              goto LAB_001295ee;
            }
            piVar39[0x12] = *(int *)(iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar30 != 3) {
              OpenPopup_Img(**(GameScene ***)(iVar34 + DAT_001297d0),0);
            }
          }
          piVar39 = *ppiVar30;
          piVar21 = piVar39 + 0x14;
          if (*(char *)piVar21 == '\0') {
            iVar2 = *(int *)(p_Var19 + 4);
            uVar44 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
            uVar45 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
            uVar46 = __floatsidf(piVar39[0x15]);
            uVar46 = __muldf3((int)uVar46,(int)((ulonglong)uVar46 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),(int)uVar46,
                              (int)((ulonglong)uVar46 >> 0x20));
            iVar2 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                                   (int)((ulonglong)uVar45 >> 0x20));
            if (iVar2 != 0) {
              *(char *)piVar21 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)piVar40);
        iVar2 = __aeabi_fcmplt(piVar35[1],0);
        if (iVar2 != 0) {
          operator_delete(piVar35);
          (**(code **)(***(int ***)(iVar34 + DAT_001297d4) + 0xd0))
                    (**(int ***)(iVar34 + DAT_001297d4),ppiVar36,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        iStack_1c8 = 0;
        while ((*(int *)((int)piVar35 + iStack_1c8 + 0x4c) == 0 || (**(int **)(p_Var19 + 4) != 0)))
        {
          iStack_1c8 = iStack_1c8 + 4;
          if (iStack_1c8 == 0xc) {
            FUN_00129d06();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_001294c8 + 0x12947a));
      }
      if (piVar39 == (int *)0x0) {
        piStack_1a0[9] = (int)piVar40;
        if (*(char *)(*(int *)(p_Var19 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var19 + 4) + 0x84) = (char)piVar39;
        }
        *(undefined *)(*(int *)(p_Var19 + 4) + 0x124) = 1;
        pcVar20 = *(char **)(iVar34 + DAT_001297d8);
        if ((*pcVar20 != '\0') && (**(int **)(p_Var19 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*piVar35 == 1) {
          pEVar32 = *(Effect **)(this + DAT_001297dc);
          pCStack_198 = **(CCLayer ***)(iVar34 + DAT_001297d4);
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
          uVar16 = *puVar15;
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0x1f])(ppiVar36);
          uVar3 = __mulsf3(*puVar15,0x3f000000);
          __subsf3(uVar16,uVar3);
          iStack_190 = __fixsfsi();
          iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
          __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001297e0);
          iVar24 = __fixsfsi();
          iVar38 = (**(code **)(*piVar40 + 0x14))();
          uVar1 = *(undefined *)((int)piVar35 + 0x1d);
          iVar28 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar32,pCStack_198,iVar28,iStack_190,iVar24,iVar38,(bool)uVar1);
        }
        else if (*piVar35 == 0) {
          pEVar32 = *(Effect **)(this + DAT_00129b00);
          pCStack_198 = **(CCLayer ***)(iVar34 + DAT_00129b04);
          puVar15 = (undefined4 *)(*(code *)(*ppiVar36)[0xe])(ppiVar36);
          iStack_190 = __fixsfsi(*puVar15);
          iVar24 = (*(code *)(*ppiVar36)[0xe])(ppiVar36);
          iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
          iVar38 = (**(code **)(*piVar40 + 0x14))();
          uVar1 = *(undefined *)((int)piVar35 + 0x1d);
          iVar28 = 1;
          goto LAB_00129832;
        }
        uStack_130 = CONCAT13(uStack_130._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar40,uStack_130,p_Var19);
        if ((piVar35[0x15] != 0xb) && (piVar35[0x14] != 0xb && piVar35[0x13] != 0xb)) {
          piVar39 = *(int **)(p_Var19 + 4);
          if ((*pcVar20 != '\0') && (*piVar39 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) ||
             (iVar2 == DAT_00129b10)) {
            iVar24 = __mulsf3(piVar35[1],0x3f000000);
            iVar38 = piVar39[9];
          }
          else {
            iVar38 = piVar39[9];
            iVar24 = piVar35[1];
          }
          iVar24 = __subsf3(iVar38,iVar24);
          piVar39[9] = iVar24;
          if ((*(int *)(*(int *)(p_Var19 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(iVar34 + DAT_00129b14) + 1) != '\0')) {
            pcVar20 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar20,(bool)((char)DAT_00129b18 + -0x28))
            ;
          }
          ppiVar30 = *(int ***)(iVar34 + DAT_00129b1c);
          piVar39 = *ppiVar30;
          if ((piVar39[0x10] == 0) &&
             ((piVar21 = *(int **)(p_Var19 + 4), *piVar21 == 3 || (piVar21[1] == piVar39[0xb])))) {
            uVar44 = __extendsfdf2(piVar21[9]);
            uVar45 = __extendsfdf2(piVar21[10]);
            uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar38 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                                    (int)((ulonglong)uVar45 >> 0x20));
            iVar24 = DAT_00129b20;
            if (iVar38 != 0) {
              piVar39[0x10] = 1;
              iVar24 = *(int *)(iVar34 + iVar24);
              piVar29 = *(int **)(iVar34 + DAT_00129b24);
              piVar21 = *(int **)(iVar34 + DAT_00129b28);
              if ((*(int **)(p_Var19 + 4))[1] == piVar39[0xb]) {
                uVar3 = __mulsf3(*(undefined4 *)
                                  (iVar24 + ((*piVar29 + -1) * 10 + *piVar21 + -1) * 0x40 + 0x30),
                                 0x3f000000);
LAB_0012998a:
                iVar38 = __fixsfsi(uVar3);
                piVar39[0x11] = iVar38;
              }
              else if (**(int **)(p_Var19 + 4) == 3) {
                uVar3 = *(undefined4 *)
                         (iVar24 + ((*piVar29 + -1) * 10 + *piVar21 + -1) * 0x40 + 0x30);
                goto LAB_0012998a;
              }
              piVar39[0x12] =
                   *(int *)(iVar24 + ((*piVar29 + -1) * 10 + *piVar21 + -1) * 0x40 + 0x2c);
              Game_Scene_Vibration();
              if (**ppiVar30 != 3) {
                OpenPopup_Img(**(GameScene ***)(iVar34 + DAT_00129b2c),0);
              }
            }
            piVar21 = *ppiVar30;
            piVar39 = piVar21 + 0x14;
            if (*(char *)piVar39 == '\0') {
              iVar24 = *(int *)(p_Var19 + 4);
              uVar44 = __extendsfdf2(*(undefined4 *)(iVar24 + 0x24));
              uVar45 = __extendsfdf2(*(undefined4 *)(iVar24 + 0x28));
              uVar46 = __floatsidf(piVar21[0x15]);
              uVar46 = __muldf3((int)uVar46,(int)((ulonglong)uVar46 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),(int)uVar46,
                                (int)((ulonglong)uVar46 >> 0x20));
              iVar24 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                                      (int)((ulonglong)uVar45 >> 0x20));
              if (iVar24 != 0) {
                *(char *)piVar39 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)piVar40);
        }
        iStack_1b0 = 0;
        do {
          if ((*(int *)((int)piVar35 + iStack_1b0 + 0x4c) != 0) && (**(int **)(p_Var19 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_00129b30 + 0x129a2c));
          }
          iStack_1b0 = iStack_1b0 + 4;
        } while (iStack_1b0 != 0xc);
      }
LAB_00129a5e:
      iStack_1c0 = iStack_1c0 + 1;
      piStack_1a0 = piStack_1a0 + 1;
    } while( true );
  }
  if (*(char *)(*(int *)(p_Var19 + 4) + 0x84) != '\0') {
    *(char *)(*(int *)(p_Var19 + 4) + 0x84) = '\0';
  }
  piVar39 = *(int **)(p_Var19 + 4);
  if ((piVar39[0x38] == 0xb) || (piVar39[0x37] == 0xb || piVar39[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(iVar34 + DAT_00129b34) != '\0') && (*piVar39 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar2 + DAT_00129b08 == 0) || (iVar2 + DAT_00129b0c == 0)) || (iVar2 == DAT_00129b10)) {
    iVar2 = __mulsf3(piVar35[1],0x3f000000);
    iVar24 = piVar39[9];
  }
  else {
    iVar24 = piVar39[9];
    iVar2 = piVar35[1];
  }
  iVar2 = __subsf3(iVar24,iVar2);
  piVar39[9] = iVar2;
  if ((*(int *)(*(int *)(p_Var19 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(iVar34 + DAT_00129db8) + 1) != '\0')) {
    pcVar20 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar20,(bool)((char)DAT_00129dbc + 'f'));
  }
  iStack_1c8 = 0;
  do {
    if ((*(int *)((int)piVar35 + iStack_1c8 + 0x4c) != 0) && (**(int **)(p_Var19 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    iStack_1c8 = iStack_1c8 + 4;
  } while (iStack_1c8 != 0xc);
  ppiVar30 = *(int ***)(iVar34 + DAT_00129dc4);
  piVar39 = *ppiVar30;
  if ((piVar39[0x10] == 0) &&
     ((piVar21 = *(int **)(p_Var19 + 4), *piVar21 == 3 || (piVar21[1] == piVar39[0xb])))) {
    uVar44 = __extendsfdf2(piVar21[9]);
    uVar45 = __extendsfdf2(piVar21[10]);
    uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar24 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                            (int)((ulonglong)uVar45 >> 0x20));
    iVar2 = DAT_00129dc8;
    if (iVar24 != 0) {
      piVar39[0x10] = 1;
      iVar2 = *(int *)(iVar34 + iVar2);
      piVar21 = *(int **)(iVar34 + DAT_00129dcc);
      piVar29 = *(int **)(iVar34 + DAT_00129dd0);
      if ((*(int **)(p_Var19 + 4))[1] == piVar39[0xb]) {
        uVar3 = __mulsf3(*(undefined4 *)
                          (iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x30),0x3f000000)
        ;
LAB_00129c5e:
        iVar24 = __fixsfsi(uVar3);
        piVar39[0x11] = iVar24;
      }
      else if (**(int **)(p_Var19 + 4) == 3) {
        uVar3 = *(undefined4 *)(iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar39[0x12] = *(int *)(iVar2 + ((*piVar21 + -1) * 10 + *piVar29 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar30 != 3) {
        OpenPopup_Img(**(GameScene ***)(iVar34 + DAT_00129dd4),0);
      }
    }
    piVar39 = *ppiVar30;
    piVar21 = piVar39 + 0x14;
    if (*(char *)piVar21 == '\0') {
      iVar2 = *(int *)(p_Var19 + 4);
      uVar44 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
      uVar45 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
      uVar46 = __floatsidf(piVar39[0x15]);
      uVar46 = __muldf3((int)uVar46,(int)((ulonglong)uVar46 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar45 = __muldf3((int)uVar45,(int)((ulonglong)uVar45 >> 0x20),(int)uVar46,
                        (int)((ulonglong)uVar46 >> 0x20));
      iVar2 = __aeabi_dcmplt((int)uVar44,(int)((ulonglong)uVar44 >> 0x20),(int)uVar45,
                             (int)((ulonglong)uVar45 >> 0x20));
      if (iVar2 != 0) {
        *(char *)piVar21 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)piVar40);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var19 + 4) + 0x124) = 1;
  if (**(int **)(p_Var19 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(this + 0x120),p_Var19);
  }
  operator_delete(piVar35);
  (**(code **)(***(int ***)(iVar34 + DAT_00129dd8) + 0xd0))
            (**(int ***)(iVar34 + DAT_00129dd8),ppiVar36,1);
  pcVar41 = (code *)cocos2d::CCArray::count(pCVar18);
  if (pcVar42 + 1 < pcVar41) {
    FUN_00128df0();
  }
  uVar22 = cocos2d::CCArray::count(this_00);
  fVar43 = extraout_s0_05;
  if (1 < uVar22) {
    fVar43 = (float)FUN_001275be();
  }
  Hero_Skill_Control(this,fVar43);
  FUN_00129da2();
  return;
}


