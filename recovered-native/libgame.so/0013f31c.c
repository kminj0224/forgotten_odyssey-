/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f31c  Symbol: removeAllActionsFromTarget */

/* cocos2d::CCActionManager::removeAllActionsFromTarget(cocos2d::CCObject*) */

undefined8 cocos2d::CCActionManager::removeAllActionsFromTarget(CCObject *param_1)

{
  int iVar1;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  undefined local_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  
  local_1c = (undefined)in_r1;
  bStack_1b = (byte)(in_r1 >> 8);
  bStack_1a = (byte)(in_r1 >> 0x10);
  bStack_19 = (byte)(in_r1 >> 0x18);
  if ((in_r1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x14) + 0x14);
    uVar2 = (in_r1 & 0xff) + DAT_0013f424 + (uint)bStack_19 * 0x1000000 + (uint)bStack_1a * 0x10000
            + (uint)bStack_1b * 0x100 ^ DAT_0013f428;
    uVar3 = DAT_0013f42c - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_0013f430 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    ppiVar5 = *(int ***)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar6[1] - 1U) * 0xc + *piVar6
                        );
    if (ppiVar5 != (int **)0x0) {
      ppiVar5 = (int **)((int)ppiVar5 - piVar6[5]);
    }
    for (; ppiVar5 != (int **)0x0; ppiVar5 = (int **)((int)ppiVar5[9] - piVar6[5])) {
      if ((ppiVar5[0xb] == (int *)0x4) && (iVar1 = memcmp(ppiVar5[10],&local_1c,4), iVar1 == 0)) {
        iVar1 = 0;
        goto LAB_0013f3d4;
      }
      if (ppiVar5[9] == (int *)0x0) break;
    }
  }
LAB_0013f422:
  return CONCAT17(bStack_19,CONCAT16(bStack_1a,CONCAT15(bStack_1b,CONCAT14(local_1c,param_1))));
LAB_0013f3d4:
  if (iVar1 == **ppiVar5) goto LAB_0013f3ec;
  if (*(int **)(iVar1 * 4 + (*ppiVar5)[2]) == ppiVar5[3]) {
    if ((iVar1 != -1) && (*(char *)(ppiVar5 + 4) == '\0')) {
      CCObject::retain((CCObject *)ppiVar5[3]);
      *(undefined *)(ppiVar5 + 4) = 1;
    }
    goto LAB_0013f3ec;
  }
  iVar1 = iVar1 + 1;
  goto LAB_0013f3d4;
LAB_0013f3ec:
  piVar6 = *ppiVar5;
  while (*piVar6 != 0) {
    iVar1 = *piVar6 + -1;
    *piVar6 = iVar1;
    CCObject::release(*(CCObject **)(iVar1 * 4 + piVar6[2]));
  }
  if (*(int ***)(param_1 + 0x18) == ppiVar5) {
    param_1[0x1c] = (CCObject)0x1;
  }
  else {
    deleteHashElement((CCActionManager *)param_1,(_hashElement *)ppiVar5);
  }
  goto LAB_0013f422;
}


