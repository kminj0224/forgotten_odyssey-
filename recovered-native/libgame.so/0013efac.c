/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013efac  Symbol: addAction */

/* cocos2d::CCActionManager::addAction(cocos2d::CCAction*, cocos2d::CCNode*, bool) */

void __thiscall
cocos2d::CCActionManager::addAction
          (CCActionManager *this,CCAction *param_1,CCNode *param_2,bool param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void **ppvVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  int local_38;
  void *local_28;
  CCNode *local_1c [2];
  
  local_1c[0] = param_2;
  if (*(int *)(this + 0x14) != 0) {
    uVar2 = ((uint)param_2 & 0xff) + DAT_0013f308 + ((uint)param_2 & 0xff000000) +
            ((uint)param_2 >> 0x10 & 0xff) * 0x10000 + ((uint)param_2 >> 8 & 0xff) * 0x100 ^
            DAT_0013f310;
    uVar3 = uVar2 << 8 ^ DAT_0013f30c - uVar2;
    uVar4 = (DAT_0013f314 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    piVar6 = *(int **)(*(int *)(this + 0x14) + 0x14);
    ppiVar11 = *(int ***)((piVar6[1] - 1U & ((uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xf)) * 0xc +
                         *piVar6);
    if (ppiVar11 != (int **)0x0) {
      ppiVar11 = (int **)((int)ppiVar11 - piVar6[5]);
    }
    for (; ppiVar11 != (int **)0x0; ppiVar11 = (int **)((int)ppiVar11[9] - piVar6[5])) {
      if ((ppiVar11[0xb] == (int *)0x4) && (iVar7 = memcmp(ppiVar11[10],local_1c,4), iVar7 == 0))
      goto LAB_0013f2d6;
      if (ppiVar11[9] == (int *)0x0) break;
    }
  }
  ppiVar11 = (int **)calloc(0x34,1);
  *(bool *)((int)ppiVar11 + 0x11) = param_3;
  CCObject::retain((CCObject *)param_2);
  ppiVar11[7] = (int *)0x0;
  ppiVar11[10] = (int *)(ppiVar11 + 1);
  ppiVar11[1] = (int *)param_2;
  ppiVar11[0xb] = (int *)0x4;
  if (*(int *)(this + 0x14) == 0) {
    *(int ***)(this + 0x14) = ppiVar11;
    ppiVar11[6] = (int *)0x0;
    iVar7 = *(int *)(this + 0x14);
    pvVar1 = malloc(0x2c);
    *(void **)(iVar7 + 0x14) = pvVar1;
    if (*(void **)(*(int *)(this + 0x14) + 0x14) == (void *)0x0) goto LAB_0013f1f4;
    memset(*(void **)(*(int *)(this + 0x14) + 0x14),0,0x2c);
    *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x10) = *(int *)(this + 0x14) + 0x14;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x14) = 0x14;
    ppvVar8 = *(void ***)(*(int *)(this + 0x14) + 0x14);
    pvVar1 = malloc(0x180);
    *ppvVar8 = pvVar1;
    if (**(void ***)(*(int *)(this + 0x14) + 0x14) == (void *)0x0) goto LAB_0013f1f4;
    memset(**(void ***)(*(int *)(this + 0x14) + 0x14),0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x28) = DAT_0013f318;
  }
  else {
    *(int ***)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x10) + 8) = ppiVar11;
    ppiVar11[6] = (int *)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x10) -
                         *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x14));
    *(int ***)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x10) = ppiVar11 + 5;
  }
  iVar5 = DAT_0013f30c;
  iVar7 = DAT_0013f308;
  *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0xc) =
       *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0xc) + 1;
  uVar2 = DAT_0013f310;
  ppiVar11[5] = *(int **)(*(int *)(this + 0x14) + 0x14);
  uVar2 = (uint)*(byte *)(ppiVar11 + 1) + iVar7 + (uint)*(byte *)((int)ppiVar11 + 7) * 0x1000000 +
          (uint)*(byte *)((int)ppiVar11 + 6) * 0x10000 + (uint)*(byte *)((int)ppiVar11 + 5) * 0x100
          ^ uVar2;
  uVar3 = uVar2 << 8 ^ iVar5 - uVar2;
  uVar4 = (DAT_0013f314 - uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
  uVar4 = uVar3 >> 5 ^ (uVar4 - uVar2) - uVar3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
  piVar6 = (int *)(uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3);
  ppiVar11[0xc] = piVar6;
  iVar5 = ((uint)piVar6 & (*(int **)(*(int *)(this + 0x14) + 0x14))[1] - 1U) * 0xc;
  iVar7 = **(int **)(*(int *)(this + 0x14) + 0x14) + iVar5;
  *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  ppiVar11[9] = *(int **)(**(int **)(*(int *)(this + 0x14) + 0x14) + iVar5);
  ppiVar11[8] = (int *)0x0;
  iVar7 = *(int *)(**(int **)(*(int *)(this + 0x14) + 0x14) + iVar5);
  if (iVar7 != 0) {
    *(int ***)(iVar7 + 0xc) = ppiVar11 + 5;
  }
  *(int ***)(**(int **)(*(int *)(this + 0x14) + 0x14) + iVar5) = ppiVar11 + 5;
  iVar5 = **(int **)(*(int *)(this + 0x14) + 0x14) + iVar5;
  if (((uint)((*(int *)(iVar5 + 8) + 1) * 10) <= *(uint *)(iVar5 + 4)) &&
     (piVar6 = ppiVar11[5], piVar6[9] != 1)) {
    iVar7 = piVar6[1];
    pvVar1 = malloc(iVar7 * 0x18);
    if (pvVar1 == (void *)0x0) {
LAB_0013f1f4:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(pvVar1,0,iVar7 * 0x18);
    piVar6[6] = (uint)((piVar6[1] * 2 - 1U & piVar6[3]) != 0) +
                ((uint)piVar6[3] >> (piVar6[2] + 1U & 0xff));
    local_38 = 0;
    ppiVar11[5][7] = 0;
    for (local_28 = (void *)0x0; ppvVar8 = (void **)ppiVar11[5], local_28 < ppvVar8[1];
        local_28 = (void *)((int)local_28 + 1)) {
      iVar7 = *(int *)((int)*ppvVar8 + local_38);
      while (iVar7 != 0) {
        iVar9 = *(int *)(iVar7 + 0x10);
        piVar6 = ppiVar11[5];
        piVar10 = (int *)((int)pvVar1 + (piVar6[1] * 2 - 1U & *(uint *)(iVar7 + 0x1c)) * 0xc);
        iVar5 = piVar10[1];
        piVar10[1] = iVar5 + 1U;
        if ((uint)piVar6[6] < iVar5 + 1U) {
          piVar6[7] = piVar6[7] + 1;
          iVar5 = __udivsi3(piVar10[1],ppiVar11[5][6]);
          piVar10[2] = iVar5;
        }
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(int *)(iVar7 + 0x10) = *piVar10;
        if (*piVar10 != 0) {
          *(int *)(*piVar10 + 0xc) = iVar7;
        }
        *piVar10 = iVar7;
        iVar7 = iVar9;
      }
      local_38 = local_38 + 0xc;
    }
    free(*ppvVar8);
    ppiVar11[5][1] = ppiVar11[5][1] << 1;
    ppiVar11[5][2] = ppiVar11[5][2] + 1;
    iVar7 = 0;
    *ppiVar11[5] = (int)pvVar1;
    piVar6 = ppiVar11[5];
    if ((uint)piVar6[3] >> 1 < (uint)piVar6[7]) {
      iVar7 = piVar6[8] + 1;
    }
    piVar6[8] = iVar7;
    if (1 < (uint)ppiVar11[5][8]) {
      ppiVar11[5][9] = 1;
    }
  }
LAB_0013f2d6:
  actionAllocWithHashElement(this,(_hashElement *)ppiVar11);
  piVar6 = *ppiVar11;
  *(CCAction **)(*piVar6 * 4 + piVar6[2]) = param_1;
  CCObject::retain((CCObject *)param_1);
  *piVar6 = *piVar6 + 1;
  (**(code **)(*(int *)param_1 + 0x18))(param_1,param_2);
  return;
}


