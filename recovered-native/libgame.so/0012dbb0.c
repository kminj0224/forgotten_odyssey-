/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012dbb0  Symbol: FileLode */

/* MainMenuLayer::FileLode() */

void __thiscall MainMenuLayer::FileLode(MainMenuLayer *this)

{
  int *piVar1;
  int iVar2;
  CCFiniteTimeAction *pCVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar10;
  float extraout_s1_00;
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [124];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0012df98 + 0x12dbbc));
  pcVar8 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_b0,extraout_s0,extraout_s1);
  (*pcVar8)(piVar1,aCStack_b0);
  (**(code **)(*piVar1 + 0x108))(piVar1,0x3fc00000);
  (**(code **)(*(int *)this + 0xcc))(this,piVar1,0,0);
  iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar10 = __mulsf3(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_a8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar9,(CCPoint *)0x40800000);
  piVar4 = (int *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*piVar4 + -0x80000000,0x3f000000);
  iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar10 = __mulsf3(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_a0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar9,(CCPoint *)0x40800000);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar10 = __mulsf3(*piVar1 + -0x80000000,0x3f000000);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_98,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar6 = cocos2d::CCMoveTo::actionWithDuration(fVar9,(CCPoint *)0x40800000);
  fVar9 = (float)cocos2d::CCPoint::CCPoint(aCStack_90,extraout_s0_00,extraout_s1_00);
  uVar7 = cocos2d::CCMoveTo::actionWithDuration(fVar9,(CCPoint *)0x40800000);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar5,uVar6,uVar7,0);
}


