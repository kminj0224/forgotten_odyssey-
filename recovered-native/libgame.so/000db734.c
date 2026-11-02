/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000db734  Symbol: ccTouchesEnded */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000db7a0) */
/* WARNING: Removing unreachable block (ram,0x000db7a0) */
/* Market_Equip::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 Market_Equip::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

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
  
  if (**(char **)(DAT_000db82c + 0xdb73e) == '\0') {
    local_18 = in_r2;
    local_14 = in_r3;
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    puVar5 = *(undefined4 **)(DAT_000db830 + 0xdb75a);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar5,DAT_000db834);
    __divsf3(uVar3,uVar2);
    uVar2 = __divsf3(puVar5[1],DAT_000db838);
    uVar6 = __divsf3(uVar4,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    local_20 = local_18;
    local_1c = local_14;
    if (**(int **)(DAT_000db83c + 0xdb798) - 3U < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000db7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(&BYTE_000db7a5 +
                        (uint)*(byte *)(**(int **)(DAT_000db83c + 0xdb798) + 0xdb7a1) * 2))();
      return uVar6;
    }
  }
  else {
    **(char **)(DAT_000db82c + 0xdb73e) = '\0';
    local_20 = param_1;
    local_1c = param_2;
  }
  return CONCAT44(local_1c,local_20);
}


