/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d1624  Symbol: ccTouchesMoved */

/* InventoryLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void InventoryLayer::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  CCPoint *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *local_68;
  undefined4 local_50;
  undefined4 local_4c;
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar7 = *(undefined4 *)(iVar1 + 0x18);
  puVar10 = *(undefined4 **)(DAT_000d19a4 + 0xd163a);
  uVar8 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar10,DAT_000d19a8);
  __divsf3(uVar7,uVar2);
  uVar2 = __divsf3(puVar10[1],DAT_000d19ac);
  uVar12 = __divsf3(uVar8,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  iVar1 = __aeabi_fcmpgt(local_50,DAT_000d19b0);
  if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(local_50,DAT_000d19b4), iVar1 == 0)) ||
      (iVar1 = __aeabi_fcmpgt(local_4c,DAT_000d19b8), iVar1 == 0)) ||
     (iVar1 = __aeabi_fcmplt(local_4c,DAT_000d19bc), iVar1 == 0)) goto LAB_000d191c;
  piVar9 = *(int **)(DAT_000d19c0 + 0xd16b8);
  piVar5 = *(int **)(DAT_000d19c4 + 0xd16bc);
  iVar3 = *(int *)((*piVar9 + DAT_000d19c8) * 4 + *piVar5);
  iVar1 = DAT_000d19cc;
  if (iVar3 != 100) {
    iVar1 = __divsi3(iVar3,5);
    iVar1 = iVar1 * 0x25 + -0x6f;
  }
  piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  iVar3 = (**(code **)(*piVar4 + 0x38))();
  uVar2 = __floatsisf(iVar1);
  uVar7 = __subsf3(local_4c,*(undefined4 *)(param_1 + 300));
  uVar7 = __subsf3(*(undefined4 *)(iVar3 + 4),uVar7);
  iVar1 = __aeabi_fcmplt(uVar7,uVar2);
  if (iVar1 == 0) {
LAB_000d1970:
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    iVar1 = (**(code **)(*piVar4 + 0x38))();
    uVar2 = __subsf3(local_4c,*(undefined4 *)(param_1 + 300));
    uVar2 = __subsf3(*(undefined4 *)(iVar1 + 4),uVar2);
    iVar1 = __aeabi_fcmplt(uVar2,0);
    if (iVar1 == 0) {
      if (0xf < *(int *)((*piVar9 + DAT_000d19c8) * 4 + *piVar5)) {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        pcVar11 = *(code **)(*piVar5 + 0x3c);
        piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
        uVar12 = (**(code **)(*piVar9 + 0x38))();
        cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (*pcVar11)(piVar5,aCStack_28);
        piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
        local_68 = *(code **)(*piVar9 + 0x3c);
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
        (**(code **)(*piVar5 + 0x38))();
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
        iVar1 = (**(code **)(*piVar5 + 0x7c))();
        uVar2 = __subsf3(DAT_000d19d0,*(undefined4 *)(iVar1 + 4));
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
        iVar1 = (**(code **)(*piVar5 + 0x7c))();
        uVar7 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
        uVar12 = __addsf3(uVar2,uVar7);
        cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        pCVar6 = aCStack_20;
        goto LAB_000d18f6;
      }
    }
    else {
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      pcVar11 = *(code **)(*piVar5 + 0x3c);
      piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      uVar12 = (**(code **)(*piVar9 + 0x38))();
      cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar5,aCStack_38);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
      pcVar11 = *(code **)(*piVar5 + 0x3c);
      piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
      uVar12 = (**(code **)(*piVar9 + 0x38))();
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar5,aCStack_30);
    }
  }
  else {
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    iVar1 = (**(code **)(*piVar4 + 0x38))();
    uVar7 = __subsf3(local_4c,*(undefined4 *)(param_1 + 300));
    uVar7 = __subsf3(*(undefined4 *)(iVar1 + 4),uVar7);
    iVar1 = __aeabi_fcmpge(uVar7,0);
    if (iVar1 == 0) goto LAB_000d1970;
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    pcVar11 = *(code **)(*piVar5 + 0x3c);
    piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    (**(code **)(*piVar9 + 0x38))();
    piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    iVar1 = (**(code **)(*piVar9 + 0x38))();
    uVar7 = __subsf3(local_4c,*(undefined4 *)(param_1 + 300));
    uVar12 = __subsf3(*(undefined4 *)(iVar1 + 4),uVar7);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar11)(piVar5,aCStack_48);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
    iVar1 = (**(code **)(*piVar5 + 0x38))();
    uVar2 = __divsf3(*(undefined4 *)(iVar1 + 4),uVar2);
    uVar2 = __mulsf3(uVar2,DAT_000d19d0);
    piVar9 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
    local_68 = *(code **)(*piVar9 + 0x3c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
    (**(code **)(*piVar5 + 0x38))();
    uVar12 = __subsf3(DAT_000d19d0,uVar2);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    pCVar6 = aCStack_40;
LAB_000d18f6:
    (*local_68)(piVar9,pCVar6);
  }
  __subsf3(local_4c,*(undefined4 *)(param_1 + 300));
  iVar1 = __fixsfsi();
  if (5 < (iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f)) {
    param_1[0x130] = (CCSet)0x1;
  }
LAB_000d191c:
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
  puVar10 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  *(undefined4 *)(param_1 + 0x118) = *puVar10;
  *(undefined4 *)(param_1 + 0x11c) = puVar10[1];
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
  puVar10 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  *(undefined4 *)(param_1 + 0x110) = *puVar10;
  *(undefined4 *)(param_1 + 0x114) = puVar10[1];
  *(undefined4 *)(param_1 + 0x128) = local_50;
  *(undefined4 *)(param_1 + 300) = local_4c;
  return;
}


