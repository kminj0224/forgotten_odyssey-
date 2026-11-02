/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000feb44  Symbol: update */

/* Hero2::update(float) */

void Hero2::update(float param_1)

{
  int iVar1;
  CCNode *in_r0;
  int *piVar2;
  int *piVar3;
  CCNode *pCVar4;
  CCSprite *pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  CCFiniteTimeAction *pCVar8;
  CCPoint *pCVar9;
  int iVar10;
  _KG_Anit **pp_Var11;
  CCNode **ppCVar12;
  CCNode **ppCVar13;
  float extraout_s0;
  float fVar14;
  undefined8 uVar15;
  CCPoint aCStack_20 [12];
  
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
  iVar1 = DAT_000fed40;
  iVar10 = DAT_000fed3c;
  piVar2 = (int *)(**(code **)(*piVar2 + 0xa8))();
  ppCVar13 = *(CCNode ***)(iVar10 + 0xfeb60);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
  (**(code **)(*piVar3 + 0xa8))();
  ppCVar12 = *(CCNode ***)(iVar1 + 0xfeb70);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar12,DAT_000fed44);
  piVar3 = (int *)(**(code **)(*piVar3 + 0xa8))();
  iVar10 = *(int *)(piVar2[1] + 100);
  if (iVar10 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag
              (pCVar4,*(int *)(*(int *)(*(int *)(piVar2[1] + 100) * 4 + *piVar2) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar10 != 0) {
      return;
    }
    *(undefined4 *)(piVar2[1] + 100) = 1;
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
    pp_Var11 = (_KG_Anit **)*piVar2;
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 != 2) {
        if (iVar10 != 3) {
          return;
        }
        pCVar4 = *ppCVar12;
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
        pCVar9 = (CCPoint *)(**(code **)(*piVar2 + 0x38))();
        KG_BG_Hero_Move(pCVar4,*pCVar9);
        return;
      }
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar12,DAT_000fed44);
      cocos2d::CCNode::getChildByTag
                (pCVar4,*(int *)(*(int *)((*(int *)(piVar2[1] + 100) + -2) * 4 + *piVar3) + 0x290));
      iVar10 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar10 != 0) {
        return;
      }
      *(undefined4 *)(piVar2[1] + 100) = 3;
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      (**(code **)(*piVar3 + 0x6c))(piVar3,1);
      pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
      ani_ani_test(pCVar5,*(_KG_Anit **)(*piVar2 + 4));
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
      puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
      uVar7 = __subsf3(DAT_000fed48,*puVar6);
      iVar10 = __aeabi_fcmpgt(uVar7,DAT_000fed4c);
      if (iVar10 == 0) {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
        __subsf3(DAT_000fed48,*puVar6);
        uVar7 = __fixsfsi();
      }
      else {
        uVar7 = 500;
      }
      fVar14 = (float)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
      pCVar8 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar14);
      uVar15 = __floatsisf(uVar7);
      fVar14 = (float)cocos2d::CCPoint::CCPoint
                                (aCStack_20,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
      uVar7 = cocos2d::CCMoveBy::actionWithDuration(fVar14,DAT_000fed54);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar7,0);
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag
              (pCVar4,*(int *)(*(int *)((*(int *)(piVar2[1] + 100) + -1) * 4 + *piVar2) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar10 != 0) {
      return;
    }
    *(undefined4 *)(piVar2[1] + 100) = 2;
    cocos2d::CCNode::setScale(in_r0,extraout_s0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar12,DAT_000fed44);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(*ppCVar12,DAT_000fed44);
    pp_Var11 = (_KG_Anit **)*piVar3;
  }
  ani_ani_test(pCVar5,*pp_Var11);
  return;
}


