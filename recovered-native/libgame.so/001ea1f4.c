/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ea1f4  Symbol: FUN_001ea1f4 */

undefined * FUN_001ea1f4(undefined *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_2 + *(int *)(*param_2 + -0xc);
  iVar1 = *(int *)(iVar3 + 0x70);
  *param_1 = 0;
  *(int **)(param_1 + 4) = param_2;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar3 + 0x14);
    if (uVar2 != 0) goto LAB_001ea25c;
    FUN_001e9dec();
    iVar3 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  uVar2 = *(uint *)(iVar3 + 0x14);
  if (uVar2 == 0) {
    *param_1 = 1;
    return param_1;
  }
LAB_001ea25c:
  FUN_001d1404(iVar3,uVar2 | 4);
  return param_1;
}


