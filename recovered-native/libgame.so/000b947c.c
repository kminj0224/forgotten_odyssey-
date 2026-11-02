/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b947c  Symbol: ani_ani_test_speed */

/* ani_ani_test_speed(cocos2d::CCSprite*, _KG_Anit*, float) */

undefined8 ani_ani_test_speed(CCSprite *param_1,_KG_Anit *param_2,float param_3)

{
  CCArray *this;
  int iVar1;
  int *this_00;
  CCActionInterval *this_01;
  CCAction *pCVar2;
  uint uVar3;
  undefined4 in_r2;
  uint uVar4;
  float extraout_s0;
  _KG_Anit *local_20;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  local_20 = (_KG_Anit *)param_1;
  if ((this != (CCArray *)0x0) && (iVar1 = cocos2d::CCArray::count(this), iVar1 != 0)) {
    local_20 = param_2;
    for (uVar4 = 0; uVar3 = cocos2d::CCArray::count(this), uVar4 < uVar3; uVar4 = uVar4 + 1) {
      this_00 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar4);
      cocos2d::CCNode::stopAllActions();
      if (*(int *)(local_20 + 0x140) == 0) {
        (**(code **)(*this_00 + 0x6c))(this_00,uVar4 == 0);
      }
      else {
        (**(code **)(*this_00 + 0x6c))(this_00,1);
        this_01 = (CCActionInterval *)cocos2d::CCObject::copy();
        pCVar2 = (CCAction *)cocos2d::CCSpeed::actionWithAction(this_01,extraout_s0);
        *(undefined4 *)(pCVar2 + 0x20) = in_r2;
        cocos2d::CCNode::runAction((CCNode *)this_00,pCVar2);
        cocos2d::CCObject::release((CCObject *)this_01);
      }
      local_20 = local_20 + 4;
    }
  }
  return CONCAT44(in_r2,local_20);
}


