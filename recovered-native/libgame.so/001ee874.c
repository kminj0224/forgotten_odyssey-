/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee874  Symbol: FUN_001ee874 */

int * FUN_001ee874(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_14 [8];
  
  iVar3 = *param_2;
  iVar2 = *param_1 + -0xc;
  iVar1 = iVar3 + -0xc;
  if (iVar1 != iVar2) {
    if (*(int *)(iVar3 + -4) < 0) {
      iVar3 = FUN_001ee194(iVar1,auStack_14,0);
      iVar2 = *param_1 + -0xc;
    }
    else if (iVar1 != DAT_001ee918 + 0x1ee8b0) {
      FUN_0021100c(iVar3 + -4,1);
      iVar2 = *param_1 + -0xc;
    }
    if (iVar2 != DAT_001ee91c + 0x1ee8c0) {
      FUN_001ed670(iVar2,auStack_14);
    }
    *param_1 = iVar3;
  }
  return param_1;
}


