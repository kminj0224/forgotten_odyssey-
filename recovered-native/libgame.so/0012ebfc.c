/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ebfc  Symbol: ccTouchesEnded */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012ec5e) */
/* WARNING: Removing unreachable block (ram,0x0012ec5e) */
/* MainMenuLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 MainMenuLayer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCSet *in_r2;
  CCEvent *in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  CCSet *local_20;
  CCEvent *local_1c;
  CCSet *local_18;
  CCEvent *local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  if (**(char **)(DAT_0012ec98 + 0x12ec06) == '\0') {
    local_18 = in_r2;
    local_14 = in_r3;
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    puVar5 = *(undefined4 **)(DAT_0012ec9c + 0x12ec1c);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar5,DAT_0012eca0);
    __divsf3(uVar3,uVar2);
    uVar2 = __divsf3(puVar5[1],DAT_0012eca4);
    uVar6 = __divsf3(uVar4,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    local_20 = local_18;
    local_1c = local_14;
    switch(*(undefined4 *)(param_1 + 0x110)) {
    case 0:
      MM_NULL_Touch((CCPoint)param_1);
      break;
    case 1:
      MM_Play_Touch((CCPoint)param_1);
      break;
    case 2:
      MM_Option_Touch((CCPoint)param_1);
      break;
    case 3:
      MM_Slot_Touch((CCPoint)param_1);
    }
  }
  return CONCAT44(local_1c,local_20);
}


