/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a7fe4  Symbol: FUN_001a7fe4 */

int * FUN_001a7fe4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 < 5) {
    *param_1 = param_2;
    if (0 < param_2) {
      iVar1 = 0;
      piVar2 = param_1;
      do {
        piVar2[1] = iVar1;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 != param_2);
    }
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[7] = param_3;
    param_1[8] = param_4;
    param_1 = param_1 + 9;
  }
  else {
    iVar1 = 0;
    piVar2 = param_1;
    do {
      piVar2[1] = iVar1;
      iVar1 = iVar1 + 1;
      *piVar2 = 1;
      piVar2[5] = 0;
      piVar2[6] = 0;
      piVar2[7] = param_3;
      piVar2[8] = param_4;
      piVar2 = piVar2 + 9;
    } while (iVar1 != param_2);
    param_1 = param_1 + iVar1 * 9;
  }
  return param_1;
}


