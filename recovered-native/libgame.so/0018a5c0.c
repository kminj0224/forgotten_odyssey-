/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a5c0  Symbol: FUN_0018a5c0 */

int ** FUN_0018a5c0(int **param_1,undefined4 param_2,int param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  
  if ((param_1 != (int **)0x0) && (param_1 = (int **)FUN_00189a50(), param_1 != (int **)0x0)) {
    ppiVar3 = (int **)*param_1;
    ppiVar2 = param_1;
    while (ppiVar1 = ppiVar3, ppiVar1 != (int **)0x0) {
      if (((ppiVar1[3] == (int *)param_3) || (iVar4 = FUN_0019c30c(ppiVar1[3],param_3), iVar4 != 0))
         && (iVar4 = FUN_0019c30c(ppiVar1[2],param_2), iVar4 != 0)) {
        return ppiVar1;
      }
      ppiVar2 = ppiVar1;
      ppiVar3 = (int **)*ppiVar1;
    }
    param_1 = (int **)FUN_0018a4ec(0,param_2,param_3);
    *ppiVar2 = (int *)param_1;
  }
  return param_1;
}


