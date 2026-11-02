/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c008  Symbol: FUN_0017c008 */

int FUN_0017c008(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (0 < param_2)) {
    iVar1 = FUN_00179dd4();
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_0018fc0c(param_1,param_2,0);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_001795e0(iVar1);
      if (piVar3 != (int *)0x0) {
        *piVar3 = iVar2;
        piVar3[1] = 0;
        piVar3[3] = **(int **)(iVar2 + 0x10);
        piVar3[4] = **(int **)(iVar2 + 0x10);
        piVar3[5] = **(int **)(iVar2 + 0x10) + (*(int **)(iVar2 + 0x10))[1];
        FUN_0017bfa0(iVar1);
        return iVar1;
      }
      FUN_0018ff94(iVar2);
    }
    FUN_00179908(iVar1);
  }
  return 0;
}


