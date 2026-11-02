/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012729c  Symbol: OpenPopup_Img */

/* GameScene::OpenPopup_Img(int) */

void __thiscall GameScene::OpenPopup_Img(GameScene *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *unaff_r6;
  float fVar8;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar9;
  _ccColor4B local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  iVar6 = *(int *)(**(int **)(DAT_00127420 + 0x1272a8) + 0x30);
  if (((iVar6 + DAT_00127424 != 0) && (iVar6 + DAT_00127428 != 0)) && (iVar6 != DAT_0012742c)) {
    if (param_1 == 0) {
      unaff_r6 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00127430 + 0x1272d0));
    }
    iVar6 = *(int *)(DAT_00127434 + 0x1272de);
    local_34 = (_ccColor4B)0x7f;
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    uVar9 = (**(code **)(*unaff_r6 + 0x7c))(unaff_r6);
    piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                              (&local_34,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    pcVar7 = *(code **)(*piVar1 + 0x3c);
    uVar9 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(piVar1,aCStack_30);
    (**(code **)(*piVar1 + 0x134))(piVar1,0);
    pcVar7 = *(code **)(*unaff_r6 + 0x3c);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    __mulsf3(*puVar2,0x3f000000);
    iVar6 = (**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar9 = __mulsf3(*(undefined4 *)(iVar6 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(unaff_r6,aCStack_28);
    (**(code **)(*unaff_r6 + 0xec))(unaff_r6,0);
    (**(code **)(*piVar1 + 0xcc))(piVar1,unaff_r6,0,0);
    fVar8 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar1,7,7);
    pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
    uVar4 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
    uVar5 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_00);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCSequence::actions(pCVar3,uVar4,uVar5,0);
  }
  return;
}


