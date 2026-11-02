/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed39c  Symbol: FUN_001ed39c */

int FUN_001ed39c(void **param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  uint __n;
  uint uVar3;
  void *__s1;
  
  __s1 = *param_1;
  sVar1 = strlen(param_2);
  uVar3 = *(uint *)((int)__s1 + -0xc);
  __n = sVar1;
  if (uVar3 <= sVar1) {
    __n = uVar3;
  }
  iVar2 = memcmp(__s1,param_2,__n);
  if (iVar2 == 0) {
    iVar2 = uVar3 - sVar1;
  }
  return iVar2;
}


