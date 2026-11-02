/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ecf10  Symbol: FUN_001ecf10 */

uint FUN_001ecf10(int *param_1,char *param_2,uint param_3)

{
  int iVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  __n = strlen(param_2);
  iVar3 = *param_1;
  uVar2 = *(uint *)(iVar3 + -0xc);
  if (__n <= uVar2) {
    uVar2 = uVar2 - __n;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    do {
      iVar1 = memcmp((void *)(iVar3 + uVar2),param_2,__n);
      if (iVar1 == 0) {
        return uVar2;
      }
      bVar4 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar4);
  }
  return 0xffffffff;
}


