/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020086c  Symbol: FUN_0020086c */

int * FUN_0020086c(int *param_1,int *param_2)

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
      iVar3 = FUN_00200188(iVar1,auStack_14,0);
      iVar2 = *param_1 + -0xc;
    }
    else if (iVar1 != DAT_00200910 + 0x2008a8) {
      FUN_0021100c(iVar3 + -4,1);
      iVar2 = *param_1 + -0xc;
    }
    if (iVar2 != DAT_00200914 + 0x2008b8) {
      FUN_001ff644(iVar2,auStack_14);
    }
    *param_1 = iVar3;
  }
  return param_1;
}


