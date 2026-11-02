/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f04b4  Symbol: Draw_Castle_Destroy */

/* WARNING: Removing unreachable block (ram,0x000f0710) */
/* WARNING: Removing unreachable block (ram,0x000f0624) */
/* WARNING: Removing unreachable block (ram,0x000f070a) */
/* WARNING: Removing unreachable block (ram,0x000f070e) */
/* WARNING: Removing unreachable block (ram,0x000f0628) */
/* Draw_Castle_Destroy(cocos2d::CCNode*, cocos2d::CCPoint) */

void Draw_Castle_Destroy(CCNode *param_1,CCPoint param_2)

{
  int *piVar1;
  int *piVar2;
  CCTexture2D *pCVar3;
  CCFiniteTimeAction *pCVar4;
  undefined4 uVar5;
  CCFiniteTimeAction *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar10;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  CCPoint local_a0 [2];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [80];
  undefined4 local_38;
  undefined4 local_34;
  CCPoint local_30 [8];
  CCPoint local_28 [8];
  CCPoint local_20 [12];
  
  local_a0[0] = param_2;
  piVar1 = (int *)cocos2d::CCLayer::node();
  (**(code **)(*piVar1 + 0x3c))(piVar1,local_a0);
  uVar10 = (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,0,0);
  uVar10 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(local_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint(local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000f0800 + 0xf050e));
  pCVar3 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3);
  (**(code **)(*piVar2 + 0x3c))(piVar2,&local_38);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  __addsf3(local_38,DAT_000f0804);
  uVar10 = __addsf3(local_34,0);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_98,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCMoveBy::actionWithDuration(fVar9,DAT_000f0808);
  uVar5 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0,extraout_s1);
  pCVar4 = (CCFiniteTimeAction *)cocos2d::CCSpawn::actions(pCVar4,uVar5,0);
  __addsf3(local_38,DAT_000f080c);
  uVar10 = __addsf3(local_34,DAT_000f0810);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_90,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pCVar6 = (CCFiniteTimeAction *)cocos2d::CCMoveBy::actionWithDuration(fVar9,DAT_000f0814);
  uVar5 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_00,extraout_s1_00);
  uVar7 = cocos2d::CCFadeTo::actionWithDuration(extraout_s0_01,(uchar)DAT_000f0814);
  uVar5 = cocos2d::CCSpawn::actions(pCVar6,uVar5,uVar7,0);
  __addsf3(local_38,DAT_000f0818);
  uVar10 = __addsf3(local_34,DAT_000f081c);
  fVar9 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_88,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  pCVar6 = (CCFiniteTimeAction *)cocos2d::CCMoveBy::actionWithDuration(fVar9,DAT_000f0820);
  uVar7 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_02,extraout_s1_01);
  uVar8 = cocos2d::CCFadeTo::actionWithDuration(extraout_s0_03,(uchar)DAT_000f0820);
  uVar7 = cocos2d::CCSpawn::actions(pCVar6,uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar4,uVar5,uVar7,0);
}


