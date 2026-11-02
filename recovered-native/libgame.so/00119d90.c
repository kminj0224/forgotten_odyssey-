/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119d90  Symbol: KG_State_Hemorrhage_CALL */

/* KG_State_Hemorrhage_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Hemorrhage_CALL(CCLayer *param_1,CCLayer *param_2)

{
  undefined4 uVar1;
  _Unit_Stage *p_Var2;
  int *piVar3;
  CCNode *pCVar4;
  int iVar5;
  CCTexture2D *pCVar6;
  CCSprite *pCVar7;
  CCSpriteFrame *pCVar8;
  CCActionInterval *this;
  CCAction *pCVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  int **ppiVar13;
  undefined8 uVar14;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  p_Var2 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  *(undefined *)(*(int *)(p_Var2 + 4) + 0xa8) = 1;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xac) = 0;
  uVar1 = DAT_00119f40;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb0) = DAT_00119f40;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xb4) = 0x3f800000;
  *(undefined4 *)(*(int *)(p_Var2 + 4) + 0xbc) = uVar1;
  local_27 = 0x7f;
  local_26 = 0x7f;
  local_28 = 0xff;
  (**(code **)(*(int *)param_2 + 0xf4))(param_2,&local_28);
  local_24 = CONCAT13(local_24._3_1_,0x7f7f00);
  local_24 = CONCAT31(local_24._1_3_,0xff);
  puVar11 = (undefined4 *)(DAT_00119f44 + 0x119dfc);
  SetAttackColor(param_2,local_24,p_Var2);
  ppiVar12 = (int **)*puVar11;
  if (*ppiVar12 == (int *)0x0) {
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119f48 + 0x119e0c));
    *ppiVar12 = piVar3;
    cocos2d::CCObject::retain((CCObject *)piVar3);
  }
  ppiVar13 = *(int ***)(DAT_00119f4c + 0x119e1a);
  if (*ppiVar13 == (int *)0x0) {
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119f50 + 0x119e26));
    *ppiVar13 = piVar3;
    cocos2d::CCObject::retain((CCObject *)piVar3);
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar5 = cocos2d::CCNode::getChildByTag(pCVar4,0);
  if (iVar5 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar12 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var2,pCVar7);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar3 + 0xcc))(piVar3,pCVar7,0,0);
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar5 = cocos2d::CCNode::getChildByTag(pCVar4,6);
  if (iVar5 == 0) {
    pCVar6 = (CCTexture2D *)(**(code **)(**ppiVar13 + 0x118))();
    pCVar7 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
    Set_Class_State(p_Var2,pCVar7);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar3 + 0xcc))(piVar3,pCVar7,6,6);
  }
  iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xc9);
  if (iVar5 == 0) {
    pCVar8 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)
                         (*(int *)(**(int **)(DAT_00119f54 + 0x119ec4) + DAT_00119f58) + 0x13c),0);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
    pcVar10 = *(code **)(*piVar3 + 0x3c);
    __floatsisf(*(int *)(p_Var2 + 8) / 2);
    uVar14 = __floatsisf(*(int *)(p_Var2 + 0xc) / 2);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar10)(piVar3,aCStack_20);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar3,0xc9,0xc9);
    this = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar9 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this);
    cocos2d::CCNode::runAction((CCNode *)piVar3,pCVar9);
    cocos2d::CCObject::release((CCObject *)this);
  }
  return;
}


