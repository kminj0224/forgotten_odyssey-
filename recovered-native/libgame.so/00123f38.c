/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123f38  Symbol: ccTouchesMoved */

/* GameScene::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 GameScene::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  CCPoint local_18 [8];
  
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(undefined8 *)(iVar2 + 0x18);
  puVar6 = *(undefined4 **)(DAT_00123fa4 + 0x123f4c);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  uVar1 = *(undefined8 *)(iVar2 + 0x18);
  uVar3 = __divsf3(*puVar6,DAT_00123fa8);
  __divsf3(uVar4,uVar3);
  uVar3 = __divsf3(puVar6[1],DAT_00123fac);
  uVar7 = __divsf3(uVar5,uVar3);
  cocos2d::CCPoint::CCPoint(local_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  if (**(int **)(DAT_00123fb0 + 0x123f86) == 0xb) {
    GameTouchMove((CCPoint)param_1);
  }
  else if (**(int **)(DAT_00123fb0 + 0x123f86) == 0x16) {
    GameEndTouchMove((CCPoint)param_1);
  }
  return uVar1;
}


