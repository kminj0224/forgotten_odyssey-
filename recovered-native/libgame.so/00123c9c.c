/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123c9c  Symbol: GameEndTouchMove */

/* GameScene::GameEndTouchMove(cocos2d::CCPoint) */

void GameScene::GameEndTouchMove(CCPoint param_1)

{
  CCNode *pCVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 in_r1;
  undefined4 in_r2;
  code *pcVar10;
  undefined8 uVar11;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  if (**(char **)(DAT_00123f10 + 0x123ca8) != '\0') {
    return;
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
  if (*(int *)(param_1 + DAT_00123f14) < 7) {
    *(undefined *)(param_1 + 0x530) = 0;
    return;
  }
  if (*(char *)(param_1 + DAT_00123f18) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  uVar5 = __subsf3(*(undefined4 *)(param_1 + DAT_00123f1c),in_r1);
  uVar5 = __subsf3(*puVar4,uVar5);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
  puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
  uVar7 = __mulsf3(*puVar4,0x3f000000);
  uVar7 = __subsf3(uVar7,DAT_00123f20);
  iVar8 = __aeabi_fcmplt(uVar5,uVar7);
  if (iVar8 != 0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    uVar5 = __subsf3(*(undefined4 *)(param_1 + DAT_00123f1c),in_r1);
    uVar5 = __subsf3(*puVar4,uVar5);
    uVar7 = __floatsisf(*(int *)(param_1 + DAT_00123f14) * -0x28 + 0x168);
    iVar8 = __aeabi_fcmpgt(uVar5,uVar7);
    if (iVar8 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      pcVar10 = *(code **)(*piVar6 + 0x3c);
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
      uVar5 = __subsf3(*(undefined4 *)(param_1 + DAT_00123f1c),in_r1);
      __subsf3(*puVar4,uVar5);
      uVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      (*pcVar10)(piVar6,aCStack_30);
      iVar8 = DAT_00123f1c;
      *(undefined4 *)(param_1 + DAT_00123f1c) = in_r1;
      *(undefined4 *)(param_1 + iVar8 + 4) = in_r2;
      goto LAB_00123e94;
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
  uVar5 = __subsf3(*(undefined4 *)(param_1 + DAT_00123f1c),in_r1);
  uVar5 = __subsf3(*puVar4,uVar5);
  piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
  puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
  uVar7 = __mulsf3(*puVar4,0x3f000000);
  uVar7 = __subsf3(uVar7,DAT_00123f20);
  iVar8 = __aeabi_fcmpgt(uVar5,uVar7);
  if (iVar8 == 0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    uVar5 = __subsf3(*(undefined4 *)(param_1 + DAT_00123f1c),in_r1);
    uVar5 = __subsf3(*puVar4,uVar5);
    uVar7 = __floatsisf(*(int *)(param_1 + DAT_00123f14) * -0x28 + 0x168);
    iVar8 = __aeabi_fcmplt(uVar5,uVar7);
    if (iVar8 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      pcVar10 = *(code **)(*piVar6 + 0x3c);
      __floatsisf(*(int *)(param_1 + DAT_00123f14) * -0x28 + 0x168);
      uVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
      cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      (*pcVar10)(piVar6,aCStack_20);
    }
  }
  else {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0);
    pcVar10 = *(code **)(*piVar6 + 0x3c);
    piVar9 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
    puVar4 = (undefined4 *)(**(code **)(*piVar9 + 0x7c))();
    uVar5 = __mulsf3(*puVar4,0x3f000000);
    __subsf3(uVar5,DAT_00123f20);
    uVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
    cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
    (*pcVar10)(piVar6,aCStack_28);
  }
LAB_00123e94:
  __subsf3(*(undefined4 *)(param_1 + 0x528),in_r1);
  iVar8 = __fixsfsi();
  if (0x14 < (iVar8 + (iVar8 >> 0x1f) ^ iVar8 >> 0x1f)) {
    *(undefined *)(param_1 + 0x530) = 1;
  }
  return;
}


