/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001275be  Symbol: FUN_001275be */

void FUN_001275be(void)

{
  undefined uVar1;
  int **ppiVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  CParticle *this;
  CCNode *pCVar6;
  CCTexture2D *pCVar7;
  CCSprite *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CCNode *pCVar13;
  int **ppiVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  CCArray *pCVar19;
  _Unit_Stage *p_Var20;
  char *pcVar21;
  int *piVar22;
  uint uVar23;
  undefined4 *extraout_r1;
  int iVar24;
  undefined *puVar25;
  float *pfVar26;
  int *piVar27;
  CCRect *pCVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  uint *puVar32;
  Effect *pEVar33;
  CCLayer *pCVar34;
  int iVar35;
  int *piVar36;
  code *pcVar37;
  code *pcVar38;
  int **ppiVar39;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar40;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  undefined8 uVar41;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar42;
  undefined8 uVar43;
  int param_11;
  int param_12;
  int **param_13;
  int param_14;
  int param_15;
  CCNode *param_17;
  int *param_18;
  CCLayer *pCStack00000048;
  int iStack00000050;
  int **param_19;
  CCLayer *param_21;
  int *param_22;
  uint param_23;
  CCArray *param_24;
  int **param_25;
  undefined param_29;
  undefined param_30;
  undefined param_31;
  undefined param_32;
  undefined param_33;
  undefined param_34;
  undefined param_38;
  undefined param_39;
  undefined param_40;
  undefined uStack00000098;
  undefined uStack00000099;
  undefined uStack0000009a;
  _ccColor3B in_stack_0000009c;
  undefined uStack000000a0;
  undefined uStack000000a1;
  undefined uStack000000a2;
  _ccColor3B in_stack_000000a4;
  _ccColor3B in_stack_000000a8;
  _ccColor3B in_stack_000000ac;
  _ccColor3B in_stack_000000b0;
  CCPoint param_43;
  CCPoint param_45;
  code *param_47;
  code *param_48;
  undefined4 *in_stack_00000264;
  
  ppiVar2 = (int **)cocos2d::CCArray::objectAtIndex(param_24,param_23);
  iVar3 = (*(code *)(*ppiVar2)[0x28])();
  if (iVar3 == DAT_001276bc) {
    FUN_00129d54();
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  if (iVar3 == DAT_001276c0) {
    FUN_00129d54();
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  if (iVar3 == 0x3e0) {
    FUN_00129d54();
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  if (iVar3 == DAT_001276c4) {
    FUN_00129d54();
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  if (iVar3 == DAT_001276c8) {
    FUN_00129d54();
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  piVar31 = *ppiVar2;
  if (iVar3 == -0x1e) {
    piVar31 = (int *)(*(code *)piVar31[0x2a])(ppiVar2);
    if (piVar31 != (int *)0x0) {
      iVar3 = __addsf3(param_21,piVar31[4]);
      piVar31[4] = iVar3;
      iVar3 = __aeabi_fcmpgt(iVar3,piVar31[3]);
      if ((iVar3 != 0) && (*(char *)(piVar31 + 5) == '\0')) {
        if (*(char *)(*param_22 + 1) != '\0') {
          pcVar21 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar21,(bool)((char)DAT_001276cc + -0x80));
        }
        pCVar19 = (CCArray *)(**(code **)(**param_19 + 0x58))();
        for (uVar23 = 0; uVar4 = cocos2d::CCArray::count(pCVar19), uVar23 < uVar4;
            uVar23 = uVar23 + 1) {
          piVar27 = (int *)cocos2d::CCArray::objectAtIndex(pCVar19,uVar23);
          iVar3 = (**(code **)(*piVar27 + 0xa0))();
          if ((((((((((iVar3 + DAT_00127a18 != 0) && (iVar3 + DAT_00127a1c != 0)) &&
                    (iVar3 + DAT_00127a20 != 0)) &&
                   ((iVar3 + DAT_00127a24 != 0 && (iVar3 + DAT_00127a28 != 0)))) &&
                  (iVar3 + DAT_00127a2c != 0)) &&
                 (((iVar3 + DAT_00127a30 != 0 && (iVar3 + DAT_00127a34 != 0)) &&
                  ((iVar3 + DAT_00127a38 != 0 &&
                   (((iVar3 + DAT_00127a3c != 0 && (iVar3 != -0x1e)) &&
                    (iVar3 = (**(code **)(*piVar27 + 0xa8))(piVar27), iVar3 != 0)))))))) &&
                ((iVar24 = (**(code **)(*piVar27 + 0xa0))(piVar27), iVar24 + DAT_00127a18 != 0 &&
                 (iVar24 + DAT_00127a1c != 0)))) &&
               ((iVar24 + DAT_00127a20 != 0 &&
                ((((iVar24 + DAT_00127a24 != 0 && (iVar24 + DAT_00127a28 != 0)) &&
                  ((iVar24 + DAT_00127a2c != 0 &&
                   (((iVar24 + DAT_00127a30 != 0 && (iVar24 + DAT_00127a34 != 0)) &&
                    (iVar24 + DAT_00127a38 != 0)))))) &&
                 ((iVar24 + DAT_00127a3c != 0 && (iVar24 != -0x1e)))))))) &&
              ((**(int **)(iVar3 + 4) == 2 || (**(int **)(iVar3 + 4) == 0)))) && (*piVar31 == 1)) {
            puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
            uVar15 = __subsf3(*puVar16,piVar31[6]);
            puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x38))(piVar27);
            iVar3 = __aeabi_fcmplt(uVar15,*puVar16);
            if (iVar3 != 0) {
              puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
              uVar15 = __addsf3(*puVar16,piVar31[6]);
              puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x38))(piVar27);
              iVar3 = __aeabi_fcmpgt(uVar15,*puVar16);
              if ((iVar3 != 0) &&
                 (Target_Attack((CCLayer *)piVar27,extraout_s0),
                 *(char *)((int)piVar31 + 0x16) == '\0')) break;
            }
          }
        }
        *(undefined *)(piVar31 + 5) = 1;
      }
    }
    cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
    iVar3 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar3 != 0) {
      FUN_00129d54();
    }
    if (piVar31 != (int *)0x0) {
      operator_delete(piVar31);
    }
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)ppiVar2,true);
    iVar3 = *(int *)(param_17 + DAT_00127a40);
    piVar31 = (int *)(iVar3 + 0xfc);
    *(int *)(iVar3 + 0x110) = *(int *)(iVar3 + 0x110) + -1;
    FUN_00129d54();
  }
  iVar3 = (*(code *)piVar31[0x28])(ppiVar2);
  if (iVar3 == 0x3dc) {
    ppiVar39 = (int **)(*ppiVar2)[0xf];
    ppiVar14 = *(int ***)(param_14 + DAT_00127a44);
    iVar3 = *(int *)(param_14 + DAT_00127a4c);
    piVar31 = *(int **)(param_14 + DAT_00127a50);
    pcVar37 = *(code **)(**ppiVar14 + 0x38);
    if (**(int **)(param_14 + DAT_00127a48) == 2) {
      puVar16 = (undefined4 *)(*pcVar37)();
      uVar15 = __floatsisf(*(undefined4 *)(iVar3 + *piVar31 * 0x18));
      __addsf3(uVar15,*puVar16);
      iVar24 = (**(code **)(**ppiVar14 + 0x38))();
      pcVar37 = (code *)(iVar3 + *piVar31 * 0x18);
      uVar15 = __floatsisf(*(undefined4 *)(pcVar37 + 4));
      uVar41 = __addsf3(uVar15,*(undefined4 *)(iVar24 + 4));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x000000c0,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      puVar25 = &stack0x000000c0;
    }
    else {
      if (**(int **)(param_14 + DAT_00127a48) != 1) goto LAB_00127940;
      puVar16 = (undefined4 *)(*pcVar37)();
      uVar15 = __floatsisf(*(undefined4 *)(iVar3 + *piVar31 * 0x18 + 8));
      __addsf3(uVar15,*puVar16);
      iVar24 = (**(code **)(**ppiVar14 + 0x38))();
      pcVar37 = (code *)(iVar3 + *piVar31 * 0x18);
      uVar15 = __floatsisf(*(undefined4 *)(pcVar37 + 0xc));
      uVar41 = __addsf3(uVar15,*(undefined4 *)(iVar24 + 4));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x000000c8,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      puVar25 = &stack0x000000c8;
    }
    do {
      (*(code *)ppiVar39)(ppiVar2,puVar25);
      FUN_00129d54();
      ppiVar14 = ppiVar39;
LAB_00127940:
      puVar16 = (undefined4 *)(*pcVar37)();
      uVar15 = __floatsisf(*(undefined4 *)(iVar3 + *piVar31 * 0x18 + 0x10));
      __addsf3(uVar15,*puVar16);
      iVar24 = (**(code **)(**ppiVar14 + 0x38))();
      pcVar37 = (code *)(iVar3 + *piVar31 * 0x18);
      uVar15 = __floatsisf(*(undefined4 *)(pcVar37 + 0x14));
      uVar41 = __addsf3(uVar15,*(undefined4 *)(iVar24 + 4));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x000000d0,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      puVar25 = &stack0x000000d0;
    } while( true );
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  piVar31 = *ppiVar2;
  if (iVar3 == DAT_00127a54) {
    pcVar37 = (code *)piVar31[0xf];
    (**(code **)(***(int ***)(param_14 + DAT_00127a44) + 0x38))();
    piVar31 = (int *)(*ppiVar2)[0xe];
    uVar41 = (*(code *)piVar31)(ppiVar2);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x000000d8,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
    (*pcVar37)(ppiVar2,&stack0x000000d8);
    Commend((CCLayer *)ppiVar2);
    FUN_00129d54();
  }
  iVar3 = (*(code *)piVar31[0x28])(ppiVar2);
  if (iVar3 == DAT_00127a58) {
    iVar3 = (*(code *)(*ppiVar2)[0x2a])(ppiVar2);
    piVar31 = *(int **)(iVar3 + 4);
    if (*piVar31 != 4) {
      FUN_00129d54();
    }
    iVar24 = piVar31[10];
    iVar29 = piVar31[9];
    iVar35 = __aeabi_fcmpeq(iVar29,iVar24);
    if (iVar35 == 0) {
      uVar15 = __divsf3(iVar29,iVar24);
      iVar24 = __aeabi_fcmpgt(uVar15,0);
      if (iVar24 == 0) {
        piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31[0x4a],1);
        (**(code **)(*piVar31 + 0x34))(piVar31,0);
        piVar31 = (int *)cocos2d::CCNode::getChildByTag(*(CCNode **)(*(int *)(iVar3 + 4) + 0x128),0)
        ;
        (**(code **)(*piVar31 + 0x34))(piVar31,0x3f800000);
        iVar24 = iRam00127e98;
        iVar35 = *(int *)(*(int *)(iVar3 + 4) + 100);
        if (iVar35 == -1) {
          *(undefined4 *)(*(int *)(iVar3 + 4) + 100) = 3;
          uVar15 = cocos2d::CCSprite::spriteWithFile((char *)(iVar24 + 0x127ae0));
          pCVar13 = (CCNode *)cocos2d::CCSprite::spriteWithFile((char *)(iRam00127e9c + 0x127aea));
          pcVar37 = (code *)(*ppiVar2)[0x34];
          uVar17 = cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
          (*pcVar37)(ppiVar2,uVar17,1);
          piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea0);
          pcVar37 = *(code **)(*piVar31 + 0xd0);
          pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea0);
          uVar17 = cocos2d::CCNode::getChildByTag(pCVar6,0);
          (*pcVar37)(piVar31,uVar17,1);
          (*(code *)(*ppiVar2)[0x33])(ppiVar2,uVar15,0,0);
          piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea0);
          (**(code **)(*piVar31 + 0xcc))(piVar31,pCVar13,0,0);
          iVar24 = 0x14;
          piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
          uVar41 = (**(code **)(*piVar31 + 0x6c))(piVar31,0);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x000000e0,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
          Draw_Castle_Destroy(pCVar13,param_43);
          do {
            iVar24 = iVar24 + -1;
            pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea8);
            piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,1);
            pCVar7 = (CCTexture2D *)(**(code **)(*piVar31 + 0x118))();
            pCVar8 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
            piVar31 = *param_19;
            puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
            __subsf3(*puVar16,uRam00127eac);
            iVar35 = __fixsfsi();
            puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
            __addsf3(*puVar16,uRam00127eac);
            iVar29 = __fixsfsi();
            uVar15 = Random(iVar35,iVar29);
            iVar35 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
            __subsf3(*(undefined4 *)(iVar35 + 4),uRam00127eac);
            iVar35 = __fixsfsi();
            iVar29 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
            __addsf3(*(undefined4 *)(iVar29 + 4),uRam00127eac);
            iVar29 = __fixsfsi();
            iVar35 = Random(iVar35,iVar29);
            iVar29 = Random(-5,0xf);
            iVar9 = Random(5,9);
            iVar10 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
            iVar11 = __floatsisf(uVar15);
            puVar16 = puRam00127eb0;
            iVar10 = __fixsfsi(*(undefined4 *)(iVar10 + 4));
            Particle_Body_Draw((CCLayer *)piVar31,pCVar8,extraout_s0_00,iVar11,iVar35,(int)puVar16,
                               iVar29,iVar9,iVar10);
          } while (iVar24 != 0);
        }
        else if (iVar35 == 3) {
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea0);
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
          pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
          cocos2d::CCNode::getChildByTag(pCVar13,0);
          iVar24 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar24 == 0) {
            **(undefined **)(param_14 + iRam00127eb4) = 1;
            **(undefined4 **)(param_14 + iRam00127eb8) = 0xf;
            **(undefined **)(param_14 + iRam00127ebc) = 1;
          }
        }
      }
      else {
        piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31[0x4a],1);
        iVar24 = *piVar31;
        uVar15 = __divsf3(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),
                          *(undefined4 *)(*(int *)(iVar3 + 4) + 0x28));
        (**(code **)(iVar24 + 0x34))(piVar31,uVar15);
        piVar31 = (int *)cocos2d::CCNode::getChildByTag(*(CCNode **)(*(int *)(iVar3 + 4) + 0x128),0)
        ;
        (**(code **)(*piVar31 + 0x34))(piVar31,0x3f800000);
      }
      piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
      (**(code **)(*piVar31 + 0x6c))(piVar31,1);
      piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
      pcVar37 = *(code **)(*piVar31 + 0x3c);
      puVar16 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x11c) + 0x38))();
      __addsf3(*puVar16,uRam00127ec0);
      iVar24 = (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x11c) + 0x38))();
      uVar15 = __addsf3(*(undefined4 *)(iVar24 + 4),*(undefined4 *)(*(int *)(iVar3 + 4) + 0x104));
      uVar41 = __subsf3(uVar15,uRam00127ec4);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x000000e8,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      (*pcVar37)(piVar31,&stack0x000000e8);
    }
    else {
      (**(code **)(*(int *)piVar31[0x4a] + 0x6c))((int *)piVar31[0x4a],0);
    }
    iVar24 = *(int *)(iVar3 + 4);
    if (*(char *)(iVar24 + 0x6c) == '\0') {
      FUN_00129d54();
    }
    uVar15 = __addsf3(*(undefined4 *)(iVar24 + 0x68),param_21);
    *(undefined4 *)(iVar24 + 0x68) = uVar15;
    piVar31 = *(int **)(iVar3 + 4);
    uVar41 = __extendsfdf2(piVar31[0x1a]);
    iVar24 = __aeabi_dcmpgt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),uRam00127e90,uRam00127e94);
    if (iVar24 == 0) {
      FUN_00129d54();
    }
    iVar24 = *piVar31;
    if (iVar24 == 4) {
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
      (**(code **)(*piVar31 + 0xf4))();
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ea0);
      piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
      puVar25 = &stack0x0000007c;
      pcVar37 = *(code **)(*piVar31 + 0xf4);
