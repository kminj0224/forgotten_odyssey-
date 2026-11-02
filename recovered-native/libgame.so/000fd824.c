/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd824  Symbol: update */

/* Hero6::update(float) */

undefined8 __thiscall Hero6::update(Hero6 *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  CCNode *pCVar3;
  CCSprite *pCVar4;
  int in_r1;
  _KG_Anit *p_Var5;
  _KG_Anit **pp_Var6;
  CCNode **ppCVar7;
  int iVar8;
  float extraout_s0;
  int *local_20;
  int local_1c;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  iVar8 = DAT_000fd978;
  piVar1 = (int *)(**(code **)(*piVar1 + 0xa8))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fd97c + 0xfd842),1);
  (**(code **)(*piVar2 + 0xa8))();
  ppCVar7 = *(CCNode ***)(iVar8 + 0xfd846);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000fd980);
  local_20 = (int *)(**(code **)(*piVar2 + 0xa8))();
  iVar8 = *(int *)(piVar1[1] + 100);
  local_1c = in_r1;
  if (iVar8 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)(*(int *)(piVar1[1] + 100) * 4 + *piVar1) + 0x290));
    iVar8 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar8 != 0) goto LAB_000fd974;
    *(undefined4 *)(piVar1[1] + 100) = 1;
    pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    pp_Var6 = (_KG_Anit **)*piVar1;
LAB_000fd90c:
    p_Var5 = *pp_Var6;
  }
  else {
    if (iVar8 == 1) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      cocos2d::CCNode::getChildByTag
                (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -1) * 4 + *piVar1) + 0x290));
      local_1c = cocos2d::CCNode::numberOfRunningActions();
      if (local_1c != 0) goto LAB_000fd974;
      *(undefined4 *)(piVar1[1] + 100) = 2;
      cocos2d::CCNode::setScale((CCNode *)this,extraout_s0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
      (**(code **)(*piVar1 + 0x6c))(piVar1,0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000fd980);
      (**(code **)(*piVar1 + 0x6c))(piVar1,1);
      pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000fd980);
      pp_Var6 = (_KG_Anit **)*local_20;
      goto LAB_000fd90c;
    }
    if (iVar8 != 2) goto LAB_000fd974;
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000fd980);
    cocos2d::CCNode::getChildByTag
              (pCVar3,*(int *)(*(int *)((*(int *)(piVar1[1] + 100) + -2) * 4 + *local_20) + 0x290));
    local_20 = (int *)cocos2d::CCNode::numberOfRunningActions();
    if (local_20 != (int *)0x0) goto LAB_000fd974;
    *(undefined4 *)(piVar1[1] + 100) = 3;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar7,DAT_000fd980);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
    pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    p_Var5 = *(_KG_Anit **)(*piVar1 + 4);
  }
  ani_ani_test(pCVar4,p_Var5);
LAB_000fd974:
  return CONCAT44(local_1c,local_20);
}


