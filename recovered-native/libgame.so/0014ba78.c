/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ba78  Symbol: onEnter */

/* cocos2d::CCTransitionSlideInL::onEnter() */

void __thiscall cocos2d::CCTransitionSlideInL::onEnter(CCTransitionSlideInL *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(*(int *)this + 0xf0))(this);
  uVar1 = (**(code **)(*(int *)this + 0xf4))(this);
  uVar2 = (**(code **)(*(int *)this + 0xf4))(this);
  (**(code **)(*(int *)this + 0xf8))(this,uVar1);
  pCVar3 = (CCFiniteTimeAction *)(**(code **)(*(int *)this + 0xf8))(this,uVar2);
  uVar1 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014baf0 + 0x14bac6),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar3,uVar1,0);
}


