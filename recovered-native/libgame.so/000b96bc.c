/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b96bc  Symbol: ani_ani_test_R_D */

/* ani_ani_test_R_D(cocos2d::CCSprite*, _KG_Anit*, float) */

undefined8 ani_ani_test_R_D(CCSprite *param_1,_KG_Anit *param_2,float param_3)

{
  CCArray *this;
  int iVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_r2;
  uint uVar5;
  float extraout_s0;
  CCSprite *local_20;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  local_20 = param_1;
  if (this != (CCArray *)0x0) {
    iVar1 = cocos2d::CCArray::count(this);
    uVar5 = 0;
    if (iVar1 != 0) {
      for (; uVar4 = cocos2d::CCArray::count(this), uVar5 < uVar4; uVar5 = uVar5 + 1) {
        local_20 = (CCSprite *)cocos2d::CCArray::objectAtIndex(this,uVar5);
        if (*(int *)(param_2 + 0x140) != 0) {
          pCVar2 = (CCFiniteTimeAction *)cocos2d::CCObject::copy();
          uVar3 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
                    /* WARNING: Subroutine does not return */
          cocos2d::CCSequence::actions(pCVar2,uVar3,0);
        }
        param_2 = param_2 + 4;
      }
    }
  }
  return CONCAT44(in_r2,local_20);
}


