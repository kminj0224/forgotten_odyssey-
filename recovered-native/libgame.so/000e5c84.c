/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5c84  Symbol: ccTouchesEnded */

/* Market_Unit::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Unit::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CCPoint local_20 [12];
  
  pcVar6 = *(char **)(DAT_000e5d14 + 0xe5c90);
  if (*pcVar6 == '\0') {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    puVar5 = *(undefined4 **)(DAT_000e5d18 + 0xe5ca6);
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar5,DAT_000e5d1c);
    __divsf3(uVar3,uVar2);
    uVar2 = __divsf3(puVar5[1],DAT_000e5d20);
    uVar7 = __divsf3(uVar4,uVar2);
    cocos2d::CCPoint::CCPoint(local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
    iVar1 = *(int *)(param_1 + 0x140);
    if (iVar1 == 0) {
      MargetTouchesEnded((CCPoint)param_1);
    }
    else if ((-1 < iVar1) && (iVar1 < 3)) {
      NoticeTouchEnded((CCPoint)param_1);
    }
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x1f);
    if ((iVar1 != 0) && (*pcVar6 == '\0')) {
      *pcVar6 = '\x01';
    }
  }
  return;
}


