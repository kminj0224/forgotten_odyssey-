/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc69c  Symbol: ccTouchesBegan */

/* StageSelect::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 StageSelect::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  CCPoint aCStack_18 [8];
  
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(undefined8 *)(iVar2 + 0x18);
  puVar6 = *(undefined4 **)(DAT_000cc6ec + 0xcc6b0);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  uVar1 = *(undefined8 *)(iVar2 + 0x18);
  uVar3 = __divsf3(*puVar6,DAT_000cc6f0);
  __divsf3(uVar4,uVar3);
  uVar3 = __divsf3(puVar6[1],DAT_000cc6f4);
  uVar7 = __divsf3(uVar5,uVar3);
  cocos2d::CCPoint::CCPoint(aCStack_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
  return uVar1;
}


