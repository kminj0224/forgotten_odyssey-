/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b5bc  Symbol: onEnter */

/* cocos2d::CCTransitionZoomFlipX::onEnter() */

void __thiscall cocos2d::CCTransitionZoomFlipX::onEnter(CCTransitionZoomFlipX *this)

{
  CCFiniteTimeAction *pCVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  undefined4 uVar8;
  undefined4 uVar9;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  uVar5 = DAT_0014b6e4;
  if (*(int *)(this + 0x10c) == 1) {
    uVar5 = DAT_0014b6e0;
  }
  fVar6 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  pCVar1 = (CCFiniteTimeAction *)CCDelayTime::actionWithDuration(fVar6);
  uVar7 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar8 = 0;
  uVar9 = 0;
  pCVar2 = (CCFiniteTimeAction *)
           CCOrbitCamera::actionWithDuration
                     ((float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,extraout_s3,
                      extraout_s4,extraout_s5,extraout_s6);
  uVar7 = __mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar3 = CCScaleTo::actionWithDuration((float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar4 = CCShow::action();
  uVar5 = CCSpawn::actions(pCVar2,uVar3,uVar4,0,uVar5,uVar8,uVar9);
  uVar3 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014b6e8 + 0x14b646),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar1,uVar5,uVar3,0);
}


