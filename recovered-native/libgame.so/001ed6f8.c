/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed6f8  Symbol: FUN_001ed6f8 */

void FUN_001ed6f8(int *param_1,size_t param_2,int param_3,int param_4)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  undefined auStack_24 [4];
  
  iVar2 = *param_1;
  uVar1 = (param_4 - param_3) + *(int *)(iVar2 + -0xc);
  __n = (*(int *)(iVar2 + -0xc) - param_2) - param_3;
  if ((*(uint *)(iVar2 + -8) < uVar1) || (0 < *(int *)(iVar2 + -4))) {
    iVar2 = FUN_001ed51c(uVar1,*(uint *)(iVar2 + -8),auStack_24);
    if (param_2 != 0) {
      if (param_2 == 1) {
        *(undefined *)(iVar2 + 0xc) = *(undefined *)*param_1;
      }
      else {
        memcpy((void *)(iVar2 + 0xc),(undefined *)*param_1,param_2);
      }
    }
    iVar2 = iVar2 + 0xc;
    if (__n != 0) {
      if (__n == 1) {
        *(undefined *)(iVar2 + param_4 + param_2) = *(undefined *)(*param_1 + param_3 + param_2);
      }
      else {
        memcpy((void *)(iVar2 + param_4 + param_2),(void *)(*param_1 + param_3 + param_2),__n);
      }
    }
    if (*param_1 + -0xc != DAT_001ed868 + 0x1ed76c) {
      FUN_001ed670(*param_1 + -0xc,auStack_24);
    }
    *param_1 = iVar2;
  }
  else if (param_3 != param_4 && __n != 0) {
    if (__n == 1) {
      *(undefined *)(iVar2 + param_4 + param_2) = *(undefined *)(iVar2 + param_3 + param_2);
      iVar2 = *param_1;
    }
    else {
      memmove((void *)(iVar2 + param_4 + param_2),(void *)(iVar2 + param_3 + param_2),__n);
      iVar2 = *param_1;
    }
  }
  if (iVar2 + -0xc != DAT_001ed86c + 0x1ed788) {
    *(undefined4 *)(iVar2 + -4) = 0;
    *(uint *)(iVar2 + -0xc) = uVar1;
    *(undefined *)(iVar2 + uVar1) = 0;
  }
  return;
}


