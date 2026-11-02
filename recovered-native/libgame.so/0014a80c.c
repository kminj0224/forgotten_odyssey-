/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a80c  Symbol: onEnter */

/* cocos2d::CCTransitionRadialCCW::onEnter() */

void __thiscall cocos2d::CCTransitionRadialCCW::onEnter(CCTransitionRadialCCW *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  CCTexture2D *pCVar5;
  CCProgressTimerType CVar6;
  CCFiniteTimeAction *pCVar7;
  undefined4 uVar8;
  code *pcVar9;
  float extraout_s0;
  float fVar10;
  float extraout_s1;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  undefined4 local_50;
  undefined4 local_4c;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCObject *local_20;
  undefined4 local_1c;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  iVar1 = __fixsfsi(local_50);
  iVar2 = __fixsfsi(local_4c);
  piVar3 = (int *)CCRenderTexture::renderTextureWithWidthAndHeight(iVar1,iVar2);
  if (piVar3 == (int *)0x0) {
    return;
  }
  piVar4 = (int *)(**(code **)(*piVar3 + 0xe8))(piVar3);
  pcVar9 = *(code **)(*piVar4 + 0x74);
  CCPoint::CCPoint(aCStack_48,extraout_s0,extraout_s1);
  (*pcVar9)(piVar4,aCStack_48);
  pcVar9 = *(code **)(*piVar3 + 0x3c);
  __mulsf3(local_50,0x3f000000);
  uVar11 = __mulsf3(local_4c,0x3f000000);
  CCPoint::CCPoint(aCStack_40,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(piVar3,aCStack_40);
  pcVar9 = *(code **)(*piVar3 + 0x74);
  CCPoint::CCPoint(aCStack_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(piVar3,aCStack_38);
  CCRenderTexture::clear((float)uVar11,(float)((ulonglong)uVar11 >> 0x20),extraout_s2,extraout_s3);
  CCRenderTexture::begin((CCRenderTexture *)piVar3);
  (**(code **)(**(int **)(this + 0x100) + 0xe4))();
  CCRenderTexture::end((CCRenderTexture *)piVar3,true);
  CCTransitionScene::hideOutShowIn((CCTransitionScene *)this);
  piVar3 = (int *)(**(code **)(*piVar3 + 0xe8))(piVar3);
  pCVar5 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))();
  piVar3 = (int *)CCProgressTimer::progressWithTexture(pCVar5);
  CCSprite::setFlipY((CCSprite *)piVar3[0x41],true);
  CVar6 = (**(code **)(*(int *)this + 0xf0))(this);
  fVar10 = (float)CCProgressTimer::setType((CCProgressTimer *)piVar3,CVar6);
  uVar11 = CCProgressTimer::setPercentage(fVar10);
  pcVar9 = *(code **)(*piVar3 + 0x3c);
  CCPoint::CCPoint(aCStack_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(piVar3,aCStack_30);
  pcVar9 = *(code **)(*piVar3 + 0x74);
  CCPoint::CCPoint(aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(piVar3,aCStack_28);
  pCVar7 = (CCFiniteTimeAction *)
           CCProgressFromTo::actionWithDuration
                     ((float)uVar11,(float)((ulonglong)uVar11 >> 0x20),extraout_s2_00);
  local_20 = *(CCObject **)(DAT_0014a990 + 0x14a95a);
  local_1c = 0;
  uVar8 = CCCallFunc::actionWithTarget((CCCallFunc *)this,local_20,(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar7,uVar8,0);
}


