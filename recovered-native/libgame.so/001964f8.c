/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001964f8  Symbol: FUN_001964f8 */

void * FUN_001964f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *__s;
  int iVar1;
  
  iVar1 = DAT_00196550 + 0x196504;
  __s = (void *)(***(code ***)(iVar1 + DAT_00196554))(0x60);
  if (__s == (void *)0x0) {
    FUN_00195c00(0,iVar1 + DAT_00196558);
  }
  else {
    memset(__s,0,0x60);
    *(undefined4 *)((int)__s + 4) = 0xd;
    *(void **)((int)__s + 0x20) = __s;
    *(undefined4 *)((int)__s + 0x28) = 1;
    *(undefined4 *)((int)__s + 0x4c) = 1;
    *(undefined4 *)((int)__s + 0x5c) = 0xa0;
    if ((param_2 != 0) || (param_1 != 0)) {
      FUN_0018a2f4(__s,iVar1 + DAT_0019655c,param_2,param_1,param_4);
    }
  }
  return __s;
}


