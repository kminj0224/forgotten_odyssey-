/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e4560  Symbol: ccTouchesBegan */

/* Market_Unit::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 Market_Unit::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  CCSet *local_20;
  CCEvent *local_1c;
  CCPoint local_18 [8];
  
  local_20 = param_1;
  local_1c = param_2;
  if (**(char **)(DAT_000e45ec + 0xe456a) == '\0') {
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    local_20 = *(CCSet **)(iVar1 + 0x18);
    puVar3 = *(undefined4 **)(DAT_000e45f0 + 0xe4580);
    local_1c = *(CCEvent **)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar3,DAT_000e45f4);
    __divsf3(local_20,uVar2);
    uVar2 = __divsf3(puVar3[1],DAT_000e45f8);
    uVar4 = __divsf3(local_1c,uVar2);
    cocos2d::CCPoint::CCPoint(local_18,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    if ((**(char **)(DAT_000e45fc + 0xe45ba) == '\0') &&
       (**(char **)(DAT_000e4600 + 0xe45c6) == '\0')) {
      if (*(int *)(param_1 + 0x140) == 0) {
        MargetTouchesBegan((CCPoint)param_1);
      }
      else if (*(int *)(param_1 + 0x140) == 1) {
        NoticeTouchBegan((CCPoint)param_1);
      }
    }
  }
  return CONCAT44(local_1c,local_20);
}


