/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179afc  Symbol: FUN_00179afc */

undefined4 FUN_00179afc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = DAT_00179d98 + 0x179b08;
  if (param_1 == (int *)0x0) {
    FUN_00179364(0,iVar5 + DAT_00179d9c,0);
  }
  else {
    FUN_0019da48();
    if (param_1[0x4a] == 0) {
      iVar2 = FUN_0019d720();
      param_1[0x4a] = iVar2;
    }
    if (param_1[0x4a] != 0) {
      if (*param_1 == 0) {
        iVar2 = (***(code ***)(iVar5 + DAT_00179da4))(0x80);
        *param_1 = iVar2;
      }
      if (*param_1 != 0) {
        FUN_0019d8c8(*param_1,2);
        param_1[0x4c] = 0;
        param_1[0x4b] = 0;
        if (param_1[0xc] == 0) {
          iVar2 = (***(code ***)(iVar5 + DAT_00179da4))(0x14);
          param_1[0xc] = iVar2;
          param_1[0xb] = 5;
        }
        if (param_1[0xc] == 0) {
          FUN_00179430(0,iVar5 + DAT_00179da0);
        }
        else {
          while (iVar2 = FUN_0017ad38(param_1), iVar2 != 0) {
            FUN_00179898();
          }
          param_1[0x2b] = 0;
          param_1[0x2c] = 0;
          param_1[10] = 0;
          param_1[9] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = -1;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[8] = 0;
          param_1[0x18] = 0;
          param_1[0x2d] = 0;
          if (param_1[0x10] == 0) {
            iVar2 = (***(code ***)(iVar5 + DAT_00179da4))(0x28);
            param_1[0x10] = iVar2;
            param_1[0xf] = 10;
          }
          if (param_1[0x10] != 0) {
            param_1[0xe] = 0;
            param_1[0xd] = 0;
            if (param_1[0x31] == 0) {
              iVar2 = (***(code ***)(iVar5 + DAT_00179da4))(0x28);
              param_1[0x31] = iVar2;
              param_1[0x30] = 10;
            }
            if (param_1[0x31] == 0) {
              FUN_00179430(0,iVar5 + DAT_00179da0);
              param_1[0xe] = 0;
              param_1[0xf] = 0;
              param_1[0xd] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[9] = 0;
              param_1[0x2f] = 0;
              param_1[0x30] = 0;
              param_1[0x2e] = 0;
              return 0xffffffff;
            }
            param_1[0x2f] = 0;
            param_1[0x2e] = 0;
            if (param_1[0x3d] == 0) {
              iVar2 = (***(code ***)(iVar5 + DAT_00179da4))(0x28);
              param_1[0x3d] = iVar2;
              param_1[0x3c] = 10;
            }
            puVar6 = (undefined4 *)param_1[0x3d];
            if (puVar6 == (undefined4 *)0x0) {
              FUN_00179430(0,iVar5 + DAT_00179da0);
              param_1[0xe] = 0;
              param_1[0xf] = 0;
              param_1[0xd] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[9] = 0;
              param_1[0x2f] = 0;
              param_1[0x30] = 0;
              param_1[0x2e] = 0;
              param_1[0x3b] = 0;
              param_1[0x3c] = 0;
              param_1[0x3a] = 0;
              return 0xffffffff;
            }
            param_1[0x3b] = 1;
            param_1[0x3c] = 10;
            *puVar6 = 0xffffffff;
            iVar2 = DAT_00179da8;
            param_1[2] = 0;
            piVar3 = *(int **)(iVar5 + iVar2);
            param_1[0x3a] = param_1[0x3d];
            iVar2 = DAT_00179dac;
            param_1[3] = 1;
            param_1[0x59] = 1;
            param_1[0x19] = 1;
            param_1[1] = (int)param_1;
            iVar1 = DAT_00179db0;
            piVar4 = *(int **)(iVar5 + iVar2);
            param_1[0x45] = *piVar3;
            iVar2 = DAT_00179db4;
            piVar3 = *(int **)(iVar5 + iVar1);
            param_1[0x1a] = *piVar4;
            iVar1 = DAT_00179db8;
            piVar4 = *(int **)(iVar5 + iVar2);
            param_1[0x43] = *piVar3;
            piVar3 = *(int **)(iVar5 + iVar1);
            param_1[0x46] = *piVar4;
            iVar2 = *piVar3;
            param_1[0x34] = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)(iVar5 + DAT_00179dbc);
            }
            iVar1 = DAT_00179dc8;
            iVar2 = DAT_00179dc4;
            param_1[0x1c] = *(int *)(iVar5 + DAT_00179dc0);
            iVar2 = *(int *)(iVar5 + iVar2);
            param_1[0x22] = iVar1;
            param_1[0x1b] = (int)param_1;
            param_1[0x1d] = iVar2;
            if (param_1[0x1a] != 0) {
              if (**(int **)(iVar5 + DAT_00179dcc) == 0) {
                param_1[0x1d] = 0;
              }
              else {
                param_1[0x1d] = iVar2;
              }
              param_1[0x20] = 0;
            }
            iVar5 = **(int **)(iVar5 + DAT_00179dd0);
            param_1[0x32] = 0;
            param_1[0x33] = 0;
            param_1[0x36] = 0;
            param_1[0x3e] = 0;
            param_1[0x40] = 1;
            param_1[0x47] = 0;
            param_1[4] = iVar5;
            param_1[0x11] = 0;
            param_1[0x15] = 0;
            param_1[0x6e] = 0;
            param_1[0x13] = 0;
            param_1[0x12] = 0;
            param_1[0x14] = 0;
            return 0;
          }
          FUN_00179430(0,iVar5 + DAT_00179da0);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0xd] = 0;
        }
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[9] = 0;
        return 0xffffffff;
      }
    }
    FUN_00179430(0,iVar5 + DAT_00179da0);
  }
  return 0xffffffff;
}


