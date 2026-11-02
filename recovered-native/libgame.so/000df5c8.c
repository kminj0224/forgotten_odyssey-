/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df5c8  Symbol: ccTouchesBegan */

/* Market_Store::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Store::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  CCPoint local_20 [3];
  
  if (((**(char **)(DAT_000df6d4 + 0xdf5d4) == '\0') &&
      (pcVar8 = *(char **)(DAT_000df6d8 + 0xdf5e0), *pcVar8 == '\0')) &&
     (**(char **)(DAT_000df6dc + 0xdf5ec) == '\0')) {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    puVar7 = *(undefined4 **)(DAT_000df6e0 + 0xdf602);
    uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar7,DAT_000df6e4);
    __divsf3(uVar5,uVar2);
    uVar2 = __divsf3(puVar7[1],DAT_000df6e8);
    uVar9 = __divsf3(uVar6,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    if (*pcVar8 == '\0') {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6d);
      iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar1 != 0) {
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6d);
        (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      }
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6e);
      iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar1 != 0) {
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6e);
        (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      }
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6f);
      iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar1 != 0) {
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6f);
        (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      }
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6c);
      iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar1 != 0) {
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6c);
        (**(code **)(*piVar4 + 0x6c))(piVar4,1);
      }
    }
  }
  return;
}