LAB_001282c2:
      *puVar25 = 0xff;
      puVar25[1] = 0xff;
      puVar25[2] = 0xff;
      (*pcVar37)();
      ppiVar2 = param_19;
    }
    else if (iVar24 == 5) {
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
      param_29 = 0xff;
      param_30 = 0xff;
      param_31 = 0xff;
      (**(code **)(*piVar31 + 0xf4))();
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iRam00127ec8);
      piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
      puVar25 = &stack0x00000084;
      pcVar37 = *(code **)(*piVar31 + 0xf4);
      goto LAB_001282c2;
    }
LAB_001282ca:
    *(undefined *)(*(int *)(iVar3 + 4) + 0x6c) = 0;
    piVar31 = *(int **)(iVar3 + 4);
    piVar31[0x1a] = 0;
    FUN_00129d54();
  }
  else {
    iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
    if (iVar3 == 3) {
      FUN_00129d54();
    }
    puVar5 = (undefined4 *)(*(code *)(*ppiVar2)[0x28])(ppiVar2);
    piVar31 = *ppiVar2;
    puVar16 = puRam00127eb0;
    if (puVar5 == puRam00127eb0) {
      this = (CParticle *)(*(code *)piVar31[0x2a])(ppiVar2);
      CParticle::setAcc(this,extraout_s0_01,extraout_s1,extraout_s2);
      fVar40 = (float)__mulsf3(param_21,uRam00127ed0);
      CParticle::updateState(this,fVar40);
      uVar41 = CParticle::getPos(this,(float *)&stack0x000000b4,(float *)&stack0x000000b8,
                                 (float *)&stack0x000000bc);
      pcVar38 = (code *)(*ppiVar2)[0xf];
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x000000f0,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      (*pcVar38)(ppiVar2,&stack0x000000f0);
      pfVar26 = (float *)&stack0x0000019c;
      CParticle::getVel(this,(float *)&stack0x00000198,pfVar26,(float *)&stack0x000001a0);
      iVar3 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
      iVar3 = __aeabi_fcmplt(*(undefined4 *)(iVar3 + 4),0);
      pcVar37 = param_47;
      if (((iVar3 == 0) &&
          ((((iVar3 = __aeabi_fcmplt(param_47,0x3f800000), pcVar38 = pcVar37, iVar3 == 0 ||
             (iVar3 = __aeabi_fcmpgt(pcVar37,uRam00127ed4), pcVar37 = param_48, iVar3 == 0)) ||
            (iVar3 = __aeabi_fcmplt(param_48,0x3f800000), pcVar38 = pcVar37, iVar3 == 0)) ||
           (iVar3 = __aeabi_fcmpgt(pcVar37,uRam00127ed4), iVar3 == 0)))) &&
         (iVar3 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x34),0x40000000), iVar3 == 0)) {
        FUN_00129d54();
      }
      free(this);
      piVar31 = (int *)(*ppiVar2)[0x2b];
      (*(code *)piVar31)(ppiVar2,0);
      FUN_00128d46();
      if (piVar31 != (int *)0x0) {
        puVar16 = in_stack_00000264;
        if (pfVar26 == (float *)0x0) goto LAB_00127ed8;
        iVar3 = (int)pcVar38 << 0xf;
        uVar23 = (int)pfVar26 + (-(uint)(((uint)pcVar38 & 0x20000) == 0) - (int)pcVar38);
        func_0xffef0eb6(uVar23 >> ((uint)ppiVar2 & 0x1f) | uVar23 << 0x20 - ((uint)ppiVar2 & 0x1f),
                        (int)pcVar38 << 0xf);
        func_0x002eceba();
        func_0xffeb8ebe();
        *(int *)iVar3 = iVar3;
        *(code **)(iVar3 + 4) = pcVar38;
        *(int ***)(iVar3 + 8) = ppiVar2;
        in_stack_00000264 = extraout_r1;
      }
      piVar31 = *(int **)(pcVar38 + 8);
      ppiVar2 = *(int ***)(pcVar38 + 0xc);
      *in_stack_00000264 = *(undefined4 *)(pcVar38 + 4);
      in_stack_00000264[1] = piVar31;
      in_stack_00000264[2] = pcVar38 + 0x14;
      puVar16 = in_stack_00000264 + 3;
    }
