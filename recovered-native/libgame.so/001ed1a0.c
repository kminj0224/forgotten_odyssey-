/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed1a0  Symbol: FUN_001ed1a0 */

uint FUN_001ed1a0(int *param_1,void *param_2,uint param_3,size_t param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *param_1;
  iVar2 = *(int *)(iVar3 + -0xc);
  if (iVar2 != 0) {
    uVar4 = iVar2 - 1;
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    do {
      pvVar1 = memchr(param_2,(uint)*(byte *)(iVar3 + uVar4),param_4);
      if (pvVar1 == (void *)0x0) {
        return uVar4;
      }
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  return 0xffffffff;
}


