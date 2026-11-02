/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fdb30  Symbol: update */

/* Hero3::update(float) */

undefined8 Hero3::update(float param_1)

{
  CCNode *in_r0;
  int *piVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCSprite *pCVar5;
  undefined4 *puVar6;
  _KG_Anit *p_Var7;
  int iVar8;
  _KG_Anit **pp_Var9;
  CCNode **ppCVar10;
  CCNode **ppCVar11;
  float extraout_s0;
  int *local_1c;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
  iVar4 = DAT_000fdcc0;
  iVar8 = DAT_000fdcbc;
  piVar1 = (int *)(**(code **)(*piVar1 + 0xa8))();
  ppCVar11 = *(CCNode ***)(iVar8 + 0xfdb4a);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,1);
  (**(code **)(*piVar2 + 0xa8))();
  ppCVar10 = *(CCNode ***)(iVar4 + 0xfdb5a);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,DAT_000fdcc4);
  local_1c = (int *)(**(code **)(*piVar2 + 0xa8))();
  iVar8 = *(int *)(piVar1[1] + 100);
  if (iVar8 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar4 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar4 != 0) goto LAB_000fdcb8;
    *(undefined4 *)(piVar1[1] + 100) = 1;
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
    pp_Var9 = (_KG_Anit **)*piVar1;
LAB_000fdc1c:
    p_Var7 = *pp_Var9;
  }
  else {
    if (iVar8 == 1) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
      cocos2d::CCNode::getChildByTag
                (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -1) * 4 + *piVar1) + 0x290));
      iVar4 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar4 != 0) goto LAB_000fdcb8;
      *(undefined4 *)(piVar1[1] + 100) = 2;
      cocos2d::CCNode::setScale(in_r0,extraout_s0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
      (**(code **)(*piVar1 + 0x6c))(piVar1,0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,DAT_000fdcc4);
      (**(code **)(*piVar1 + 0x6c))(piVar1,1);
      pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(*ppCVar10,DAT_000fdcc4);
      pp_Var9 = (_KG_Anit **)*local_1c;
      goto LAB_000fdc1c;
    }
    if (iVar8 != 2) goto LAB_000fdcb8;
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar10,DAT_000fdcc4);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -2) * 4 + *local_1c) + 0x290));
    local_1c = (int *)cocos2d::CCNode::numberOfRunningActions();
    if (local_1c != (int *)0x0) goto LAB_000fdcb8;
    *(undefined4 *)(piVar1[1] + 100) = 3;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar10,DAT_000fdcc4);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,3);
    puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,3);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(*ppCVar11,3);
    ani_ani_test(pCVar5,*(_KG_Anit **)*puVar6);
    pCVar5 = (CCSprite *)cocos2d::CCNode::getChildByTag(in_r0,2);
    p_Var7 = *(_KG_Anit **)(*piVar1 + 4);
  }
  ani_ani_test(pCVar5,p_Var7);
LAB_000fdcb8:
  return CONCAT44(local_1c,iVar8);
}