LAB_00127ed8:
    iVar3 = (*(code *)piVar31[0x28])(ppiVar2,puVar16);
    piVar31 = *ppiVar2;
    if (iVar3 == 0x3e4) {
      iVar3 = (*(code *)piVar31[0x2a])(ppiVar2);
      piVar31 = *(int **)(iVar3 + 4);
      iVar24 = *piVar31;
      if (((iVar24 == 5) || (iVar24 == 3)) || (iVar24 == 7)) {
        iVar24 = piVar31[9];
        iVar35 = __aeabi_fcmple(iVar24,0);
        if (iVar35 == 0) {
          iVar35 = *(int *)(*(int *)(param_17 + 0x120) + 0x114);
          uVar15 = __divsf3(iVar24,piVar31[10]);
          *(undefined4 *)(iVar35 + 0x118) = uVar15;
        }
        else {
          *(undefined4 *)(*(int *)(*(int *)(param_17 + 0x120) + 0x114) + 0x118) = 0;
        }
      }
      piVar31 = *(int **)(iVar3 + 4);
      if (*piVar31 == 5) {
        iVar29 = piVar31[9];
        iVar35 = piVar31[10];
        iVar24 = __aeabi_fcmpeq(iVar29);
        if (iVar24 == 0) {
          uVar15 = __divsf3(iVar29,iVar35);
          iVar24 = __aeabi_fcmpgt(uVar15,0);
          if (iVar24 == 0) {
            piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31[0x4a],1);
            (**(code **)(*piVar31 + 0x34))(piVar31,0);
            piVar31 = (int *)cocos2d::CCNode::getChildByTag
                                       (*(CCNode **)(*(int *)(iVar3 + 4) + 0x128),0);
            (**(code **)(*piVar31 + 0x34))(piVar31,0x3f800000);
            iVar24 = *(int *)(*(int *)(iVar3 + 4) + 100);
            if (iVar24 == -1) {
              *(undefined4 *)(*(int *)(iVar3 + 4) + 100) = 3;
              if (**param_25 == 2) {
                param_13 = (int **)cocos2d::CCSprite::spriteWithFile
                                             ((char *)(DAT_00128318 + 0x127fea));
                pcVar21 = (char *)(DAT_0012831c + 0x127ff4);
              }
              else {
                param_13 = (int **)cocos2d::CCSprite::spriteWithFile
                                             ((char *)(DAT_00128320 + 0x127ffa));
                pcVar21 = (char *)(DAT_00128324 + 0x128004);
              }
              pCVar13 = (CCNode *)cocos2d::CCSprite::spriteWithFile(pcVar21);
              pcVar37 = (code *)(*ppiVar2)[0x34];
              uVar15 = cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
              (*pcVar37)(ppiVar2,uVar15,1);
              piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_00128328);
              pcVar37 = *(code **)(*piVar31 + 0xd0);
              pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_00128328);
              uVar15 = cocos2d::CCNode::getChildByTag(pCVar6,0);
              (*pcVar37)(piVar31,uVar15,1);
              (*(code *)(*ppiVar2)[0x33])(ppiVar2,param_13,0,0);
              piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_00128328);
              (**(code **)(*piVar31 + 0xcc))(piVar31,pCVar13,0,0);
              iVar24 = 0x14;
              piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
              uVar41 = (**(code **)(*piVar31 + 0x6c))(piVar31,0);
              cocos2d::CCPoint::CCPoint
                        ((CCPoint *)&stack0x000000f8,(float)uVar41,
                         (float)((ulonglong)uVar41 >> 0x20));
              Draw_Castle_Destroy(pCVar13,param_45);
              do {
                iVar24 = iVar24 + -1;
                pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,0x3e4);
                piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,1);
                pCVar7 = (CCTexture2D *)(**(code **)(*piVar31 + 0x118))();
                pCVar8 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
                piVar31 = *param_19;
                puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
                __subsf3(*puVar16,DAT_00128330);
                iVar35 = __fixsfsi();
                puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
                __addsf3(*puVar16,DAT_00128330);
                iVar29 = __fixsfsi();
                uVar15 = Random(iVar35,iVar29);
                iVar35 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
                __subsf3(*(undefined4 *)(iVar35 + 4),DAT_00128330);
                iVar35 = __fixsfsi();
                iVar29 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
                __addsf3(*(undefined4 *)(iVar29 + 4),DAT_00128330);
                iVar29 = __fixsfsi();
                iVar29 = Random(iVar35,iVar29);
                iVar9 = Random(-5,0xf);
                iVar10 = Random(5,9);
                iVar11 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
                iVar12 = __floatsisf(uVar15);
                iVar35 = DAT_00128334;
                iVar11 = __fixsfsi(*(undefined4 *)(iVar11 + 4));
                Particle_Body_Draw((CCLayer *)piVar31,pCVar8,extraout_s0_02,iVar12,iVar29,iVar35,
                                   iVar9,iVar10,iVar11);
              } while (iVar24 != 0);
              **(undefined **)(param_14 + DAT_00128338) = 1;
            }
            else if (iVar24 == 3) {
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_00128328);
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
              pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar13,0);
              cocos2d::CCNode::getChildByTag(pCVar13,0);
              iVar24 = cocos2d::CCNode::numberOfRunningActions();
              if (iVar24 == 0) {
                **(undefined4 **)(param_14 + DAT_0012833c) = 0xe;
                **(undefined **)(param_14 + DAT_00128340) = 1;
                Monster_Item_Drop(false);
              }
            }
          }
          else {
            piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31[0x4a],1);
            iVar24 = *piVar31;
            uVar15 = __divsf3(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x24),
                              *(undefined4 *)(*(int *)(iVar3 + 4) + 0x28));
            (**(code **)(iVar24 + 0x34))(piVar31,uVar15);
            piVar31 = (int *)cocos2d::CCNode::getChildByTag
                                       (*(CCNode **)(*(int *)(iVar3 + 4) + 0x128),0);
            (**(code **)(*piVar31 + 0x34))(piVar31,0x3f800000);
          }
          piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
          (**(code **)(*piVar31 + 0x6c))(piVar31,1);
          piVar31 = *(int **)(*(int *)(iVar3 + 4) + 0x128);
          pcVar37 = *(code **)(*piVar31 + 0x3c);
          puVar16 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x11c) + 0x38))();
          __addsf3(*puVar16,DAT_00128344);
          iVar24 = (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x11c) + 0x38))();
          uVar15 = __addsf3(*(undefined4 *)(iVar24 + 4),*(undefined4 *)(*(int *)(iVar3 + 4) + 0x104)
                           );
          uVar41 = __subsf3(uVar15,DAT_00128348);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000100,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
          (*pcVar37)(piVar31,&stack0x00000100);
        }
        else {
          (**(code **)(*(int *)piVar31[0x4a] + 0x6c))((int *)piVar31[0x4a],0);
        }
      }
      iVar24 = *(int *)(iVar3 + 4);
      if (*(char *)(iVar24 + 0x6c) == '\0') {
        FUN_00129d54();
      }
      uVar15 = __addsf3(*(undefined4 *)(iVar24 + 0x68),param_21);
      *(undefined4 *)(iVar24 + 0x68) = uVar15;
      piVar31 = *(int **)(iVar3 + 4);
      uVar41 = __extendsfdf2(piVar31[0x1a]);
      iVar24 = __aeabi_dcmpgt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),DAT_00128310,DAT_00128314
                             );
      if (iVar24 == 0) {
        FUN_00129d54();
      }
      iVar24 = *piVar31;
      if (iVar24 == 4) {
        piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
        param_32 = 0xff;
        param_33 = 0xff;
        param_34 = 0xff;
        (**(code **)(*piVar31 + 0xf4))();
        pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_0012834c);
        piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
        puVar25 = &stack0x0000008c;
        pcVar37 = *(code **)(*piVar31 + 0xf4);
      }
      else {
        if (iVar24 != 5) goto LAB_001282ca;
        piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,0);
        param_38 = 0xff;
        param_39 = 0xff;
        param_40 = 0xff;
        (**(code **)(*piVar31 + 0xf4))();
        pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,DAT_00128328);
        piVar31 = (int *)cocos2d::CCNode::getChildByTag(pCVar13,0);
        puVar25 = &stack0x00000094;
        pcVar37 = *(code **)(*piVar31 + 0xf4);
      }
      goto LAB_001282c2;
    }
  }
  iVar3 = (*(code *)piVar31[0x28])(ppiVar2);
  if (iVar3 == DAT_00128350) {
    param_13 = *(int ***)(param_14 + DAT_00128354);
    if (*(char *)param_13 == '\0') {
      param_13 = *(int ***)(param_14 + DAT_001286e4);
      if (*(char *)param_13 == '\0') {
        FUN_00129d54();
      }
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,2);
      piVar31 = (int *)(**(code **)(*piVar31 + 0xa8))();
      iVar3 = DAT_001286e8;
    }
    else {
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,2);
      piVar31 = (int *)(**(code **)(*piVar31 + 0xa8))();
      iVar3 = DAT_00128358;
    }
    ppiVar14 = *(int ***)(param_14 + iVar3);
    piVar27 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
    iVar3 = (**(code **)(*piVar27 + 0xa8))();
    iVar24 = *(int *)(piVar31[1] + 100);
    if (iVar24 != 3) {
      FUN_00129d54();
    }
    pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar2,2);
    cocos2d::CCNode::getChildByTag(pCVar13,*(int *)(*(int *)(*piVar31 + 4) + 0x290));
    iVar35 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar35 != 0) {
      FUN_00129d54();
    }
    KG_removeChild((CCNode *)ppiVar2,true);
    pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag(param_17,DAT_001286ec);
    KG_removeChild(pCVar13,true);
    if (*(int *)(*(int *)(iVar3 + 4) + 4) == 4) {
      pCVar13 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*param_19,iVar24);
      KG_removeChild(pCVar13,true);
      piVar31 = *param_19;
      pcVar37 = *(code **)(*piVar31 + 0xd0);
      uVar15 = cocos2d::CCNode::getChildByTag((CCNode *)piVar31,iVar24);
      (*pcVar37)(piVar31,uVar15,1);
    }
    piVar31 = *param_19;
    pcVar37 = *(code **)(*piVar31 + 0xd0);
    uVar15 = cocos2d::CCNode::getChildByTag((CCNode *)piVar31,2);
    (*pcVar37)(piVar31,uVar15,1);
    *(char *)param_13 = '\0';
    piVar31 = *ppiVar14;
    (**(code **)(*piVar31 + 0x6c))(piVar31,1);
    FUN_00129d54();
    ppiVar2 = param_13;
  }
  iVar3 = (*(code *)(*ppiVar2)[0x28])(ppiVar2);
  pcVar37 = (code *)(*ppiVar2)[0x2a];
  if (iVar3 == DAT_001286f0) {
    FUN_00128c62();
  }
  ppiVar14 = (int **)(*pcVar37)(ppiVar2);
  if (ppiVar14 == (int **)0x0) {
    FUN_00128c4a();
  }
  piVar31 = ppiVar14[1];
  if (*piVar31 != 2) {
    if (piVar31[1] != (*param_25)[0xb]) {
      FUN_00129d74();
    }
    if (**(int ***)(param_14 + DAT_001286e8) == (int *)0x0) goto LAB_001284da;
    iVar3 = (**(code **)(***(int ***)(param_14 + DAT_001286e8) + 0x68))();
    if (iVar3 == 0) goto LAB_001284da;
    FUN_00129d74();
    goto LAB_001284da;
  }
  iVar3 = piVar31[9];
  iVar24 = piVar31[10];
  iVar35 = *(int *)(*(int *)(param_17 + 0x120) + 0x110);
  while( true ) {
    uVar15 = __divsf3(iVar3,iVar24);
    *(undefined4 *)(iVar35 + 0x118) = uVar15;
    FUN_00129d94();
    iVar3 = (**(code **)(***(int ***)(param_14 + DAT_001286e8) + 0x68))();
    if ((iVar3 == 0) && (*ppiVar14[1] != 7)) {
      FUN_00129d94();
    }
LAB_001284da:
    piVar31 = ppiVar14[1];
    iVar3 = piVar31[9];
    iVar24 = __aeabi_fcmple(iVar3,0);
    if (iVar24 != 0) break;
    iVar35 = *(int *)(*(int *)(param_17 + 0x120) + 0x114);
    iVar24 = piVar31[10];
  }
  iVar3 = *(int *)(*(int *)(param_17 + 0x120) + 0x114);
  puVar32 = (uint *)(iVar3 + 0xfc);
  *(undefined4 *)(iVar3 + 0x118) = 0;
  FUN_00129d94();
  if (3 < *puVar32) {
    FUN_00128c4a();
    return;
  }
  if (1 < *puVar32 - 2) {
    piVar31 = (int *)puVar32[0x46];
    if (piVar31 != (int *)0x0) {
      pcVar37 = *(code **)(*piVar31 + 0x3c);
      (**(code **)(*(int *)puVar32[0x47] + 0x38))();
      iVar3 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      uVar41 = __addsf3(*(undefined4 *)(iVar3 + 4),DAT_001286f4);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000108,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      (*pcVar37)(piVar31,&stack0x00000108);
    }
    piVar31 = (int *)ppiVar14[1][0x48];
    if (piVar31 != (int *)0x0) {
      pcVar37 = *(code **)(*piVar31 + 0x3c);
      (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      iVar3 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
      uVar41 = __addsf3(*(undefined4 *)(iVar3 + 4),0x40000000);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000110,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      (*pcVar37)(piVar31,&stack0x00000110);
    }
  }
  piVar31 = ppiVar14[1];
  iVar3 = piVar31[0x4a];
  if ((iVar3 != 0) && ((piVar31[0x19] == 2 || (*(char *)(piVar31 + 0x49) != '\0')))) {
    iVar35 = piVar31[9];
    iVar29 = piVar31[10];
    uVar15 = __divsf3(iVar35,iVar29);
    iVar24 = __aeabi_fcmpgt(uVar15,0);
    if (iVar24 == 0) {
      if (*piVar31 != 2) {
        (**(code **)(**param_19 + 0xd0))(*param_19,iVar3,1);
        ppiVar14[1][0x4a] = 0;
      }
    }
    else {
      iVar3 = __aeabi_fcmpgt(iVar35,iVar29);
      if (iVar3 != 0) {
        piVar31[9] = iVar29;
      }
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],1);
      iVar3 = *piVar31;
      uVar15 = __divsf3(ppiVar14[1][9],ppiVar14[1][10]);
      (**(code **)(iVar3 + 0x2c))(piVar31,uVar15);
      piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
      (**(code **)(*piVar31 + 0x2c))(piVar31,0x3f800000);
    }
    piVar27 = ppiVar14[1];
    piVar31 = (int *)piVar27[0x4a];
    if (piVar31 != (int *)0x0) {
      iVar3 = *piVar31;
      if (*piVar27 - 2U < 2) {
        piVar36 = *(int **)(param_14 + DAT_00128a48);
        iVar24 = *(int *)(param_14 + DAT_00128a4c);
        if (*piVar27 == 2) {
          pcVar37 = *(code **)(iVar3 + 0x3c);
          ppiVar2 = *(int ***)(param_14 + DAT_00128a50);
          pcVar38 = *(code **)(**ppiVar2 + 0x38);
          if (**(int **)(param_14 + DAT_00128a54) == 2) {
            puVar16 = (undefined4 *)(*pcVar38)();
            uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18));
            __addsf3(uVar15,*puVar16);
            iVar3 = (**(code **)(**ppiVar2 + 0x38))();
            uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
            uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 4));
            uVar41 = __addsf3(uVar15,uVar17);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000120,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20))
            ;
            puVar25 = &stack0x00000120;
          }
          else if (**(int **)(param_14 + DAT_00128a54) == 1) {
            puVar16 = (undefined4 *)(*pcVar38)();
            uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 8));
            __addsf3(uVar15,*puVar16);
            iVar3 = (**(code **)(**ppiVar2 + 0x38))();
            uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
            uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0xc));
            uVar41 = __addsf3(uVar15,uVar17);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000128,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20))
            ;
            puVar25 = &stack0x00000128;
          }
          else {
            puVar16 = (undefined4 *)(*pcVar38)();
            uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x10));
            __addsf3(uVar15,*puVar16);
            iVar3 = (**(code **)(**ppiVar2 + 0x38))();
            uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
            uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
            uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x14));
            uVar41 = __addsf3(uVar15,uVar17);
            cocos2d::CCPoint::CCPoint
                      ((CCPoint *)&stack0x00000130,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20))
            ;
            puVar25 = &stack0x00000130;
          }
        }
        else {
          pcVar37 = *(code **)(iVar3 + 0x3c);
          ppiVar2 = *(int ***)(param_14 + DAT_00128a58);
          puVar16 = (undefined4 *)(**(code **)(**ppiVar2 + 0x38))();
          uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x10));
          __addsf3(uVar15,*puVar16);
          iVar3 = (**(code **)(**ppiVar2 + 0x38))();
          uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
          uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
          uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x14));
          uVar41 = __addsf3(uVar15,uVar17);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000138,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
          puVar25 = &stack0x00000138;
        }
      }
      else {
        if (piVar27[1] == 0xaa) {
          uVar15 = 0xfffffff1;
          param_13 = (int **)0x3c;
        }
        else {
          uVar15 = 0;
          param_13 = (int **)0x14;
        }
        pcVar37 = *(code **)(iVar3 + 0x3c);
        puVar16 = (undefined4 *)(**(code **)(*(int *)piVar27[0x47] + 0x38))();
        uVar17 = *puVar16;
        piVar31 = (int *)ppiVar14[1][0x4a];
        piVar27 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31,0);
        puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x7c))();
        uVar18 = __mulsf3(*puVar16,0x3f000000);
        uVar17 = __subsf3(uVar17,uVar18);
        uVar15 = __floatsisf(uVar15);
        __addsf3(uVar17,uVar15);
        iVar3 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
        uVar15 = __addsf3(*(undefined4 *)(iVar3 + 4),ppiVar14[1][0x41]);
        uVar17 = __floatsisf(param_13);
        uVar41 = __addsf3(uVar15,uVar17);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000118,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
        puVar25 = &stack0x00000118;
      }
      (*pcVar37)(piVar31,puVar25);
    }
    *(undefined *)(ppiVar14[1] + 0x49) = 0;
    FUN_00128c4a();
    return;
  }
  uVar15 = __divsf3(piVar31[9],piVar31[10]);
  iVar24 = __aeabi_fcmplt(uVar15,0);
  if ((iVar24 != 0) && (*piVar31 != 2)) {
    (**(code **)(**param_19 + 0xd0))(*param_19,iVar3,1);
    ppiVar14[1][0x4a] = 0;
  }
  if ((CCNode *)ppiVar14[1][0x4a] == (CCNode *)0x0) {
    FUN_00128c4a();
    return;
  }
  piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
  uVar15 = (**(code **)(*piVar31 + 0x28))();
  iVar3 = __aeabi_fcmpeq(uVar15,0x3f800000);
  if (iVar3 == 0) {
    FUN_00128c4a();
    return;
  }
  piVar31 = ppiVar14[1];
  iVar3 = __addsf3(piVar31[0x4b],param_21);
  piVar31[0x4b] = iVar3;
  piVar31 = ppiVar14[1];
  iVar3 = __aeabi_fcmpgt(piVar31[0x4b],0x40000000);
  if (iVar3 != 0) {
    piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31[0x4a],1);
    (**(code **)(*piVar31 + 0x2c))(piVar31,0);
    piVar31 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)ppiVar14[1][0x4a],0);
    (**(code **)(*piVar31 + 0x2c))(piVar31,0);
    ppiVar14[1][0x4b] = 0;
  }
  piVar27 = ppiVar14[1];
  piVar31 = (int *)piVar27[0x4a];
  if (piVar31 == (int *)0x0) {
    FUN_00128c4a();
    return;
  }
  iVar3 = *piVar31;
  if (*piVar27 - 2U < 2) {
    piVar36 = *(int **)(param_14 + iRam00128dcc);
    iVar24 = *(int *)(param_14 + iRam00128dd0);
    if (*piVar27 == 2) {
      pcVar37 = *(code **)(iVar3 + 0x3c);
      ppiVar39 = *(int ***)(param_14 + iRam00128dd4);
      pcVar38 = *(code **)(**ppiVar39 + 0x38);
      if (**(int **)(param_14 + iRam00128dd8) == 2) {
        puVar16 = (undefined4 *)(*pcVar38)();
        uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18));
        __addsf3(uVar15,*puVar16);
        iVar3 = (**(code **)(**ppiVar39 + 0x38))();
        uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
        uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 4));
        uVar41 = __addsf3(uVar15,uVar17);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000148,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
        puVar25 = &stack0x00000148;
      }
      else if (**(int **)(param_14 + iRam00128dd8) == 1) {
        puVar16 = (undefined4 *)(*pcVar38)();
        uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 8));
        __addsf3(uVar15,*puVar16);
        iVar3 = (**(code **)(**ppiVar39 + 0x38))();
        uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
        uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0xc));
        uVar41 = __addsf3(uVar15,uVar17);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000150,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
        puVar25 = &stack0x00000150;
      }
      else {
        puVar16 = (undefined4 *)(*pcVar38)();
        uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x10));
        __addsf3(uVar15,*puVar16);
        iVar3 = (**(code **)(**ppiVar39 + 0x38))();
        uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
        uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
        uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x14));
        uVar41 = __addsf3(uVar15,uVar17);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&stack0x00000158,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
        puVar25 = &stack0x00000158;
      }
    }
    else {
      pcVar37 = *(code **)(iVar3 + 0x3c);
      ppiVar39 = *(int ***)(param_14 + iRam00128ddc);
      puVar16 = (undefined4 *)(**(code **)(**ppiVar39 + 0x38))();
      uVar15 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x10));
      __addsf3(uVar15,*puVar16);
      iVar3 = (**(code **)(**ppiVar39 + 0x38))();
      uVar15 = __floatsisf(*(int *)(**ppiVar14 + 0x280) / 2);
      uVar15 = __addsf3(uVar15,*(undefined4 *)(iVar3 + 4));
      uVar17 = __floatsisf(*(undefined4 *)(iVar24 + *piVar36 * 0x18 + 0x14));
      uVar41 = __addsf3(uVar15,uVar17);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&stack0x00000160,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
      puVar25 = &stack0x00000160;
    }
  }
  else {
    if (piVar27[1] == 0xaa) {
      uVar15 = 0xfffffff1;
      param_13 = (int **)0x3c;
    }
    else {
      uVar15 = 0;
      param_13 = (int **)0x14;
    }
    pcVar37 = *(code **)(iVar3 + 0x3c);
    puVar16 = (undefined4 *)(**(code **)(*(int *)piVar27[0x47] + 0x38))();
    uVar17 = *puVar16;
    piVar31 = (int *)ppiVar14[1][0x4a];
    piVar27 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar31,0);
    puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x7c))();
    uVar18 = __mulsf3(*puVar16,0x3f000000);
    uVar17 = __subsf3(uVar17,uVar18);
    uVar15 = __floatsisf(uVar15);
    __addsf3(uVar17,uVar15);
    iVar3 = (**(code **)(*(int *)ppiVar14[1][0x47] + 0x38))();
    uVar15 = __addsf3(*(undefined4 *)(iVar3 + 4),ppiVar14[1][0x41]);
    uVar17 = __floatsisf(param_13);
    uVar41 = __addsf3(uVar15,uVar17);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000140,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
    puVar25 = &stack0x00000140;
  }
  fVar40 = (float)(*pcVar37)(piVar31,puVar25);
  pcVar37 = *(code **)(param_17 + 0x120);
  attack(fVar40,param_21,(CCLayer *)ppiVar2,*(CCLayer **)(param_17 + iRam00128de0));
  FUN_00129d54();
  piVar31 = (int *)(*pcVar37)(ppiVar2);
  pcVar38 = (code *)(*ppiVar2)[0xf];
  pcVar37 = (code *)(*ppiVar2)[0xe];
  if (*piVar31 == 0) {
    puVar16 = (undefined4 *)(*pcVar37)();
    __addsf3(*puVar16,piVar31[3]);
    iVar3 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
    uVar41 = __addsf3(*(undefined4 *)(iVar3 + 4),piVar31[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000168,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
    (*pcVar38)(ppiVar2,&stack0x00000168);
    puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
    iVar3 = __aeabi_fcmpgt(*puVar16,uRam00128de4);
    if (iVar3 == 0) {
      puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
      uVar15 = __addsf3(piVar31[5],uRam00128de8);
      iVar3 = __aeabi_fcmpgt(*puVar16,uVar15);
LAB_00128d38:
      if (iVar3 == 0) {
        FUN_00129d84();
      }
    }
  }
  else {
    puVar16 = (undefined4 *)(*pcVar37)(ppiVar2);
    __subsf3(*puVar16,piVar31[3]);
    iVar3 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
    uVar41 = __addsf3(*(undefined4 *)(iVar3 + 4),piVar31[4]);
    cocos2d::CCPoint::CCPoint
              ((CCPoint *)&stack0x00000170,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
    (*pcVar38)(ppiVar2,&stack0x00000170);
    puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
    iVar3 = __aeabi_fcmplt(*puVar16,0);
    if (iVar3 == 0) {
      puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
      uVar15 = __subsf3(piVar31[5],uRam00128de8);
      iVar3 = __aeabi_fcmplt(*puVar16,uVar15);
      goto LAB_00128d38;
    }
  }
  operator_delete(piVar31);
  (**(code **)(**param_19 + 0xd0))(*param_19,ppiVar2,1);
  FUN_00129d54();
  puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
  uVar15 = __mulsf3(piVar31[0x18],0x3f000000);
  __subsf3(*puVar16,uVar15);
  iVar3 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
  iVar3 = __subsf3(*(undefined4 *)(iVar3 + 4),uRam00128dec);
  (*(code *)(*ppiVar2)[0x1f])(ppiVar2);
  iVar24 = (*(code *)(*ppiVar2)[0x1f])(ppiVar2);
  uVar41 = __addsf3(*(undefined4 *)(iVar24 + 4),uRam00128dec);
  cocos2d::CCRect::CCRect
            ((CCRect *)&stack0x00000188,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20),
             extraout_s2_00,extraout_s3);
  pCVar19 = (CCArray *)(**(code **)(**param_19 + 0x58))();
  FUN_00129d44();
  func_0xffe6ddce();
  func_0xfff65dd2();
  func_0x0031ddd6();
  func_0x0037ddda();
  uVar41 = func_0x0032ddde();
  *(undefined2 *)uVar41 = (short)uVar41;
  if (piVar31 == (int *)0x0) {
    FUN_00129d54((undefined2 *)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)ppiVar2 * iVar3);
  }
  piVar27 = (int *)cocos2d::CCArray::objectAtIndex(pCVar19,(uint)pcVar38);
  iVar3 = (**(code **)(*piVar27 + 0xa0))();
  if (iVar3 == -0x1e) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291ac == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291b0 == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291b4 == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291b8 == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291bc == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291c0 == 0) {
    iVar3 = FUN_00129d3e();
  }
  if (iVar3 + DAT_001291c4 == 0) {
    FUN_00129d3e();
  }
  p_Var20 = (_Unit_Stage *)(**(code **)(*piVar27 + 0xa8))(piVar27);
  if (p_Var20 == (_Unit_Stage *)0x0) {
    FUN_00129d3e();
  }
  iVar24 = *(int *)(p_Var20 + 4);
  iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar24 + 0x24),0);
  if (iVar3 == 0) {
    FUN_00129d3e();
  }
  iVar3 = *(int *)(iVar24 + 4);
  cocos2d::CCRect::CCRect((CCRect *)&stack0x00000198);
  if (**(int **)(p_Var20 + 4) == 5) {
    puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x38))();
    __addsf3(*puVar16,DAT_001291c8);
    iVar24 = (**(code **)(*piVar27 + 0x38))(piVar27);
    uVar41 = __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001291cc);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001a8,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20),
               extraout_s2_01,extraout_s3_00);
    puVar25 = &stack0x000001a8;
  }
  else {
    (**(code **)(*piVar27 + 0x38))(piVar27);
    iVar24 = (**(code **)(*piVar27 + 0x38))(piVar27);
    iVar35 = *(int *)(p_Var20 + 4);
    uVar15 = *(undefined4 *)(iVar35 + 0x104);
    __subsf3(*(undefined4 *)(iVar24 + 4),uVar15);
    __mulsf3(*(undefined4 *)(iVar35 + 0x100),0x3f000000);
    uVar41 = __addsf3(uVar15,uVar15);
    cocos2d::CCRect::CCRect
              ((CCRect *)&stack0x000001b8,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20),
               extraout_s2_02,extraout_s3_01);
    puVar25 = &stack0x000001b8;
  }
  pCVar28 = (CCRect *)0x10;
  memcpy(&stack0x00000198,puVar25,0x10);
  if (*piVar31 == 0) {
    iVar24 = **(int **)(p_Var20 + 4);
    if (((iVar24 != 3) && (iVar24 != 1)) && (iVar24 != 5)) {
      FUN_00129d3e();
    }
  }
  else {
    if (*piVar31 != 1) {
      FUN_00129d3e();
    }
    iVar24 = **(int **)(p_Var20 + 4);
    if (((iVar24 != 2) && (iVar24 != 0)) && (iVar24 != 4)) {
      FUN_00129d3e();
    }
  }
  iVar24 = cocos2d::CCRect::CCRectIntersectsRect
                     ((CCRect *)&stack0x00000188,(CCRect *)&stack0x00000198,pCVar28);
  fVar40 = extraout_s0_03;
  if (iVar24 == 0) {
    fVar40 = (float)FUN_00129d3e();
  }
  if (*(char *)((int)piVar31 + 0x19) == '\0') {
    if (*(char *)(piVar31 + 7) == '\0') {
      if (*(char *)((int)piVar31 + 0x1a) == '\0') {
        if (((*(char *)((int)piVar31 + 0x1b) == '\0') && (*(char *)(piVar31 + 6) == '\0')) &&
           (*(char *)((int)piVar31 + 0x1e) == '\0')) {
          if ((**(char **)(param_14 + DAT_001294b8) != '\0') && (**(int **)(p_Var20 + 4) == 2)) {
            FUN_00129da2();
          }
          pEVar33 = *(Effect **)(param_17 + DAT_001294bc);
          if (pEVar33 != (Effect *)0x0) {
            if (*piVar31 == 1) {
              pCVar34 = **(CCLayer ***)(param_14 + DAT_001294c0);
              puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
              uVar15 = *puVar16;
              puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0x1f])(ppiVar2);
              uVar17 = __mulsf3(*puVar16,0x3f000000);
              __subsf3(uVar15,uVar17);
              param_12 = __fixsfsi();
              iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
              __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001294c4);
              iVar24 = __fixsfsi();
              iVar35 = (**(code **)(*piVar27 + 0x14))(piVar27);
              uVar1 = *(undefined *)((int)piVar31 + 0x1d);
              iVar29 = 7;
LAB_001292e2:
              Effect::Effect_Draw(pEVar33,pCVar34,iVar29,param_12,iVar24,iVar35,(bool)uVar1);
            }
            else if (*piVar31 == 0) {
              pCVar34 = **(CCLayer ***)(param_14 + DAT_001294c0);
              puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
              param_12 = __fixsfsi(*puVar16);
              iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
              iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
              iVar35 = (**(code **)(*piVar27 + 0x14))(piVar27);
              uVar1 = *(undefined *)((int)piVar31 + 0x1d);
              iVar29 = 1;
              goto LAB_001292e2;
            }
            in_stack_000000a8 = CONCAT13(in_stack_000000a8._3_1_,0x7f7fff);
            SetDemigeColor((CCLayer *)piVar27,in_stack_000000a8,p_Var20);
          }
        }
      }
      else {
        SetStun((CCLayer *)piVar27,fVar40);
      }
    }
    else {
      pEVar33 = *(Effect **)(param_17 + DAT_001291d8);
      if ((pEVar33 != (Effect *)0x0) &&
         (piVar31[0x15] != 0xb && (piVar31[0x14] != 0xb && piVar31[0x13] != 0xb))) {
        pCVar34 = **(CCLayer ***)(param_14 + DAT_001291dc);
        puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x38))(piVar27);
        iVar24 = __fixsfsi(*puVar16);
        iVar35 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
        iVar35 = __fixsfsi(*(undefined4 *)(iVar35 + 4));
        iVar29 = (**(code **)(*piVar27 + 0x14))(piVar27);
        Effect::Effect_Draw(pEVar33,pCVar34,5,iVar24,iVar35,iVar29,false);
        uStack000000a0 = 0xff;
        uStack000000a1 = 0x7f;
        uStack000000a2 = 0x7f;
        (**(code **)(*piVar27 + 0xf4))(piVar27);
        in_stack_000000a4 = CONCAT13(in_stack_000000a4._3_1_,0x7f7fff);
        SetAttackColor((CCLayer *)piVar27,in_stack_000000a4,p_Var20);
        *(undefined *)(*(int *)(p_Var20 + 4) + 0x92) = 1;
      }
    }
  }
  else {
    pEVar33 = *(Effect **)(param_17 + DAT_001291d8);
    if ((pEVar33 != (Effect *)0x0) &&
       (piVar31[0x15] != 0xb && (piVar31[0x14] != 0xb && piVar31[0x13] != 0xb))) {
      pCVar34 = **(CCLayer ***)(param_14 + DAT_001291dc);
      puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x38))(piVar27);
      iVar24 = __fixsfsi(*puVar16);
      iVar35 = (**(code **)(*piVar27 + 0x38))(piVar27);
      uVar15 = *(undefined4 *)(iVar35 + 4);
      iVar35 = (**(code **)(*piVar27 + 0x7c))(piVar27);
      uVar17 = __mulsf3(*(undefined4 *)(iVar35 + 4),0x3f000000);
      __addsf3(uVar15,uVar17);
      iVar35 = __fixsfsi();
      iVar29 = (**(code **)(*piVar27 + 0x14))(piVar27);
      Effect::Effect_Draw(pEVar33,pCVar34,0xa0,iVar24,iVar35,iVar29,*(bool *)((int)piVar31 + 0x1d));
      if ((**(int **)(p_Var20 + 4) != 3) &&
         ((iVar24 = (*(int **)(p_Var20 + 4))[1],
          iVar24 != *(int *)(**(int **)(param_14 + DAT_001291e0) + 0x2c) && (iVar24 != DAT_001291e4)
          ))) {
        uStack0000009a = 0xff;
        uStack00000098 = 0x7f;
        uStack00000099 = 0x7f;
        (**(code **)(*piVar27 + 0xf4))(piVar27);
        in_stack_0000009c = CONCAT13(in_stack_0000009c._3_1_,0xff7f7f);
        SetAttackColor((CCLayer *)piVar27,in_stack_0000009c,p_Var20);
        *(undefined *)(*(int *)(p_Var20 + 4) + 0x90) = 1;
        iVar24 = cocos2d::CCNode::getChildByTag((CCNode *)piVar27,0);
        if ((iVar24 == 0) &&
           (iVar24 = cocos2d::CCNode::getChildByTag((CCNode *)piVar27,DAT_001291e8), iVar24 == 0)) {
          piVar36 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001291ec + 0x129090));
          pcVar37 = *(code **)(*piVar36 + 0x74);
          cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x00000178,extraout_s0_04,extraout_s1_00);
          (*pcVar37)(piVar36,&stack0x00000178);
          pcVar37 = *(code **)(*piVar36 + 0x3c);
          puVar16 = (undefined4 *)(**(code **)(*piVar27 + 0x7c))(piVar27);
          uVar41 = __mulsf3(*puVar16,0x3f000000);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&stack0x00000180,(float)uVar41,(float)((ulonglong)uVar41 >> 0x20));
          (*pcVar37)(piVar36,&stack0x00000180);
          (**(code **)(*piVar27 + 0xcc))(piVar27,piVar36,DAT_001291e8,DAT_001291e8);
        }
      }
    }
  }
  if (*(char *)((int)piVar31 + 0x1e) != '\0') {
    param_12 = 0;
    param_18 = piVar31;
    do {
      iVar24 = piVar31[8];
      if (iVar24 <= param_12) {
        FUN_00129d06();
        return;
      }
      piVar36 = (int *)param_18[9];
      if (piVar36 == piVar27) {
        FUN_00129d06();
      }
      if (param_12 != iVar24 + -1) {
        if (piVar36 != (int *)0x0) goto LAB_00129a5e;
        piVar31[param_12 + 9] = (int)piVar27;
        if (*(char *)(*(int *)(p_Var20 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var20 + 4) + 0x84) = (char)piVar36;
        }
        *(undefined *)(*(int *)(p_Var20 + 4) + 0x124) = 1;
        pcVar21 = *(char **)(param_14 + DAT_001294b8);
        if ((*pcVar21 != '\0') && (**(int **)(p_Var20 + 4) == 2)) {
          FUN_00129da2();
        }
        if (*piVar31 == 1) {
          pEVar33 = *(Effect **)(param_17 + DAT_001294bc);
          pCVar34 = **(CCLayer ***)(param_14 + DAT_001294c0);
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
          uVar15 = *puVar16;
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0x1f])(ppiVar2);
          uVar17 = __mulsf3(*puVar16,0x3f000000);
          __subsf3(uVar15,uVar17);
          param_18 = (int *)__fixsfsi();
          iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
          __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001294c4);
          iVar24 = __fixsfsi();
          iVar35 = (**(code **)(*piVar27 + 0x14))(piVar27);
          uVar1 = *(undefined *)((int)piVar31 + 0x1d);
          iVar29 = 7;
LAB_00129436:
          Effect::Effect_Draw(pEVar33,pCVar34,iVar29,(int)param_18,iVar24,iVar35,(bool)uVar1);
        }
        else if (*piVar31 == 0) {
          pEVar33 = *(Effect **)(param_17 + DAT_001294bc);
          pCVar34 = **(CCLayer ***)(param_14 + DAT_001294c0);
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
          param_18 = (int *)__fixsfsi(*puVar16);
          iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
          iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
          iVar35 = (**(code **)(*piVar27 + 0x14))(piVar27);
          uVar1 = *(undefined *)((int)piVar31 + 0x1d);
          iVar29 = 1;
          goto LAB_00129436;
        }
        in_stack_000000ac = CONCAT13(in_stack_000000ac._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar27,in_stack_000000ac,p_Var20);
        if ((piVar31[0x15] == 0xb) || (piVar31[0x14] == 0xb || piVar31[0x13] == 0xb))
        goto LAB_00129470;
        piVar36 = *(int **)(p_Var20 + 4);
        if ((*pcVar21 != '\0') && (*piVar36 == 2)) {
          FUN_00129da2();
        }
        if (((iVar3 + DAT_001294cc == 0) || (iVar3 + DAT_001294d0 == 0)) || (iVar3 == DAT_001294d4))
        {
          iVar3 = __mulsf3(piVar31[1],0x3f000000);
          iVar24 = piVar36[9];
        }
        else {
          iVar24 = piVar36[9];
          iVar3 = piVar31[1];
        }
        iVar3 = __subsf3(iVar24,iVar3);
        piVar36[9] = iVar3;
        uVar41 = __extendsfdf2(piVar31[1]);
        uVar42 = __extendsfdf2(piVar31[2]);
        uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),DAT_001297a0,DAT_001297a4);
        __subdf3((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                 (int)((ulonglong)uVar42 >> 0x20));
        iVar3 = __truncdfsf2();
        piVar31[1] = iVar3;
        if ((*(int *)(*(int *)(p_Var20 + 4) + 4) == 0x96) &&
           (*(char *)(**(int **)(param_14 + DAT_001297b8) + 1) != '\0')) {
          pcVar21 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar21,(bool)((char)DAT_001297bc + '2'));
        }
        ppiVar14 = *(int ***)(param_14 + DAT_001297c0);
        piVar36 = *ppiVar14;
        if ((piVar36[0x10] == 0) &&
           ((piVar22 = *(int **)(p_Var20 + 4), *piVar22 == 3 || (piVar22[1] == piVar36[0xb])))) {
          uVar41 = __extendsfdf2(piVar22[9]);
          uVar42 = __extendsfdf2(piVar22[10]);
          uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),DAT_001297a8,DAT_001297ac);
          iVar24 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                                  (int)((ulonglong)uVar42 >> 0x20));
          iVar3 = DAT_001297c4;
          if (iVar24 != 0) {
            piVar36[0x10] = 1;
            iVar3 = *(int *)(param_14 + iVar3);
            piVar22 = *(int **)(param_14 + DAT_001297c8);
            piVar30 = *(int **)(param_14 + DAT_001297cc);
            if ((*(int **)(p_Var20 + 4))[1] == piVar36[0xb]) {
              uVar15 = __mulsf3(*(undefined4 *)
                                 (iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x30),
                                0x3f000000);
LAB_001295ee:
              iVar24 = __fixsfsi(uVar15);
              piVar36[0x11] = iVar24;
            }
            else if (**(int **)(p_Var20 + 4) == 3) {
              uVar15 = *(undefined4 *)(iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x30)
              ;
              goto LAB_001295ee;
            }
            piVar36[0x12] = *(int *)(iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x2c);
            Game_Scene_Vibration();
            if (**ppiVar14 != 3) {
              GameScene::OpenPopup_Img(**(GameScene ***)(param_14 + DAT_001297d0),0);
            }
          }
          piVar36 = *ppiVar14;
          piVar22 = piVar36 + 0x14;
          if (*(char *)piVar22 == '\0') {
            iVar3 = *(int *)(p_Var20 + 4);
            uVar41 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x24));
            uVar42 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x28));
            uVar43 = __floatsidf(piVar36[0x15]);
            uVar43 = __muldf3((int)uVar43,(int)((ulonglong)uVar43 >> 0x20),DAT_001297b0,DAT_001297b4
                             );
            uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),(int)uVar43,
                              (int)((ulonglong)uVar43 >> 0x20));
            iVar3 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                                   (int)((ulonglong)uVar42 >> 0x20));
            if (iVar3 != 0) {
              *(char *)piVar22 = '\x01';
            }
          }
        }
        Draw_Castle_Att_Effect((CCLayer *)piVar27);
        iVar3 = __aeabi_fcmplt(piVar31[1],0);
        if (iVar3 != 0) {
          operator_delete(piVar31);
          (**(code **)(***(int ***)(param_14 + DAT_001297d4) + 0xd0))
                    (**(int ***)(param_14 + DAT_001297d4),ppiVar2,1);
          FUN_00129da2();
          return;
        }
