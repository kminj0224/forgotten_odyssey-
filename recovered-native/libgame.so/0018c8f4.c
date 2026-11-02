/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c8f4  Symbol: FUN_0018c8f4 */

void * FUN_0018c8f4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *__s;
  int iVar3;
  
  iVar3 = DAT_0018c994 + 0x18c900;
  __s = (void *)0x0;
  if (param_2 != 0) {
    __s = (void *)(***(code ***)(iVar3 + DAT_0018c998))(0x30);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar3 + DAT_0018c99c);
    }
    else {
      memset(__s,0,0x30);
      *(undefined4 *)((int)__s + 4) = 2;
      if ((param_1 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
        uVar1 = FUN_0019c904(param_2);
      }
      else {
        uVar1 = FUN_0019d178(*(int *)(param_1 + 0x50),param_2,0xffffffff);
      }
      *(undefined4 *)((int)__s + 8) = uVar1;
      *(int *)((int)__s + 0x20) = param_1;
      if (param_3 != 0) {
        iVar2 = FUN_0018c4e4(param_1,param_3);
        *(int *)((int)__s + 0xc) = iVar2;
        *(undefined4 *)((int)__s + 0x10) = 0;
        for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
          *(void **)(iVar2 + 0x14) = __s;
          if (*(int *)(iVar2 + 0x18) == 0) {
            *(int *)((int)__s + 0x10) = iVar2;
          }
        }
      }
      if ((*(int *)(iVar3 + DAT_0018c9a0 + 4) != 0) &&
         (**(code ***)(iVar3 + DAT_0018c9a4) != (code *)0x0)) {
        (***(code ***)(iVar3 + DAT_0018c9a4))(__s);
      }
    }
  }
  return __s;
}


