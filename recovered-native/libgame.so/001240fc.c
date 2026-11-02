/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001240fc  Symbol: ccTouchesBegan */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00124174) */
/* WARNING: Removing unreachable block (ram,0x00124174) */
/* GameScene::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void GameScene::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = cocos2d::CCSet::begin((CCSet *)param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
  iVar5 = 0;
  while( true ) {
    iVar3 = cocos2d::CCSet::count((CCSet *)param_2);
    if (iVar3 <= iVar5) {
      return;
    }
    local_30 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
    local_2c = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c);
    puVar4 = (undefined4 *)(DAT_001241d0 + 0x124124);
    local_20 = local_30;
    local_1c = local_2c;
    iVar1 = thunk_FUN_001c7eac(iVar1);
    puVar4 = (undefined4 *)*puVar4;
    uVar2 = __divsf3(*puVar4,DAT_001241d4);
    __divsf3(local_30,uVar2);
    uVar2 = __divsf3(puVar4[1],DAT_001241d8);
    uVar6 = __divsf3(local_2c,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    local_30 = local_28;
    local_2c = local_24;
    if (**(int **)(DAT_001241dc + 0x12416c) - 0xbU < 0xc) break;
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00124174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&BYTE_00124179 + (uint)*(byte *)(**(int **)(DAT_001241dc + 0x12416c) + 0x12416d) * 2))
            ();
  return;
}


