/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed514  Symbol: ccTouchesEnded */

/* Hero_HeroSkill::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_HeroSkill::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = DAT_000ed70c + 0xed520;
  if ((**(char **)(iVar7 + DAT_000ed710) == '\0') && (**(char **)(iVar7 + DAT_000ed714) == '\0')) {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    puVar5 = *(undefined4 **)(iVar7 + DAT_000ed71c);
    uVar2 = __divsf3(*puVar5,DAT_000ed718);
    __divsf3(uVar3,uVar2);
    uVar2 = __divsf3(puVar5[1],DAT_000ed720);
    uVar8 = __divsf3(uVar4,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    pcVar6 = (char *)(DAT_000ed724 + 0xed584);
    uVar8 = __extendsfdf2(local_28);
    uVar9 = __extendsfdf2(local_24);
    uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog(pcVar6,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,uVar2);
  }
  return;
}


