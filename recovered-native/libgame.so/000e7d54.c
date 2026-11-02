/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7d54  Symbol: ccTouchesEnded */

/* PayLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void PayLayer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCArray *this;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint local_30;
  undefined4 local_2c;
  CCPoint local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar7 = *(undefined4 *)(iVar1 + 0x18);
  puVar10 = *(undefined4 **)(DAT_000e7ebc + 0xe7d6a);
  uVar8 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar10,DAT_000e7ec0);
  __divsf3(uVar7,uVar2);
  uVar2 = __divsf3(puVar10[1],DAT_000e7ec4);
  uVar12 = __divsf3(uVar8,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  puVar10 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
  __subsf3(local_38,*puVar10);
  iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
  uVar12 = __addsf3(local_34,*(undefined4 *)(iVar1 + 4));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar11 = 0;
  local_30 = local_28;
  local_2c = local_24;
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
  while( true ) {
    uVar6 = cocos2d::CCArray::count(this);
    if (uVar6 <= uVar11) {
      return;
    }
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar11);
    local_30 = local_28;
    local_2c = local_24;
    iVar1 = Sprite_Touch2((CCNode *)piVar3,local_28);
    if (iVar1 != 0) break;
    uVar11 = uVar11 + 1;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
  uVar2 = (**(code **)(*piVar3 + 0xa0))(piVar3);
  *(undefined4 *)(iVar1 + 0x118) = uVar2;
  iVar1 = (**(code **)(*piVar3 + 0xa0))(piVar3);
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
  if (iVar1 == 0) {
    return;
  }
  piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000e7ec8);
  pcVar9 = *(code **)(*piVar4 + 0x3c);
  iVar1 = (**(code **)(*piVar3 + 0xa0))(piVar3);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
  puVar10 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  __addsf3(*puVar10,0x3f800000);
  iVar1 = (**(code **)(*piVar3 + 0xa0))(piVar3);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
  iVar1 = (**(code **)(*piVar3 + 0x38))();
  uVar12 = __addsf3(*(undefined4 *)(iVar1 + 4),0x3f800000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar9)(piVar4,aCStack_20);
  return;
}