LAB_00129470:
        param_11 = 0;
        while ((*(int *)((int)piVar31 + param_11 + 0x4c) == 0 || (**(int **)(p_Var20 + 4) != 0))) {
          param_11 = param_11 + 4;
          if (param_11 == 0xc) {
            FUN_00129d06();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_001294c8 + 0x12947a));
      }
      if (piVar36 == (int *)0x0) {
        param_18[9] = (int)piVar27;
        if (*(char *)(*(int *)(p_Var20 + 4) + 0x84) != '\0') {
          *(char *)(*(int *)(p_Var20 + 4) + 0x84) = (char)piVar36;
        }
        *(undefined *)(*(int *)(p_Var20 + 4) + 0x124) = 1;
        pcVar21 = *(char **)(param_14 + DAT_001297d8);
        if ((*pcVar21 != '\0') && (**(int **)(p_Var20 + 4) == 2)) {
          FUN_00129da2();
          return;
        }
        if (*piVar31 == 1) {
          pEVar33 = *(Effect **)(param_17 + DAT_001297dc);
          pCStack00000048 = **(CCLayer ***)(param_14 + DAT_001297d4);
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
          uVar17 = *puVar16;
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0x1f])(ppiVar2);
          uVar15 = __mulsf3(*puVar16,0x3f000000);
          __subsf3(uVar17,uVar15);
          iStack00000050 = __fixsfsi();
          iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
          __subsf3(*(undefined4 *)(iVar24 + 4),DAT_001297e0);
          iVar24 = __fixsfsi();
          iVar35 = (**(code **)(*piVar27 + 0x14))();
          uVar1 = *(undefined *)((int)piVar31 + 0x1d);
          iVar29 = 7;
