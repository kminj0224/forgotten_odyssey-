/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb730  Symbol: ccTouchesBegan */

/* StageSelectChild::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void StageSelectChild::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  CCPoint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  local_20 = *(undefined4 *)(iVar1 + 0x18);
  puVar3 = *(undefined4 **)(DAT_000cb7c0 + 0xcb746);
  local_1c = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar3,DAT_000cb7c4);
  __divsf3(local_20,uVar2);
  uVar2 = __divsf3(puVar3[1],DAT_000cb7c8);
  uVar4 = __divsf3(local_1c,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  local_20 = local_18;
  local_1c = local_14;
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::convertToGL(&local_28);
  *(CCPoint *)(param_1 + 0x118) = local_28;
  *(undefined4 *)(param_1 + 0x11c) = local_24;
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::convertToGL(&local_28);
  *(CCPoint *)(param_1 + 0x110) = local_28;
  *(undefined4 *)(param_1 + 0x114) = local_24;
  return;
}


