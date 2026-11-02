/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012bbf8  Symbol: onEnter */

/* IntroLayer::onEnter() */

void IntroLayer::onEnter(void)

{
  bool bVar1;
  int *in_r0;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  CCFiniteTimeAction *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  float in_s0;
  float extraout_s0;
  float fVar13;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  undefined8 uVar14;
  float extraout_s1_00;
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [28];
  
  iVar9 = DAT_0012bf1c + 0x12bc06;
  pcVar10 = *(code **)(*in_r0 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_58,in_s0,in_s1);
  (*pcVar10)(in_r0,aCStack_58);
  iVar11 = *in_r0;
  puVar12 = *(undefined4 **)(iVar9 + DAT_0012bf20);
  uVar2 = __divsf3(*puVar12,DAT_0012bf24);
  (**(code **)(iVar11 + 0x2c))(in_r0,uVar2);
  uVar2 = __divsf3(puVar12[1],DAT_0012bf28);
  (**(code **)(*in_r0 + 0x34))(in_r0,uVar2);
  **(undefined4 **)(iVar9 + DAT_0012bf2c) = 0;
  pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar3,(bool)((char)DAT_0012bf30 + 'X'));
  if (***(char ***)(iVar9 + DAT_0012bf34) == '\0') {
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  }
  strcpy(*(char **)(iVar9 + DAT_0012bf38),(char *)(DAT_0012bf3c + 0x12bc80));
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012bf40 + 0x12bc88));
  pcVar10 = *(code **)(*piVar4 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0,extraout_s1);
  (*pcVar10)(piVar4,aCStack_50);
  (**(code **)(*piVar4 + 0x108))(piVar4,0x3fc00000);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar4,1,0);
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar14 = __mulsf3(*(int *)(iVar9 + 4) + -0x80000000,0x3f000000);
  fVar13 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_48,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar13,(CCPoint *)0x40800000)
  ;
  piVar6 = (int *)(**(code **)(*piVar4 + 0x7c))(piVar4);
  __mulsf3(*piVar6 + -0x80000000,0x3f000000);
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar14 = __mulsf3(*(int *)(iVar9 + 4) + -0x80000000,0x3f000000);
  fVar13 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_40,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  uVar2 = cocos2d::CCMoveTo::actionWithDuration(fVar13,(CCPoint *)0x40800000);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar14 = __mulsf3(*piVar4 + -0x80000000,0x3f000000);
  fVar13 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_38,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  uVar7 = cocos2d::CCMoveTo::actionWithDuration(fVar13,(CCPoint *)0x40800000);
  fVar13 = (float)cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_00,extraout_s1_00);
  uVar8 = cocos2d::CCMoveTo::actionWithDuration(fVar13,(CCPoint *)0x40800000);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar2,uVar7,uVar8,0);
}


