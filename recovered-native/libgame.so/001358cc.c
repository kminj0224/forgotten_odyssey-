/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001358cc  Symbol: scheduleSelector */

/* cocos2d::CCScheduler::scheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*,
   float, bool) */

void cocos2d::CCScheduler::scheduleSelector
               (_func_void_float *param_1,CCObject *param_2,float param_3,bool param_4)

{
  void *pvVar1;
  CCTimer *this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_r3;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  void **ppvVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  float fVar15;
  undefined4 in_stack_00000000;
  undefined in_stack_00000004;
  void *local_30;
  int *local_24;
  CCObject *local_20;
  uint local_1c;
  
  uVar3 = (uint)param_4;
  local_24 = in_r3;
  local_20 = param_2;
  local_1c = uVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar2 = ((uint)in_r3 & 0xff) + DAT_00135c60 + ((uint)in_r3 & 0xff000000) +
            ((uint)in_r3 >> 0x10 & 0xff) * 0x10000 + ((uint)in_r3 >> 8 & 0xff) * 0x100 ^
            DAT_00135c68;
    uVar4 = uVar2 << 8 ^ DAT_00135c64 - uVar2;
    uVar6 = (DAT_00135c6c - uVar2) - uVar4 ^ uVar4 >> 0xd;
    uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar2 << 0x10;
    uVar6 = (uVar6 - uVar2) - uVar4 ^ uVar4 >> 5;
    uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar2 << 10;
    piVar8 = *(int **)(*(int *)(param_1 + 0x28) + 0x14);
    ppiVar14 = *(int ***)((piVar8[1] - 1U & ((uVar6 - uVar2) - uVar4 ^ uVar4 >> 0xf)) * 0xc +
                         *piVar8);
    if (ppiVar14 != (int **)0x0) {
      ppiVar14 = (int **)((int)ppiVar14 - piVar8[5]);
    }
    for (; ppiVar14 != (int **)0x0; ppiVar14 = (int **)((int)ppiVar14[9] - piVar8[5])) {
      if ((ppiVar14[0xb] == (int *)0x4) && (iVar9 = memcmp(ppiVar14[10],&local_24,4), iVar9 == 0))
      goto LAB_00135bfc;
      if (ppiVar14[9] == (int *)0x0) break;
    }
  }
  ppiVar14 = (int **)calloc(0x34,1);
  ppiVar14[1] = local_24;
  if (local_24 != (int *)0x0) {
    CCObject::retain((CCObject *)local_24);
  }
  ppiVar14[7] = (int *)0x0;
  ppiVar14[10] = (int *)(ppiVar14 + 1);
  ppiVar14[0xb] = (int *)0x4;
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int ***)(param_1 + 0x28) = ppiVar14;
    ppiVar14[6] = (int *)0x0;
    iVar9 = *(int *)(param_1 + 0x28);
    pvVar1 = malloc(0x2c);
    *(void **)(iVar9 + 0x14) = pvVar1;
    if (*(void **)(*(int *)(param_1 + 0x28) + 0x14) == (void *)0x0) goto LAB_00135b20;
    memset(*(void **)(*(int *)(param_1 + 0x28) + 0x14),0,0x2c);
    *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x10) = *(int *)(param_1 + 0x28) + 0x14;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x14) = 0x14;
    ppvVar10 = *(void ***)(*(int *)(param_1 + 0x28) + 0x14);
    pvVar1 = malloc(0x180);
    *ppvVar10 = pvVar1;
    if (**(void ***)(*(int *)(param_1 + 0x28) + 0x14) == (void *)0x0) goto LAB_00135b20;
    memset(**(void ***)(*(int *)(param_1 + 0x28) + 0x14),0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x28) = DAT_00135c70;
  }
  else {
    *(int ***)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x10) + 8) = ppiVar14;
    ppiVar14[6] = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x10) -
                         *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x14));
    *(int ***)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0x10) = ppiVar14 + 5;
  }
  iVar7 = DAT_00135c64;
  iVar9 = DAT_00135c60;
  *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0xc) =
       *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x14) + 0xc) + 1;
  ppiVar14[5] = *(int **)(*(int *)(param_1 + 0x28) + 0x14);
  uVar4 = (uint)*(byte *)(ppiVar14 + 1) + iVar9 + (uint)*(byte *)((int)ppiVar14 + 7) * 0x1000000 +
          (uint)*(byte *)((int)ppiVar14 + 6) * 0x10000 + (uint)*(byte *)((int)ppiVar14 + 5) * 0x100
          ^ DAT_00135c68;
  uVar2 = uVar4 << 8 ^ iVar7 - uVar4;
  uVar11 = (DAT_00135c6c - uVar4) - uVar2 ^ uVar2 >> 0xd;
  uVar6 = (uVar4 - uVar2) - uVar11 ^ uVar11 >> 0xc;
  uVar2 = (uVar2 - uVar11) - uVar6 ^ uVar6 << 0x10;
  uVar4 = (uVar11 - uVar6) - uVar2 ^ uVar2 >> 5;
  uVar6 = (uVar6 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar6 << 10;
  piVar8 = (int *)(uVar2 >> 0xf ^ (uVar4 - uVar6) - uVar2);
  ppiVar14[0xc] = piVar8;
  iVar9 = ((uint)piVar8 & (*(int **)(*(int *)(param_1 + 0x28) + 0x14))[1] - 1U) * 0xc;
  iVar7 = **(int **)(*(int *)(param_1 + 0x28) + 0x14) + iVar9;
  *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  ppiVar14[9] = *(int **)(**(int **)(*(int *)(param_1 + 0x28) + 0x14) + iVar9);
  ppiVar14[8] = (int *)0x0;
  iVar7 = *(int *)(**(int **)(*(int *)(param_1 + 0x28) + 0x14) + iVar9);
  if (iVar7 != 0) {
    *(int ***)(iVar7 + 0xc) = ppiVar14 + 5;
  }
  *(int ***)(**(int **)(*(int *)(param_1 + 0x28) + 0x14) + iVar9) = ppiVar14 + 5;
  iVar9 = **(int **)(*(int *)(param_1 + 0x28) + 0x14) + iVar9;
  if (((uint)((*(int *)(iVar9 + 8) + 1) * 10) <= *(uint *)(iVar9 + 4)) &&
     (piVar8 = ppiVar14[5], piVar8[9] != 1)) {
    iVar9 = piVar8[1];
    pvVar1 = malloc(iVar9 * 0x18);
    if (pvVar1 == (void *)0x0) {
LAB_00135b20:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(pvVar1,0,iVar9 * 0x18);
    iVar9 = 0;
    local_30 = (void *)0x0;
    piVar8[6] = (uint)((piVar8[1] * 2 - 1U & piVar8[3]) != 0) +
                ((uint)piVar8[3] >> (piVar8[2] + 1U & 0xff));
    ppiVar14[5][7] = 0;
    for (; ppvVar10 = (void **)ppiVar14[5], local_30 < ppvVar10[1];
        local_30 = (void *)((int)local_30 + 1)) {
      iVar7 = *(int *)((int)*ppvVar10 + iVar9);
      while (iVar7 != 0) {
        iVar12 = *(int *)(iVar7 + 0x10);
        piVar8 = ppiVar14[5];
        piVar13 = (int *)((int)pvVar1 + (piVar8[1] * 2 - 1U & *(uint *)(iVar7 + 0x1c)) * 0xc);
        iVar5 = piVar13[1];
        piVar13[1] = iVar5 + 1U;
        if ((uint)piVar8[6] < iVar5 + 1U) {
          piVar8[7] = piVar8[7] + 1;
          iVar5 = __udivsi3(piVar13[1],ppiVar14[5][6]);
          piVar13[2] = iVar5;
        }
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(int *)(iVar7 + 0x10) = *piVar13;
        if (*piVar13 != 0) {
          *(int *)(*piVar13 + 0xc) = iVar7;
        }
        *piVar13 = iVar7;
        iVar7 = iVar12;
      }
      iVar9 = iVar9 + 0xc;
    }
    free(*ppvVar10);
    ppiVar14[5][1] = ppiVar14[5][1] << 1;
    ppiVar14[5][2] = ppiVar14[5][2] + 1;
    iVar9 = 0;
    *ppiVar14[5] = (int)pvVar1;
    piVar8 = ppiVar14[5];
    if ((uint)piVar8[3] >> 1 < (uint)piVar8[7]) {
      iVar9 = piVar8[8] + 1;
    }
    piVar8[8] = iVar9;
    if (1 < (uint)ppiVar14[5][8]) {
      ppiVar14[5][9] = 1;
    }
  }
  *(undefined *)((int)ppiVar14 + 0x11) = in_stack_00000004;
LAB_00135bfc:
  piVar8 = *ppiVar14;
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)malloc(0xc);
    *piVar8 = 0;
    pvVar1 = malloc(0x28);
    piVar8[2] = (int)pvVar1;
    piVar8[1] = 10;
    *ppiVar14 = piVar8;
  }
  else {
    for (iVar9 = 0; iVar9 != *piVar8; iVar9 = iVar9 + 1) {
      iVar7 = *(int *)(iVar9 * 4 + piVar8[2]);
      if ((param_2 == *(CCObject **)(iVar7 + 0x14)) &&
         ((uVar3 == *(uint *)(iVar7 + 0x18) ||
          (((param_2 == (CCObject *)0x0 && ((*(uint *)(iVar7 + 0x18) & 1) == 0)) && (!param_4))))))
      {
        *(undefined4 *)(iVar7 + 0x1c) = in_stack_00000000;
        return;
      }
    }
    while (uVar2 = piVar8[1], uVar2 < *piVar8 + 1U) {
      piVar8[1] = uVar2 << 1;
      pvVar1 = realloc((void *)piVar8[2],uVar2 << 3);
      piVar8[2] = (int)pvVar1;
    }
  }
  this = (CCTimer *)operator_new(0x2c);
  fVar15 = (float)CCTimer::CCTimer(this);
  local_20 = param_2;
  local_1c = uVar3;
  CCTimer::initWithTarget((CCObject *)this,(_func_void_float *)local_24,fVar15);
  piVar8 = *ppiVar14;
  *(CCTimer **)(*piVar8 * 4 + piVar8[2]) = this;
  CCObject::retain((CCObject *)this);
  *piVar8 = *piVar8 + 1;
  CCObject::release((CCObject *)this);
  return;
}


