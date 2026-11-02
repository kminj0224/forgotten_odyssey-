/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9cf4  Symbol: SetBounsAction */

/* Draw_Number::SetBounsAction() */

void __thiscall Draw_Number::SetBounsAction(Draw_Number *this)

{
  int iVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  CCPoint aCStack_20 [12];
  
  iVar6 = 0;
  do {
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
    if (iVar1 != 0) {
      fVar7 = (float)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
      pCVar2 = (CCFiniteTimeAction *)cocos2d::CCDelayTime::actionWithDuration(fVar7);
      uVar3 = cocos2d::CCFadeIn::actionWithDuration(extraout_s0);
      fVar7 = (float)cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1);
      uVar4 = cocos2d::CCMoveBy::actionWithDuration(fVar7,DAT_000c9d68);
      uVar5 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_01);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar2,uVar3,uVar4,uVar5,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x14);
  return;
}


