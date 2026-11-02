/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb860  Symbol: ccTouchesMoved */

/* StageSelectChild::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void StageSelectChild::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  CCPoint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  CCPoint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = DAT_000cb9b0 + 0xcb86c;
  if (**(char **)(iVar4 + DAT_000cb9b4) == '\0') {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    local_30 = *(undefined4 *)(iVar1 + 0x18);
    local_2c = *(undefined4 *)(iVar1 + 0x1c);
    puVar3 = *(undefined4 **)(iVar4 + DAT_000cb9bc);
    uVar2 = __divsf3(*puVar3,DAT_000cb9b8);
    __divsf3(local_30,uVar2);
    uVar2 = __divsf3(puVar3[1],DAT_000cb9c0);
    uVar5 = __divsf3(local_2c,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    local_30 = local_20;
    local_2c = local_1c;
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28);
    cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::convertToGL(&local_38);
    uVar2 = *(undefined4 *)(param_1 + 0x118);
    local_28 = local_38;
    local_24 = local_34;
    iVar1 = __aeabi_fcmpeq(uVar2,0);
    if (iVar1 == 0) {
      uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x110),uVar2);
      iVar1 = __aeabi_fcmplt(uVar2,DAT_000cb9c4);
      if ((iVar1 != 0) && (1 < **(int **)(iVar4 + DAT_000cb9c8))) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000cb9cc + 0xcb914));
      }
      iVar1 = __aeabi_fcmpgt(uVar2,DAT_000cb9d8);
      if ((iVar1 != 0) && (**(int **)(iVar4 + DAT_000cb9c8) < 9)) {
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_000cb9dc + 0xcb968));
      }
      *(CCPoint *)(param_1 + 0x118) = local_28;
      *(undefined4 *)(param_1 + 0x11c) = local_24;
    }
  }
  return;
}


