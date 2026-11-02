/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014af64  Symbol: onEnter */

/* cocos2d::CCTransitionSplitCols::onEnter() */

void __thiscall cocos2d::CCTransitionSplitCols::onEnter(CCTransitionSplitCols *this)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCObject *pCVar4;
  undefined4 uVar5;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  piVar1 = (int *)(**(code **)(*(int *)this + 0xf0))(this);
  pCVar4 = *(CCObject **)(DAT_0014afec + 0x14af92);
  uVar5 = 0;
  uVar2 = CCCallFunc::actionWithTarget((CCCallFunc *)this,pCVar4,(_func_void *)0x0);
  uVar3 = (**(code **)(*piVar1 + 0x24))(piVar1);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions((CCFiniteTimeAction *)piVar1,uVar2,uVar3,0,pCVar4,uVar5);
}


