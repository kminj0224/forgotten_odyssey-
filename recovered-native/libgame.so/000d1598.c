/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d1598  Symbol: ccTouchesBegan */

/* InventoryLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 InventoryLayer::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(undefined8 *)(iVar2 + 0x18);
  puVar6 = *(undefined4 **)(DAT_000d1604 + 0xd15ac);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  uVar1 = *(undefined8 *)(iVar2 + 0x18);
  uVar3 = __divsf3(*puVar6,DAT_000d1608);
  __divsf3(uVar4,uVar3);
  uVar3 = __divsf3(puVar6[1],DAT_000d160c);
  uVar7 = __divsf3(uVar5,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + 0x120) = local_18;
  *(undefined4 *)(param_1 + 0x124) = local_14;
  *(undefined4 *)(param_1 + 0x128) = local_18;
  *(undefined4 *)(param_1 + 300) = local_14;
  param_1[0x130] = (CCSet)0x0;
  return uVar1;
}


