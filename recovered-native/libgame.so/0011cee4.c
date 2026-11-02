/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011cee4  Symbol: Touch_Coupon_Ended */

/* New_Notice::Touch_Coupon_Ended(cocos2d::CCPoint) */

undefined8 New_Notice::Touch_Coupon_Ended(CCPoint param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  CCPoint in_r1;
  undefined4 in_r2;
  code *pcVar4;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  iVar2 = Sprite_Touch2(pCVar1,in_r1);
  if (iVar2 == 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pcVar4 = *(code **)(*piVar3 + 300);
  }
  else {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    pcVar4 = *(code **)(*piVar3 + 0x128);
  }
  (*pcVar4)();
  return CONCAT44(in_r2,in_r1);
}


