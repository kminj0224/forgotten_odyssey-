/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001959c0  Symbol: FUN_001959c0 */

int FUN_001959c0(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = *(int **)(param_1 + 0x24);
  if (piVar6 != (int *)0x0) {
    iVar4 = piVar6[3];
    iVar3 = piVar6[4] - iVar4;
    if (-1 < iVar3) {
      if (iVar3 < *(int *)(param_1 + 0xcc)) {
        iVar3 = *(int *)(param_1 + 0xcc);
      }
      if (*piVar6 == 0) {
        iVar5 = piVar6[6];
      }
      else {
        piVar7 = *(int **)(*piVar6 + 0x10);
        iVar4 = *piVar7;
        iVar5 = piVar7[1];
      }
      if (param_4 == 0) {
        if (param_3 != 0) {
          iVar5 = iVar5 + -1;
        }
      }
      else {
        iVar5 = iVar5 + -2;
      }
      bVar1 = false;
      for (; iVar3 < iVar5; iVar3 = iVar3 + 1) {
        if (bVar1) {
LAB_00195a34:
          if (iVar5 <= iVar3 + 2) {
            return -1;
          }
          if (((*(char *)(iVar4 + iVar3) == '-') && (*(char *)(iVar4 + iVar3 + 1) == '-')) &&
             (*(char *)(iVar4 + iVar3 + 2) == '>')) {
            bVar1 = false;
            iVar3 = iVar3 + 2;
          }
          else {
            bVar1 = true;
          }
        }
        else {
          if (((((iVar3 + 4 < iVar5) && (param_5 == 0)) && (*(char *)(iVar4 + iVar3) == '<')) &&
              ((iVar2 = iVar4 + iVar3, *(char *)(iVar2 + 1) == '!' && (*(char *)(iVar2 + 2) == '-'))
              )) && (*(char *)(iVar2 + 3) == '-')) {
            iVar3 = iVar3 + 2;
            goto LAB_00195a34;
          }
          if (*(byte *)(iVar4 + iVar3) == param_2) {
            if (param_4 == 0) {
              if ((param_3 == 0) || (*(byte *)(iVar4 + iVar3 + 1) == param_3)) goto LAB_00195a78;
            }
            else if ((*(byte *)(iVar4 + iVar3 + 1) == param_3) &&
                    (*(byte *)(iVar4 + iVar3 + 2) == param_4)) {
LAB_00195a78:
              *(undefined4 *)(param_1 + 0xcc) = 0;
              return (piVar6[3] - piVar6[4]) + iVar3;
            }
          }
        }
      }
      *(int *)(param_1 + 0xcc) = iVar3;
    }
  }
  return -1;
}


