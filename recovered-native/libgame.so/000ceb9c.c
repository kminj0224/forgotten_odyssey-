/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ceb9c  Symbol: ccTouchesEnded */

/* CP_Shop::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void CP_Shop::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  CCArray *this;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  float extraout_s0;
  undefined8 uVar11;
  float extraout_s1;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint local_30 [2];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  if (**(char **)(DAT_000ced78 + 0xceba8) == '\0') {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar6 = *(undefined4 *)(iVar1 + 0x18);
    puVar9 = *(undefined4 **)(DAT_000ced7c + 0xcebc0);
    uVar7 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar9,DAT_000ced80);
    __divsf3(uVar6,uVar2);
    uVar2 = __divsf3(puVar9[1],DAT_000ced84);
    uVar11 = __divsf3(uVar7,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20))
    ;
    if (**(char **)(DAT_000ced88 + 0xcebfe) == '\0') {
      puVar9 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      __subsf3(local_38,*puVar9);
      iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar11 = __addsf3(local_34,*(undefined4 *)(iVar1 + 4));
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)local_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
      puVar9 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      iVar1 = __aeabi_fcmplt(*puVar9,local_38);
      if (iVar1 != 0) {
        puVar9 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar2 = __addsf3(*puVar9,DAT_000ced8c);
        iVar1 = __aeabi_fcmpgt(uVar2,local_38);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
          uVar2 = __subsf3(DAT_000ced84,*(undefined4 *)(iVar1 + 4));
          iVar1 = __aeabi_fcmpgt(uVar2,local_34);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
            uVar2 = __addsf3(*(undefined4 *)(iVar1 + 4),DAT_000ced90);
            uVar2 = __subsf3(DAT_000ced84,uVar2);
            iVar1 = __aeabi_fcmplt(uVar2,local_34);
            if (iVar1 != 0) {
              this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
              for (uVar10 = 0; uVar5 = cocos2d::CCArray::count(this), uVar10 < uVar5;
                  uVar10 = uVar10 + 1) {
                piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar10);
                iVar1 = (**(code **)(*piVar3 + 0xa0))();
                if ((iVar1 != DAT_000ced94) &&
                   (iVar1 = Sprite_Touch2((CCNode *)piVar3,local_30[0]), iVar1 != 0)) {
                  uVar2 = (**(code **)(*piVar3 + 0xa0))(piVar3);
                  iVar1 = DAT_000ced94;
                  *(undefined4 *)(param_1 + 0x120) = uVar2;
                  piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
                  pcVar8 = *(code **)(*piVar4 + 0x3c);
                  (**(code **)(*piVar3 + 0x38))(piVar3);
                  uVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
                  cocos2d::CCPoint::CCPoint
                            (aCStack_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
                  (*pcVar8)(piVar4,aCStack_28);
                }
              }
              return;
            }
          }
        }
      }
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000ced94);
      pcVar8 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
      (*pcVar8)(piVar3,aCStack_20);
    }
  }
  return;
}


