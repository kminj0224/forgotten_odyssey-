/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd984  Symbol: update */

/* Hero5::update(float) */

void Hero5::update(float param_1)

{
  CCNode *in_r0;
  int *piVar1;
  int *piVar2;
  CCNode *pCVar3;
  CCSprite *pCVar4;
  int *piVar5;
  _KG_Anit *p_Var6;
  _KG_Anit **pp_Var7;
  code *pcVar8;
  CCNode **ppCVar9;
  int iVar10;
  float extraout_s0;
  undefined8 uVar11;
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
  iVar10 = DAT_000fdb1c;
  piVar1 = (int *)(**(code **)(*piVar1 + 0xa8))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fdb20 + 0xfd9a4),1);
  (**(code **)(*piVar2 + 0xa8))();
  ppCVar9 = *(CCNode ***)(iVar10 + 0xfd9a8);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,DAT_000fdb24);
  piVar2 = (int *)(**(code **)(*piVar2 + 0xa8))();
  iVar10 = *(int *)(piVar1[1] + 100);
  if (iVar10 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar10 != 0) {
      return;
    }
    *(undefined4 *)(piVar1[1] + 100) = 1;
    pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
    pp_Var7 = (_KG_Anit **)*piVar1;
  }
  else {
    if (iVar10 != 1) {
      if (iVar10 != 2) {
        return;
      }
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar9,DAT_000fdb24);
      cocos2d::CCNode::getChildByTag
                (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -2) * 4 + *piVar2) + 0x290));
      iVar10 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar10 != 0) {
        return;
      }
      *(undefined4 *)(piVar1[1] + 100) = 3;
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      (**(code **)(*piVar2 + 0x6c))(piVar2,1);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      (**(code **)(*piVar2 + 0x2c))(piVar2,DAT_000fdb28);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      pcVar8 = *(code **)(*piVar2 + 0x3c);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      uVar11 = (**(code **)(*piVar5 + 0x38))();
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      (*pcVar8)(piVar2,aCStack_20);
      piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,DAT_000fdb24);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
      p_Var6 = *(_KG_Anit **)(*piVar1 + 4);
      goto LAB_000fdb14;
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -1) * 4 + *piVar1) + 0x290));
    iVar10 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar10 != 0) {
      return;
    }
    *(undefined4 *)(piVar1[1] + 100) = 2;
    cocos2d::CCNode::setScale(in_r0,extraout_s0);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,DAT_000fdb24);
    (**(code **)(*piVar1 + 0x6c))(piVar1,1);
    pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag(*ppCVar9,DAT_000fdb24);
    pp_Var7 = (_KG_Anit **)*piVar2;
  }
  p_Var6 = *pp_Var7;
LAB_000fdb14:
  ani_ani_test(pCVar4,p_Var6);
  return;
}


