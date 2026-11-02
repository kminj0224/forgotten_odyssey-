/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012a664  Symbol: ccTouchesEnded */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012a6ea) */
/* WARNING: Removing unreachable block (ram,0x0012a6ea) */
/* GameScene::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void GameScene::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = cocos2d::CCSet::begin((CCSet *)param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
  uVar5 = (uint)**(byte **)(DAT_0012a750 + 0x12a680);
  if (uVar5 == 0) {
    for (; iVar3 = cocos2d::CCSet::count((CCSet *)param_2), (int)uVar5 < iVar3; uVar5 = uVar5 + 1) {
      local_30 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
      local_2c = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c);
      puVar4 = (undefined4 *)(DAT_0012a754 + 0x12a69a);
      local_20 = local_30;
      local_1c = local_2c;
      iVar1 = thunk_FUN_001c7eac(iVar1);
      puVar4 = (undefined4 *)*puVar4;
      uVar2 = __divsf3(*puVar4,DAT_0012a758);
      __divsf3(local_30,uVar2);
      uVar2 = __divsf3(puVar4[1],DAT_0012a75c);
      uVar6 = __divsf3(local_2c,uVar2);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20))
      ;
      local_30 = local_28;
      local_2c = local_24;
      if (**(int **)(DAT_0012a760 + 0x12a6e2) - 0xbU < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x0012a6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&BYTE_0012a6ef +
                  (uint)*(byte *)(**(int **)(DAT_0012a760 + 0x12a6e2) + 0x12a6e3) * 2))();
        return;
      }
    }
  }
  else {
    **(byte **)(DAT_0012a750 + 0x12a680) = 0;
  }
  return;
}


