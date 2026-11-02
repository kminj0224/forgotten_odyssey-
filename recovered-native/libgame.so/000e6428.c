/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6428  Symbol: ccTouchesBegan */

/* MarketLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 MarketLayer::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  CCPoint in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  CCPoint local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  puVar6 = *(undefined4 **)(DAT_000e6488 + 0xe643c);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar6,DAT_000e648c);
  __divsf3(uVar4,uVar2);
  uVar2 = __divsf3(puVar6[1],DAT_000e6490);
  uVar7 = __divsf3(uVar5,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
  Sprite_Touch(pCVar3,local_18);
  return CONCAT44(local_14,local_18);
}


