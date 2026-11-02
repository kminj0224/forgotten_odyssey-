/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e87b8  Symbol: FUN_001e87b8 */

int * FUN_001e87b8(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char local_30 [4];
  int *local_2c;
  
  FUN_001e811c(local_30,param_1);
  if (local_30[0] != '\0') {
    iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
    iVar5 = *(int *)(iVar3 + 8);
    if (param_3 < iVar5) {
      bVar6 = (*(uint *)(iVar3 + 0xc) & 0xb0) == 0x20;
      if (!bVar6) {
        if (*(char *)(iVar3 + 0x75) == '\0') {
          piVar1 = *(int **)(iVar3 + 0x7c);
          if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_001c4358();
          }
          if (*(char *)(piVar1 + 7) == '\0') {
            FUN_00204560(piVar1);
            uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x20);
          }
          else {
            uVar4 = (uint)*(byte *)((int)piVar1 + 0x3d);
          }
          *(char *)(iVar3 + 0x74) = (char)uVar4;
          iVar2 = *(int *)(*param_1 + -0xc);
          *(undefined *)(iVar3 + 0x75) = 1;
          iVar3 = (int)param_1 + iVar2;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar3 + 0x74);
        }
        iVar2 = iVar5 - param_3;
        if (0 < iVar2) {
          do {
            piVar1 = *(int **)(iVar3 + 0x78);
            if ((undefined *)piVar1[5] < (undefined *)piVar1[6]) {
              *(undefined *)piVar1[5] = (char)uVar4;
              piVar1[5] = piVar1[5] + 1;
            }
            else {
              iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,uVar4);
              if (iVar3 == -1) {
                iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
                FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
                iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
                break;
              }
            }
            iVar2 = iVar2 + -1;
            iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
          } while (iVar2 != 0);
        }
      }
      if (*(int *)(iVar3 + 0x14) == 0) {
        iVar3 = (**(code **)(**(int **)(iVar3 + 0x78) + 0x30))
                          (*(int **)(iVar3 + 0x78),param_2,param_3);
        iVar2 = *param_1;
        if (param_3 != iVar3) {
          iVar3 = (int)param_1 + *(int *)(iVar2 + -0xc);
          FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
          iVar2 = *param_1;
        }
        iVar3 = (int)param_1 + *(int *)(iVar2 + -0xc);
      }
      if ((bVar6) && (*(int *)(iVar3 + 0x14) == 0)) {
        if (*(char *)(iVar3 + 0x75) == '\0') {
          piVar1 = *(int **)(iVar3 + 0x7c);
          if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_001c4358();
          }
          if (*(char *)(piVar1 + 7) == '\0') {
            FUN_00204560(piVar1);
            uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x20);
          }
          else {
            uVar4 = (uint)*(byte *)((int)piVar1 + 0x3d);
          }
          *(char *)(iVar3 + 0x74) = (char)uVar4;
          iVar2 = *(int *)(*param_1 + -0xc);
          *(undefined *)(iVar3 + 0x75) = 1;
          iVar3 = (int)param_1 + iVar2;
        }
        else {
          uVar4 = (uint)*(byte *)(iVar3 + 0x74);
        }
        iVar5 = iVar5 - param_3;
        if (0 < iVar5) {
          while( true ) {
            piVar1 = *(int **)(iVar3 + 0x78);
            if ((undefined *)piVar1[5] < (undefined *)piVar1[6]) {
              *(undefined *)piVar1[5] = (char)uVar4;
              piVar1[5] = piVar1[5] + 1;
            }
            else {
              iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,uVar4);
              if (iVar3 == -1) {
                iVar5 = *param_1;
                goto LAB_001e891c;
              }
            }
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) break;
            iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
          }
          iVar3 = (int)param_1 + *(int *)(*param_1 + -0xc);
        }
      }
    }
    else {
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x78) + 0x30))
                        (*(int **)(iVar3 + 0x78),param_2,param_3);
      iVar5 = *param_1;
      if (param_3 != iVar3) {
LAB_001e891c:
        iVar3 = (int)param_1 + *(int *)(iVar5 + -0xc);
        FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
        iVar5 = *param_1;
      }
      iVar3 = (int)param_1 + *(int *)(iVar5 + -0xc);
    }
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  piVar1 = local_2c;
  iVar3 = *(int *)(*local_2c + -0xc);
  if (((((*(uint *)((int)local_2c + iVar3 + 0xc) & 0x2000) != 0) &&
       (iVar5 = std::uncaught_exception(), iVar5 == 0)) &&
      (piVar1 = *(int **)((int)piVar1 + iVar3 + 0x78), piVar1 != (int *)0x0)) &&
     (iVar3 = (**(code **)(*piVar1 + 0x18))(), iVar3 == -1)) {
    iVar3 = (int)local_2c + *(int *)(*local_2c + -0xc);
    FUN_001d0d2c(iVar3,*(uint *)(iVar3 + 0x14) | 1);
  }
  return param_1;
}


