/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a4ec  Symbol: FUN_0018a4ec */

void * FUN_0018a4ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  void **ppvVar3;
  int iVar4;
  void **ppvVar5;
  
  iVar4 = DAT_0018a5b0 + 0x18a4f8;
  if (((param_1 == 0) || (*(int *)(param_1 + 4) == 1)) &&
     ((param_3 == 0 || (iVar1 = FUN_0019c30c(param_3,iVar4 + DAT_0018a5b4), iVar1 == 0)))) {
    __s = (void *)(***(code ***)(iVar4 + DAT_0018a5b8))(0x18);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar4 + DAT_0018a5bc);
      return (void *)0x0;
    }
    memset(__s,0,0x18);
    *(undefined4 *)((int)__s + 4) = 0x12;
    if (param_2 != 0) {
      uVar2 = FUN_0019c904(param_2);
      *(undefined4 *)((int)__s + 8) = uVar2;
    }
    if (param_3 != 0) {
      uVar2 = FUN_0019c904(param_3);
      *(undefined4 *)((int)__s + 0xc) = uVar2;
    }
    if (param_1 == 0) {
      return __s;
    }
    ppvVar5 = *(void ***)(param_1 + 0x30);
    if (ppvVar5 == (void **)0x0) {
      *(void **)(param_1 + 0x30) = __s;
      return __s;
    }
    if ((ppvVar5[3] != (void *)0x0) || (*(int *)((int)__s + 0xc) != 0)) {
      iVar4 = FUN_0019c30c(ppvVar5[3],*(undefined4 *)((int)__s + 0xc));
      while (iVar4 == 0) {
        ppvVar3 = (void **)*ppvVar5;
        if (ppvVar3 == (void **)0x0) {
          *ppvVar5 = __s;
          return __s;
        }
        if ((ppvVar3[3] == (void *)0x0) && (*(int *)((int)__s + 0xc) == 0)) break;
        iVar4 = FUN_0019c30c(ppvVar3[3],*(undefined4 *)((int)__s + 0xc));
        ppvVar5 = ppvVar3;
      }
    }
    FUN_00189514(__s);
  }
  return (void *)0x0;
}


