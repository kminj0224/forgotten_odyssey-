/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f8480  Symbol: Hero_Sia_Control */

/* Hero_Sia_Control(cocos2d::CCNode*, float, void*) */

void Hero_Sia_Control(CCNode *param_1,float param_2,void *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  CCNode *this;
  int *piVar3;
  CCPoint *pCVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  CCLayer *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int **ppiVar15;
  float extraout_s0;
  float extraout_s0_00;
  float fVar16;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar11 = DAT_000f87d0 + 0xf848c;
  ppiVar15 = *(int ***)(iVar11 + DAT_000f87d4);
  piVar1 = (int *)(**(code **)(**ppiVar15 + 0xa8))();
  iVar13 = piVar1[1];
  if (1 < *(int *)(iVar13 + 100)) {
    uVar2 = __addsf3(*(undefined4 *)(iVar13 + 0x3c),param_3);
    *(undefined4 *)(iVar13 + 0x3c) = uVar2;
    this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    cocos2d::CCNode::getChildByTag
              (this,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar13 = cocos2d::CCNode::numberOfRunningActions();
    iVar14 = piVar1[1];
    iVar12 = *(int *)(iVar14 + 100);
    if (iVar13 == 0) {
      if (iVar12 == 6) {
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0,extraout_s1);
        *(undefined4 *)(iVar14 + 0x110) = local_20;
        *(undefined4 *)(iVar14 + 0x114) = local_1c;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_Base_ani(pCVar8);
      (**(code **)(**ppiVar15 + 0x2c))(*ppiVar15,0x3f800000);
      *(undefined4 *)(piVar1[1] + 100) = 0xffffffff;
      *(undefined *)(piVar1[1] + 0x75) = 0;
      *(undefined *)(piVar1[1] + 0x76) = 0;
      *(undefined *)(piVar1[1] + 0x77) = 0;
      *(undefined *)(piVar1[1] + 0x78) = 0;
      return;
    }
    if (iVar12 == 2) {
      piVar3 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar15,false);
      iVar13 = piVar1[1];
      uVar17 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f87a0,DAT_000f87a4
                             );
      if (((iVar11 != 0) && (*(char *)(iVar13 + 0x75) == '\0')) && (piVar3 != (int *)0x0)) {
        iVar11 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        iVar11 = *(int *)(iVar11 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar11 + 0x24),DAT_000f87d8);
        *(undefined4 *)(iVar11 + 0x24) = uVar2;
        *(undefined *)(piVar1[1] + 0x75) = 1;
      }
      if (*(char *)(piVar1[1] + 0x34) == '\0') {
        return;
      }
      uVar17 = __extendsfdf2(*(undefined4 *)(piVar1[1] + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f87a8,DAT_000f87ac
                             );
      if (iVar11 == 0) {
        return;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_attack_1_2_ani(pCVar8);
    }
    else {
      if (iVar12 != 3) {
        if (iVar12 == 4) {
          uVar17 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
          iVar13 = __aeabi_dcmplt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f87b0,
                                  DAT_000f87b4);
          if (iVar13 == 0) {
            return;
          }
          piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar11 + DAT_000f87e4),1);
          pCVar4 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
          KG_BG_Hero_Move(param_1,*pCVar4);
          puVar5 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
          __addsf3(*puVar5,DAT_000f87e8);
          uVar17 = (**(code **)(**ppiVar15 + 0x38))(*ppiVar15);
          uVar17 = cocos2d::CCNode::setPosition((float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
          Unit_Live_Collistion_attck
                    ((CCLayer *)*ppiVar15,(float)uVar17,false,(float)((ulonglong)uVar17 >> 0x20),
                     true);
          return;
        }
        if (iVar12 != 5) {
          if (iVar12 != 6) {
            return;
          }
          uVar17 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
          uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
          __addsf3(param_3,param_3);
          uVar18 = __extendsfdf2();
          uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
          uVar19 = __subdf3(DAT_000f8900,DAT_000f8904,(int)uVar18,uVar6);
          iVar13 = __aeabi_dcmpgt((int)uVar17,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
          if (iVar13 == 0) {
            return;
          }
          uVar18 = __adddf3((int)uVar18,uVar6,DAT_000f8900,DAT_000f8904);
          iVar13 = __aeabi_dcmplt((int)uVar17,uVar2,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
          if (iVar13 == 0) {
            return;
          }
          cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_00,extraout_s1_00);
          *(undefined4 *)(iVar14 + 0x110) = local_28;
          *(undefined4 *)(iVar14 + 0x114) = local_24;
          piVar1 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar11 + DAT_000f890c),1);
          pCVar4 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
          fVar16 = (float)KG_BG_Hero_Move(param_1,*pCVar4);
          Unit_Live_Collistion_attck((CCLayer *)*ppiVar15,fVar16);
          return;
        }
        uVar17 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
        uVar9 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar2 = (undefined4)uVar17;
        __addsf3(param_3,param_3);
        uVar17 = __extendsfdf2();
        uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar6 = (undefined4)uVar17;
        uVar17 = __subdf3(DAT_000f87b8,DAT_000f87bc,uVar6,uVar10);
        iVar11 = __aeabi_dcmpgt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        if (iVar11 != 0) {
          uVar17 = __adddf3(uVar6,uVar10,DAT_000f87b8,DAT_000f87bc);
          iVar11 = __aeabi_dcmplt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          if (iVar11 != 0) {
            piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar15,false);
            if (piVar1 == (int *)0x0) {
              return;
            }
            iVar11 = (**(code **)(*piVar1 + 0xa8))();
            iVar11 = *(int *)(iVar11 + 4);
            uVar2 = __subsf3(*(undefined4 *)(iVar11 + 0x24),DAT_000f87f0);
            *(undefined4 *)(iVar11 + 0x24) = uVar2;
            pcVar7 = (char *)(DAT_000f87f4 + 0xf86d6);
            goto LAB_000f8798;
          }
        }
        uVar17 = __subdf3(DAT_000f87c0,DAT_000f87c4,uVar6,uVar10);
        iVar11 = __aeabi_dcmpgt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        if (iVar11 != 0) {
          uVar17 = __adddf3(uVar6,uVar10,DAT_000f87c0,DAT_000f87c4);
          iVar11 = __aeabi_dcmplt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
          if (iVar11 != 0) {
            piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar15,false);
            if (piVar1 == (int *)0x0) {
              return;
            }
            iVar11 = (**(code **)(*piVar1 + 0xa8))();
            iVar11 = *(int *)(iVar11 + 4);
            uVar2 = __subsf3(*(undefined4 *)(iVar11 + 0x24),DAT_000f87f0);
            *(undefined4 *)(iVar11 + 0x24) = uVar2;
            pcVar7 = (char *)(DAT_000f87f8 + 0xf8736);
            goto LAB_000f8798;
          }
        }
        uVar17 = __subdf3(DAT_000f87c8,DAT_000f87cc,uVar6,uVar10);
        iVar11 = __aeabi_dcmpgt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        if (iVar11 == 0) {
          return;
        }
        uVar17 = __adddf3(uVar6,uVar10,DAT_000f87c8,DAT_000f87cc);
        iVar11 = __aeabi_dcmplt(uVar2,uVar9,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
        if (iVar11 == 0) {
          return;
        }
        piVar1 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar15,false);
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar11 = (**(code **)(*piVar1 + 0xa8))();
        iVar11 = *(int *)(iVar11 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar11 + 0x24),DAT_000f87f0);
        *(undefined4 *)(iVar11 + 0x24) = uVar2;
        pcVar7 = (char *)(DAT_000f87fc + 0xf879a);
LAB_000f8798:
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog(pcVar7);
      }
      piVar3 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar15,false);
      iVar13 = piVar1[1];
      uVar17 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f87a0,DAT_000f87a4
                             );
      if (((iVar11 != 0) && (*(char *)(iVar13 + 0x76) == '\0')) && (piVar3 != (int *)0x0)) {
        iVar11 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        iVar11 = *(int *)(iVar11 + 4);
        uVar2 = __subsf3(*(undefined4 *)(iVar11 + 0x24),DAT_000f87dc);
        *(undefined4 *)(iVar11 + 0x24) = uVar2;
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000f87e0 + 0xf85a4));
      }
      if (*(char *)(piVar1[1] + 0x34) == '\0') {
        return;
      }
      uVar17 = __extendsfdf2(*(undefined4 *)(piVar1[1] + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f87a8,DAT_000f87ac
                             );
      if (iVar11 == 0) {
        return;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_attack_2_2_ani(pCVar8);
    }
    *(undefined *)(piVar1[1] + 0x34) = 0;
  }
  return;
}


