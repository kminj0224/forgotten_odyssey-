/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ccdd4  Symbol: OpenPopup */

/* StageSelect::OpenPopup(int, int) */

void StageSelect::OpenPopup(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CCFiniteTimeAction *pCVar4;
  undefined *puVar5;
  undefined uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *unaff_r6;
  float in_s0;
  float fVar10;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  undefined8 uVar11;
  undefined local_40;
  undefined local_3f;
  undefined local_3c;
  undefined local_3b;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  _ccColor4B local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  iVar8 = *(int *)(DAT_000ccf98 + 0xccde0);
  local_31 = 200;
  local_34 = (_ccColor4B)0x0;
  local_33 = 0;
  local_32 = 0;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_34,in_s0,in_s1);
  uVar9 = *(undefined4 *)(iVar8 + 4);
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  uVar2 = __mulsf3(uVar9,0x3f000000);
  uVar9 = __divsf3(uVar9,DAT_000ccfa0);
  uVar11 = __addsf3(uVar2,uVar9);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar7)(piVar1,aCStack_30);
  fVar10 = (float)(**(code **)(*piVar1 + 0x134))(piVar1,0);
  if (param_2 == 0) {
    unaff_r6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                ((char *)(DAT_000ccfa4 + 0xcce4c),(char *)(DAT_000ccfa8 + 0xcce4e),
                                 fVar10);
    puVar5 = &local_40;
    local_40 = 0x52;
    local_3f = 0xc0;
    pcVar7 = *(code **)(*unaff_r6 + 0xf4);
    uVar6 = 0xfd;
LAB_000cce8e:
    puVar5[2] = uVar6;
  }
  else {
    if (param_2 == 1) {
      unaff_r6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                  ((char *)(DAT_000ccfb0 + 0xcce76),(char *)(DAT_000ccfb4 + 0xcce78)
                                   ,fVar10);
      puVar5 = &local_3c;
      pcVar7 = *(code **)(*unaff_r6 + 0xf4);
      local_3c = 0xe7;
      local_3b = 0x6f;
      uVar6 = 0x20;
      goto LAB_000cce8e;
    }
    if (param_2 != 2) goto LAB_000ccebc;
    unaff_r6 = (int *)cocos2d::CCLabelTTF::labelWithString
                                ((char *)(DAT_000ccfb8 + 0xccea2),(char *)(DAT_000ccfbc + 0xccea4),
                                 fVar10);
    pcVar7 = *(code **)(*unaff_r6 + 0xf4);
    local_38 = 0xff;
    local_37 = 0xff;
    local_36 = 0;
  }
  (*pcVar7)(unaff_r6);
LAB_000ccebc:
  pcVar7 = *(code **)(*unaff_r6 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar3,0x3f000000);
  iVar8 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar11 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar7)(unaff_r6,aCStack_28);
  (**(code **)(*piVar1 + 0xcc))(piVar1,unaff_r6,0,0);
  fVar10 = (float)(**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,0x15,0x15);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar10);
  uVar2 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  uVar9 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_00);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar2,uVar9,0);
}


