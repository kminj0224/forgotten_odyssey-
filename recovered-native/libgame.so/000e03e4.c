/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e03e4  Symbol: Sell_Button */

/* Market_Store::Sell_Button() */

undefined8 Market_Store::Sell_Button(void)

{
  CCNode *in_r0;
  int *piVar1;
  CCNode *pCVar2;
  undefined4 in_r1;
  code *pcVar3;
  float extraout_s0;
  float extraout_s1;
  CCNode *pCStack_18;
  undefined4 uStack_14;
  
  pCStack_18 = in_r0;
  uStack_14 = in_r1;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(in_r0,DAT_000e0460);
  pcVar3 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&pCStack_18,extraout_s0,extraout_s1);
  (*pcVar3)(piVar1,&pCStack_18);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,6);
  (**(code **)(*piVar1 + 0x6c))(piVar1,1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,7);
  (**(code **)(*piVar1 + 0x6c))(piVar1,1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  return CONCAT44(uStack_14,pCStack_18);
}


