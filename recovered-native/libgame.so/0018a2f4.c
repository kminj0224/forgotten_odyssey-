/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a2f4  Symbol: FUN_0018a2f4 */

void * FUN_0018a2f4(int param_1,int param_2,int param_3,int param_4)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0018a430 + 0x18a300;
  if (param_1 != 0) {
    for (iVar2 = *(int *)(param_1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
      if (*(int *)(iVar2 + 4) == 0xe) goto LAB_0018a31a;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
LAB_0018a31a:
    if (iVar2 != 0) {
      return (void *)0x0;
    }
  }
  __s = (void *)(***(code ***)(iVar3 + DAT_0018a434))(0x40);
  if (__s == (void *)0x0) {
    FUN_001898e8(iVar3 + DAT_0018a438);
    return (void *)0x0;
  }
  memset(__s,0,0x40);
  *(undefined4 *)((int)__s + 4) = 0xe;
  if (param_2 != 0) {
    iVar2 = FUN_0019c904(param_2);
    *(int *)((int)__s + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_001898e8(iVar3 + DAT_0018a438);
      goto LAB_0018a35c;
    }
  }
  if (param_3 != 0) {
    iVar2 = FUN_0019c904(param_3);
    *(int *)((int)__s + 0x34) = iVar2;
    if (iVar2 != 0) goto LAB_0018a388;
    FUN_001898e8(iVar3 + DAT_0018a438);
    iVar2 = *(int *)((int)__s + 8);
LAB_0018a3b2:
    if (iVar2 != 0) {
      (***(code ***)(iVar3 + DAT_0018a43c))();
    }
LAB_0018a35c:
    (***(code ***)(iVar3 + DAT_0018a43c))(__s);
    return (void *)0x0;
  }
LAB_0018a388:
  if (param_4 != 0) {
    iVar2 = FUN_0019c904(param_4);
    *(int *)((int)__s + 0x38) = iVar2;
    if (iVar2 == 0) {
      FUN_001898e8(iVar3 + DAT_0018a438);
      if (*(int *)((int)__s + 8) != 0) {
        (***(code ***)(iVar3 + DAT_0018a43c))();
      }
      iVar2 = *(int *)((int)__s + 0x34);
      goto LAB_0018a3b2;
    }
  }
  if (param_1 != 0) {
    *(void **)(param_1 + 0x2c) = __s;
    *(int *)((int)__s + 0x14) = param_1;
    *(int *)((int)__s + 0x20) = param_1;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      *(void **)(param_1 + 0xc) = __s;
    }
    else {
      if (*(int *)(param_1 + 4) == 0xd) {
        *(void **)(iVar2 + 0x1c) = __s;
        *(int *)((int)__s + 0x18) = iVar2;
        *(void **)(param_1 + 0xc) = __s;
        goto LAB_0018a404;
      }
      do {
        if (*(int *)(iVar2 + 4) == 1) {
          *(int *)((int)__s + 0x18) = iVar2;
          iVar1 = *(int *)(iVar2 + 0x1c);
          *(int *)((int)__s + 0x1c) = iVar1;
          if (iVar1 == 0) {
            *(void **)(param_1 + 0xc) = __s;
          }
          else {
            *(void **)(iVar1 + 0x18) = __s;
          }
          *(void **)(iVar2 + 0x1c) = __s;
          goto LAB_0018a404;
        }
        iVar2 = *(int *)(iVar2 + 0x18);
      } while (iVar2 != 0);
      iVar2 = *(int *)(param_1 + 0x10);
      *(int *)((int)__s + 0x1c) = iVar2;
      *(void **)(iVar2 + 0x18) = __s;
      *(undefined4 *)((int)__s + 0x18) = 0;
    }
    *(void **)(param_1 + 0x10) = __s;
  }
LAB_0018a404:
  if (*(int *)(iVar3 + DAT_0018a440 + 4) == 0) {
    return __s;
  }
  if (**(code ***)(iVar3 + DAT_0018a444) != (code *)0x0) {
    (***(code ***)(iVar3 + DAT_0018a444))(__s);
    return __s;
  }
  return __s;
}


