/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fcb40  Symbol: update */

/* Hero8::update(float) */

void __thiscall Hero8::update(Hero8 *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  CCNode *pCVar4;
  CCSprite *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  CCPoint *pCVar10;
  undefined4 in_r1;
  _KG_Anit *p_Var11;
  CCPoint *pCVar12;
  int iVar13;
  CCNode **ppCVar14;
  int iVar15;
  code *pcVar16;
  int **ppiVar17;
  CCNode *pCVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  undefined8 uVar19;
  float extraout_s1_01;
  code *local_60;
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar13 = DAT_000fce94 + 0xfcb4c;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  piVar1 = (int *)(**(code **)(*piVar1 + 0xa8))();
  ppCVar14 = *(CCNode ***)(iVar13 + DAT_000fce98);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
  iVar3 = (**(code **)(*piVar2 + 0xa8))();
  iVar15 = *(int *)(piVar1[1] + 100);
  if (iVar15 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    cocos2d::CCNode::getChildByTag
              (pCVar4,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar13 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar13 != 0) {
      return;
    }
    *(undefined4 *)(piVar1[1] + 100) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x3c) = 0;
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    p_Var11 = *(_KG_Anit **)*piVar1;
    goto LAB_000fcc22;
  }
  if (iVar15 == 1) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    cocos2d::CCNode::getChildByTag
              (pCVar4,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -1) * 4 + *piVar1) + 0x290));
    iVar3 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar3 != 0) {
      return;
    }
    *(undefined4 *)(piVar1[1] + 100) = 2;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    pcVar16 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0,extraout_s1);
    (*pcVar16)(piVar2,aCStack_50);
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    p_Var11 = *(_KG_Anit **)(*piVar1 + 4);
    goto LAB_000fcc22;
  }
  if (iVar15 != 2) {
    if (iVar15 != 3) {
      return;
    }
    iVar15 = *(int *)(iVar3 + 4);
    uVar8 = __addsf3(*(undefined4 *)(iVar15 + 0x3c),in_r1);
    *(undefined4 *)(iVar15 + 0x3c) = uVar8;
    iVar15 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x3c),DAT_000fceb8);
    if (iVar15 != 0) {
      if (**(int **)(iVar13 + DAT_000fcebc) == 2) {
        ppiVar17 = *(int ***)(iVar13 + DAT_000fcec0);
        puVar9 = (undefined4 *)(**(code **)(**ppiVar17 + 0x38))();
        __subsf3(*puVar9,0x3f800000);
        piVar1 = *ppiVar17;
        uVar19 = (**(code **)(*piVar1 + 0x38))(piVar1);
        cocos2d::CCNode::setPosition((float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
        pCVar4 = *ppCVar14;
        pCVar18 = **(CCNode ***)(iVar13 + DAT_000fcec4);
      }
      else {
        if (**(int **)(iVar13 + DAT_000fcebc) != 1) goto LAB_000fce0a;
        ppiVar17 = *(int ***)(iVar13 + DAT_000fcec0);
        puVar9 = (undefined4 *)(**(code **)(**ppiVar17 + 0x38))();
        __addsf3(*puVar9,0x3f800000);
        piVar1 = *ppiVar17;
        uVar19 = (**(code **)(*piVar1 + 0x38))(piVar1);
        cocos2d::CCNode::setPosition((float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
        pCVar4 = *ppCVar14;
        pCVar18 = **(CCNode ***)(iVar13 + DAT_000fcec4);
      }
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,1);
      pCVar10 = (CCPoint *)(**(code **)(*piVar1 + 0x38))();
      KG_BG_Hero_Move(pCVar18,*pCVar10);
    }
LAB_000fce0a:
    uVar8 = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x80);
    iVar3 = __aeabi_fcmpeq(uVar8,0);
    if (iVar3 != 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      pcVar16 = *(code **)(*piVar1 + 0x3c);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
      puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
      __subsf3(*puVar9,DAT_000fcec8);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      uVar19 = (**(code **)(*piVar2 + 0x38))();
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      (*pcVar16)(piVar1,aCStack_30);
      return;
    }
    iVar3 = __aeabi_fcmpeq(uVar8,0x3f800000);
    if (iVar3 != 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      pcVar16 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_01,extraout_s1_01);
      (*pcVar16)(piVar1,aCStack_28);
      return;
    }
    iVar3 = __aeabi_fcmpeq(uVar8,0x40000000);
    if (iVar3 == 0) {
      return;
    }
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    pcVar16 = *(code **)(*piVar1 + 0x3c);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
    puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
    __subsf3(*puVar9,DAT_000fcf28);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    uVar19 = (**(code **)(*piVar2 + 0x38))();
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    (*pcVar16)(piVar1,aCStack_20);
    return;
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  cocos2d::CCNode::getChildByTag
            (pCVar4,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -1) * 4 + *piVar1) + 0x290));
  iVar13 = cocos2d::CCNode::numberOfRunningActions();
  if (iVar13 != 0) {
    return;
  }
  *(undefined4 *)(piVar1[1] + 100) = 3;
  uVar8 = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x80);
  iVar3 = __aeabi_fcmpeq(uVar8,0);
  if (iVar3 == 0) {
    iVar3 = __aeabi_fcmpeq(uVar8,0x3f800000);
    if (iVar3 == 0) {
      piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      local_60 = *(code **)(*piVar6 + 0x3c);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
      puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
      uVar8 = __addsf3(*puVar9,DAT_000fcea4);
      uVar7 = __addsf3(*(undefined4 *)(piVar1[1] + 0x7c),DAT_000fcea8);
      uVar7 = __addsf3(uVar7,DAT_000fceb4);
      uVar19 = __subsf3(uVar8,uVar7);
      cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      pCVar12 = aCStack_38;
      goto LAB_000fcd3a;
    }
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    pcVar16 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_00,extraout_s1_00);
    (*pcVar16)(piVar2,aCStack_40);
  }
  else {
    piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    local_60 = *(code **)(*piVar6 + 0x3c);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
    puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
    uVar8 = __addsf3(*puVar9,DAT_000fcea4);
    uVar7 = __addsf3(*(undefined4 *)(piVar1[1] + 0x7c),DAT_000fcea8);
    uVar19 = __subsf3(uVar8,uVar7);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
    pCVar12 = aCStack_48;
LAB_000fcd3a:
    (*local_60)(piVar6,pCVar12);
  }
  pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  p_Var11 = *(_KG_Anit **)(*piVar1 + 8);
LAB_000fcc22:
  ani_ani_test(pCVar5,p_Var11);
  return;
}


