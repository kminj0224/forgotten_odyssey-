/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c70c  Symbol: FUN_0019c70c */

void * FUN_0019c70c(void *param_1,int param_2)

{
  size_t __n;
  int iVar1;
  void *__dest;
  
  iVar1 = DAT_0019c764 + 0x19c718;
  if ((param_2 < 0) || (param_1 == (void *)0x0)) {
    __dest = (void *)0x0;
  }
  else {
    __n = FUN_0019c68c();
    __dest = (void *)(***(code ***)(iVar1 + DAT_0019c768))(__n + 1);
    if (__dest == (void *)0x0) {
      (***(code ***)(iVar1 + DAT_0019c76c))
                (**(undefined4 **)(iVar1 + DAT_0019c770),iVar1 + DAT_0019c774,param_2 + 1);
    }
    else {
      memcpy(__dest,param_1,__n);
      *(undefined *)((int)__dest + __n) = 0;
    }
  }
  return __dest;
}


