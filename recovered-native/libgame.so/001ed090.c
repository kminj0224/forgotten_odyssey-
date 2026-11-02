/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed090  Symbol: FUN_001ed090 */

uint FUN_001ed090(int *param_1,char *param_2,uint param_3)

{
  void *pvVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  __n = strlen(param_2);
  iVar3 = *param_1;
  iVar2 = *(int *)(iVar3 + -0xc);
  if (__n != 0 && iVar2 != 0) {
    uVar4 = iVar2 - 1;
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    do {
      pvVar1 = memchr(param_2,(uint)*(byte *)(iVar3 + uVar4),__n);
      if (pvVar1 != (void *)0x0) {
        return uVar4;
      }
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  return 0xffffffff;
}


