/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e2be0  Symbol: Item_Buy_Sell_Effect */

/* Market_Store::Item_Buy_Sell_Effect() */

void __thiscall Market_Store::Item_Buy_Sell_Effect(Market_Store *this)

{
  int *piVar1;
  CCFiniteTimeAction *pCVar2;
  undefined4 uVar3;
  float fVar4;
  float extraout_s0;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x69);
  (**(code **)(*piVar1 + 0xec))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x6a);
  fVar4 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0xff);
  pCVar2 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar4);
  uVar3 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar2,uVar3,0);
}


