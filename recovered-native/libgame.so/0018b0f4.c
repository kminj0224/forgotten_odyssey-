/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b0f4  Symbol: FUN_0018b0f4 */

void * FUN_0018b0f4(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int iVar3;
  
  iVar3 = DAT_0018b174 + 0x18b100;
  __s = (void *)0x0;
  if (param_2 != (char *)0x0) {
    __s = (void *)(***(code ***)(iVar3 + DAT_0018b178))(0x3c);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar3 + DAT_0018b17c);
    }
    else {
      memset(__s,0,0x3c);
      *(undefined4 *)((int)__s + 4) = 5;
      *(undefined4 *)((int)__s + 0x20) = param_1;
      if (*param_2 == '&') {
        param_2 = param_2 + 1;
        iVar1 = FUN_0019c49c(param_2);
        if (param_2[iVar1 + -1] == ';') {
          iVar1 = iVar1 + -1;
        }
        uVar2 = FUN_0019c88c(param_2,iVar1);
      }
      else {
        uVar2 = FUN_0019c904(param_2);
      }
      iVar1 = DAT_0018b180;
      *(undefined4 *)((int)__s + 8) = uVar2;
      if ((*(int *)(iVar3 + iVar1 + 4) != 0) && (**(code ***)(iVar3 + DAT_0018b184) != (code *)0x0))
      {
        (***(code ***)(iVar3 + DAT_0018b184))(__s);
      }
    }
  }
  return __s;
}


