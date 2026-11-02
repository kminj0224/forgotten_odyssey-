/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b8cc  Symbol: onEnter */

/* cocos2d::CCTransitionFlipX::onEnter() */

void __thiscall cocos2d::CCTransitionFlipX::onEnter(CCTransitionFlipX *this)

{
  CCFiniteTimeAction *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  fVar5 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  pCVar1 = (CCFiniteTimeAction *)CCDelayTime::actionWithDuration(fVar5);
  uVar2 = CCShow::action();
  uVar6 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar7 = 0;
  uVar8 = 0;
  uVar3 = CCOrbitCamera::actionWithDuration
                    ((float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,extraout_s3,
                     extraout_s4,extraout_s5,extraout_s6);
  uVar4 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014b9b0 + 0x14b936),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar1,uVar2,uVar3,uVar4,0,uVar7,uVar8);
}


