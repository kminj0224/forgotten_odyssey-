/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f037c  Symbol: Effect_Body_Draw */

/* Effect::Effect_Body_Draw(cocos2d::CCLayer*, cocos2d::CCSprite*, float, int, int, int, int, int,
   float, float) */

void __thiscall
Effect::Effect_Body_Draw
          (Effect *this,CCLayer *param_1,CCSprite *param_2,float param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,float param_9,float param_10)

{
  CCTexture2D *pCVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  float fVar4;
  float extraout_s0;
  int in_stack_00000010;
  
  pCVar1 = (CCTexture2D *)(**(code **)(*(int *)param_2 + 0x118))(param_2);
  uVar2 = cocos2d::CCSprite::spriteWithTexture(pCVar1);
  fVar4 = (float)(**(code **)(*(int *)param_1 + 0xcc))
                           (param_1,uVar2,in_stack_00000010 + 1,param_6,this,param_4,param_2);
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar4);
  uVar2 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar2,0);
}


