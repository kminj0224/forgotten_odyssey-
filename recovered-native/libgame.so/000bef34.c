/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bef34  Symbol: ani_remove */

/* ani_remove(_Unit_Stage*) */

void ani_remove(_Unit_Stage *param_1)

{
  CCObject *this;
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  local_20 = 8;
  if ((**(int **)(DAT_000bf000 + 0xbef40) == 0) &&
     (local_20 = 1, **(int **)(DAT_000bf004 + 0xbef54) == 0)) {
    local_20 = 8;
  }
  if (param_1 != (_Unit_Stage *)0x0) {
    if (*(int *)param_1 != 0) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 * 4;
        if (*(int *)(iVar1 + *(int *)param_1) != 0) {
          iVar5 = 0;
          do {
            pvVar2 = *(void **)(iVar5 * 4 + *(int *)(iVar1 + *(int *)param_1));
            if (pvVar2 != (void *)0x0) {
              FUN_001ed6b8(pvVar2);
              operator_delete(pvVar2);
              *(undefined4 *)(iVar5 * 4 + *(int *)(iVar1 + *(int *)param_1)) = 0;
            }
            iVar3 = (iVar5 + 0x50) * 4;
            this = *(CCObject **)(iVar3 + *(int *)(iVar1 + *(int *)param_1));
            if (this != (CCObject *)0x0) {
              cocos2d::CCObject::release(this);
              *(undefined4 *)(iVar3 + *(int *)(iVar1 + *(int *)param_1)) = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x50);
          operator_delete(*(void **)(iVar4 * 4 + *(int *)param_1));
          *(undefined4 *)(iVar4 * 4 + *(int *)param_1) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_20);
      operator_delete(*(void **)param_1);
      *(undefined4 *)param_1 = 0;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    operator_delete(param_1);
  }
  return;
}


