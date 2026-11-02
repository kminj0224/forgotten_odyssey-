/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ea858  Symbol: FUN_001ea858 */

int * FUN_001ea858(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  char local_30 [4];
  int *local_2c;
  
  FUN_001ea1f4(local_30,param_1);
  if (local_30[0] == '\0') goto LAB_001ea8d8;
  iVar2 = *param_1;
  iVar5 = (int)param_1 + *(int *)(iVar2 + -0xc);
  iVar7 = *(int *)(iVar5 + 8);
  if (param_3 < iVar7) {
    bVar8 = (*(uint *)(iVar5 + 0xc) & 0xb0) == 0x20;
    if (!bVar8) {
      if (*(char *)(iVar5 + 0x78) == '\0') {
        piVar1 = *(int **)(iVar5 + 0x80);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4358();
        }
        iVar6 = (**(code **)(*piVar1 + 0x28))(piVar1,0x20);
        iVar2 = *param_1;
        *(int *)(iVar5 + 0x74) = iVar6;
        iVar4 = *(int *)(iVar2 + -0xc);
        *(undefined *)(iVar5 + 0x78) = 1;
        iVar5 = (int)param_1 + iVar4;
      }
      else {
        iVar6 = *(int *)(iVar5 + 0x74);
      }
      iVar4 = iVar7 - param_3;
      if (0 < iVar4) {
        do {
          piVar3 = *(int **)(iVar5 + 0x7c);
          piVar1 = (int *)piVar3[5];
          if (piVar1 < (int *)piVar3[6]) {
            *piVar1 = iVar6;
            piVar3[5] = (int)(piVar1 + 1);
            iVar5 = iVar6;
          }
          else {
            iVar5 = (**(code **)(*piVar3 + 0x34))(piVar3,iVar6);
            iVar2 = *param_1;
          }
          if (iVar5 == -1) {
            iVar2 = (int)param_1 + *(int *)(iVar2 + -0xc);
            FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1);
            iVar2 = *param_1;
            iVar5 = (int)param_1 + *(int *)(iVar2 + -0xc);
            break;
          }
          iVar4 = iVar4 + -1;
          iVar5 = (int)param_1 + *(int *)(iVar2 + -0xc);
        } while (iVar4 != 0);
      }
    }
    if (*(int *)(iVar5 + 0x14) == 0) {
      iVar2 = (**(code **)(**(int **)(iVar5 + 0x7c) + 0x30))
                        (*(int **)(iVar5 + 0x7c),param_2,param_3);
      if (param_3 != iVar2) {
        iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
        FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1);
      }
      iVar2 = *param_1;
      iVar5 = (int)param_1 + *(int *)(iVar2 + -0xc);
    }
    if ((bVar8) && (*(int *)(iVar5 + 0x14) == 0)) {
      if (*(char *)(iVar5 + 0x78) == '\0') {
        piVar1 = *(int **)(iVar5 + 0x80);
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4358();
        }
        iVar6 = (**(code **)(*piVar1 + 0x28))(piVar1,0x20);
        iVar2 = *param_1;
        *(int *)(iVar5 + 0x74) = iVar6;
        iVar4 = *(int *)(iVar2 + -0xc);
        *(undefined *)(iVar5 + 0x78) = 1;
        iVar5 = (int)param_1 + iVar4;
      }
      else {
        iVar6 = *(int *)(iVar5 + 0x74);
      }
      iVar7 = iVar7 - param_3;
      if (0 < iVar7) {
        while( true ) {
          piVar3 = *(int **)(iVar5 + 0x7c);
          piVar1 = (int *)piVar3[5];
          if (piVar1 < (int *)piVar3[6]) {
            *piVar1 = iVar6;
            piVar3[5] = (int)(piVar1 + 1);
            iVar5 = iVar6;
          }
          else {
            iVar5 = (**(code **)(*piVar3 + 0x34))(piVar3,iVar6);
            iVar2 = *param_1;
          }
          if (iVar5 == -1) {
            iVar2 = (int)param_1 + *(int *)(iVar2 + -0xc);
            FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1);
            iVar5 = *param_1;
            goto LAB_001ea9a8;
          }
          iVar7 = iVar7 + -1;
          iVar5 = *(int *)(iVar2 + -0xc);
          if (iVar7 == 0) break;
          iVar5 = (int)param_1 + iVar5;
        }
        goto LAB_001ea9ac;
      }
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(iVar5 + 0x7c) + 0x30))(*(int **)(iVar5 + 0x7c),param_2,param_3);
    iVar5 = *param_1;
    if (param_3 != iVar2) {
      iVar2 = (int)param_1 + *(int *)(iVar5 + -0xc);
      FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1);
      iVar5 = *param_1;
    }
LAB_001ea9a8:
    iVar5 = *(int *)(iVar5 + -0xc);
LAB_001ea9ac:
    iVar5 = (int)param_1 + iVar5;
  }
  *(undefined4 *)(iVar5 + 8) = 0;
LAB_001ea8d8:
  piVar1 = local_2c;
  iVar2 = *(int *)(*local_2c + -0xc);
  if (((((*(uint *)((int)local_2c + iVar2 + 0xc) & 0x2000) != 0) &&
       (iVar5 = std::uncaught_exception(), iVar5 == 0)) &&
      (piVar1 = *(int **)((int)piVar1 + iVar2 + 0x7c), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x18))(), iVar2 == -1)) {
    iVar2 = (int)local_2c + *(int *)(*local_2c + -0xc);
    FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 1);
  }
  return param_1;
}


