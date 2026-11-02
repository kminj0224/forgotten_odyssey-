/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011bc8c  Symbol: ccTouchesBegan */

/* New_Notice::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 New_Notice::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  CCPoint in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar7;
  CCPoint local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  puVar6 = *(undefined4 **)(DAT_0011bd38 + 0x11bca0);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar6,DAT_0011bd3c);
  __divsf3(uVar4,uVar2);
  uVar2 = __divsf3(puVar6[1],DAT_0011bd40);
  uVar7 = __divsf3(uVar5,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
    iVar1 = Sprite_Touch2(pCVar3,local_18);
    if (iVar1 != 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,8);
      cocos2d::CCNode::setScale(pCVar3,extraout_s0);
    }
  }
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
  if (iVar1 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
    iVar1 = Sprite_Touch2(pCVar3,local_18);
    if (iVar1 != 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,9);
      cocos2d::CCNode::setScale(pCVar3,extraout_s0_00);
    }
  }
  return CONCAT44(local_14,local_18);
}


