/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3d08  Symbol: ccTouchesBegan */

/* In_App_Layer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 In_App_Layer::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  CCPoint local_18 [8];
  
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar4 = *(undefined4 *)(undefined8 *)(iVar2 + 0x18);
  puVar6 = *(undefined4 **)(DAT_000d3d70 + 0xd3d1c);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  uVar1 = *(undefined8 *)(iVar2 + 0x18);
  uVar3 = __divsf3(*puVar6,DAT_000d3d74);
  __divsf3(uVar4,uVar3);
  uVar3 = __divsf3(puVar6[1],DAT_000d3d78);
  uVar7 = __divsf3(uVar5,uVar3);
  cocos2d::CCPoint::CCPoint(local_18,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  if ((**(char **)(DAT_000d3d7c + 0xd3d56) == '\0') && (*(int *)(param_1 + 0x11c) == 0)) {
    STEP_CASH_BEGAN((CCPoint)param_1);
  }
  return uVar1;
}


