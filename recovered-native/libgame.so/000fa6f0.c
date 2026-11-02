/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fa6f0  Symbol: Boss_20000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_20000_Skill_Call() */

void Boss_20000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  Effect *pEVar10;
  CCLayer *pCVar11;
  int iVar12;
  int **ppiVar13;
  float extraout_s0;
  undefined8 uVar14;
  int *local_20;
  
  iVar8 = DAT_000fa9e0 + 0xfa6fc;
  ppiVar13 = *(int ***)(iVar8 + DAT_000fa9e4);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,1);
  piVar9 = *ppiVar13;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  local_20 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar13,false);
  iVar12 = piVar2[1];
  uVar3 = __addsf3(*(undefined4 *)(iVar12 + 0x3c),**(undefined4 **)(iVar8 + DAT_000fa9e8));
  *(undefined4 *)(iVar12 + 0x3c) = uVar3;
  iVar12 = piVar2[1];
  if (*(int *)(iVar12 + 100) == -1) {
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar3 = __addsf3(piVar9[0x47],
                     *(undefined4 *)(*(int *)(*(int *)(iVar12 + 100) * 4 + *piVar2) + 0x294));
    iVar4 = __aeabi_fcmpge(*(undefined4 *)(iVar12 + 0x3c),uVar3);
    if ((iVar4 != 0) && (*(int *)(iVar12 + 0x30) == 2)) {
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  uVar3 = DAT_000fa9ec;
  if (local_20 == (int *)0x0) {
    piVar5 = *ppiVar13;
    *(undefined4 *)(piVar2[1] + 0x110) = DAT_000fa9ec;
    local_20 = (int *)Unit_Collistion_Name((CCLayer *)piVar5,false);
    if (local_20 != (int *)0x0) {
      iVar12 = (**(code **)(*local_20 + 0xa8))(local_20);
      iVar12 = *(int *)(*(int *)(iVar12 + 4) + 4);
      if ((iVar12 == 0xa0) || (iVar12 == 0x82)) {
        piVar9[0x46] = 1;
        goto LAB_000fa7c2;
      }
    }
    *(undefined4 *)(piVar2[1] + 0x110) = uVar3;
    goto LAB_000fa9a8;
  }
LAB_000fa7c2:
  iVar12 = piVar2[1];
  if (piVar9[0x46] == 0) {
    iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar12 + 0x3c),0x40000000);
    if (((iVar4 != 0) && (*(CCNode *)(piVar9 + 0x44) == (CCNode)0x0)) &&
       (*(int *)(iVar12 + 0x30) == 1)) {
      if (*(char *)(**(int **)(iVar8 + DAT_000fa9f0) + 1) != '\0') {
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fa9f4 + '\f'));
      }
      *(CCNode *)(piVar9 + 0x44) = (CCNode)0x1;
    }
    iVar4 = piVar2[1];
    uVar14 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x3c));
    iVar12 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000fa9d0,DAT_000fa9d4);
    if ((iVar12 != 0) && (*(int *)(iVar4 + 0x30) == 1)) {
      *(undefined4 *)(iVar4 + 0x110) = DAT_000fa9ec;
      Unit_Live_Collistion_attck((CCLayer *)*ppiVar13,extraout_s0,0x3f800000);
      *(undefined4 *)(piVar2[1] + 0x30) = 2;
      iVar8 = piVar9[0x45];
      piVar9[0x45] = iVar8 + 1;
      if (iVar8 + 1 == 1) {
        piVar9[0x46] = 1;
        piVar9[0x45] = 0;
      }
      goto LAB_000fa9a8;
    }
    if (*(int *)(iVar4 + 0x30) != 0) goto LAB_000fa9a8;
    ani_attack_ani((CCLayer *)piVar1);
    piVar5 = *ppiVar13;
    *(CCNode *)(piVar9 + 0x44) = (CCNode)0x0;
    pEVar10 = *(Effect **)(**(int **)(iVar8 + DAT_000fa9f8) + DAT_000fa9fc);
    pCVar11 = **(CCLayer ***)(iVar8 + DAT_000faa00);
    puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
    __subsf3(*puVar7,DAT_000faa04);
    iVar12 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar13 + 0x38))();
    iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
    iVar8 = (**(code **)(***(int ***)(iVar8 + DAT_000faa08) + 0x14))();
    Effect::Boss_Effect(pEVar10,pCVar11,DAT_000faa0c,iVar12,iVar4,iVar8,DAT_000faa0c);
    iVar8 = DAT_000faa10;
  }
  else {
    if (piVar9[0x46] != 1) goto LAB_000fa9a8;
    uVar14 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000fa9d8,DAT_000fa9dc);
    uVar3 = DAT_000fa9ec;
    if ((iVar4 != 0) && (*(int *)(iVar12 + 0x30) == 1)) {
      *(undefined4 *)(iVar12 + 0x110) = DAT_000fa9ec;
      pEVar10 = *(Effect **)(**(int **)(iVar8 + DAT_000fa9f8) + DAT_000fa9fc);
      pCVar11 = **(CCLayer ***)(iVar8 + DAT_000faa00);
      ppiVar13 = *(int ***)(iVar8 + DAT_000faa08);
      puVar7 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
      __subsf3(*puVar7,DAT_000faa14);
      iVar8 = __fixsfsi();
      iVar12 = (**(code **)(**ppiVar13 + 0x38))();
      __addsf3(*(undefined4 *)(iVar12 + 4),0x43000000);
      iVar12 = __fixsfsi();
      iVar4 = (**(code **)(*local_20 + 0x14))(local_20);
      Effect::Boss_Effect(pEVar10,pCVar11,DAT_000faa18,iVar8,iVar12,iVar4,DAT_000faa18);
      *(undefined4 *)(piVar2[1] + 0x30) = 2;
      iVar8 = piVar9[0x45];
      piVar9[0x45] = iVar8 + 1;
      if (iVar8 + 1 == 3) {
        piVar9[0x46] = 0;
        piVar9[0x45] = 0;
        *(undefined4 *)(piVar2[1] + 0x110) = uVar3;
      }
      goto LAB_000fa9a8;
    }
    if (*(int *)(iVar12 + 0x30) != 0) goto LAB_000fa9a8;
    ani_attack_2_ani((CCLayer *)piVar1);
    *(CCNode *)((int)piVar9 + 0x111) = (CCNode)0x0;
    iVar8 = 0x40000000;
  }
  piVar9[0x47] = iVar8;
  *(undefined4 *)(piVar2[1] + 0x3c) = 0;
  *(undefined4 *)(piVar2[1] + 0x30) = 1;
LAB_000fa9a8:
  iVar8 = __aeabi_fcmpgt(*(undefined4 *)(piVar2[1] + 0x3c),
                         *(undefined4 *)(*(int *)(*(int *)(piVar2[1] + 100) * 4 + *piVar2) + 0x294))
  ;
  if (iVar8 != 0) {
    ani_Base_ani((CCLayer *)piVar1);
  }
  return;
}


