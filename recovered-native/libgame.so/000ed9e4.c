/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed9e4  Symbol: ccTouchesBegan */

/* Hero_Main_Layer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_Main_Layer::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  CCPoint aCStack_18 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  puVar5 = *(undefined4 **)(DAT_000eda2c + 0xed9f8);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar5,DAT_000eda30);
  __divsf3(uVar3,uVar2);
  uVar2 = __divsf3(puVar5[1],DAT_000eda34);
  uVar6 = __divsf3(uVar4,uVar2);
  cocos2d::CCPoint::CCPoint(aCStack_18,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  return;
}


