/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b04c  Symbol: FUN_0018b04c */

void * FUN_0018b04c(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *__s;
  int iVar5;
  
  iVar5 = DAT_0018b0e0 + 0x18b058;
  __s = (void *)0x0;
  if (param_2 != (char *)0x0) {
    __s = (void *)(***(code ***)(iVar5 + DAT_0018b0e4))(0x3c);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar5 + DAT_0018b0e8);
    }
    else {
      memset(__s,0,0x3c);
      *(undefined4 *)((int)__s + 4) = 5;
      *(undefined4 *)((int)__s + 0x20) = param_1;
      if (*param_2 == '&') {
        param_2 = param_2 + 1;
        iVar2 = FUN_0019c49c(param_2);
        iVar4 = iVar2 + -1;
        cVar1 = param_2[iVar4];
        if (cVar1 == ';') {
          iVar2 = iVar2 + -1;
        }
        uVar3 = FUN_0019c88c(param_2,iVar2,cVar1,param_2 + iVar4,param_4);
      }
      else {
        uVar3 = FUN_0019c904(param_2);
      }
      *(undefined4 *)((int)__s + 8) = uVar3;
      iVar4 = FUN_001a2628(param_1,*(undefined4 *)((int)__s + 8));
      if (iVar4 != 0) {
        uVar3 = *(undefined4 *)(iVar4 + 0x28);
        *(int *)((int)__s + 0xc) = iVar4;
        *(int *)((int)__s + 0x10) = iVar4;
        *(undefined4 *)((int)__s + 0x28) = uVar3;
      }
      if (*(int *)(iVar5 + DAT_0018b0ec + 4) != 0) {
        if (**(code ***)(iVar5 + DAT_0018b0f0) != (code *)0x0) {
          (***(code ***)(iVar5 + DAT_0018b0f0))(__s);
        }
      }
    }
  }
  return __s;
}


