/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc1fc  Symbol: ccTouchesMoved */

/* EpisodeChild::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) */

void EpisodeChild::ccTouchesMoved(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int *piVar6;
  float extraout_s0;
  undefined8 uVar7;
  float extraout_s1;
  CCPoint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  CCPoint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  local_48 = *(undefined4 *)(iVar1 + 0x18);
  puVar4 = *(undefined4 **)(DAT_000cc314 + 0xcc212);
  local_44 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar4,DAT_000cc318);
  __divsf3(local_48,uVar2);
  uVar2 = __divsf3(puVar4[1],DAT_000cc31c);
  uVar7 = __divsf3(local_44,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  local_48 = local_40;
  local_44 = local_3c;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38);
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::convertToGL(&local_50);
  local_38 = local_50;
  local_34 = local_4c;
  uVar2 = __subsf3(local_4c,*(undefined4 *)(param_1 + 0x114));
  iVar1 = (**(code **)(**(int **)(param_1 + 0x118) + 0x38))();
  uVar7 = __addsf3(uVar2,*(undefined4 *)(iVar1 + 4));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::getWinSize();
  uVar2 = local_2c;
  iVar1 = __aeabi_fcmplt(local_2c,0);
  piVar6 = *(int **)(param_1 + 0x118);
  if (iVar1 == 0) {
    uVar3 = __subsf3(DAT_000cc324,local_24);
    iVar1 = __aeabi_fcmpgt(uVar2,uVar3);
    if (iVar1 == 0) {
      (**(code **)(*piVar6 + 0x3c))(piVar6,&local_30);
      *(CCPoint *)(param_1 + 0x110) = local_38;
      *(undefined4 *)(param_1 + 0x114) = local_34;
      iVar1 = DAT_000cc328;
      *(undefined4 *)((int)&DAT_000cc314 + DAT_000cc328) = local_30;
      *(undefined4 *)((int)&DAT_000cc318 + iVar1) = local_2c;
    }
    else {
      pcVar5 = *(code **)(*piVar6 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
      (*pcVar5)(piVar6,aCStack_20);
    }
  }
  else {
    (**(code **)(*piVar6 + 0x3c))(piVar6,DAT_000cc320 + 0xcc2be);
  }
  return;
}


