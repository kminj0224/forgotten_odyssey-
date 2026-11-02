/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136160  Symbol: appendIn */

/* cocos2d::CCScheduler::appendIn(cocos2d::_listEntry**, cocos2d::CCObject*, bool) */

void __thiscall
cocos2d::CCScheduler::appendIn
          (CCScheduler *this,_listEntry **param_1,CCObject *param_2,bool param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  size_t __size;
  uint uVar11;
  void **ppvVar12;
  int iVar13;
  void *local_20;
  
  piVar1 = (int *)malloc(0x14);
  *(bool *)(piVar1 + 4) = param_3;
  piVar1[2] = (int)param_2;
  *(_listEntry *)((int)piVar1 + 0x11) = (_listEntry)0x0;
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    *param_1 = (_listEntry *)piVar1;
    *piVar1 = (int)piVar1;
    piVar1[1] = 0;
  }
  else {
    *piVar1 = *piVar8;
    *(int **)(*piVar8 + 4) = piVar1;
    *(int **)*param_1 = piVar1;
    piVar1[1] = 0;
  }
  puVar2 = (undefined4 *)calloc(0x2c,1);
  puVar2[2] = param_2;
  CCObject::retain(param_2);
  puVar2[5] = 0;
  puVar2[8] = puVar2 + 2;
  *puVar2 = param_1;
  puVar2[1] = piVar1;
  puVar2[9] = 4;
  if (*(int *)(this + 0x24) == 0) {
    *(undefined4 **)(this + 0x24) = puVar2;
    puVar2[4] = 0;
    pvVar3 = malloc(0x2c);
    puVar2[3] = pvVar3;
    if (*(void **)(*(int *)(this + 0x24) + 0xc) == (void *)0x0) goto LAB_0013632e;
    memset(*(void **)(*(int *)(this + 0x24) + 0xc),0,0x2c);
    *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x10) = *(int *)(this + 0x24) + 0xc;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x14) = 0xc;
    ppvVar12 = *(void ***)(*(int *)(this + 0x24) + 0xc);
    pvVar3 = malloc(0x180);
    *ppvVar12 = pvVar3;
    if (**(void ***)(*(int *)(this + 0x24) + 0xc) == (void *)0x0) goto LAB_0013632e;
    memset(**(void ***)(*(int *)(this + 0x24) + 0xc),0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x28) = DAT_00136408;
  }
  else {
    *(undefined4 **)(*(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x10) + 8) = puVar2;
    iVar9 = *(int *)(this + 0x24);
    iVar6 = *(int *)(iVar9 + 0xc);
    puVar2[4] = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0x14);
    *(undefined4 **)(*(int *)(iVar9 + 0xc) + 0x10) = puVar2 + 3;
  }
  iVar9 = DAT_00136410;
  iVar6 = DAT_0013640c;
  *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) =
       *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) + 1;
  iVar13 = *(int *)(this + 0x24);
  puVar2[3] = *(undefined4 *)(iVar13 + 0xc);
  uVar4 = (uint)*(byte *)(puVar2 + 2) + DAT_00136414 +
          (uint)*(byte *)((int)puVar2 + 0xb) * 0x1000000 +
          (uint)*(byte *)((int)puVar2 + 10) * 0x10000 + (uint)*(byte *)((int)puVar2 + 9) * 0x100 ^
          DAT_00136418;
  uVar5 = iVar6 - uVar4 ^ uVar4 << 8;
  uVar11 = (iVar9 - uVar4) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar11 ^ uVar11 >> 0xc;
  uVar5 = (uVar5 - uVar11) - uVar4 ^ uVar4 << 0x10;
  uVar11 = uVar5 >> 5 ^ (uVar11 - uVar4) - uVar5;
  uVar4 = (uVar4 - uVar5) - uVar11 ^ uVar11 >> 3;
  uVar5 = (uVar5 - uVar11) - uVar4 ^ uVar4 << 10;
  uVar4 = uVar5 >> 0xf ^ (uVar11 - uVar4) - uVar5;
  puVar2[10] = uVar4;
  piVar1 = *(int **)(iVar13 + 0xc);
  iVar9 = (uVar4 & piVar1[1] - 1U) * 0xc;
  iVar6 = *piVar1 + iVar9;
  *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
  iVar6 = *(int *)(this + 0x24);
  puVar2[7] = *(undefined4 *)(**(int **)(iVar6 + 0xc) + iVar9);
  puVar2[6] = 0;
  iVar6 = *(int *)(**(int **)(iVar6 + 0xc) + iVar9);
  if (iVar6 != 0) {
    *(undefined4 **)(iVar6 + 0xc) = puVar2 + 3;
  }
  *(undefined4 **)(**(int **)(*(int *)(this + 0x24) + 0xc) + iVar9) = puVar2 + 3;
  iVar9 = **(int **)(*(int *)(this + 0x24) + 0xc) + iVar9;
  if (((uint)((*(int *)(iVar9 + 8) + 1) * 10) <= *(uint *)(iVar9 + 4)) &&
     (iVar6 = puVar2[3], *(int *)(iVar6 + 0x24) != 1)) {
    __size = *(int *)(iVar6 + 4) * 0x18;
    pvVar3 = malloc(__size);
    if (pvVar3 == (void *)0x0) {
LAB_0013632e:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(pvVar3,0,__size);
    iVar9 = 0;
    local_20 = (void *)0x0;
    *(uint *)(iVar6 + 0x18) =
         (uint)((*(int *)(iVar6 + 4) * 2 - 1U & *(uint *)(iVar6 + 0xc)) != 0) +
         (*(uint *)(iVar6 + 0xc) >> (*(int *)(iVar6 + 8) + 1U & 0xff));
    *(undefined4 *)(puVar2[3] + 0x1c) = 0;
    for (; ppvVar12 = (void **)puVar2[3], local_20 < ppvVar12[1];
        local_20 = (void *)((int)local_20 + 1)) {
      iVar6 = *(int *)((int)*ppvVar12 + iVar9);
      while (iVar6 != 0) {
        iVar10 = puVar2[3];
        iVar13 = *(int *)(iVar6 + 0x10);
        piVar1 = (int *)((int)pvVar3 +
                        (*(int *)(iVar10 + 4) * 2 - 1U & *(uint *)(iVar6 + 0x1c)) * 0xc);
        iVar7 = piVar1[1];
        piVar1[1] = iVar7 + 1U;
        if (*(uint *)(iVar10 + 0x18) < iVar7 + 1U) {
          *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + 1;
          iVar7 = __udivsi3(piVar1[1],*(undefined4 *)(puVar2[3] + 0x18));
          piVar1[2] = iVar7;
        }
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(int *)(iVar6 + 0x10) = *piVar1;
        if (*piVar1 != 0) {
          *(int *)(*piVar1 + 0xc) = iVar6;
        }
        *piVar1 = iVar6;
        iVar6 = iVar13;
      }
      iVar9 = iVar9 + 0xc;
    }
    free(*ppvVar12);
    *(int *)(puVar2[3] + 4) = *(int *)(puVar2[3] + 4) << 1;
    *(int *)(puVar2[3] + 8) = *(int *)(puVar2[3] + 8) + 1;
    *(void **)puVar2[3] = pvVar3;
    iVar9 = puVar2[3];
    iVar6 = 0;
    if (*(uint *)(iVar9 + 0xc) >> 1 < *(uint *)(iVar9 + 0x1c)) {
      iVar6 = *(int *)(iVar9 + 0x20) + 1;
    }
    *(int *)(iVar9 + 0x20) = iVar6;
    if (1 < *(uint *)(puVar2[3] + 0x20)) {
      *(undefined4 *)(puVar2[3] + 0x24) = 1;
    }
  }
  return;
}


