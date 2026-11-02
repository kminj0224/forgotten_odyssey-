/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001310b4  Symbol: ccTouchesEnded */

/* Ending_ani::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Ending_ani::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [8];
  undefined4 local_18;
  
  iVar1 = cocos2d::CCSet::begin((CCSet *)param_2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28);
  local_28 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x18);
  puVar3 = *(undefined4 **)(DAT_00131108 + 0x1310d2);
  local_24 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c);
  local_18 = local_28;
  uVar2 = __divsf3(*puVar3,DAT_0013110c);
  __divsf3(local_28,uVar2);
  uVar2 = __divsf3(puVar3[1],DAT_00131110);
  uVar4 = __divsf3(local_24,uVar2);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  return;
}


