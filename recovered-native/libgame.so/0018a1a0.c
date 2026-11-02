/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a1a0  Symbol: FUN_0018a1a0 */

void * FUN_0018a1a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int iVar3;
  
  iVar3 = DAT_0018a228 + 0x18a1ac;
  __s = (void *)0x0;
  if (param_2 != 0) {
    __s = (void *)(***(code ***)(iVar3 + DAT_0018a22c))(0x3c);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar3 + DAT_0018a230);
    }
    else {
      memset(__s,0,0x3c);
      *(undefined4 *)((int)__s + 4) = 7;
      if ((param_1 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
        uVar2 = FUN_0019c904(param_2);
      }
      else {
        uVar2 = FUN_0019d178(*(int *)(param_1 + 0x50),param_2,0xffffffff);
      }
      *(undefined4 *)((int)__s + 8) = uVar2;
      if (param_3 != 0) {
        uVar2 = FUN_0019c904(param_3);
        *(undefined4 *)((int)__s + 0x28) = uVar2;
      }
      iVar1 = DAT_0018a234;
      *(int *)((int)__s + 0x20) = param_1;
      if (*(int *)(iVar3 + iVar1 + 4) != 0) {
        if (**(code ***)(iVar3 + DAT_0018a238) != (code *)0x0) {
          (***(code ***)(iVar3 + DAT_0018a238))(__s);
        }
      }
    }
  }
  return __s;
}


