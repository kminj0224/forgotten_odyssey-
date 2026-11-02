/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189a50  Symbol: FUN_00189a50 */

void * FUN_00189a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *__s;
  int iVar3;
  
  __s = (void *)0x0;
  iVar3 = DAT_00189aa4 + 0x189a5c;
  if ((param_1 != 0) && (__s = *(void **)(param_1 + 0x34), __s == (void *)0x0)) {
    __s = (void *)(***(code ***)(iVar3 + DAT_00189aa8))(0x18);
    if (__s == (void *)0x0) {
      FUN_001898e8(iVar3 + DAT_00189aac);
    }
    else {
      memset(__s,0,0x18);
      iVar1 = DAT_00189ab0;
      *(undefined4 *)((int)__s + 4) = 0x12;
      uVar2 = FUN_0019c904(iVar3 + iVar1);
      iVar1 = DAT_00189ab4;
      *(undefined4 *)((int)__s + 8) = uVar2;
      uVar2 = FUN_0019c904(iVar3 + iVar1);
      *(undefined4 *)((int)__s + 0xc) = uVar2;
      *(void **)(param_1 + 0x34) = __s;
    }
  }
  return __s;
}


