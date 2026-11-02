/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed1a0  Symbol: ccTouchesBegan */

/* Hero_HeroSkill::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_HeroSkill::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CCNode *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float extraout_s0;
  undefined8 uVar12;
  float extraout_s1;
  int local_40;
  CCPoint local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar8 = DAT_000ed318 + 0xed1ac;
  if ((**(char **)(iVar8 + DAT_000ed31c) == '\0') && (**(char **)(iVar8 + DAT_000ed320) == '\0')) {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar6 = *(undefined4 *)(iVar1 + 0x18);
    uVar7 = *(undefined4 *)(iVar1 + 0x1c);
    puVar10 = *(undefined4 **)(iVar8 + DAT_000ed328);
    uVar2 = __divsf3(*puVar10,DAT_000ed324);
    __divsf3(uVar6,uVar2);
    uVar2 = __divsf3(puVar10[1],DAT_000ed32c);
    uVar12 = __divsf3(uVar7,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20))
    ;
    pcVar11 = (char *)(DAT_000ed330 + 0xed210);
    iVar1 = 0;
    local_40 = 0;
    do {
      puVar10 = (undefined4 *)(iVar1 + *(int *)(iVar8 + DAT_000ed334));
      iVar3 = __aeabi_fcmplt(*puVar10,local_28);
      if ((((iVar3 != 0) && (iVar3 = __aeabi_fcmplt(puVar10[1],local_24), iVar3 != 0)) &&
          (iVar3 = __aeabi_fcmpgt(puVar10[2],local_28), iVar3 != 0)) &&
         (iVar3 = __aeabi_fcmpgt(puVar10[3],local_24), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog(pcVar11,local_40);
      }
      iVar1 = iVar1 + 0x10;
      local_40 = local_40 + 1;
    } while (iVar1 != 0xc0);
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    iVar1 = Sprite_Touch2(pCVar4,local_28);
    if (iVar1 != 0) {
      if ((0 < *(int *)((**(int **)(iVar8 + DAT_000ed33c) * 9 + *(int *)(param_1 + 0x110) + 0x910) *
                        4 + **(int **)(iVar8 + DAT_000ed338))) &&
         (*(char *)(**(int **)(iVar8 + DAT_000ed338) +
                    **(int **)(iVar8 + DAT_000ed33c) * 0x6c + *(int *)(param_1 + 0x110) * 0xc +
                    *(int *)(param_1 + 0x114) + DAT_000ed340) < '\n')) {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
        (**(code **)(*piVar5 + 0x6c))(piVar5,1);
      }
    }
    if (**(int **)(iVar8 + DAT_000ed344) != 0x1a) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2e);
      iVar8 = Sprite_Touch2(pCVar4,local_28);
      if (iVar8 != 0) {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2e);
        pcVar9 = *(code **)(*piVar5 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
        (*pcVar9)(piVar5,aCStack_20);
      }
    }
  }
  return;
}


