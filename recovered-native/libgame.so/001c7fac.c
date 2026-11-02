/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c7fac  Symbol: FUN_001c7fac */

void FUN_001c7fac(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = param_4 + 4;
  param_2[1] = param_3;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  if (param_1 == 0) {
    *(int **)(param_3 + 0xc) = param_2;
    if (*(int *)(param_4 + 0xc) == param_3) {
      *(int **)(param_4 + 0xc) = param_2;
    }
  }
  else {
    *(int **)(param_3 + 8) = param_2;
    if (param_3 == param_4) {
      *(int **)(param_4 + 4) = param_2;
      *(int **)(param_4 + 0xc) = param_2;
    }
    else if (*(int *)(param_4 + 8) == param_3) {
      *(int **)(param_4 + 8) = param_2;
    }
  }
  piVar2 = *(int **)(param_4 + 4);
  do {
    while( true ) {
      if ((param_2 == piVar2) || (piVar4 = (int *)param_2[1], *piVar4 != 0)) {
        *piVar2 = 1;
        return;
      }
      piVar5 = (int *)piVar4[1];
      piVar3 = (int *)piVar5[2];
      if (piVar4 == piVar3) break;
      if ((piVar3 == (int *)0x0) || (iVar1 = *piVar3, iVar1 != 0)) {
        piVar2 = piVar4;
        if ((int *)piVar4[2] == param_2) {
          FUN_001c7e60(piVar4,iVar6);
          piVar2 = (int *)piVar4[1];
          param_2 = piVar4;
        }
        *piVar2 = 1;
        *piVar5 = 0;
        FUN_001c7e14(piVar5,iVar6);
        piVar2 = *(int **)(param_4 + 4);
      }
      else {
LAB_001c8048:
        *piVar4 = 1;
        *piVar3 = 1;
        *piVar5 = iVar1;
        param_2 = piVar5;
      }
    }
    piVar3 = (int *)piVar5[3];
    if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 == 0)) goto LAB_001c8048;
    piVar2 = piVar4;
    if ((int *)piVar4[3] == param_2) {
      FUN_001c7e14(piVar4,iVar6);
      piVar2 = (int *)piVar4[1];
      param_2 = piVar4;
    }
    *piVar2 = 1;
    *piVar5 = 0;
    FUN_001c7e60(piVar5,iVar6);
    piVar2 = *(int **)(param_4 + 4);
  } while( true );
}


