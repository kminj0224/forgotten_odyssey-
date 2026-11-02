/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b35c  Symbol: FUN_0018b35c */

undefined4 FUN_0018b35c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_24;
  undefined auStack_20 [4];
  int *local_1c [2];
  
  iVar8 = DAT_0018b4a8 + 0x18b368;
  if ((param_3 != 0) && (param_2 != 0)) {
    local_1c[0] = (int *)0x0;
    iVar1 = *(int *)(param_3 + 0x20);
    if (iVar1 == param_2) {
      if (*(int *)(param_3 + 0x14) == 0) {
        return 0;
      }
      if (*(uint *)(param_3 + 4) < 9) {
        uVar2 = 1 << (*(uint *)(param_3 + 4) & 0xff);
        if ((uVar2 & 0x1b8) != 0) {
          FUN_0018b26c(param_3);
          return 0;
        }
        if ((uVar2 & 6) != 0) {
          FUN_0018b26c(param_3);
          while (iVar6 = param_3, *(int *)(iVar6 + 4) == 1) {
            if (param_1 == 0) {
              for (piVar7 = *(int **)(iVar6 + 0x30); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7)
              {
                iVar4 = FUN_00189ab8(local_1c,auStack_20,&local_24,piVar7,piVar7);
                if (iVar4 == -1) goto LAB_0018b47a;
              }
            }
LAB_0018b3f2:
            iVar4 = *(int *)(iVar6 + 0x24);
            if (iVar4 != 0) {
              if (local_1c[0] != (int *)0x0) {
                piVar7 = local_1c[0];
                for (iVar3 = 0; iVar3 < local_24; iVar3 = iVar3 + 1) {
                  iVar5 = *piVar7;
                  piVar7 = piVar7 + 2;
                  if (iVar4 == iVar5) {
                    *(int *)(iVar6 + 0x24) = local_1c[0][iVar3 * 2 + 1];
                    goto LAB_0018b44c;
                  }
                }
              }
              iVar3 = 0;
              if ((param_1 == 0) &&
                 ((iVar3 = FUN_0018a5c0(iVar1,*(undefined4 *)(iVar4 + 8),
                                        *(undefined4 *)(iVar4 + 0xc)), iVar3 == 0 ||
                  (iVar4 = FUN_00189ab8(local_1c,auStack_20,&local_24,*(undefined4 *)(iVar6 + 0x24),
                                        iVar3), iVar4 == -1)))) {
LAB_0018b47a:
                if (local_1c[0] == (int *)0x0) {
                  return 0xffffffff;
                }
                (***(code ***)(iVar8 + DAT_0018b4ac))();
                return 0xffffffff;
              }
              *(int *)(iVar6 + 0x24) = iVar3;
            }
            if ((*(int *)(iVar6 + 4) != 1) ||
               (param_3 = *(int *)(iVar6 + 0x2c), *(int *)(iVar6 + 0x2c) == 0)) {
LAB_0018b44c:
              if ((*(int *)(iVar6 + 4) != 1) ||
                 (param_3 = *(int *)(iVar6 + 0xc), *(int *)(iVar6 + 0xc) == 0)) {
LAB_0018b458:
                while( true ) {
                  if (iVar6 == 0) {
                    if (local_1c[0] == (int *)0x0) {
                      return 0;
                    }
                    (***(code ***)(iVar8 + DAT_0018b4ac))();
                    return 0;
                  }
                  param_3 = *(int *)(iVar6 + 0x18);
                  if (*(int *)(iVar6 + 0x18) != 0) break;
                  iVar6 = *(int *)(iVar6 + 0x14);
                }
              }
            }
          }
          if (*(int *)(iVar6 + 4) == 2) goto LAB_0018b3f2;
          goto LAB_0018b458;
        }
      }
      return 1;
    }
  }
  return 0xffffffff;
}


