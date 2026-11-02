/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001199e0  Symbol: KG_State_Invulnerability_CALL */

/* KG_State_Invulnerability_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Invulnerability_CALL(CCLayer *param_1,CCLayer *param_2)

{
  _Unit_Stage *p_Var1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCTexture2D *pCVar5;
  CCSprite *pCVar6;
  CCSpriteFrame *pCVar7;
  int *this;
  CCActionInterval *this_00;
  CCAction *pCVar8;
  int **ppiVar9;
  code *pcVar10;
  undefined4 uVar11;
  int **ppiVar12;
  undefined8 uVar13;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  iVar4 = DAT_00119b94;
  *(undefined *)(*(int *)(p_Var1 + 4) + 0xc0) = 1;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xc4) = 0;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 200) = 0x40000000;
  ani_Stop_ani(param_2);
  ani_Base_ani(param_2);
  ppiVar9 = *(int ***)(iVar4 + 0x119a18);
  if (*ppiVar9 == (int *)0x0) {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119b98 + 0x119a2a));
    *ppiVar9 = piVar2;
    cocos2d::CCObject::retain((CCObject *)piVar2);
  }
  ppiVar12 = *(int ***)(DAT_00119b9c + 0x119a38);
  if (*ppiVar12 == (int *)0x0) {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119ba0 + 0x119a44));
    *ppiVar12 = piVar2;
    cocos2d::CCObject::retain((CCObject *)piVar2);
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,0);
  if (iVar4 == 0) {
    pCVar5 = (CCTexture2D *)(**(code **)(**ppiVar9 + 0x118))();
    pCVar6 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    Set_Class_State(p_Var1,pCVar6);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar2 + 0xcc))(piVar2,pCVar6,0,0);
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,10);
  if (iVar4 == 0) {
    pCVar5 = (CCTexture2D *)(**(code **)(**ppiVar12 + 0x118))();
    pCVar6 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    Set_Class_State(p_Var1,pCVar6);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar2 + 0xcc))(piVar2,pCVar6,10,10);
  }
  iVar4 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xc9);
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCLayer::node();
    pcVar10 = *(code **)(*piVar2 + 0x3c);
    uVar13 = __floatsisf(*(int *)(p_Var1 + 8) / 2);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(piVar2,aCStack_28);
    ppiVar9 = (int **)(DAT_00119ba4 + 0x119b16);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar2,0xc9,0xc9);
    pCVar7 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)
                         (*(int *)(**ppiVar9 + DAT_00119ba8) + 0x14c),0);
    this = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar7);
    uVar11 = *(undefined4 *)(p_Var1 + 8);
    pcVar10 = *(code **)(*this + 0x3c);
    __divsi3(uVar11,0xfffffffa);
    __floatsisf();
    uVar13 = __floatsisf(uVar11);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar10)(this,aCStack_20);
    (**(code **)(*piVar2 + 0xcc))(piVar2,this,0,0);
    this_00 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_00);
    cocos2d::CCNode::runAction((CCNode *)this,pCVar8);
    cocos2d::CCObject::release((CCObject *)this_00);
  }
  return;
}


