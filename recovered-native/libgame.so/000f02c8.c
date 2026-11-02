/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f02c8  Symbol: Effect_Body_Draw */

/* Effect::Effect_Body_Draw(cocos2d::CCLayer*, cocos2d::CCSprite*, float, int, int, int, int) */

void __thiscall
Effect::Effect_Body_Draw
          (Effect *this,CCLayer *param_1,CCSprite *param_2,float param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  CCFiniteTimeAction *pCVar1;
  undefined4 uVar2;
  float fVar3;
  float extraout_s0;
  int in_stack_0000000c;
  
  fVar3 = (float)(**(code **)(*(int *)param_1 + 0xcc))
                           (param_1,param_2,in_stack_0000000c + 1,param_6,this,param_4,param_2);
  pCVar1 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar3);
  uVar2 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar1,uVar2,0);
}


