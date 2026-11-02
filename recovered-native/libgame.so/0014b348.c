/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b348  Symbol: onEnter */

/* cocos2d::CCTransitionZoomFlipAngular::onEnter() */

void __thiscall cocos2d::CCTransitionZoomFlipAngular::onEnter(CCTransitionZoomFlipAngular *this)

{
  CCFiniteTimeAction *pCVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  undefined4 uVar9;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  uVar5 = DAT_0014b47c;
  if (*(int *)(this + 0x10c) == 1) {
    uVar5 = DAT_0014b478;
  }
  fVar7 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  pCVar1 = (CCFiniteTimeAction *)CCDelayTime::actionWithDuration(fVar7);
  uVar8 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar9 = 0;
  uVar6 = DAT_0014b480;
  pCVar2 = (CCFiniteTimeAction *)
           CCOrbitCamera::actionWithDuration
                     ((float)uVar8,(float)((ulonglong)uVar8 >> 0x20),extraout_s2,extraout_s3,
                      extraout_s4,extraout_s5,extraout_s6);
  uVar8 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar3 = CCScaleTo::actionWithDuration((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar4 = CCShow::action();
  uVar5 = CCSpawn::actions(pCVar2,uVar3,uVar4,0,uVar5,uVar6,uVar9);
  uVar6 = CCShow::action();
  uVar3 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014b484 + 0x14b3da),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar1,uVar5,uVar6,uVar3,0);
}


