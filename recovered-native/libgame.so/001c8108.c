/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c8108  Symbol: FUN_001c8108 */

int * FUN_001c8108(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  piVar5 = (int *)param_1[2];
  iVar8 = param_2 + 4;
  piVar7 = param_1;
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)param_1[3];
  }
  else {
    piVar1 = (int *)param_1[3];
    piVar6 = piVar5;
    piVar2 = piVar1;
    if (piVar1 != (int *)0x0) {
      do {
        piVar7 = piVar2;
        piVar2 = (int *)piVar7[2];
      } while ((int *)piVar7[2] != (int *)0x0);
      piVar6 = (int *)piVar7[3];
      if (piVar7 != param_1) {
        piVar5[1] = (int)piVar7;
        piVar7[2] = (int)piVar5;
        piVar5 = piVar7;
        if (piVar1 != piVar7) {
          bVar9 = piVar6 != (int *)0x0;
          piVar5 = (int *)piVar7[1];
          if (bVar9) {
            piVar6[1] = (int)piVar5;
          }
          piVar7[3] = (int)piVar1;
          piVar2 = (int *)0x0;
          if (bVar9) {
            piVar2 = (int *)piVar7[1];
          }
          iVar3 = param_1[3];
          if (!bVar9) {
            piVar2 = piVar5;
          }
          piVar2[2] = (int)piVar6;
          *(int **)(iVar3 + 4) = piVar7;
        }
        if (*(int **)(param_2 + 4) == param_1) {
          *(int **)(param_2 + 4) = piVar7;
          iVar3 = param_1[1];
        }
        else {
          iVar3 = param_1[1];
          if (*(int **)(iVar3 + 8) == param_1) {
            *(int **)(iVar3 + 8) = piVar7;
          }
          else {
            *(int **)(iVar3 + 0xc) = piVar7;
          }
        }
        iVar4 = *piVar7;
        *piVar7 = *param_1;
        piVar7[1] = iVar3;
        *param_1 = iVar4;
        goto LAB_001c81c0;
      }
    }
  }
  piVar5 = (int *)piVar7[1];
  if (piVar6 != (int *)0x0) {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(param_2 + 4) == param_1) {
    *(int **)(param_2 + 4) = piVar6;
  }
  else {
    iVar3 = param_1[1];
    if (*(int **)(iVar3 + 8) == param_1) {
      *(int **)(iVar3 + 8) = piVar6;
    }
    else {
      *(int **)(iVar3 + 0xc) = piVar6;
    }
  }
  if (*(int **)(param_2 + 8) == param_1) {
    piVar2 = piVar6;
    if (param_1[3] == 0) {
      *(int *)(param_2 + 8) = param_1[1];
    }
    else {
      do {
        piVar1 = piVar2;
        piVar2 = (int *)piVar1[2];
      } while (piVar2 != (int *)0x0);
      *(int **)(param_2 + 8) = piVar1;
    }
  }
  if (*(int **)(param_2 + 0xc) == param_1) {
    piVar2 = piVar6;
    if (param_1[2] != 0) {
      do {
        piVar1 = piVar2;
        piVar2 = (int *)piVar1[3];
      } while (piVar2 != (int *)0x0);
      iVar4 = *piVar7;
      *(int **)(param_2 + 0xc) = piVar1;
      param_1 = piVar7;
      goto LAB_001c81c0;
    }
    *(int *)(param_2 + 0xc) = param_1[1];
  }
  iVar4 = *piVar7;
  param_1 = piVar7;
LAB_001c81c0:
  if (iVar4 != 0) {
    while (piVar7 = piVar5, *(int **)(param_2 + 4) != piVar6) {
      if ((piVar6 != (int *)0x0) && (*piVar6 != 1)) goto LAB_001c81f0;
      piVar5 = (int *)piVar7[2];
      if (piVar5 == piVar6) {
        piVar5 = (int *)piVar7[3];
        if (*piVar5 == 0) {
          *piVar5 = 1;
          *piVar7 = 0;
          FUN_001c7e14(piVar7,iVar8);
          piVar5 = (int *)piVar7[3];
        }
        piVar2 = (int *)piVar5[2];
        if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
          piVar1 = (int *)piVar5[3];
          if ((piVar1 == (int *)0x0) || (*piVar1 == 1)) goto LAB_001c8248;
        }
        else {
          piVar1 = (int *)piVar5[3];
          if ((piVar1 == (int *)0x0) || (*piVar1 == 1)) {
            *piVar2 = 1;
            *piVar5 = 0;
            FUN_001c7e60(piVar5,iVar8);
            piVar5 = (int *)piVar7[3];
            piVar1 = (int *)piVar5[3];
          }
        }
        *piVar5 = *piVar7;
        *piVar7 = 1;
        if (piVar1 != (int *)0x0) {
          *piVar1 = 1;
        }
        FUN_001c7e14(piVar7,iVar8);
        break;
      }
      if (*piVar5 == 0) {
        *piVar5 = 1;
        *piVar7 = 0;
        FUN_001c7e60(piVar7,iVar8);
        piVar5 = (int *)piVar7[2];
      }
      piVar2 = (int *)piVar5[3];
      if ((piVar2 != (int *)0x0) && (*piVar2 != 1)) {
        piVar1 = (int *)piVar5[2];
        if ((piVar1 == (int *)0x0) || (*piVar1 == 1)) {
          *piVar2 = 1;
          *piVar5 = 0;
          FUN_001c7e14(piVar5,iVar8);
          piVar5 = (int *)piVar7[2];
          piVar1 = (int *)piVar5[2];
        }
LAB_001c8338:
        *piVar5 = *piVar7;
        *piVar7 = 1;
        if (piVar1 != (int *)0x0) {
          *piVar1 = 1;
        }
        FUN_001c7e60(piVar7,iVar8);
        break;
      }
      piVar1 = (int *)piVar5[2];
      if ((piVar1 != (int *)0x0) && (*piVar1 != 1)) goto LAB_001c8338;
LAB_001c8248:
      *piVar5 = 0;
      piVar5 = (int *)piVar7[1];
      piVar6 = piVar7;
    }
    if (piVar6 != (int *)0x0) {
LAB_001c81f0:
      *piVar6 = 1;
    }
  }
  return param_1;
}


