/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135e58  Symbol: priorityIn */

/* cocos2d::CCScheduler::priorityIn(cocos2d::_listEntry**, cocos2d::CCObject*, int, bool) */

void __thiscall
cocos2d::CCScheduler::priorityIn
          (CCScheduler *this,_listEntry **param_1,CCObject *param_2,int param_3,bool param_4)

{
  int **ppiVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int **ppiVar7;
  int iVar8;
  int **ppiVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  size_t __size;
  void **ppvVar14;
  int iVar15;
  void *local_20;
  
  ppiVar1 = (int **)malloc(0x14);
  *ppiVar1 = (int *)0x0;
  ppiVar1[1] = (int *)0x0;
  *(undefined *)((int)ppiVar1 + 0x11) = 0;
  ppiVar1[2] = (int *)param_2;
  ppiVar1[3] = (int *)param_3;
  *(bool *)(ppiVar1 + 4) = param_4;
  ppiVar7 = (int **)*param_1;
  ppiVar9 = ppiVar7;
  if (ppiVar7 == (int **)0x0) {
    *param_1 = (_listEntry *)ppiVar1;
    *ppiVar1 = (int *)ppiVar1;
    ppiVar1[1] = (int *)0x0;
  }
  else {
    do {
      if (param_3 < (int)ppiVar9[3]) {
        ppiVar1[1] = (int *)ppiVar9;
        if (ppiVar9 == ppiVar7) {
          if (ppiVar9 == (int **)0x0) {
            *ppiVar1 = (int *)ppiVar1;
          }
          else {
            *ppiVar1 = *ppiVar9;
            *ppiVar9 = (int *)ppiVar1;
          }
          *param_1 = (_listEntry *)ppiVar1;
        }
        else {
          *ppiVar1 = *ppiVar9;
          (*ppiVar9)[1] = (int)ppiVar1;
          *ppiVar9 = (int *)ppiVar1;
        }
        goto LAB_00135ec6;
      }
      ppiVar9 = (int **)ppiVar9[1];
    } while (ppiVar9 != (int **)0x0);
    *ppiVar1 = *ppiVar7;
    (*ppiVar7)[1] = (int)ppiVar1;
    *(int ***)*param_1 = ppiVar1;
    ppiVar1[1] = (int *)0x0;
  }
LAB_00135ec6:
  puVar2 = (undefined4 *)calloc(0x2c,1);
  puVar2[2] = param_2;
  CCObject::retain(param_2);
  puVar2[5] = 0;
  puVar2[8] = puVar2 + 2;
  *puVar2 = param_1;
  puVar2[1] = ppiVar1;
  puVar2[9] = 4;
  if (*(int *)(this + 0x24) == 0) {
    *(undefined4 **)(this + 0x24) = puVar2;
    puVar2[4] = 0;
    pvVar3 = malloc(0x2c);
    puVar2[3] = pvVar3;
    if (*(void **)(*(int *)(this + 0x24) + 0xc) == (void *)0x0) goto LAB_0013605e;
    memset(*(void **)(*(int *)(this + 0x24) + 0xc),0,0x2c);
    *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x10) = *(int *)(this + 0x24) + 0xc;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x14) = 0xc;
    ppvVar14 = *(void ***)(*(int *)(this + 0x24) + 0xc);
    pvVar3 = malloc(0x180);
    *ppvVar14 = pvVar3;
    if (**(void ***)(*(int *)(this + 0x24) + 0xc) == (void *)0x0) goto LAB_0013605e;
    memset(**(void ***)(*(int *)(this + 0x24) + 0xc),0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x28) = DAT_0013614c;
  }
  else {
    *(undefined4 **)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x10) + 8) = puVar2;
    iVar10 = *(int *)(this + 0x24);
    iVar8 = *(int *)(iVar10 + 0xc);
    puVar2[4] = *(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 0x14);
    *(undefined4 **)(*(int *)(iVar10 + 0xc) + 0x10) = puVar2 + 3;
  }
  iVar10 = DAT_00136154;
  iVar8 = DAT_00136150;
  *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) =
       *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) + 1;
  iVar15 = *(int *)(this + 0x24);
  iVar4 = (uint)*(byte *)(puVar2 + 2) + DAT_00136158;
  puVar2[3] = *(undefined4 *)(iVar15 + 0xc);
  uVar5 = iVar4 + (uint)*(byte *)((int)puVar2 + 0xb) * 0x1000000 +
          (uint)*(byte *)((int)puVar2 + 10) * 0x10000 + (uint)*(byte *)((int)puVar2 + 9) * 0x100 ^
          DAT_0013615c;
  uVar6 = iVar8 - uVar5 ^ uVar5 << 8;
  uVar12 = (iVar10 - uVar5) - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar12 ^ uVar12 >> 0xc;
  uVar6 = (uVar6 - uVar12) - uVar5 ^ uVar5 << 0x10;
  uVar12 = uVar6 >> 5 ^ (uVar12 - uVar5) - uVar6;
  uVar5 = (uVar5 - uVar6) - uVar12 ^ uVar12 >> 3;
  uVar6 = (uVar6 - uVar12) - uVar5 ^ uVar5 << 10;
  uVar5 = uVar6 >> 0xf ^ (uVar12 - uVar5) - uVar6;
  puVar2[10] = uVar5;
  piVar13 = *(int **)(iVar15 + 0xc);
  iVar10 = (uVar5 & piVar13[1] - 1U) * 0xc;
  iVar8 = *piVar13 + iVar10;
  *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
  iVar8 = *(int *)(this + 0x24);
  puVar2[7] = *(undefined4 *)(**(int **)(iVar8 + 0xc) + iVar10);
  puVar2[6] = 0;
  iVar8 = *(int *)(**(int **)(iVar8 + 0xc) + iVar10);
  if (iVar8 != 0) {
    *(undefined4 **)(iVar8 + 0xc) = puVar2 + 3;
  }
  *(undefined4 **)(**(int **)(*(int *)(this + 0x24) + 0xc) + iVar10) = puVar2 + 3;
  iVar10 = **(int **)(*(int *)(this + 0x24) + 0xc) + iVar10;
  if (((uint)((*(int *)(iVar10 + 8) + 1) * 10) <= *(uint *)(iVar10 + 4)) &&
     (iVar8 = puVar2[3], *(int *)(iVar8 + 0x24) != 1)) {
    __size = *(int *)(iVar8 + 4) * 0x18;
    pvVar3 = malloc(__size);
    if (pvVar3 == (void *)0x0) {
LAB_0013605e:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(pvVar3,0,__size);
    iVar10 = 0;
    local_20 = (void *)0x0;
    *(uint *)(iVar8 + 0x18) =
         (uint)((*(int *)(iVar8 + 4) * 2 - 1U & *(uint *)(iVar8 + 0xc)) != 0) +
         (*(uint *)(iVar8 + 0xc) >> (*(int *)(iVar8 + 8) + 1U & 0xff));
    *(undefined4 *)(puVar2[3] + 0x1c) = 0;
    for (; ppvVar14 = (void **)puVar2[3], local_20 < ppvVar14[1];
        local_20 = (void *)((int)local_20 + 1)) {
      iVar8 = *(int *)((int)*ppvVar14 + iVar10);
      while (iVar8 != 0) {
        iVar15 = *(int *)(iVar8 + 0x10);
        iVar11 = puVar2[3];
        piVar13 = (int *)((int)pvVar3 +
                         (*(int *)(iVar11 + 4) * 2 - 1U & *(uint *)(iVar8 + 0x1c)) * 0xc);
        iVar4 = piVar13[1];
        piVar13[1] = iVar4 + 1U;
        if (*(uint *)(iVar11 + 0x18) < iVar4 + 1U) {
          *(int *)(iVar11 + 0x1c) = *(int *)(iVar11 + 0x1c) + 1;
          iVar4 = __udivsi3(piVar13[1],*(undefined4 *)(puVar2[3] + 0x18));
          piVar13[2] = iVar4;
        }
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(int *)(iVar8 + 0x10) = *piVar13;
        if (*piVar13 != 0) {
          *(int *)(*piVar13 + 0xc) = iVar8;
        }
        *piVar13 = iVar8;
        iVar8 = iVar15;
      }
      iVar10 = iVar10 + 0xc;
    }
    free(*ppvVar14);
    *(int *)(puVar2[3] + 4) = *(int *)(puVar2[3] + 4) << 1;
    *(int *)(puVar2[3] + 8) = *(int *)(puVar2[3] + 8) + 1;
    *(void **)puVar2[3] = pvVar3;
    iVar10 = puVar2[3];
    iVar8 = 0;
    if (*(uint *)(iVar10 + 0xc) >> 1 < *(uint *)(iVar10 + 0x1c)) {
      iVar8 = *(int *)(iVar10 + 0x20) + 1;
    }
    *(int *)(iVar10 + 0x20) = iVar8;
    if (1 < *(uint *)(puVar2[3] + 0x20)) {
      *(undefined4 *)(puVar2[3] + 0x24) = 1;
    }
  }
  return;
}


