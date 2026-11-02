/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000faa20  Symbol: Boss_21000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_21000_Skill_Call() */

void Boss_21000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CCLayer *pCVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  CCNode *pCVar10;
  CCNode **ppCVar11;
  int iVar12;
  float extraout_s0;
  float fVar13;
  undefined8 uVar14;
  
  iVar9 = DAT_000fac30 + 0xfaa2c;
  ppCVar11 = *(CCNode ***)(iVar9 + DAT_000fac34);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,1);
  pCVar10 = *ppCVar11;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  iVar3 = Unit_Collistion_Name((CCLayer *)*ppCVar11,false);
  iVar12 = piVar2[1];
  uVar4 = __addsf3(*(undefined4 *)(iVar12 + 0x3c),**(undefined4 **)(iVar9 + DAT_000fac38));
  *(undefined4 *)(iVar12 + 0x3c) = uVar4;
  iVar12 = piVar2[1];
  if (*(int *)(iVar12 + 100) == -1) {
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar4 = __addsf3(*(undefined4 *)(pCVar10 + 0x11c),
                     *(undefined4 *)(*(int *)(*(int *)(iVar12 + 100) * 4 + *piVar2) + 0x294));
    iVar5 = __aeabi_fcmpge(*(undefined4 *)(iVar12 + 0x3c),uVar4);
    if ((iVar5 != 0) && (*(int *)(iVar12 + 0x30) == 2)) {
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  if (iVar3 == 0) {
    pCVar6 = (CCLayer *)*ppCVar11;
    *(undefined4 *)(piVar2[1] + 0x110) = DAT_000fac3c;
    piVar7 = (int *)Unit_Collistion_Name(pCVar6,false);
    if (piVar7 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar7 + 0xa8))();
      iVar3 = *(int *)(*(int *)(iVar3 + 4) + 4);
      if ((iVar3 == 0xa0) || (iVar3 == 0x82)) {
        *(undefined4 *)(pCVar10 + 0x118) = 1;
        goto LAB_000faaee;
      }
    }
    iVar9 = piVar2[1];
    uVar4 = DAT_000fac40;
LAB_000fabba:
    *(undefined4 *)(iVar9 + 0x110) = uVar4;
  }
  else {
LAB_000faaee:
    iVar3 = piVar2[1];
    if (*(int *)(pCVar10 + 0x118) == 0) {
      uVar14 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x3c));
      iVar12 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000fac20,DAT_000fac24
                             );
      if ((iVar12 != 0) && (*(int *)(iVar3 + 0x30) == 1)) {
        Unit_Live_Collistion_attck((CCLayer *)*ppCVar11,extraout_s0,*(int *)(iVar3 + 0x38));
        *(undefined4 *)(piVar2[1] + 0x30) = 2;
        iVar9 = *(int *)(pCVar10 + 0x114);
        *(int *)(pCVar10 + 0x114) = iVar9 + 1;
        if (iVar9 + 1 == 3) {
          *(undefined4 *)(pCVar10 + 0x118) = 1;
          *(undefined4 *)(pCVar10 + 0x114) = 0;
        }
        goto LAB_000fabfa;
      }
      if (*(int *)(iVar3 + 0x30) != 0) goto LAB_000fabfa;
      ani_attack_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(iVar9 + DAT_000fac44) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000fac48 + '`'));
      }
      uVar4 = 0x40000000;
    }
    else {
      if (*(int *)(pCVar10 + 0x118) != 1) goto LAB_000fabfa;
      uVar14 = __extendsfdf2(*(undefined4 *)(iVar3 + 0x3c));
      iVar12 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000fac28,DAT_000fac2c
                             );
      if ((iVar12 != 0) && (*(int *)(iVar3 + 0x30) == 1)) {
        *(undefined4 *)(iVar3 + 0x110) = DAT_000fac3c;
        pCVar6 = (CCLayer *)*ppCVar11;
        fVar13 = (float)__mulsf3(*(undefined4 *)(piVar2[1] + 0x38),0x3f000000);
        Unit_Live_Collistion_attck(pCVar6,fVar13);
        *(undefined4 *)(piVar2[1] + 0x30) = 2;
        *(undefined4 *)(pCVar10 + 0x118) = 0;
        *(undefined4 *)(pCVar10 + 0x114) = 0;
        iVar9 = piVar2[1];
        uVar4 = DAT_000fac4c;
        goto LAB_000fabba;
      }
      if (*(int *)(iVar3 + 0x30) != 0) goto LAB_000fabfa;
      ani_attack_2_ani((CCLayer *)piVar1);
      uVar4 = DAT_000fac54;
      if (*(char *)(**(int **)(iVar9 + DAT_000fac44) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000fac50 + -0x1c));
        uVar4 = DAT_000fac54;
      }
    }
    *(undefined4 *)(pCVar10 + 0x11c) = uVar4;
    *(undefined4 *)(piVar2[1] + 0x3c) = 0;
    *(undefined4 *)(piVar2[1] + 0x30) = 1;
  }
LAB_000fabfa:
  iVar9 = __aeabi_fcmpgt(*(undefined4 *)(piVar2[1] + 0x3c),
                         *(undefined4 *)(*(int *)(*(int *)(piVar2[1] + 100) * 4 + *piVar2) + 0x294))
  ;
  if (iVar9 != 0) {
    ani_Base_ani((CCLayer *)piVar1);
  }
  return;
}


