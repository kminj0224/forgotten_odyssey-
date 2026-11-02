/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ecf8c  Symbol: FUN_001ecf8c */

uint FUN_001ecf8c(int *param_1,void *param_2,uint param_3,size_t param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 != 0) {
    iVar3 = *param_1;
    uVar2 = *(uint *)(iVar3 + -0xc);
    if (param_3 < uVar2) {
      do {
        pvVar1 = memchr(param_2,(uint)*(byte *)(iVar3 + param_3),param_4);
        if (pvVar1 != (void *)0x0) {
          return param_3;
        }
        param_3 = param_3 + 1;
      } while (param_3 < uVar2);
    }
  }
  return 0xffffffff;
}


