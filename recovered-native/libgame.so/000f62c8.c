/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f62c8  Symbol: Hero_Tao_Control */

/* Hero_Tao_Control(cocos2d::CCNode*, float, void*) */

void Hero_Tao_Control(CCNode *param_1,float param_2,void *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  CCNode *this;
  int *piVar3;
  char *pcVar4;
  CCPoint *pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  CCLayer *pCVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int **ppiVar16;
  float extraout_s0;
  float extraout_s0_00;
  float fVar17;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar12 = DAT_000f65f0 + 0xf62d4;
  ppiVar16 = *(int ***)(iVar12 + DAT_000f65f4);
  piVar1 = (int *)(**(code **)(**ppiVar16 + 0xa8))();
  iVar14 = piVar1[1];
  if ((*(int *)(iVar14 + 100) < 7) && (1 < *(int *)(iVar14 + 100))) {
    uVar2 = __addsf3(*(undefined4 *)(iVar14 + 0x3c),param_3);
    *(undefined4 *)(iVar14 + 0x3c) = uVar2;
    this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
    cocos2d::CCNode::getChildByTag
              (this,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar14 = cocos2d::CCNode::numberOfRunningActions();
    iVar15 = piVar1[1];
    iVar13 = *(int *)(iVar15 + 100);
    if (iVar14 == 0) {
      if (iVar13 == 6) {
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0,extraout_s1);
        *(undefined4 *)(iVar15 + 0x110) = local_20;
        *(undefined4 *)(iVar15 + 0x114) = local_1c;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
      ani_Base_ani(pCVar8);
      (**(code **)(**ppiVar16 + 0x2c))(*ppiVar16,0x3f800000);
      *(undefined4 *)(piVar1[1] + 100) = 0xffffffff;
      *(undefined *)(piVar1[1] + 0x75) = 0;
      *(undefined *)(piVar1[1] + 0x76) = 0;
      *(undefined *)(piVar1[1] + 0x77) = 0;
      *(undefined *)(piVar1[1] + 0x78) = 0;
      return;
    }
    if (iVar13 == 2) {
      piVar3 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
      iVar13 = piVar1[1];
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
      iVar14 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000f65c8,DAT_000f65cc
                             );
      if (((iVar14 != 0) && (*(char *)(iVar13 + 0x75) == '\0')) && (piVar3 != (int *)0x0)) {
        iVar14 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        iVar14 = *(int *)(iVar14 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar14 + 0x24),DAT_000f65f8);
        *(undefined4 *)(iVar14 + 0x24) = uVar2;
        *(undefined *)(piVar1[1] + 0x75) = 1;
      }
      if (*(char *)(piVar1[1] + 0x34) == '\0') {
        return;
      }
      uVar18 = __extendsfdf2(*(undefined4 *)(piVar1[1] + 0x3c));
      iVar14 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000f65d0,DAT_000f65d4
                             );
      if (iVar14 == 0) {
        return;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
      ani_attack_1_2_ani(pCVar8);
      *(undefined *)(piVar1[1] + 0x34) = 0;
      if (*(char *)(**(int **)(iVar12 + DAT_000f65fc) + 1) == '\0') {
        return;
      }
      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar9 = (char)DAT_000f6600 + -0x38;
    }
    else {
      if (iVar13 != 3) {
        if (iVar13 == 4) {
          uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
          iVar14 = __aeabi_dcmplt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000f65d8,
                                  DAT_000f65dc);
          if (iVar14 == 0) {
            return;
          }
          piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar12 + DAT_000f6610),1);
          pCVar5 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
          KG_BG_Hero_Move(param_1,*pCVar5);
          puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
          __addsf3(*puVar6,DAT_000f6614);
          uVar18 = (**(code **)(**ppiVar16 + 0x38))(*ppiVar16);
          uVar18 = cocos2d::CCNode::setPosition((float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
          Unit_Live_Collistion_attck
                    ((CCLayer *)*ppiVar16,(float)uVar18,false,(float)((ulonglong)uVar18 >> 0x20),
                     true);
          return;
        }
        if (iVar13 != 5) {
          if (iVar13 != 6) {
            return;
          }
          uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
          uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
          __addsf3(param_3,param_3);
          uVar19 = __extendsfdf2();
          uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
          uVar20 = __subdf3(DAT_000f6798,DAT_000f679c,(int)uVar19,uVar7);
          iVar14 = __aeabi_dcmpgt((int)uVar18,uVar2,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
          if (iVar14 == 0) {
            return;
          }
          uVar19 = __adddf3((int)uVar19,uVar7,DAT_000f6798,DAT_000f679c);
          iVar14 = __aeabi_dcmplt((int)uVar18,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
          if (iVar14 == 0) {
            return;
          }
          cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_00,extraout_s1_00);
          *(undefined4 *)(iVar15 + 0x110) = local_28;
          *(undefined4 *)(iVar15 + 0x114) = local_24;
          piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar12 + DAT_000f67ac),1);
          pCVar5 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
          fVar17 = (float)KG_BG_Hero_Move(param_1,*pCVar5);
          Unit_Live_Collistion_attck((CCLayer *)*ppiVar16,fVar17);
          return;
        }
        uVar18 = __extendsfdf2(*(undefined4 *)(iVar15 + 0x3c));
        uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
        uVar2 = (undefined4)uVar18;
        __addsf3(param_3,param_3);
        uVar18 = __extendsfdf2();
        uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
        uVar7 = (undefined4)uVar18;
        uVar18 = __subdf3(DAT_000f65e0,DAT_000f65e4,uVar7,uVar11);
        iVar12 = __aeabi_dcmpgt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar12 != 0) {
          uVar18 = __adddf3(uVar7,uVar11,DAT_000f65e0,DAT_000f65e4);
          iVar12 = __aeabi_dcmplt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
          if (iVar12 != 0) {
            piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
            if (piVar1 == (int *)0x0) {
              return;
            }
            iVar12 = (**(code **)(*piVar1 + 0xa8))();
            iVar12 = *(int *)(iVar12 + 4);
            uVar2 = __subsf3(*(undefined4 *)(iVar12 + 0x24),DAT_000f661c);
            *(undefined4 *)(iVar12 + 0x24) = uVar2;
            pcVar4 = (char *)(DAT_000f6620 + 0xf6562);
            goto LAB_000f668a;
          }
        }
        uVar18 = __subdf3(DAT_000f65e8,DAT_000f65ec,uVar7,uVar11);
        iVar12 = __aeabi_dcmpgt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar12 != 0) {
          uVar18 = __adddf3(uVar7,uVar11,DAT_000f65e8,DAT_000f65ec);
          iVar12 = __aeabi_dcmplt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
          if (iVar12 != 0) {
            piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
            if (piVar1 == (int *)0x0) {
              return;
            }
            iVar12 = (**(code **)(*piVar1 + 0xa8))();
            iVar12 = *(int *)(iVar12 + 4);
            uVar2 = __subsf3(*(undefined4 *)(iVar12 + 0x24),DAT_000f661c);
            *(undefined4 *)(iVar12 + 0x24) = uVar2;
            pcVar4 = &UNK_000f65c2 + DAT_000f6624;
            goto LAB_000f668a;
          }
        }
        uVar18 = __subdf3(DAT_000f6790,DAT_000f6794,uVar7,uVar11);
        iVar12 = __aeabi_dcmpgt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar12 == 0) {
          return;
        }
        uVar18 = __adddf3(uVar7,uVar11,DAT_000f6790,DAT_000f6794);
        iVar12 = __aeabi_dcmplt(uVar2,uVar10,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        if (iVar12 == 0) {
          return;
        }
        piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar12 = (**(code **)(*piVar1 + 0xa8))();
        iVar12 = *(int *)(iVar12 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar12 + 0x24),DAT_000f67a0);
        *(undefined4 *)(iVar12 + 0x24) = uVar2;
        pcVar4 = (char *)(DAT_000f67a4 + 0xf668c);
