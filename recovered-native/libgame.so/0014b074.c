/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b074  Symbol: onEnter */

/* cocos2d::CCTransitionCrossFade::onEnter() */

void __thiscall cocos2d::CCTransitionCrossFade::onEnter(CCTransitionCrossFade *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *this_00;
  int *piVar4;
  int *piVar5;
  CCFiniteTimeAction *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float extraout_s1;
  undefined8 uVar11;
  float extraout_s1_00;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCObject *local_28;
  undefined4 local_24;
  CCObject *local_20;
  undefined4 local_1c;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  local_74 = 0;
  CCDirector::sharedDirector();
  CCDirector::getWinSize();
  piVar1 = (int *)CCLayerColor::layerWithColor((_ccColor4B *)&local_74);
  iVar2 = __fixsfsi(local_70);
  iVar3 = __fixsfsi(local_6c);
  this_00 = (int *)CCRenderTexture::renderTextureWithWidthAndHeight(iVar2,iVar3);
  if (this_00 == (int *)0x0) {
    return;
  }
  piVar4 = (int *)(**(code **)(*this_00 + 0xe8))(this_00);
  pcVar9 = *(code **)(*piVar4 + 0x74);
  CCPoint::CCPoint(aCStack_68,extraout_s0,extraout_s1);
  (*pcVar9)(piVar4,aCStack_68);
  pcVar9 = *(code **)(*this_00 + 0x3c);
  __mulsf3(local_70,0x3f000000);
  uVar11 = __mulsf3(local_6c,0x3f000000);
  CCPoint::CCPoint(aCStack_60,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(this_00,aCStack_60);
  pcVar9 = *(code **)(*this_00 + 0x74);
  CCPoint::CCPoint(aCStack_58,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar9)(this_00,aCStack_58);
  CCRenderTexture::begin((CCRenderTexture *)this_00);
  (**(code **)(**(int **)(this + 0xfc) + 0xe4))();
  CCRenderTexture::end((CCRenderTexture *)this_00,true);
  piVar4 = (int *)CCRenderTexture::renderTextureWithWidthAndHeight(iVar2,iVar3);
  piVar5 = (int *)(**(code **)(*piVar4 + 0xe8))();
  pcVar9 = *(code **)(*piVar5 + 0x74);
  CCPoint::CCPoint(aCStack_50,extraout_s0_00,extraout_s1_00);
  uVar11 = (*pcVar9)(piVar5,aCStack_50);
  pcVar9 = *(code **)(*piVar4 + 0x3c);
  CCPoint::CCPoint(aCStack_48,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = (*pcVar9)(piVar4,aCStack_48);
  pcVar9 = *(code **)(*piVar4 + 0x74);
  CCPoint::CCPoint(aCStack_40,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar9)(piVar4,aCStack_40);
  CCRenderTexture::begin((CCRenderTexture *)piVar4);
  (**(code **)(**(int **)(this + 0x100) + 0xe4))();
  CCRenderTexture::end((CCRenderTexture *)piVar4,true);
  local_38 = 1;
  local_34 = 1;
  local_30 = DAT_0014b28c;
  local_2c = DAT_0014b290;
  piVar5 = (int *)(**(code **)(*this_00 + 0xe8))(this_00);
  (**(code **)(*piVar5 + 0xfc))(piVar5,local_38,local_34);
  piVar5 = (int *)(**(code **)(*piVar4 + 0xe8))(piVar4);
  (**(code **)(*piVar5 + 0xfc))(piVar5,local_30,local_2c);
  (**(code **)(*piVar1 + 0xc4))(piVar1,this_00);
  (**(code **)(*piVar1 + 0xc4))(piVar1,piVar4);
  piVar1 = (int *)(**(code **)(*this_00 + 0xe8))(this_00);
  (**(code **)(*piVar1 + 0xec))(piVar1,0xff);
  piVar1 = (int *)(**(code **)(*piVar4 + 0xe8))(piVar4);
  fVar10 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0xff);
  pCVar6 = (CCFiniteTimeAction *)
           CCFadeTo::actionWithDuration(fVar10,(uchar)*(undefined4 *)(this + 0x104));
  local_28 = *(CCObject **)(DAT_0014b294 + 0x14b236);
  local_24 = 0;
  uVar7 = CCCallFunc::actionWithTarget((CCCallFunc *)this,local_28,(_func_void *)0x0);
  local_20 = *(CCObject **)(DAT_0014b298 + 0x14b24c);
  local_1c = 0;
  uVar8 = CCCallFunc::actionWithTarget((CCCallFunc *)this,local_20,(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar6,uVar7,uVar8,0);
}


