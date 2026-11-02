/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fc2b0  Symbol: Boss_18000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_18000_Skill_Call() */

void Boss_18000_Skill_Call(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CCArray *this;
  CCLayer *pCVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  CCNode *pCVar15;
  int **ppiVar16;
  int iVar17;
  uint uVar18;
  code *pcVar19;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar20;
  CCPoint local_30;
  int local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar11 = DAT_000fc600 + 0xfc2bc;
  ppiVar16 = *(int ***)(iVar11 + DAT_000fc604);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
  piVar13 = *ppiVar16;
  piVar3 = (int *)(**(code **)(*piVar2 + 0xa8))();
  if (*(int *)(piVar3[1] + 100) == 7) {
    return;
  }
  iVar4 = Unit_Collistion_Name((CCLayer *)*ppiVar16,false);
  iVar17 = piVar3[1];
  uVar5 = __addsf3(*(undefined4 *)(iVar17 + 0x3c),**(undefined4 **)(iVar11 + DAT_000fc608));
  *(undefined4 *)(iVar17 + 0x3c) = uVar5;
  iVar17 = piVar3[1];
  if (*(int *)(iVar17 + 100) == -1) {
    *(undefined4 *)(iVar17 + 0x110) = DAT_000fc60c;
LAB_000fc354:
    ani_Base_ani((CCLayer *)piVar2);
  }
  else {
    uVar12 = *(undefined4 *)(iVar17 + 0x3c);
    uVar14 = *(undefined4 *)(*(int *)(*(int *)(iVar17 + 100) * 4 + *piVar3) + 0x294);
    uVar5 = __addsf3(uVar14,piVar13[0x47]);
    iVar6 = __aeabi_fcmpge(uVar12,uVar5);
    if ((iVar6 == 0) || (*(int *)(iVar17 + 0x30) != 2)) {
      iVar17 = __aeabi_fcmpgt(uVar12,uVar14);
      if (iVar17 != 0) goto LAB_000fc354;
    }
    else {
      *(undefined4 *)(iVar17 + 0x3c) = 0;
      *(undefined4 *)(piVar3[1] + 0x30) = 0;
    }
  }
  iVar17 = piVar3[1];
  if (iVar4 == 0) {
    cocos2d::CCNode::getChildByTag
              ((CCNode *)piVar2,*(int *)(*(int *)(*(int *)(iVar17 + 100) * 4 + *piVar3) + 0x290));
    iVar11 = cocos2d::CCNode::numberOfRunningActions();
    iVar4 = piVar3[1];
    if (((iVar11 == 0) || (*(int *)(iVar4 + 100) == 0)) && (*(int *)(iVar4 + 100) != 7)) {
      *(undefined *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(piVar3[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar2);
    }
    goto LAB_000fc536;
  }
  if (piVar13[0x46] == 0) {
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar17 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fc5e0,DAT_000fc5e4);
    if ((iVar4 != 0) && (*(int *)(iVar17 + 0x30) == 1)) {
      iVar11 = __mulsf3(*(undefined4 *)(iVar17 + 0x38),0x3f000000);
      this = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)*ppiVar16,extraout_s0,iVar11);
      if (this != (CCArray *)0x0) {
        iVar11 = cocos2d::CCArray::count(this);
        for (uVar18 = 0; (int)uVar18 < iVar11; uVar18 = uVar18 + 1) {
          pCVar7 = (CCLayer *)cocos2d::CCArray::objectAtIndex(this,uVar18);
          SetKnockBack(pCVar7,extraout_s0_00);
        }
        cocos2d::CCObject::release((CCObject *)this);
      }
      iVar11 = piVar13[0x45];
      piVar13[0x45] = iVar11 + 1;
      if (iVar11 + 1 == 1) {
        piVar13[0x46] = 1;
        piVar13[0x45] = 0;
        iVar11 = piVar3[1];
        uVar5 = DAT_000fc610;
LAB_000fc4b0:
        *(undefined4 *)(iVar11 + 0x110) = uVar5;
      }
      goto LAB_000fc4b2;
    }
    if (*(int *)(iVar17 + 0x30) != 0) goto LAB_000fc536;
    ani_attack_ani((CCLayer *)piVar2);
    if (*(char *)(**(int **)(iVar11 + DAT_000fc614) + 1) != '\0') {
      pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar10 = (char)DAT_000fc618 + '\x0e';
LAB_000fc4dc:
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)cVar10);
    }
