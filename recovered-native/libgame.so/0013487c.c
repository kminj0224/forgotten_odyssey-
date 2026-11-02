/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013487c  Symbol: ccTouchesEnded */

/* StageClear::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 StageClear::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  New_Notice *this;
  char *pcVar4;
  CCSet *in_r2;
  CCEvent *in_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  CCSet *local_20;
  CCEvent *local_1c;
  CCSet *local_18;
  CCEvent *local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  if (**(char **)(DAT_001349c0 + 0x134886) != '\0') goto LAB_001349be;
  if (**(char **)(DAT_001349c4 + 0x134894) != '\0') {
    **(char **)(DAT_001349c4 + 0x134894) = '\0';
    goto LAB_001349be;
  }
  local_18 = in_r2;
  local_14 = in_r3;
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  puVar7 = *(undefined4 **)(DAT_001349c8 + 0x1348ae);
  uVar6 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar7,DAT_001349cc);
  __divsf3(uVar5,uVar2);
  uVar2 = __divsf3(puVar7[1],DAT_001349d0);
  uVar9 = __divsf3(uVar6,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  local_20 = local_18;
  local_1c = local_14;
  initSetIsVisible((StageClear *)param_1);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
  iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
  if (iVar1 != 0) {
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
    iVar1 = cocos2d::CCScheduler::sharedScheduler();
    *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
    **(undefined4 **)(DAT_001349d4 + 0x13491a) = 0xb;
    goto LAB_001349be;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
  iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
  if (iVar1 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 == 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,5);
      iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
      if (iVar1 == 0) {
        pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,6);
        iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
        if (iVar1 == 0) goto LAB_001349be;
        this = (New_Notice *)New_Notice::node();
        iVar1 = 0x10;
        pcVar4 = (char *)(DAT_001349e0 + 0x1349aa);
      }
      else {
        this = (New_Notice *)New_Notice::node();
        iVar1 = 0xf;
        pcVar4 = (char *)(DAT_001349dc + 0x134988);
      }
      goto LAB_001349a8;
    }
    this = (New_Notice *)MainOption::node();
    uVar2 = 7;
    pcVar8 = *(code **)(*(int *)param_1 + 0xcc);
  }
  else {
    this = (New_Notice *)New_Notice::node();
    iVar1 = 0x11;
    pcVar4 = (char *)(DAT_001349d8 + 0x134940);
LAB_001349a8:
    New_Notice::noticeWithType(this,pcVar4,iVar1,1);
    pcVar8 = *(code **)(*(int *)param_1 + 0xcc);
    uVar2 = 8;
  }
  (*pcVar8)(param_1,this,uVar2,uVar2);
LAB_001349be:
  return CONCAT44(local_1c,local_20);
}


