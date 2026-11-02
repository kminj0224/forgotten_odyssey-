/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168a40  Symbol: png_handle_as_unknown */

undefined png_handle_as_unknown(int param_1,void *param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  void *__s2;
  
  if (((param_2 == (void *)0x0) || (param_1 == 0)) || (iVar3 = *(int *)(param_1 + 0x2e4), iVar3 < 1)
     ) {
LAB_00168a7a:
    uVar1 = 0;
  }
  else {
    __s2 = (void *)(*(int *)(param_1 + 0x2e8) + (iVar3 + -1) * 5);
    while (iVar2 = memcmp(param_2,__s2,4), iVar2 != 0) {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) goto LAB_00168a7a;
      __s2 = (void *)((int)__s2 + -5);
    }
    uVar1 = *(undefined *)((int)__s2 + 4);
  }
  return uVar1;
}


