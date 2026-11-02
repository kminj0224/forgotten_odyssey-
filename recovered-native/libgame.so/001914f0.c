/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001914f0  Symbol: FUN_001914f0 */

void FUN_001914f0(void *param_1)

{
  int iVar1;
  int *__ptr;
  
  iVar1 = DAT_001915b8 + 0x1914fa;
  if (param_1 != (void *)0x0) {
    if (param_1 == (void *)0xffffffff) {
      (***(code ***)(iVar1 + DAT_001915bc))
                (**(undefined4 **)(iVar1 + DAT_001915c0),iVar1 + DAT_001915c4);
    }
    else {
      if (*(void **)(iVar1 + DAT_001915c8 + 0x14) == param_1) {
        (***(code ***)(iVar1 + DAT_001915bc))
                  (**(undefined4 **)(iVar1 + DAT_001915c0),iVar1 + DAT_001915cc,param_1);
        FUN_00190f28();
      }
      __ptr = (int *)((int)param_1 + -0x18);
      if (*__ptr == DAT_001915d0) {
        if (*(int *)(iVar1 + DAT_001915c8) == *(int *)((int)param_1 + -0x10)) {
          FUN_00190f28();
        }
        *__ptr = DAT_001915d8;
        memset(param_1,-1,*(size_t *)((int)param_1 + -0xc));
        iVar1 = iVar1 + DAT_001915c8;
        FUN_0019c274(*(undefined4 *)(iVar1 + 0x10));
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - *(int *)((int)param_1 + -0xc);
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
        FUN_0019c278(*(undefined4 *)(iVar1 + 0x10));
        free(__ptr);
        return;
      }
      (***(code ***)(iVar1 + DAT_001915bc))
                (**(undefined4 **)(iVar1 + DAT_001915c0),iVar1 + DAT_001915d4,__ptr);
    }
    (***(code ***)(iVar1 + DAT_001915bc))
              (**(undefined4 **)(iVar1 + DAT_001915c0),iVar1 + DAT_001915dc,param_1);
    FUN_00190f28();
  }
  return;
}


