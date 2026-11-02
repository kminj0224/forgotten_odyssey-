/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00118374  Symbol: Draw_Boss */

/* Draw_Boss(cocos2d::CCNode*, int) */

undefined8 Draw_Boss(CCNode *param_1,int param_2)

{
  int *this;
  int *piVar1;
  _Unit_Stage *p_Var2;
  CCNode *pCVar3;
  int iVar4;
  int **ppiVar5;
  float in_s0;
  float in_s1;
  CCNode *pCStack_20;
  int iStack_1c;
  
  pCStack_20 = param_1;
  iStack_1c = param_2;
  if (param_2 != 0) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&pCStack_20,in_s0,in_s1);
    this = (int *)operator_new(0x124);
    cocos2d::CCLayer::CCLayer((CCLayer *)this);
    iVar4 = *(int *)(DAT_00118488 + 0x1183a0);
    *this = iVar4 + 8;
    this[0x3f] = iVar4 + 0x13c;
    this[0x40] = iVar4 + 0x16c;
    this[0x41] = iVar4 + 0x178;
    Boss::Unit_init_layer((Boss *)this,param_2);
    (**(code **)(***(int ***)(DAT_0011848c + 0x1183ce) + 0xcc))
              (**(int ***)(DAT_0011848c + 0x1183ce),this,0,param_2);
    iVar4 = DAT_00118490;
    cocos2d::CCObject::release((CCObject *)this);
    ppiVar5 = *(int ***)(iVar4 + 0x1183e6);
    iVar4 = param_2 + DAT_00118494;
    *ppiVar5 = this;
    if (((iVar4 == 0) || (param_2 + DAT_00118498 == 0)) || (param_2 == DAT_0011849c)) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
      p_Var2 = (_Unit_Stage *)(**(code **)(*piVar1 + 0xa8))();
      setMonster_State(param_2,p_Var2);
      (**(code **)(*this + 0x2c))(this,DAT_001184a0);
    }
    else {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
      p_Var2 = (_Unit_Stage *)(**(code **)(*piVar1 + 0xa8))();
      setMonster_State(param_2,p_Var2);
    }
    KG_Boss_Draw((CCLayer *)this,param_1);
    if ((param_2 + DAT_001184a4 == 0) || (param_2 + DAT_001184a8 == 0)) {
      if (param_2 == DAT_001184b0) {
        Effect::Effect_Monster20000
                  (*(Effect **)(**(int **)(DAT_001184b4 + 0x118478) + DAT_001184b8));
      }
    }
    else if (param_2 != DAT_001184ac) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar5,1);
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar3,0);
      Draw_Limit(pCVar3);
    }
  }
  return CONCAT44(iStack_1c,pCStack_20);
}


