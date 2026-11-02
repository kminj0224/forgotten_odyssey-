/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f9e88  Symbol: Boss_16000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_16000_Skill_Call() */

void Boss_16000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  CCArray *this;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  Effect *this_00;
  CCLayer *pCVar11;
  int iVar12;
  int **ppiVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  undefined4 uVar17;
  float extraout_s0;
  float fVar18;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar19;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar8 = DAT_000fa190 + 0xf9e94;
  ppiVar13 = *(int ***)(iVar8 + DAT_000fa194);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,1);
  piVar9 = *ppiVar13;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  piVar3 = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar13,false);
  iVar14 = piVar2[1];
  uVar4 = __addsf3(*(undefined4 *)(iVar14 + 0x3c),**(undefined4 **)(iVar8 + DAT_000fa198));
  *(undefined4 *)(iVar14 + 0x3c) = uVar4;
  iVar14 = piVar2[1];
  if (*(int *)(iVar14 + 100) == -1) {
LAB_000f9f24:
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar17 = *(undefined4 *)(iVar14 + 0x3c);
    uVar10 = *(undefined4 *)(*(int *)(*(int *)(iVar14 + 100) * 4 + *piVar2) + 0x294);
    uVar4 = __addsf3(uVar10,piVar9[0x47]);
    iVar5 = __aeabi_fcmpge(uVar17,uVar4);
    if ((iVar5 == 0) || (*(int *)(iVar14 + 0x30) != 2)) {
      iVar14 = __aeabi_fcmpgt(uVar17,uVar10);
      if (iVar14 != 0) goto LAB_000f9f24;
    }
    else {
      *(undefined4 *)(iVar14 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  iVar14 = piVar2[1];
  if (piVar3 == (int *)0x0) {
    cocos2d::CCNode::getChildByTag
              ((CCNode *)piVar1,*(int *)(*(int *)(*(int *)(iVar14 + 100) * 4 + *piVar2) + 0x290));
    iVar8 = cocos2d::CCNode::numberOfRunningActions();
    iVar14 = piVar2[1];
    if (((iVar8 == 0) || (*(int *)(iVar14 + 100) == 0)) && (*(int *)(iVar14 + 100) != 7)) {
      *(undefined *)(iVar14 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
    goto LAB_000fa200;
  }
  iVar5 = piVar9[0x46];
  if (iVar5 == 0) {
    uVar19 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
    iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000fa170,DAT_000fa174);
    if ((iVar5 != 0) && (*(int *)(iVar14 + 0x30) == 1)) {
      *(undefined4 *)(iVar14 + 0x58) = DAT_000fa19c;
      Target_Attack((CCLayer *)*ppiVar13,(CCLayer *)piVar3,extraout_s0);
      this_00 = *(Effect **)(**(int **)(iVar8 + DAT_000fa1a0) + DAT_000fa1a4);
      pCVar11 = **(CCLayer ***)(iVar8 + DAT_000fa1a8);
      iVar12 = *(int *)(piVar2[1] + 4);
      puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
      iVar8 = __fixsfsi(*puVar7);
      iVar14 = (**(code **)(*piVar3 + 0x38))(piVar3);
      uVar4 = __floatsisf(piVar2[3] / 2);
      uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar14 + 4));
      __subsf3(uVar4,DAT_000fa1ac);
      iVar14 = __fixsfsi();
      iVar5 = (**(code **)(*piVar3 + 0x14))(piVar3);
      fVar18 = (float)Effect::Effect_Draw(this_00,pCVar11,iVar12,iVar8,iVar14,iVar5,false);
      SetStun((CCLayer *)piVar3,fVar18);
      iVar8 = piVar9[0x45];
      piVar9[0x45] = iVar8 + 1;
      if (iVar8 + 1 == 3) {
        piVar9[0x46] = 1;
LAB_000fa076:
        piVar9[0x45] = 0;
      }
      goto LAB_000fa12c;
    }
    if (*(int *)(iVar14 + 0x30) != 0) goto LAB_000fa200;
    if (*(char *)(**(int **)(iVar8 + DAT_000fa1b0) + 1) != '\0') {
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fa1b4 + '\x1c'));
    }
    ani_attack_ani((CCLayer *)piVar1);
    iVar8 = 0xfc;
LAB_000fa15e:
    piVar9[0x47] = iVar8 << 0x16;
    *(undefined4 *)(piVar2[1] + 0x3c) = 0;
    iVar8 = piVar2[1];
    uVar4 = 1;
  }
  else {
    if (iVar5 == 1) {
      uVar19 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
      iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000fa178,DAT_000fa17c)
      ;
      if ((iVar5 == 0) || (*(int *)(iVar14 + 0x30) != 1)) {
        if (*(int *)(iVar14 + 0x30) != 0) goto LAB_000fa200;
        ani_attack_2_ani((CCLayer *)piVar1);
        if (*(char *)(**(int **)(iVar8 + DAT_000fa1b0) + 1) != '\0') {
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fa1bc + -0x60));
        }
        iVar8 = 0xfe;
        goto LAB_000fa15e;
      }
      *(undefined4 *)(iVar14 + 0x58) = DAT_000fa1b8;
      piVar1 = *ppiVar13;
      fVar18 = (float)__mulsf3(*(undefined4 *)(piVar2[1] + 0x38),0x3f000000);
      Unit_Live_Collistion_attck((CCLayer *)piVar1,fVar18);
      iVar8 = piVar9[0x45];
      piVar9[0x45] = iVar8 + 1;
      if (iVar8 + 1 == 1) {
        piVar9[0x46] = 2;
        goto LAB_000fa076;
      }
    }
    else {
      if (iVar5 != 2) goto LAB_000fa200;
      uVar19 = __extendsfdf2(*(undefined4 *)(iVar14 + 0x3c));
      iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000fa180,DAT_000fa184)
      ;
      if ((iVar5 == 0) || (*(int *)(iVar14 + 0x30) != 1)) {
        if (*(int *)(iVar14 + 0x30) != 0) goto LAB_000fa200;
        ani_attack_1_2_ani((CCLayer *)piVar1);
        if (*(char *)(**(int **)(iVar8 + DAT_000fa1b0) + 1) != '\0') {
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000fa1c0 + 'V'));
        }
        iVar8 = 0xff;
        goto LAB_000fa15e;
      }
      *(undefined4 *)(iVar14 + 0x58) = DAT_000fa19c;
      piVar1 = *ppiVar13;
      uVar19 = __extendsfdf2(*(undefined4 *)(piVar2[1] + 0x38));
      __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000fa188,DAT_000fa18c);
      iVar8 = __truncdfsf2();
      this = (CCArray *)Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0_00,iVar8);
      if (this != (CCArray *)0x0) {
        iVar8 = cocos2d::CCArray::count(this);
        for (uVar15 = 0; (int)uVar15 < iVar8; uVar15 = uVar15 + 1) {
          pCVar11 = (CCLayer *)cocos2d::CCArray::objectAtIndex(this,uVar15);
          SetKnockBack(pCVar11,extraout_s0_01);
        }
        cocos2d::CCObject::release((CCObject *)this);
      }
      iVar8 = piVar9[0x45];
      piVar9[0x45] = iVar8 + 1;
      if (iVar8 + 1 == 3) {
        piVar9[0x46] = 0;
        piVar9[0x45] = 0;
      }
    }
