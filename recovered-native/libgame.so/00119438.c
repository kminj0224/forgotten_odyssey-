/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119438  Symbol: KG_State_Poison_CALL */

/* KG_State_Poison_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Poison_CALL(CCLayer *param_1,CCLayer *param_2)

{
  _Unit_Stage *p_Var1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CCNode *pCVar5;
  CCTexture2D *pCVar6;
  CCSprite *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined4 local_1c;
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  iVar2 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  uVar3 = DAT_00119570;
  *(undefined *)(*(int *)(p_Var1 + 4) + 0xa8) = 1;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xac) = 0;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb0) = uVar3;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xb4) = 0x3f800000;
  iVar8 = *(int *)(p_Var1 + 4);
  uVar3 = __divsf3(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x38));
  *(undefined4 *)(iVar8 + 0xbc) = uVar3;
  local_20 = 0x7f;
  local_1e = 0x7f;
  local_1f = 0xff;
  (**(code **)(*(int *)param_2 + 0xf4))(param_2,&local_20);
  local_1c = CONCAT13(local_1c._3_1_,0x7f0000);
  local_1c = CONCAT22(local_1c._2_2_,0xff7f);
  puVar9 = (undefined4 *)(DAT_00119574 + 0x1194b8);
  SetAttackColor(param_2,local_1c,p_Var1);
  ppiVar10 = (int **)*puVar9;
  if (*ppiVar10 == (int *)0x0) {
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119578 + 0x1194c8));
    *ppiVar10 = piVar4;
    cocos2d::CCObject::retain((CCObject *)piVar4);
  }
  ppiVar11 = *(int ***)(DAT_0011957c + 0x1194d6);
  if (*ppiVar11 == (int *)0x0) {
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119580 + 0x1194e2));
    *ppiVar11 = piVar4;
    cocos2d::CCObject::retain((CCObject *)piVar4);
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,0);
  if (iVar2 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar10 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var1,pCVar7);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar4 + 0xcc))(piVar4,pCVar7,0,0);
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar5,9);
  if (iVar2 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar11 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var1,pCVar7);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar4 + 0xcc))(piVar4,pCVar7,9,9);
  }
  return;
}


