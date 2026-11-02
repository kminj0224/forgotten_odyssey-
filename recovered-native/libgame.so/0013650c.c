/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013650c  Symbol: removeUpdateFromHash */

/* cocos2d::CCScheduler::removeUpdateFromHash(cocos2d::_listEntry*) */

void __thiscall cocos2d::CCScheduler::removeUpdateFromHash(CCScheduler *this,_listEntry *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  uint uVar5;
  int iVar6;
  int **ppiVar7;
  int **__ptr;
  int *piVar8;
  
  if (*(int *)(this + 0x24) != 0) {
    uVar1 = (uint)(byte)param_1[8] + DAT_001366b0 + (uint)(byte)param_1[0xb] * 0x1000000 +
            (uint)(byte)param_1[10] * 0x10000 + (uint)(byte)param_1[9] * 0x100 ^ DAT_001366b8;
    uVar3 = DAT_001366b4 - uVar1 ^ uVar1 << 8;
    uVar5 = (DAT_001366bc - uVar1) - uVar3 ^ uVar3 >> 0xd;
    uVar1 = (uVar1 - uVar3) - uVar5 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar1 << 0x10;
    uVar5 = (uVar5 - uVar1) - uVar3 ^ uVar3 >> 5;
    uVar1 = (uVar1 - uVar3) - uVar5 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar1 << 10;
    piVar8 = *(int **)(*(int *)(this + 0x24) + 0xc);
    __ptr = *(int ***)(((uVar3 >> 0xf ^ (uVar5 - uVar1) - uVar3) & piVar8[1] - 1U) * 0xc + *piVar8);
    if (__ptr != (int **)0x0) {
      __ptr = (int **)((int)__ptr - piVar8[5]);
    }
    for (; __ptr != (int **)0x0; __ptr = (int **)((int)__ptr[7] - piVar8[5])) {
      if ((__ptr[9] == (int *)0x4) && (iVar2 = memcmp(__ptr[8],param_1 + 8,4), iVar2 == 0)) {
        ppiVar7 = (int **)__ptr[1];
        ppiVar4 = (int **)*ppiVar7;
        if (ppiVar4 == ppiVar7) {
          **__ptr = 0;
        }
        else if (ppiVar7 == (int **)**__ptr) {
          *ppiVar7[1] = (int)ppiVar4;
          **__ptr = __ptr[1][1];
        }
        else {
          ppiVar4[1] = ppiVar7[1];
          piVar8 = (int *)__ptr[1][1];
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)**__ptr;
          }
          *piVar8 = *__ptr[1];
        }
        free(__ptr[1]);
        CCObject::release((CCObject *)__ptr[2]);
        if ((__ptr[4] == (int *)0x0) && (__ptr[5] == (int *)0x0)) {
          free(**(void ***)(*(int *)(this + 0x24) + 0xc));
          free(*(void **)(*(int *)(this + 0x24) + 0xc));
          *(undefined4 *)(this + 0x24) = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(this + 0x24) + 0xc);
          if (__ptr == (int **)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0x14))) {
            *(int *)(iVar2 + 0x10) = (int)__ptr[4] + *(int *)(iVar2 + 0x14);
          }
          if (__ptr[4] == (int *)0x0) {
            *(int **)(this + 0x24) = __ptr[5];
          }
          else {
            *(int **)((int)__ptr[4] + *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x14) + 8) =
                 __ptr[5];
          }
          if (__ptr[5] != (int *)0x0) {
            *(int **)((int)__ptr[5] + *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0x14) + 4) =
                 __ptr[4];
          }
          iVar6 = ((*(int **)(*(int *)(this + 0x24) + 0xc))[1] - 1U & (uint)__ptr[10]) * 0xc;
          iVar2 = **(int **)(*(int *)(this + 0x24) + 0xc) + iVar6;
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
          ppiVar4 = (int **)(**(int **)(*(int *)(this + 0x24) + 0xc) + iVar6);
          if ((int **)*ppiVar4 == __ptr + 3) {
            *ppiVar4 = __ptr[7];
          }
          if (__ptr[6] != (int *)0x0) {
            __ptr[6][4] = (int)__ptr[7];
          }
          if (__ptr[7] != (int *)0x0) {
            __ptr[7][3] = (int)__ptr[6];
          }
          *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) =
               *(int *)(*(int *)(*(int *)(this + 0x24) + 0xc) + 0xc) + -1;
        }
        free(__ptr);
        return;
      }
      if (__ptr[7] == (int *)0x0) {
        return;
      }
    }
  }
  return;
}