LAB_000fa12c:
    iVar8 = piVar2[1];
    uVar4 = 2;
  }
  *(undefined4 *)(iVar8 + 0x30) = uVar4;
LAB_000fa200:
  iVar8 = piVar2[1];
  if (*(int *)(iVar8 + 100) == 1) {
    if (*(char *)(iVar8 + 0x90) == '\0') {
      uVar19 = __extendsfdf2(*(undefined4 *)(iVar8 + 0x14));
      uVar4 = DAT_000fa2b0;
      uVar10 = DAT_000fa2b4;
    }
    else {
      uVar19 = __extendsfdf2(*(undefined4 *)(iVar8 + 0x14));
      uVar19 = __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000fa2b0,DAT_000fa2b4);
      uVar4 = DAT_000fa2b8;
      uVar10 = DAT_000fa2bc;
    }
    __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar4,uVar10);
    uVar4 = __truncdfsf2();
    pcVar16 = *(code **)(**ppiVar13 + 0x3c);
    puVar7 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
    __subsf3(*puVar7,uVar4);
    piVar1 = *ppiVar13;
    uVar19 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    (*pcVar16)(piVar1,aCStack_28);
    puVar7 = (undefined4 *)(**(code **)(**ppiVar13 + 0x38))();
    iVar8 = __aeabi_fcmplt(*puVar7,0);
    if (iVar8 != 0) {
      piVar1 = *ppiVar13;
      pcVar16 = *(code **)(*piVar1 + 0x3c);
      uVar19 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      (*pcVar16)(piVar1,aCStack_20);
    }
  }
  return;
}


