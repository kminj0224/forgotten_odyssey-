/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0358  Symbol: Buy_Button */

/* Market_Store::Buy_Button() */

undefined8 Market_Store::Buy_Button(void)

{
  int iVar1;
  CCNode *in_r0;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 in_r1;
  code *pcVar4;
  float extraout_s0;
  float extraout_s1;
  CCNode *pCStack_18;
  undefined4 uStack_14;
  
  pCStack_18 = in_r0;
  uStack_14 = in_r1;
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,6);
  iVar1 = DAT_000e03dc;
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,7);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,8);
  (**(code **)(*piVar3 + 0x6c))(piVar3,1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
  (**(code **)(*piVar3 + 0x6c))(piVar3,1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,iVar1);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar1);
  pcVar4 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&pCStack_18,extraout_s0,extraout_s1);
  (*pcVar4)(piVar3,&pCStack_18);
  return CONCAT44(uStack_14,pCStack_18);
}