LAB_000fc4e0:
    piVar13[0x47] = 0x3f800000;
    *(undefined4 *)(piVar3[1] + 0x3c) = 0;
    iVar11 = piVar3[1];
    uVar5 = 1;
  }
  else {
    if (piVar13[0x46] != 1) goto LAB_000fc536;
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar17 + 0x3c));
    iVar4 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fc5e8,DAT_000fc5ec);
    if ((iVar4 == 0) || (*(int *)(iVar17 + 0x30) != 1)) {
      if (*(int *)(iVar17 + 0x30) != 0) goto LAB_000fc536;
      ani_attack_2_ani((CCLayer *)piVar2);
      if (*(char *)(**(int **)(iVar11 + DAT_000fc614) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar10 = (char)DAT_000fc62c + -0x22;
        goto LAB_000fc4dc;
      }
      goto LAB_000fc4e0;
    }
    pCVar15 = **(CCNode ***)(iVar11 + DAT_000fc61c);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    uVar5 = __subsf3(*puVar9,DAT_000fc620);
    __addsf3(uVar5,DAT_000fc610);
    iVar11 = (**(code **)(**ppiVar16 + 0x38))();
    uVar20 = __addsf3(*(undefined4 *)(iVar11 + 4),DAT_000fc624);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20))
    ;
    piVar2 = *ppiVar16;
    iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2);
    iVar11 = DAT_000fc628;
    bVar1 = (bool)__fixsfsi(*(undefined4 *)(piVar3[1] + 0x38));
    Bullet_18000_Draw(pCVar15,(CCSprite *)piVar2,local_30,local_2c,iVar4,iVar11,bVar1);
    iVar11 = piVar13[0x45];
    piVar13[0x45] = iVar11 + 1;
    if (iVar11 + 1 == 4) {
      piVar13[0x46] = 0;
      piVar13[0x45] = 0;
      iVar11 = piVar3[1];
      uVar5 = DAT_000fc60c;
      goto LAB_000fc4b0;
    }
LAB_000fc4b2:
    iVar11 = piVar3[1];
    uVar5 = 2;
  }
  *(undefined4 *)(iVar11 + 0x30) = uVar5;
LAB_000fc536:
  if (*(int *)(piVar3[1] + 100) == 1) {
    *(undefined4 *)(piVar3[1] + 0x30) = 0;
    uVar5 = *(undefined4 *)(piVar3[1] + 0x14);
    if (*(char *)(piVar3[1] + 0x90) == '\0') {
      uVar20 = __extendsfdf2(uVar5);
      uVar5 = DAT_000fc5f0;
      uVar12 = DAT_000fc5f4;
    }
    else {
      uVar20 = __extendsfdf2(uVar5);
      uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000fc5f0,DAT_000fc5f4);
      uVar5 = DAT_000fc5f8;
      uVar12 = DAT_000fc5fc;
    }
    __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),uVar5,uVar12);
    uVar5 = __truncdfsf2();
    pcVar19 = *(code **)(**ppiVar16 + 0x3c);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __subsf3(*puVar9,uVar5);
    piVar2 = *ppiVar16;
    uVar20 = (**(code **)(*piVar2 + 0x38))(piVar2);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
    (*pcVar19)(piVar2,aCStack_28);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    iVar11 = __aeabi_fcmplt(*puVar9,0);
    if (iVar11 != 0) {
      piVar2 = *ppiVar16;
      pcVar19 = *(code **)(*piVar2 + 0x3c);
      uVar20 = (**(code **)(*piVar2 + 0x38))(piVar2);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar20,(float)((ulonglong)uVar20 >> 0x20));
      (*pcVar19)(piVar2,aCStack_20);
    }
  }
  return;
}


