/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eb01c  Symbol: ccTouchesEnded */

/* Hero_HeroEquip::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_HeroEquip::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCSet *extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_1c;
  
  iVar7 = DAT_000eb39c + 0xeb028;
  local_1c = **(undefined4 **)(iVar7 + DAT_000eb3a0);
  if (**(char **)(iVar7 + DAT_000eb3a4) != '\0') {
    **(char **)(iVar7 + DAT_000eb3a4) = '\0';
    FUN_000eb7f2();
    param_2 = (CCEvent *)extraout_r1;
  }
  if (**(char **)(iVar7 + DAT_000eb3a8) != '\0') {
    FUN_000eb7f2();
    return;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  puVar5 = *(undefined4 **)(iVar7 + DAT_000eb3b0);
  uVar2 = __divsf3(*puVar5,DAT_000eb3ac);
  __divsf3(uVar3,uVar2);
  uVar2 = __divsf3(puVar5[1],DAT_000eb3b4);
  uVar8 = __divsf3(uVar4,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pcVar6 = (char *)(DAT_000eb3b8 + 0xeb0a0);
  uVar8 = __extendsfdf2(local_88);
  uVar9 = __extendsfdf2(local_84);
  uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog(pcVar6,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,uVar2);
}


