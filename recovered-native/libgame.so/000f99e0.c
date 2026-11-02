/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f99e0  Symbol: Boss_13000_Skill_Call */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Boss_13000_Skill_Call() */

void Boss_13000_Skill_Call(void)

{
  int *piVar1;
  int *piVar2;
  int *this;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  CCAction *pCVar6;
  int *piVar7;
  undefined4 uVar8;
  int **ppiVar9;
  int iVar10;
  code *pcVar11;
  float extraout_s0;
  float fVar12;
  undefined8 uVar13;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  ppiVar9 = *(int ***)(DAT_000f9bf8 + 0xf99ec);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar9,1);
  piVar7 = *ppiVar9;
  piVar2 = (int *)(**(code **)(*piVar1 + 0xa8))();
  if (*(int *)(piVar2[1] + 100) == 7) {
    return;
  }
  this = (int *)Unit_Collistion_Name((CCLayer *)*ppiVar9,false);
  iVar10 = piVar2[1];
  uVar3 = __addsf3(*(undefined4 *)(iVar10 + 0x3c),**(undefined4 **)(DAT_000f9bfc + 0xf9a20));
  *(undefined4 *)(iVar10 + 0x3c) = uVar3;
  iVar10 = piVar2[1];
  if (*(int *)(iVar10 + 100) == -1) {
    ani_Base_ani((CCLayer *)piVar1);
  }
  else {
    uVar3 = __addsf3(piVar7[0x47],
                     *(undefined4 *)(*(int *)(*(int *)(iVar10 + 100) * 4 + *piVar2) + 0x294));
    iVar4 = __aeabi_fcmpge(*(undefined4 *)(iVar10 + 0x3c),uVar3);
    if ((iVar4 != 0) && (*(int *)(iVar10 + 0x30) == 2)) {
      *(undefined4 *)(iVar10 + 0x3c) = 0;
      *(undefined4 *)(piVar2[1] + 0x30) = 0;
    }
  }
  if (this == (int *)0x0) {
    cocos2d::CCNode::getChildByTag((CCNode *)piVar1,*(int *)(*(int *)(*piVar2 + 8) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    iVar4 = piVar2[1];
    if (((iVar10 == 0) || (*(int *)(iVar4 + 100) == 0)) && (*(int *)(iVar4 + 100) != 7)) {
      *(undefined *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      ani_Move_ani((CCLayer *)piVar1);
    }
  }
  else {
    iVar4 = piVar2[1];
    uVar3 = *(undefined4 *)(iVar4 + 0x3c);
    uVar13 = __extendsfdf2(uVar3);
    iVar10 = __aeabi_dcmpgt((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000f9be0,DAT_000f9be4);
    if ((iVar10 == 0) || (*(int *)(iVar4 + 0x30) != 1)) {
      if (*(int *)(iVar4 + 0x30) != 0) {
        iVar10 = __aeabi_fcmpgt(uVar3,*(undefined4 *)(*(int *)(*piVar2 + 8) + 0x294));
        if (iVar10 != 0) {
          ani_Base_ani((CCLayer *)piVar1);
        }
        goto LAB_000f9b46;
      }
      ani_attack_ani((CCLayer *)piVar1);
      piVar7[0x47] = DAT_000f9c08;
      *(undefined4 *)(piVar2[1] + 0x3c) = 0;
      iVar10 = piVar2[1];
      uVar3 = 1;
    }
    else {
      Unit_Live_Collistion_attck((CCLayer *)*ppiVar9,extraout_s0,*(int *)(iVar4 + 0x38));
      puVar5 = (undefined4 *)(**(code **)(*this + 0x38))(this);
      __subsf3(*puVar5,DAT_000f9c00);
      uVar13 = (**(code **)(*this + 0x38))(this);
      fVar12 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_30,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      pCVar6 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar12,DAT_000f9c04);
      cocos2d::CCNode::runAction((CCNode *)this,pCVar6);
      iVar10 = piVar2[1];
      uVar3 = 2;
    }
    *(undefined4 *)(iVar10 + 0x30) = uVar3;
  }
LAB_000f9b46:
  iVar10 = piVar2[1];
  if (*(int *)(iVar10 + 100) == 1) {
    if (*(char *)(iVar10 + 0x90) == '\0') {
      uVar13 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x14));
      uVar3 = DAT_000f9be8;
      uVar8 = DAT_000f9bec;
    }
    else {
      uVar13 = __extendsfdf2(*(undefined4 *)(iVar10 + 0x14));
      uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000f9be8,DAT_000f9bec);
      uVar3 = DAT_000f9bf0;
      uVar8 = DAT_000f9bf4;
    }
    __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar3,uVar8);
    uVar3 = __truncdfsf2();
    pcVar11 = *(code **)(**ppiVar9 + 0x3c);
    puVar5 = (undefined4 *)(**(code **)(**ppiVar9 + 0x38))();
    __subsf3(*puVar5,uVar3);
    piVar1 = *ppiVar9;
    uVar13 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar11)(piVar1,aCStack_28);
    puVar5 = (undefined4 *)(**(code **)(**ppiVar9 + 0x38))();
    iVar10 = __aeabi_fcmplt(*puVar5,0);
    if (iVar10 != 0) {
      piVar1 = *ppiVar9;
      pcVar11 = *(code **)(*piVar1 + 0x3c);
      uVar13 = (**(code **)(*piVar1 + 0x38))(piVar1);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
      (*pcVar11)(piVar1,aCStack_20);
    }
  }
  return;
}


