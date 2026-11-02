/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9c2c  Symbol: ccTouchesEnded */

/* Hero_BaseSkill::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_BaseSkill::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CCNode *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  int local_38;
  CCPoint local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  if ((**(char **)(DAT_000e9d50 + 0xe9c38) == '\0') && (**(char **)(DAT_000e9d54 + 0xe9c46) == '\0')
     ) {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    puVar7 = *(undefined4 **)(DAT_000e9d58 + 0xe9c5e);
    uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar7,DAT_000e9d5c);
    __divsf3(uVar5,uVar2);
    uVar2 = __divsf3(puVar7[1],DAT_000e9d60);
    uVar9 = __divsf3(uVar6,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    iVar1 = DAT_000e9d64;
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x18);
    (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    puVar7 = *(undefined4 **)(iVar1 + 0xe9ca8);
    local_38 = 0;
    do {
      iVar1 = __aeabi_fcmplt(*puVar7,local_28);
      if ((((iVar1 != 0) && (iVar1 = __aeabi_fcmplt(puVar7[1],local_24), iVar1 != 0)) &&
          (iVar1 = __aeabi_fcmpgt(puVar7[2],local_28), iVar1 != 0)) &&
         (iVar1 = __aeabi_fcmpgt(puVar7[3],local_24), iVar1 != 0)) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xc);
        pcVar8 = *(code **)(*piVar3 + 0x3c);
        uVar9 = __subsf3(DAT_000e9d60,puVar7[1]);
        cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        (*pcVar8)(piVar3,aCStack_20);
        Draw_Skill_Icon_Text((Hero_BaseSkill *)param_1,local_38);
        *(int *)(param_1 + 0x110) = local_38;
      }
      puVar7 = puVar7 + 4;
      local_38 = local_38 + 1;
    } while (local_38 != 9);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x18);
    iVar1 = Sprite_Touch2(pCVar4,local_28);
    if (iVar1 != 0) {
      Touch_Upgrade_Button((Hero_BaseSkill *)param_1,*(int *)(param_1 + 0x110));
      FileSave();
    }
  }
  return;
}


