/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a69c  Symbol: onEnter */

/* cocos2d::CCTransitionPageTurn::onEnter() */

void __thiscall cocos2d::CCTransitionPageTurn::onEnter(CCTransitionPageTurn *this)

{
  CCFiniteTimeAction *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCFiniteTimeAction *pCVar4;
  CCObject *pCVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  __aeabi_fcmpgt(local_38,local_34);
  pCVar1 = (CCFiniteTimeAction *)actionWithSize((_ccGridSize *)this);
  pCVar5 = *(CCObject **)(DAT_0014a750 + 0x14a6e4);
  if (this[0x10a] == (CCTransitionPageTurn)0x0) {
    uVar2 = CCCallFunc::actionWithTarget((CCCallFunc *)this,pCVar5,(_func_void *)0x0);
    uVar3 = CCStopGrid::action();
                    /* WARNING: Subroutine does not return */
    CCSequence::actions(pCVar1,uVar2,uVar3,0);
  }
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  pCVar4 = (CCFiniteTimeAction *)CCShow::action();
  uVar2 = CCCallFunc::actionWithTarget((CCCallFunc *)this,pCVar5,(_func_void *)0x0);
  uVar3 = CCStopGrid::action();
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar4,pCVar1,uVar2,uVar3,0);
}


