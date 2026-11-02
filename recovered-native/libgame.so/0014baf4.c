/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014baf4  Symbol: onEnter */

/* cocos2d::CCTransitionMoveInL::onEnter() */

void __thiscall cocos2d::CCTransitionMoveInL::onEnter(CCTransitionMoveInL *this)

{
  undefined4 uVar1;
  CCFiniteTimeAction *pCVar2;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(*(int *)this + 0xf0))(this);
  uVar1 = (**(code **)(*(int *)this + 0xf4))(this);
  pCVar2 = (CCFiniteTimeAction *)(**(code **)(*(int *)this + 0xf8))(this,uVar1);
  uVar1 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014bb48 + 0x14bb2e),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar2,uVar1,0);
}


