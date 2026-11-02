/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce3cc  Symbol: FUN_001ce3cc */

void FUN_001ce3cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  void *__src;
  int iVar3;
  size_t __n;
  uint local_28;
  uint local_24;
  
  iVar1 = FUN_001f3558(param_2);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_001f1f98(param_2);
  }
  iVar1 = FUN_00207ebc(param_1 + 9);
  if ((iVar1 == 0) ||
     ((*(char *)((int)param_1 + 0x45) == '\0' && (*(char *)((int)param_1 + 0x46) == '\0'))))
  goto LAB_001ce4c4;
  if ((int *)param_1[0x16] == (int *)0x0) {
LAB_001ce5b0:
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x14))();
  if (iVar1 != -1) {
    if (*(char *)((int)param_1 + 0x45) == '\0') {
      if (*(char *)((int)param_1 + 0x46) == '\0') goto LAB_001ce4c4;
      iVar1 = FUN_001ce288(param_1);
      if (iVar1 != 0) {
        iVar1 = param_1[0xf];
        param_1[1] = iVar1;
        param_1[2] = iVar1;
        param_1[3] = iVar1;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        goto LAB_001ce4c4;
      }
    }
    else {
      if ((int *)param_1[0x16] == (int *)0x0) goto LAB_001ce5b0;
      iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
      if (iVar1 == 0) {
        iVar3 = param_1[0x17];
        iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x1c))
                          ((int *)param_1[0x16],param_1 + 0xe,iVar3,param_1[0x19],
                           param_1[2] - param_1[1] >> 2);
        __src = (void *)(iVar3 + iVar1);
        __n = param_1[0x1a] - (int)__src;
        param_1[0x19] = (int)__src;
        if (__n != 0) {
          memmove((void *)param_1[0x17],__src,__n);
        }
        iVar1 = param_1[0xf];
        param_1[0x19] = param_1[0x17];
        param_1[0x1a] = param_1[0x17] + __n;
        param_1[1] = iVar1;
        param_1[2] = iVar1;
        param_1[3] = iVar1;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        param_1[0xd] = param_1[0xc];
        param_1[0xe] = param_1[0xc];
        goto LAB_001ce4c4;
      }
      if (((piVar2 == (int *)0x0) || (iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2), iVar1 != 0)) ||
         ((**(code **)(*param_1 + 0x10))(&local_28,param_1,0,0,1,param_1[0xb]),
         (local_28 & local_24) != 0xffffffff)) goto LAB_001ce4c4;
    }
  }
  piVar2 = (int *)0x0;
LAB_001ce4c4:
  param_1[0x16] = (int)piVar2;
  return;
}


