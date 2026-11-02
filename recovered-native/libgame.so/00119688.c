/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119688  Symbol: KG_State_Fear_CALL */

/* KG_State_Fear_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Fear_CALL(CCLayer *param_1,CCLayer *param_2)

{
  _Unit_Stage *p_Var1;
  int iVar2;
  CCActionInterval *this;
  CCActionInterval *pCVar3;
  CCAction *pCVar4;
  undefined4 *puVar5;
  CCPoint *pCVar6;
  int *piVar7;
  CCTexture2D *pCVar8;
  CCSprite *pCVar9;
  CCNode *pCVar10;
  int **ppiVar11;
  int **ppiVar12;
  float extraout_s0;
  float fVar13;
  undefined8 uVar14;
  CCPoint aCStack_20 [12];
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  (**(code **)(*(int *)param_2 + 0x2c))(param_2,DAT_001197e8);
  pCVar10 = **(CCNode ***)(DAT_001197ec + 0x1196ac);
  iVar2 = (**(code **)(*(int *)param_2 + 0xa0))(param_2);
  cocos2d::CCNode::getChildByTag(pCVar10,iVar2);
  this = (CCActionInterval *)cocos2d::CCObject::copy();
  pCVar3 = (CCActionInterval *)cocos2d::CCRepeatForever::actionWithAction(this);
  pCVar4 = (CCAction *)cocos2d::CCSpeed::actionWithAction(pCVar3,extraout_s0);
  cocos2d::CCNode::runAction((CCNode *)param_2,pCVar4);
  puVar5 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
  uVar14 = __extendsfdf2(*puVar5);
  __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_001197e0,DAT_001197e4);
  pCVar6 = (CCPoint *)__truncdfsf2();
  uVar14 = (**(code **)(*(int *)param_2 + 0x38))(param_2);
  fVar13 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_20,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  pCVar4 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar13,pCVar6);
  iVar2 = DAT_001197f8;
  cocos2d::CCNode::runAction((CCNode *)param_2,pCVar4);
  cocos2d::CCObject::release((CCObject *)this);
  ppiVar11 = *(int ***)(iVar2 + 0x119724);
  *(undefined *)(*(int *)(p_Var1 + 4) + 0xcc) = 1;
  if (*ppiVar11 == (int *)0x0) {
    piVar7 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001197fc + 0x119738));
    *ppiVar11 = piVar7;
    cocos2d::CCObject::retain((CCObject *)piVar7);
  }
  ppiVar12 = *(int ***)(DAT_00119800 + 0x119746);
  if (*ppiVar12 == (int *)0x0) {
    piVar7 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119804 + 0x119752));
    *ppiVar12 = piVar7;
    cocos2d::CCObject::retain((CCObject *)piVar7);
  }
  pCVar10 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar10,0);
  if (iVar2 == 0) {
    pCVar8 = (CCTexture2D *)(**(code **)(**ppiVar11 + 0x118))();
    pCVar9 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
    Set_Class_State(p_Var1,pCVar9);
    piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar7 + 0xcc))(piVar7,pCVar9,iVar2,iVar2,iVar2);
  }
  pCVar10 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar10,0x10);
  if (iVar2 == 0) {
    pCVar8 = (CCTexture2D *)(**(code **)(**ppiVar12 + 0x118))();
    pCVar9 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
    Set_Class_State(p_Var1,pCVar9);
    piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar7 + 0xcc))(piVar7,pCVar9,0x10,0x10);
  }
  return;
}


