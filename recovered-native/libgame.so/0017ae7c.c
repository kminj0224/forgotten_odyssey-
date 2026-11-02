/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ae7c  Symbol: FUN_0017ae7c */

int FUN_0017ae7c(int param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  piVar3 = *(int **)(param_1 + 0x24);
  if (piVar3 != (int *)0x0) {
    iVar4 = piVar3[3];
    iVar2 = piVar3[4] - iVar4;
    if (-1 < iVar2) {
      if (iVar2 < *(int *)(param_1 + 0xcc)) {
        iVar2 = *(int *)(param_1 + 0xcc);
      }
      if (*piVar3 == 0) {
        iVar6 = piVar3[6];
      }
      else {
        piVar1 = *(int **)(*piVar3 + 0x10);
        iVar4 = *piVar1;
        iVar6 = piVar1[1];
      }
      if (param_4 == 0) {
        if (param_3 != 0) {
          iVar6 = iVar6 + -1;
        }
      }
      else {
        iVar6 = iVar6 + -2;
      }
      pbVar5 = (byte *)(iVar4 + iVar2);
      for (; iVar2 < iVar6; iVar2 = iVar2 + 1) {
        if (*pbVar5 == param_2) {
          if (param_4 == 0) {
            if ((param_3 == 0) || (pbVar5[1] == param_3)) goto LAB_0017aeea;
          }
          else if ((pbVar5[1] == param_3) && (pbVar5[2] == param_4)) {
LAB_0017aeea:
            *(undefined4 *)(param_1 + 0xcc) = 0;
            return (piVar3[3] - piVar3[4]) + iVar2;
          }
        }
        pbVar5 = pbVar5 + 1;
      }
      *(int *)(param_1 + 0xcc) = iVar2;
    }
  }
  return -1;
}


