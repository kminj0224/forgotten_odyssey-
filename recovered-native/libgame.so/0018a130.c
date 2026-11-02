/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a130  Symbol: FUN_0018a130 */

void * FUN_0018a130(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int iVar3;
  
  iVar3 = DAT_0018a18c + 0x18a13c;
  __s = (void *)0x0;
  if (param_2 != 0) {
    __s = (void *)(***(code ***)(iVar3 + DAT_0018a190))(0x3c);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar3 + DAT_0018a194);
    }
    else {
      memset(__s,0,0x3c);
      *(undefined4 *)((int)__s + 4) = 1;
      uVar2 = FUN_0019c904(param_2);
      iVar1 = DAT_0018a198;
      *(undefined4 *)((int)__s + 0x24) = param_1;
      *(undefined4 *)((int)__s + 8) = uVar2;
      if (*(int *)(iVar3 + iVar1 + 4) != 0) {
        if (**(code ***)(iVar3 + DAT_0018a19c) != (code *)0x0) {
          (***(code ***)(iVar3 + DAT_0018a19c))(__s);
        }
      }
    }
  }
  return __s;
}


