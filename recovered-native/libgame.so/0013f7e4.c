/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f7e4  Symbol: numberOfRunningActionsInTarget */

/* cocos2d::CCActionManager::numberOfRunningActionsInTarget(cocos2d::CCObject*) */

undefined8 cocos2d::CCActionManager::numberOfRunningActionsInTarget(CCObject *param_1)

{
  int iVar1;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  undefined local_14 [8];
  
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 != (int *)0x0) {
    piVar6 = *(int **)((int)piVar5 + 0x14);
    uVar2 = (in_r1 & 0xff) + DAT_0013f898 + (in_r1 & 0xff000000) + (in_r1 >> 0x10 & 0xff) * 0x10000
            + (in_r1 >> 8 & 0xff) * 0x100 ^ DAT_0013f89c;
    uVar3 = DAT_0013f8a0 - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_0013f8a4 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    ppiVar7 = *(int ***)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar6[1] - 1U) * 0xc + *piVar6
                        );
    if (ppiVar7 != (int **)0x0) {
      ppiVar7 = (int **)((int)ppiVar7 - piVar6[5]);
    }
    while (ppiVar7 != (int **)0x0) {
      if ((ppiVar7[0xb] == (int *)0x4) && (iVar1 = memcmp(ppiVar7[10],local_14,4), iVar1 == 0)) {
        if (*ppiVar7 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)**ppiVar7;
        }
        goto LAB_0013f88e;
      }
      piVar5 = ppiVar7[9];
      if (piVar5 == (int *)0x0) goto LAB_0013f88e;
      ppiVar7 = (int **)((int)piVar5 - piVar6[5]);
    }
    piVar5 = (int *)0x0;
  }
LAB_0013f88e:
  return CONCAT44(param_1,piVar5);
}


