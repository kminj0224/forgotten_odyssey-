/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f0450  Symbol: Draw_Critical_Effect */

/* Draw_Critical_Effect(cocos2d::CCLayer*) */

void Draw_Critical_Effect(CCLayer *param_1)

{
  CCTexture2D *pCVar1;
  CCObject *pCVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  float fVar5;
  CCLayer *pCVar6;
  
  pCVar6 = param_1;
  pCVar1 = (CCTexture2D *)(**(code **)(***(int ***)(DAT_000f04ac + 0xf045a) + 0x118))();
  pCVar2 = (CCObject *)cocos2d::CCSprite::spriteWithTexture(pCVar1);
  fVar5 = (float)(**(code **)(*(int *)param_1 + 0xcc))(param_1,pCVar2,2,2,pCVar6);
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar5);
  uVar4 = cocos2d::CCCallFuncND::actionWithTarget
                    (pCVar2,*(_func_void_CCNode_ptr_void_ptr **)(DAT_000f04b0 + 0xf048c),(void *)0x0
                    );
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,0);
}


