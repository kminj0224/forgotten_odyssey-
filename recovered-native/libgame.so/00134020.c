/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134020  Symbol: ccTouchesEnded */

/* New_Game_Event::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void New_Game_Event::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = cocos2d::CCSet::begin((CCSet *)param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
  local_30 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
  puVar3 = *(undefined4 **)(DAT_001340a8 + 0x13403e);
  local_2c = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c);
  local_18 = local_30;
  uVar2 = __divsf3(*puVar3,DAT_001340ac);
  __divsf3(local_30,uVar2);
  uVar2 = __divsf3(puVar3[1],DAT_001340b0);
  uVar4 = __divsf3(local_2c,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  local_30 = local_28;
  local_2c = local_24;
  uVar4 = __subsf3(*(undefined4 *)(*(int *)(DAT_001340b4 + 0x134082) + 4),local_24);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  local_30 = local_20;
  local_2c = local_1c;
  iVar1 = cocos2d::CCScheduler::sharedScheduler();
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  return;
}


