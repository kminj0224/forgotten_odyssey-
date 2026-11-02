/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e34dc  Symbol: Set_Inventory_Socket_Effect */

/* Market_Store::Set_Inventory_Socket_Effect() */

void __thiscall Market_Store::Set_Inventory_Socket_Effect(Market_Store *this)

{
  uchar uVar1;
  undefined4 uVar3;
  float fVar4;
  float extraout_s0;
  CCFiniteTimeAction *pCVar2;
  
  fVar4 = (float)cocos2d::CCNode::getChildByTag((CCNode *)this,0x68);
  uVar1 = (uchar)DAT_000e351c;
  pCVar2 = (CCFiniteTimeAction *)cocos2d::CCTintTo::actionWithDuration(fVar4,uVar1,0xff,'\x7f');
  uVar3 = cocos2d::CCTintTo::actionWithDuration(extraout_s0,uVar1,0xff,0xff);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar2,uVar3,0);
}


