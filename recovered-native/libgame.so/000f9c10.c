/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f9c10  Symbol: Boss_15000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_15000_Skill_Call() */

void Boss_15000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  CCArray *this;
  CCLayer *pCVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int **ppiVar12;
  int iVar13;
  uint uVar14;
  code *pcVar15;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar16;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  ppiVar12 = *(int ***)(DAT_000f9e68 + 0xf9c1c);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
  piVar10 = *ppiVar12;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  piVar3 = *ppiVar12;
  *(undefined4 *)(piVar2[1] + 0x110) = DAT_000f9e6c;
  iVar4 = Unit_Collistion_Name((CCLayer *)piVar3,false);
  iVar13 = piVar2[1];
  uVar5 = __addsf3(*(undefined4 *)(iVar13 + 0x3c),**(undefined4 **)(DAT_000f9e70 + 0xf9c56));
  *(undefined4 *)(iVar13 + 0x3c) = uVar5;
  iVar13 = piVar2[1];
  if (*(int *)(iVar13 + 100) == -1) {
    *(undefined4 *)(iVar13 + 0x3c) = 0;
    *(undefined4 *)(piVar2[1] + 0x30) = 0;
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar5 = __addsf3(piVar10[0x47],
                     *(undefined4 *)(*(int *)(*(int *)(iVar13 + 100) * 4 + *piVar2) + 0x294));
    iVar6 = __aeabi_fcmpge(*(undefined4 *)(iVar13 + 0x3c),uVar5);
    if ((iVar6 != 0) && (*(int *)(iVar13 + 0x30) == 2)) {
      *(undefined4 *)(iVar13 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  if (iVar4 == 0) {
    cocos2d::CCNode::getChildByTag((CCNode *)piVar1,*(int *)(*(int *)(*piVar2 + 8) + 0x290));
    iVar4 = cocos2d::CCNode::numberOfRunningActions();
    iVar13 = piVar2[1];
    if (((iVar4 == 0) || (*(int *)(iVar13 + 100) == 0)) && (*(int *)(iVar13 + 100) != 7)) {
      *(undefined *)(iVar13 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
  }
  else {
    iVar13 = piVar2[1];
    uVar5 = *(undefined4 *)(iVar13 + 0x3c);
    uVar16 = __extendsfdf2(uVar5);
    iVar4 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f9e50,DAT_000f9e54);
    if ((iVar4 == 0) || (*(int *)(iVar13 + 0x30) != 1)) {
      if (*(int *)(iVar13 + 0x30) != 0) {
        iVar4 = __aeabi_fcmpgt(uVar5,*(undefined4 *)(*(int *)(*piVar2 + 8) + 0x294));
        if (iVar4 != 0) {
          ani_Base_ani((CCLayer *)piVar1);
        }
        goto LAB_000f9daa;
      }
      ani_attack_ani((CCLayer *)piVar1);
      if (*(char *)(**(int **)(DAT_000f9e78 + 0xf9d26) + 1) != '\0') {
        pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000f9e7c + ':'));
      }
      piVar10[0x47] = DAT_000f9e80;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      iVar4 = piVar2[1];
      uVar5 = 1;
    }
    else {
      piVar1 = *ppiVar12;
      *(undefined4 *)(iVar13 + 0x110) = DAT_000f9e74;
      this = (CCArray *)
             Unit_Live_Collistion_attck((CCLayer *)piVar1,extraout_s0,*(int *)(piVar2[1] + 0x38));
      if (this != (CCArray *)0x0) {
        iVar4 = cocos2d::CCArray::count(this);
        for (uVar14 = 0; (int)uVar14 < iVar4; uVar14 = uVar14 + 1) {
          pCVar7 = (CCLayer *)cocos2d::CCArray::objectAtIndex(this,uVar14);
          SetKnockBack(pCVar7,extraout_s0_00);
        }
        cocos2d::CCObject::release((CCObject *)this);
      }
      iVar4 = piVar2[1];
      uVar5 = 2;
    }
    *(undefined4 *)(iVar4 + 0x30) = uVar5;
  }
LAB_000f9daa:
  iVar4 = piVar2[1];
  if (*(int *)(iVar4 + 100) == 1) {
    if (*(char *)(iVar4 + 0x90) == '\0') {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x14));
      uVar5 = DAT_000f9e58;
      uVar11 = DAT_000f9e5c;
    }
    else {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x14));
      uVar16 = __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f9e58,DAT_000f9e5c);
      uVar5 = DAT_000f9e60;
      uVar11 = DAT_000f9e64;
    }
    __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar5,uVar11);
    uVar5 = __truncdfsf2();
    pcVar15 = *(code **)(**ppiVar12 + 0x3c);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
    __subsf3(*puVar9,uVar5);
    piVar1 = *ppiVar12;
    uVar16 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar15)(piVar1,aCStack_28);
    puVar9 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
    iVar4 = __aeabi_fcmplt(*puVar9,0);
    if (iVar4 != 0) {
      piVar1 = *ppiVar12;
      pcVar15 = *(code **)(*piVar1 + 0x3c);
      uVar16 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      (*pcVar15)(piVar1,aCStack_20);
    }
  }
  return;
}


