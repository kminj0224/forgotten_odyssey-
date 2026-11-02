/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df7cc  Symbol: upAction */

/* Market_Store::upAction(cocos2d::CCNode*) */

void __thiscall Market_Store::upAction(Market_Store *this,CCNode *param_1)

{
  int iVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  float fVar4;
  float extraout_s0;
  undefined8 uVar5;
  CCPoint aCStack_18 [12];
  
  (**(code **)(*(int *)param_1 + 0x38))(param_1);
  (**(code **)(*(int *)param_1 + 0x38))(param_1);
  iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
  uVar5 = __addsf3(*(undefined4 *)(iVar1 + 4),DAT_000df834);
  fVar4 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  pCVar2 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar4,(CCPoint *)0x3f000000);
  uVar3 = cocos2d::CCMoveTo::actionWithDuration(extraout_s0,DAT_000df838);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar2,uVar3,0);
}


