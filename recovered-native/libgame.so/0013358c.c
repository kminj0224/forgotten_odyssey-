/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013358c  Symbol: ccTouchesEnded */

/* GameOption::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void GameOption::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  New_Notice *this;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  CCPoint local_20 [3];
  
  iVar7 = DAT_00133748 + 0x133598;
  if (**(char **)(iVar7 + DAT_0013374c) != '\0') {
    return;
  }
  if (**(char **)(iVar7 + DAT_00133750) != '\0') {
    return;
  }
  if (**(char **)(iVar7 + DAT_00133754) != '\0') {
    **(char **)(iVar7 + DAT_00133754) = '\0';
    return;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  uVar6 = *(undefined4 *)(iVar1 + 0x1c);
  puVar9 = *(undefined4 **)(iVar7 + DAT_0013375c);
  uVar2 = __divsf3(*puVar9,DAT_00133758);
  __divsf3(uVar5,uVar2);
  uVar2 = __divsf3(puVar9[1],DAT_00133760);
  uVar10 = __divsf3(uVar6,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  initSetIsVisible((GameOption *)param_1);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
  iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
  if (iVar1 != 0) {
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
    iVar1 = cocos2d::CCScheduler::sharedScheduler();
    *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
    **(undefined4 **)(iVar7 + DAT_00133764) = 0xb;
    Sound_ReStart();
    GameScene::BG_ReLode();
    return;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
  iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
  if (iVar1 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
    iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
    if (iVar1 != 0) {
      this = (New_Notice *)MainOption::node();
      uVar2 = 7;
      pcVar8 = *(code **)(*(int *)param_1 + 0xcc);
      goto LAB_0013373e;
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,5);
    iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
    if (iVar1 == 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,6);
      iVar1 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar1 == 0) {
        return;
      }
      if (**(char **)(iVar7 + DAT_0013376c) == '\0') {
        this = (New_Notice *)New_Notice::node();
        iVar7 = 0x10;
        pcVar4 = (char *)(DAT_00133788 + 0x13372e);
        goto LAB_0013372c;
      }
      this = (New_Notice *)New_Notice::node();
      pcVar4 = (char *)(DAT_00133784 + 0x13371e);
      iVar1 = 0;
      iVar7 = DAT_0013377c;
    }
    else {
      if (**(char **)(iVar7 + DAT_0013376c) != '\0') {
        this = (New_Notice *)New_Notice::node();
        pcVar4 = (char *)(DAT_00133778 + 0x1336d0);
        goto LAB_001336ce;
      }
      this = (New_Notice *)New_Notice::node();
      iVar7 = 0xf;
      pcVar4 = (char *)(DAT_00133780 + 0x1336f2);
LAB_0013372c:
      iVar1 = 1;
    }
    New_Notice::noticeWithType(this,pcVar4,iVar7,iVar1);
    pcVar8 = *(code **)(*(int *)param_1 + 0xcc);
  }
  else {
    if (**(char **)(iVar7 + DAT_0013376c) == '\0') {
      this = (New_Notice *)New_Notice::node();
      iVar7 = 0x11;
      pcVar4 = (char *)(DAT_00133774 + 0x133680);
      goto LAB_0013372c;
    }
    this = (New_Notice *)New_Notice::node();
    pcVar4 = (char *)(DAT_00133770 + 0x133672);
LAB_001336ce:
    New_Notice::noticeWithType(this,pcVar4,DAT_0013377c,0);
    pcVar8 = *(code **)(*(int *)param_1 + 0xcc);
  }
  uVar2 = 8;
LAB_0013373e:
  (*pcVar8)(param_1,this,uVar2,uVar2);
  return;
}


