/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f704  Symbol: getActionByTag */

/* cocos2d::CCActionManager::getActionByTag(unsigned int, cocos2d::CCObject*) */

undefined8 __thiscall
cocos2d::CCActionManager::getActionByTag(CCActionManager *this,uint param_1,CCObject *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int **ppiVar7;
  CCObject *local_14;
  
  piVar5 = *(int **)(this + 0x14);
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)piVar5[5];
    uVar2 = ((uint)param_2 & 0xff) + DAT_0013f7d4 + ((uint)param_2 & 0xff000000) +
            ((uint)param_2 >> 0x10 & 0xff) * 0x10000 + ((uint)param_2 >> 8 & 0xff) * 0x100 ^
            DAT_0013f7d8;
    uVar3 = DAT_0013f7dc - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_0013f7e0 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    ppiVar7 = *(int ***)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar6[1] - 1U) * 0xc + *piVar6
                        );
    local_14 = param_2;
    if (ppiVar7 != (int **)0x0) {
      ppiVar7 = (int **)((int)ppiVar7 - piVar6[5]);
    }
    while (ppiVar7 != (int **)0x0) {
      if ((ppiVar7[0xb] == (int *)0x4) && (iVar1 = memcmp(ppiVar7[10],&local_14,4), iVar1 == 0)) {
        piVar6 = *ppiVar7;
        if (piVar6 == (int *)0x0) {
          piVar5 = (int *)0x0;
          goto LAB_0013f7c8;
        }
        iVar1 = 0;
        goto LAB_0013f7c2;
      }
      piVar5 = ppiVar7[9];
      if (piVar5 == (int *)0x0) goto LAB_0013f7c8;
      ppiVar7 = (int **)((int)piVar5 - piVar6[5]);
    }
    piVar5 = (int *)0x0;
  }
LAB_0013f7c8:
  return CONCAT44(this,piVar5);
LAB_0013f7c2:
  if (iVar1 == *piVar6) goto code_r0x0013f7c6;
  piVar5 = *(int **)(iVar1 * 4 + piVar6[2]);
  if (piVar5[7] == param_1) goto LAB_0013f7c8;
  iVar1 = iVar1 + 1;
  goto LAB_0013f7c2;
code_r0x0013f7c6:
  piVar5 = (int *)0x0;
  goto LAB_0013f7c8;
}


