/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d4f84  Symbol: FUN_001d4f84 */

undefined * FUN_001d4f84(undefined *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  uVar3 = *(uint *)(iVar1 + 0x14);
  uVar2 = 0;
  *param_1 = 0;
  if (uVar3 == 0) {
    if (*(int *)(iVar1 + 0x70) != 0) {
      FUN_001e9dec(*(int *)(iVar1 + 0x70));
      iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
    }
    if (param_3 == 0) {
      uVar2 = 0;
      if ((*(uint *)(iVar1 + 0xc) & 0x1000) != 0) {
        piVar5 = *(int **)(iVar1 + 0x7c);
        if ((int *)piVar5[2] < (int *)piVar5[3]) {
          iVar6 = *(int *)piVar5[2];
        }
        else {
          iVar6 = (**(code **)(*piVar5 + 0x24))(piVar5);
          iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
        }
        piVar7 = *(int **)(iVar1 + 0x80);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4358();
        }
        if (iVar6 != -1) {
          do {
            iVar1 = (**(code **)(*piVar7 + 8))(piVar7,8,iVar6);
            if (iVar1 == 0) {
              if (iVar6 != -1) {
                iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
                uVar2 = 0;
                goto LAB_001d4fe0;
              }
              break;
            }
            piVar4 = (int *)piVar5[2];
            if (piVar4 < (int *)piVar5[3]) {
              iVar1 = *piVar4;
              piVar5[2] = (int)(piVar4 + 1);
            }
            else {
              iVar1 = (**(code **)(*piVar5 + 0x28))(piVar5);
            }
            if (iVar1 == -1) break;
            if ((int *)piVar5[2] < (int *)piVar5[3]) {
              iVar6 = *(int *)piVar5[2];
            }
            else {
              iVar6 = (**(code **)(*piVar5 + 0x24))(piVar5);
            }
          } while (iVar6 != -1);
          iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
        }
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0;
    }
LAB_001d4fe0:
    uVar3 = *(uint *)(iVar1 + 0x14);
    if ((uVar3 == 0) && (uVar2 == 0)) {
      *param_1 = 1;
      return param_1;
    }
  }
  FUN_001d1404(iVar1,uVar2 | 4 | uVar3);
  return param_1;
}


