/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7e2c  Symbol: Game_Scene_Vibration */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Game_Scene_Vibration() */

void Game_Scene_Vibration(void)

{
  undefined4 *puVar1;
  CCNode *this;
  int *piVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float fVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar11;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [60];
  
  if (**(int **)(DAT_000c7fe4 + 0xc7e36) != 0) {
    **(undefined **)(DAT_000c7ff8 + 0xc7fde) = 1;
    return;
  }
  puVar9 = (undefined4 *)(DAT_000c7fec + 0xc7e4c);
  puVar1 = (undefined4 *)(**(code **)(***(int ***)(DAT_000c7fe8 + 0xc7e48) + 0x38))();
  uVar8 = *puVar1;
  this = (CCNode *)cocos2d::CCNode::getChildByTag(*(CCNode **)*puVar9,0);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(this,4);
  (**(code **)(*piVar2 + 0x38))();
  uVar11 = __subsf3(uVar8,DAT_000c7ff0);
  fVar10 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_78,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
  uVar11 = __addsf3(uVar8,DAT_000c7ff0);
  fVar10 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_70,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar8 = cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
  fVar10 = (float)cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0,extraout_s1);
  uVar4 = cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
  fVar10 = (float)cocos2d::CCPoint::CCPoint(aCStack_60,extraout_s0_00,extraout_s1_00);
  uVar5 = cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
  fVar10 = (float)cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0_01,extraout_s1_01);
  uVar6 = cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
  fVar10 = (float)cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0_02,extraout_s1_02);
  uVar7 = cocos2d::CCMoveTo::actionWithDuration(fVar10,DAT_000c7ff4);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar8,uVar4,uVar5,uVar6,uVar7,0);
}