LAB_000f668a:
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog(pcVar4);
      }
      piVar3 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
      iVar13 = piVar1[1];
      uVar18 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
      iVar14 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000f65c8,DAT_000f65cc
                             );
      if (((iVar14 != 0) && (*(char *)(iVar13 + 0x76) == '\0')) && (piVar3 != (int *)0x0)) {
        iVar12 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        iVar12 = *(int *)(iVar12 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar12 + 0x24),DAT_000f6604);
        *(undefined4 *)(iVar12 + 0x24) = uVar2;
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000f6608 + 0xf6412));
      }
      if (*(char *)(piVar1[1] + 0x34) == '\0') {
        return;
      }
      uVar18 = __extendsfdf2(*(undefined4 *)(piVar1[1] + 0x3c));
      iVar14 = __aeabi_dcmpgt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_000f65d0,DAT_000f65d4
                             );
      if (iVar14 == 0) {
        return;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
      ani_attack_2_2_ani(pCVar8);
      *(undefined *)(piVar1[1] + 0x34) = 0;
      if (*(char *)(**(int **)(iVar12 + DAT_000f65fc) + 1) == '\0') {
        return;
      }
      pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar9 = (char)DAT_000f660c + 'l';
    }
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar4,(bool)cVar9);
  }
  return;
}


