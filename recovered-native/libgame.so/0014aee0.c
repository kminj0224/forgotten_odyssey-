/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014aee0  Symbol: onEnter */

/* cocos2d::CCTransitionFadeTR::onEnter() */

void __thiscall cocos2d::CCTransitionFadeTR::onEnter(CCTransitionFadeTR *this)

{
  undefined4 uVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  pcVar4 = *(code **)(*(int *)this + 0xf0);
  uVar1 = __divsf3(local_30,local_2c);
  __mulsf3(uVar1,DAT_0014af5c);
  local_28 = __fixsfsi();
  local_24 = 0xc;
  uVar1 = (*pcVar4)(this,&local_28);
  pCVar2 = (CCFiniteTimeAction *)(**(code **)(*(int *)this + 0xf4))(this,uVar1);
  uVar1 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014af60 + 0x14af36),(_func_void *)0x0);
  uVar3 = CCStopGrid::action();
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar2,uVar1,uVar3,0);
}


