/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194698  Symbol: FUN_00194698 */

void FUN_00194698(int param_1,int **param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_001946d8 + 0x1946a4;
  iVar2 = iVar1 + DAT_001946dc;
  while( true ) {
    if (param_2 == (int **)0x0) {
      return;
    }
    if (param_1 == 0) break;
    FUN_0018ab00(param_1,param_2[1]);
    if (*param_2 == (int *)0x0) {
      FUN_0018a990(param_1,iVar1 + DAT_001946e0,param_3,0,param_4);
      return;
    }
    FUN_0018a990(param_1,iVar2,param_3,*param_2,param_4);
    param_2 = (int **)*param_2;
  }
  return;
}


