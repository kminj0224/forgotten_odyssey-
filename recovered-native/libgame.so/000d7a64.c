/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d7a64  Symbol: ccTouchesMoved */

/* Market_Equip::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Equip::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  CCPoint local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar6 = *(undefined4 *)(iVar1 + 0x18);
  uVar7 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = DAT_000d7c7c + 0xd7a7e;
  puVar8 = *(undefined4 **)(iVar1 + DAT_000d7c84);
  uVar2 = __divsf3(*puVar8,DAT_000d7c80);
  __divsf3(uVar6,uVar2);
  uVar2 = __divsf3(puVar8[1],DAT_000d7c88);
  uVar9 = __divsf3(uVar7,uVar2);
  cocos2d::CCPoint::CCPoint(local_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  if (**(int **)(iVar1 + DAT_000d7c8c) == 3) {
    uVar9 = __subsf3(*(undefined4 *)(*(int *)(iVar1 + DAT_000d7c90) + 4),local_2c);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    iVar3 = __aeabi_fcmpgt(local_28,DAT_000d7c94);
    if ((((iVar3 != 0) && (iVar3 = __aeabi_fcmplt(local_28,DAT_000d7c98), iVar3 != 0)) &&
        (iVar3 = __aeabi_fcmpgt(local_24,DAT_000d7c9c), iVar3 != 0)) &&
       (iVar3 = __aeabi_fcmplt(local_24,DAT_000d7ca0), iVar3 != 0)) {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,99);
      iVar3 = *(int *)((**(int **)(iVar1 + DAT_000d7ca4) + DAT_000d7cac) * 4 +
                      **(int **)(iVar1 + DAT_000d7ca8));
      iVar1 = DAT_000d7cb0;
      if (iVar3 != 100) {
        iVar1 = __divsi3(iVar3,5);
        iVar1 = iVar1 * 0x25 + 0x2e;
      }
      iVar3 = (**(code **)(*piVar4 + 0x38))(piVar4);
      uVar2 = __floatsisf(iVar1);
      uVar6 = __subsf3(local_24,*(undefined4 *)(param_1 + 0x128));
      uVar6 = __addsf3(uVar6,*(undefined4 *)(iVar3 + 4));
      iVar1 = __aeabi_fcmplt(uVar6,uVar2);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*piVar4 + 0x38))(piVar4);
        uVar2 = __subsf3(local_24,*(undefined4 *)(param_1 + 0x128));
        uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar1 + 4));
        iVar1 = __aeabi_fcmpgt(uVar2,DAT_000d7cb4);
        if (iVar1 != 0) {
          pcVar5 = *(code **)(*piVar4 + 0x3c);
          (**(code **)(*piVar4 + 0x38))(piVar4);
          iVar1 = (**(code **)(*piVar4 + 0x38))(piVar4);
          uVar2 = __subsf3(local_24,*(undefined4 *)(param_1 + 0x128));
          uVar9 = __addsf3(uVar2,*(undefined4 *)(iVar1 + 4));
          cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
          (*pcVar5)(piVar4,aCStack_20);
          iVar1 = DAT_000d7cb8;
          puVar8 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
          uVar9 = __extendsfdf2(*puVar8);
          iVar3 = (**(code **)(*piVar4 + 0x38))(piVar4);
          uVar10 = __extendsfdf2(*(undefined4 *)(iVar3 + 4));
          uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(iVar1 + 0xd7c0a),uVar2,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
                         (int)uVar10,uVar2);
        }
      }
      *(undefined4 *)(param_1 + 0x124) = local_28;
      *(undefined4 *)(param_1 + 0x128) = local_24;
    }
    if (param_1[300] == (CCSet)0x0) {
      __subsf3(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x120));
      iVar1 = __fixsfsi();
      if (5 < (iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f)) {
        param_1[300] = (CCSet)0x1;
      }
    }
  }
  return;
}