LAB_00129832:
          Effect::Effect_Draw(pEVar33,pCStack00000048,iVar29,iStack00000050,iVar24,iVar35,
                              (bool)uVar1);
        }
        else if (*piVar31 == 0) {
          pEVar33 = *(Effect **)(param_17 + DAT_00129b00);
          pCStack00000048 = **(CCLayer ***)(param_14 + DAT_00129b04);
          puVar16 = (undefined4 *)(*(code *)(*ppiVar2)[0xe])(ppiVar2);
          iStack00000050 = __fixsfsi(*puVar16);
          iVar24 = (*(code *)(*ppiVar2)[0xe])(ppiVar2);
          iVar24 = __fixsfsi(*(undefined4 *)(iVar24 + 4));
          iVar35 = (**(code **)(*piVar27 + 0x14))();
          uVar1 = *(undefined *)((int)piVar31 + 0x1d);
          iVar29 = 1;
          goto LAB_00129832;
        }
        in_stack_000000b0 = CONCAT13(in_stack_000000b0._3_1_,0x7f7fff);
        SetDemigeColor((CCLayer *)piVar27,in_stack_000000b0,p_Var20);
        if ((piVar31[0x15] != 0xb) && (piVar31[0x14] != 0xb && piVar31[0x13] != 0xb)) {
          piVar36 = *(int **)(p_Var20 + 4);
          if ((*pcVar21 != '\0') && (*piVar36 == 2)) {
            FUN_00129da2();
            return;
          }
          if (((iVar3 + DAT_00129b08 == 0) || (iVar3 + DAT_00129b0c == 0)) ||
             (iVar3 == DAT_00129b10)) {
            iVar24 = __mulsf3(piVar31[1],0x3f000000);
            iVar35 = piVar36[9];
          }
          else {
            iVar35 = piVar36[9];
            iVar24 = piVar31[1];
          }
          iVar24 = __subsf3(iVar35,iVar24);
          piVar36[9] = iVar24;
          if ((*(int *)(*(int *)(p_Var20 + 4) + 4) == 0x96) &&
             (*(char *)(**(int **)(param_14 + DAT_00129b14) + 1) != '\0')) {
            pcVar21 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar21,(bool)((char)DAT_00129b18 + -0x28))
            ;
          }
          ppiVar14 = *(int ***)(param_14 + DAT_00129b1c);
          piVar36 = *ppiVar14;
          if ((piVar36[0x10] == 0) &&
             ((piVar22 = *(int **)(p_Var20 + 4), *piVar22 == 3 || (piVar22[1] == piVar36[0xb])))) {
            uVar41 = __extendsfdf2(piVar22[9]);
            uVar42 = __extendsfdf2(piVar22[10]);
            uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),DAT_00129af0,DAT_00129af4
                             );
            iVar35 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                                    (int)((ulonglong)uVar42 >> 0x20));
            iVar24 = DAT_00129b20;
            if (iVar35 != 0) {
              piVar36[0x10] = 1;
              iVar24 = *(int *)(param_14 + iVar24);
              piVar30 = *(int **)(param_14 + DAT_00129b24);
              piVar22 = *(int **)(param_14 + DAT_00129b28);
              if ((*(int **)(p_Var20 + 4))[1] == piVar36[0xb]) {
                uVar15 = __mulsf3(*(undefined4 *)
                                   (iVar24 + ((*piVar30 + -1) * 10 + *piVar22 + -1) * 0x40 + 0x30),
                                  0x3f000000);
LAB_0012998a:
                iVar35 = __fixsfsi(uVar15);
                piVar36[0x11] = iVar35;
              }
              else if (**(int **)(p_Var20 + 4) == 3) {
                uVar15 = *(undefined4 *)
                          (iVar24 + ((*piVar30 + -1) * 10 + *piVar22 + -1) * 0x40 + 0x30);
                goto LAB_0012998a;
              }
              piVar36[0x12] =
                   *(int *)(iVar24 + ((*piVar30 + -1) * 10 + *piVar22 + -1) * 0x40 + 0x2c);
              Game_Scene_Vibration();
              if (**ppiVar14 != 3) {
                GameScene::OpenPopup_Img(**(GameScene ***)(param_14 + DAT_00129b2c),0);
              }
            }
            piVar22 = *ppiVar14;
            piVar36 = piVar22 + 0x14;
            if (*(char *)piVar36 == '\0') {
              iVar24 = *(int *)(p_Var20 + 4);
              uVar41 = __extendsfdf2(*(undefined4 *)(iVar24 + 0x24));
              uVar42 = __extendsfdf2(*(undefined4 *)(iVar24 + 0x28));
              uVar43 = __floatsidf(piVar22[0x15]);
              uVar43 = __muldf3((int)uVar43,(int)((ulonglong)uVar43 >> 0x20),DAT_00129af8,
                                DAT_00129afc);
              uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),(int)uVar43,
                                (int)((ulonglong)uVar43 >> 0x20));
              iVar24 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                                      (int)((ulonglong)uVar42 >> 0x20));
              if (iVar24 != 0) {
                *(char *)piVar36 = '\x01';
              }
            }
          }
          Draw_Castle_Att_Effect((CCLayer *)piVar27);
        }
        param_15 = 0;
        do {
          if ((*(int *)((int)piVar31 + param_15 + 0x4c) != 0) && (**(int **)(p_Var20 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
            cocos2d::CCLog((char *)(DAT_00129b30 + 0x129a2c));
          }
          param_15 = param_15 + 4;
        } while (param_15 != 0xc);
      }
LAB_00129a5e:
      param_12 = param_12 + 1;
      param_18 = param_18 + 1;
    } while( true );
  }
  if (*(char *)(*(int *)(p_Var20 + 4) + 0x84) != '\0') {
    *(char *)(*(int *)(p_Var20 + 4) + 0x84) = '\0';
  }
  piVar36 = *(int **)(p_Var20 + 4);
  if ((piVar36[0x38] == 0xb) || (piVar36[0x37] == 0xb || piVar36[0x36] == 0xb)) goto LAB_00129cfa;
  if ((**(char **)(param_14 + DAT_00129b34) != '\0') && (*piVar36 == 2)) {
    FUN_00129da2();
    return;
  }
  if (((iVar3 + DAT_00129b08 == 0) || (iVar3 + DAT_00129b0c == 0)) || (iVar3 == DAT_00129b10)) {
    iVar3 = __mulsf3(piVar31[1],0x3f000000);
    iVar24 = piVar36[9];
  }
  else {
    iVar24 = piVar36[9];
    iVar3 = piVar31[1];
  }
  iVar3 = __subsf3(iVar24,iVar3);
  piVar36[9] = iVar3;
  if ((*(int *)(*(int *)(p_Var20 + 4) + 4) == 0x96) &&
     (*(char *)(**(int **)(param_14 + DAT_00129db8) + 1) != '\0')) {
    pcVar21 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar21,(bool)((char)DAT_00129dbc + 'f'));
  }
  param_11 = 0;
  do {
    if ((*(int *)((int)piVar31 + param_11 + 0x4c) != 0) && (**(int **)(p_Var20 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00129dc0 + 0x129b72));
    }
    param_11 = param_11 + 4;
  } while (param_11 != 0xc);
  ppiVar14 = *(int ***)(param_14 + DAT_00129dc4);
  piVar36 = *ppiVar14;
  if ((piVar36[0x10] == 0) &&
     ((piVar22 = *(int **)(p_Var20 + 4), *piVar22 == 3 || (piVar22[1] == piVar36[0xb])))) {
    uVar41 = __extendsfdf2(piVar22[9]);
    uVar42 = __extendsfdf2(piVar22[10]);
    uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),DAT_00129da8,DAT_00129dac);
    iVar24 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                            (int)((ulonglong)uVar42 >> 0x20));
    iVar3 = DAT_00129dc8;
    if (iVar24 != 0) {
      piVar36[0x10] = 1;
      iVar3 = *(int *)(param_14 + iVar3);
      piVar22 = *(int **)(param_14 + DAT_00129dcc);
      piVar30 = *(int **)(param_14 + DAT_00129dd0);
      if ((*(int **)(p_Var20 + 4))[1] == piVar36[0xb]) {
        uVar15 = __mulsf3(*(undefined4 *)
                           (iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x30),0x3f000000
                         );
LAB_00129c5e:
        iVar24 = __fixsfsi(uVar15);
        piVar36[0x11] = iVar24;
      }
      else if (**(int **)(p_Var20 + 4) == 3) {
        uVar15 = *(undefined4 *)(iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x30);
        goto LAB_00129c5e;
      }
      piVar36[0x12] = *(int *)(iVar3 + ((*piVar22 + -1) * 10 + *piVar30 + -1) * 0x40 + 0x2c);
      Game_Scene_Vibration();
      if (**ppiVar14 != 3) {
        GameScene::OpenPopup_Img(**(GameScene ***)(param_14 + DAT_00129dd4),0);
      }
    }
    piVar36 = *ppiVar14;
    piVar22 = piVar36 + 0x14;
    if (*(char *)piVar22 == '\0') {
      iVar3 = *(int *)(p_Var20 + 4);
      uVar41 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x24));
      uVar42 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x28));
      uVar43 = __floatsidf(piVar36[0x15]);
      uVar43 = __muldf3((int)uVar43,(int)((ulonglong)uVar43 >> 0x20),DAT_00129db0,DAT_00129db4);
      uVar42 = __muldf3((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),(int)uVar43,
                        (int)((ulonglong)uVar43 >> 0x20));
      iVar3 = __aeabi_dcmplt((int)uVar41,(int)((ulonglong)uVar41 >> 0x20),(int)uVar42,
                             (int)((ulonglong)uVar42 >> 0x20));
      if (iVar3 != 0) {
        *(char *)piVar22 = '\x01';
      }
    }
  }
  Draw_Castle_Att_Effect((CCLayer *)piVar27);
LAB_00129cfa:
  *(undefined *)(*(int *)(p_Var20 + 4) + 0x124) = 1;
  if (**(int **)(p_Var20 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(param_17 + 0x120),p_Var20);
  }
  operator_delete(piVar31);
  (**(code **)(***(int ***)(param_14 + DAT_00129dd8) + 0xd0))
            (**(int ***)(param_14 + DAT_00129dd8),ppiVar2,1);
  pcVar37 = (code *)cocos2d::CCArray::count(pCVar19);
  if (pcVar38 + 1 < pcVar37) {
    FUN_00128df0();
  }
  uVar23 = cocos2d::CCArray::count(param_24);
  fVar40 = extraout_s0_05;
  if (param_23 + 1 < uVar23) {
    fVar40 = (float)FUN_001275be();
  }
  GameScene::Hero_Skill_Control((GameScene *)param_17,fVar40);
  FUN_00129da2();
  return;
}


