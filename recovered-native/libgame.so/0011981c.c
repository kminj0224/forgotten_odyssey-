/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011981c  Symbol: KG_State_STATE_CAPTIVATE_CALL */

/* KG_State_STATE_CAPTIVATE_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_STATE_CAPTIVATE_CALL(CCLayer *param_1,CCLayer *param_2)

{
  _Unit_Stage *p_Var1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCTexture2D *pCVar5;
  CCSprite *pCVar6;
  uint uVar7;
  CCSpriteFrame *pCVar8;
  int *this;
  CCActionInterval *this_00;
  CCAction *pCVar9;
  int **ppiVar10;
  code *pcVar11;
  int **ppiVar12;
  float extraout_s0;
  undefined8 uVar13;
  float extraout_s1;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  *(undefined *)(*(int *)(p_Var1 + 4) + 0xcd) = 1;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xd0) = 0;
  *(undefined4 *)(*(int *)(p_Var1 + 4) + 0xd4) = DAT_001199c0;
  ani_Stop_ani(param_2);
  ani_Base_ani(param_2);
  (**(code **)(*(int *)param_2 + 0x2c))(param_2,DAT_001199c4);
  **(undefined4 **)(p_Var1 + 4) = 1;
  ppiVar10 = *(int ***)(DAT_001199c8 + 0x119866);
  if (*ppiVar10 == (int *)0x0) {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001199cc + 0x119872));
    *ppiVar10 = piVar2;
    cocos2d::CCObject::retain((CCObject *)piVar2);
  }
  ppiVar12 = *(int ***)(DAT_001199d0 + 0x119880);
  if (*ppiVar12 == (int *)0x0) {
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_001199d4 + 0x11988c));
    *ppiVar12 = piVar2;
    cocos2d::CCObject::retain((CCObject *)piVar2);
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,0);
  if (iVar4 == 0) {
    pCVar5 = (CCTexture2D *)(**(code **)(**ppiVar10 + 0x118))();
    pCVar6 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    Set_Class_State(p_Var1,pCVar6);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar2 + 0xcc))(piVar2,pCVar6,iVar4,iVar4,iVar4);
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
  iVar4 = cocos2d::CCNode::getChildByTag(pCVar3,0xc);
  if (iVar4 == 0) {
    pCVar5 = (CCTexture2D *)(**(code **)(**ppiVar12 + 0x118))();
    pCVar6 = (CCSprite *)cocos2d::CCSprite::spriteWithTexture(pCVar5);
    Set_Class_State(p_Var1,pCVar6);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,200);
    (**(code **)(*piVar2 + 0xcc))(piVar2,pCVar6,0xc,0xc);
  }
  uVar7 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xc9);
  if (uVar7 == 0) {
    piVar2 = (int *)cocos2d::CCLayer::node();
    iVar4 = DAT_001199d8;
    pcVar11 = *(code **)(*piVar2 + 0x3c);
    uVar13 = __floatsisf(*(int *)(p_Var1 + 8) / 2);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar11)(piVar2,aCStack_28);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar2,0xc9,0xc9);
    pCVar8 = (CCSpriteFrame *)
             cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                       (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)
                         (*(int *)(**(int **)(iVar4 + 0x11995e) + DAT_001199dc) + 0x144),uVar7);
    this = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar8);
    pcVar11 = *(code **)(*this + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
    (*pcVar11)(this,aCStack_20);
    (**(code **)(*piVar2 + 0xcc))(piVar2,this,uVar7,uVar7);
    this_00 = (CCActionInterval *)cocos2d::CCObject::copy();
    pCVar9 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(this_00);
    cocos2d::CCNode::runAction((CCNode *)this,pCVar9);
    cocos2d::CCObject::release((CCObject *)this_00);
  }
  return;
}


