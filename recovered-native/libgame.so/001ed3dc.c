/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed3dc  Symbol: FUN_001ed3dc */

int FUN_001ed3dc(int *param_1,uint param_2,uint param_3,char *param_4)

{
  size_t sVar1;
  uint uVar2;
  uint __n;
  int iVar3;
  
  iVar3 = *param_1;
  uVar2 = *(uint *)(iVar3 + -0xc);
  if (param_2 <= uVar2) {
    uVar2 = uVar2 - param_2;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    sVar1 = strlen(param_4);
    __n = sVar1;
    if (uVar2 <= sVar1) {
      __n = uVar2;
    }
    iVar3 = memcmp((void *)(iVar3 + param_2),param_4,__n);
    if (iVar3 == 0) {
      iVar3 = uVar2 - sVar1;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001c45d0((int)&DAT_001ed440 + DAT_001ed440);
}


