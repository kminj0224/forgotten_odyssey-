/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119bac  Symbol: KG_State_Hemorrhage2_CALL */

/* KG_State_Hemorrhage2_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Hemorrhage2_CALL(CCLayer *param_1,CCLayer *param_2)

{
  int iVar1;
  _Unit_Stage *p_Var2;
  undefined4 uVar3;
  int *piVar4;
  CCNode *pCVar5;
  CCTexture2D *pCVar6;
  CCSprite *pCVar7;
  CCSpriteFrame *pCVar8;
  CCActionInterval *this;
  CCAction *pCVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  int iVar13;
  int **ppiVar14;
  undefined8 uVar15;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  p_Var2 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  uVar3 = DAT_00119d70;
  *(undefined *)(*(int *)(p_Var2 + 4) + 0xa8) = 1;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xac) = 0;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb0) = uVar3;
  uVar3 = DAT_00119d74;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb4) = 0x3f800000;
  iVar13 = *(int *)(p_Var2 + 4);
  uVar3 = __divsf3(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x38),uVar3);
  *(undefined4 *)(iVar13 + 0xbc) = uVar3;
  local_27 = 0x7f;
  local_26 = 0x7f;
  local_28 = 0xff;
  (**(code **)(*(int *)param_2 + 0xf4))(param_2,&local_28);
  local_24 = CONCAT13(local_24._3_1_,0x7f7f00);
  local_24 = CONCAT31(local_24._1_3_,0xff);
  puVar11 = (undefined4 *)(DAT_00119d78 + 0x119c2c);
  SetAttackColor(param_2,local_24,p_Var2);
  ppiVar12 = (int **)*puVar11;
  if (*ppiVar12 == (int *)0x0) {
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119d7c + 0x119c3c));
    *ppiVar12 = piVar4;
    cocos2d::CCObject::retain((CCObject *)piVar4);
  }
  ppiVar14 = *(int ***)(DAT_00119d80 + 0x119c4a);
  if (*ppiVar14 == (int *)0x0) {
    piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119d84 + 0x119c56));
    *ppiVar14 = piVar4;
    cocos2d::CCObject::retain((CCObject *)piVar4);
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar1 = cocos2d::CCNode::getChildByTag(pCVar5,0);
  if (iVar1 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar12 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var2,pCVar7);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar4 + 0xcc))(piVar4,pCVar7,0,0);
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar1 = cocos2d::CCNode::getChildByTag(pCVar5,6);
  if (iVar1 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar14 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var2,pCVar7);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar4 + 0xcc))(piVar4,pCVar7,6,6);
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xc9);
  if (iVar1 == 0) {
    pCVar8 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)
                         (*(int *)(**(int **)(DAT_00119d88 + 0x119cf4) + DAT_00119d8c) + 0x13c),0);
    piVar4 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
    pcVar10 = *(code **)(*piVar4 + 0x3c);
    __floatsisf(*(int *)(p_Var2 + 8) / 2);
    uVar15 = __floatsisf(*(int *)(p_Var2 + 0xc) / 2);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar10)(piVar4,aCStack_20);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar4,0xc9,0xc9);
    this = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar9 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
    cocos2d::CCNode::runAction((CCNode *)piVar4,pCVar9);
    cocos2d::CCObject::release((CCObject *)this);
  }
  return;
}


