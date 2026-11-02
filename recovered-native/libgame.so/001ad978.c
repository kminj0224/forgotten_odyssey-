/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad978  Symbol: jinit_1pass_quantizer */

void jinit_1pass_quantizer(int *param_1)

{
  bool bVar1;
  undefined uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int local_38;
  int local_34;
  
  iVar15 = DAT_001adbf4;
  piVar3 = (int *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x78] = (int)piVar3;
  iVar15 = iVar15 + 0x1ad9a2;
  *piVar3 = DAT_001adbf8 + iVar15;
  piVar3[2] = DAT_001adbfc + iVar15;
  piVar3[3] = DAT_001adc00 + iVar15;
  piVar3[0x11] = 0;
  piVar3[0xd] = 0;
  if (4 < param_1[0x1e]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  iVar7 = param_1[0x18];
  if (0x100 < iVar7) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3b;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
    iVar7 = param_1[0x18];
  }
  iVar10 = param_1[0x78];
  iVar13 = param_1[0x1e];
  iVar6 = 1;
  do {
    iVar4 = iVar6;
    iVar6 = iVar4 + 1;
    iVar8 = iVar6;
    if (1 < iVar13) {
      iVar11 = 1;
      do {
        iVar11 = iVar11 + 1;
        iVar8 = iVar6 * iVar8;
      } while (iVar11 != iVar13);
    }
  } while (iVar8 <= iVar7);
  if (iVar4 == 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(int *)(*param_1 + 0x18) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  iVar6 = 1;
  if (0 < iVar13) {
    iVar8 = 0;
    piVar3 = (int *)(iVar10 + 0x20);
    do {
      iVar8 = iVar8 + 1;
      *piVar3 = iVar4;
      piVar3 = piVar3 + 1;
      iVar6 = iVar4 * iVar6;
    } while (iVar8 != iVar13);
  }
  iVar8 = 0;
  iVar15 = DAT_001adc04 + iVar15;
  bVar1 = false;
  if (iVar13 < 1) goto LAB_001ada7a;
  do {
    iVar4 = iVar8;
    if (param_1[0xb] == 2) {
      iVar4 = *(int *)(iVar8 * 4 + iVar15);
    }
    piVar3 = (int *)(iVar10 + 0x20) + iVar4;
    iVar4 = __divsi3(iVar6,*piVar3);
    iVar4 = (*piVar3 + 1) * iVar4;
    if (iVar7 < iVar4) goto LAB_001ada7a;
    *piVar3 = *piVar3 + 1;
    bVar1 = true;
    iVar8 = iVar8 + 1;
    while (iVar6 = iVar4, iVar13 <= iVar8) {
LAB_001ada7a:
      iVar4 = iVar6;
      if (!bVar1) {
        if (param_1[0x1e] == 3) {
          iVar15 = *param_1;
          *(int *)(iVar15 + 0x18) = iVar4;
          *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(iVar10 + 0x20);
          *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar10 + 0x24);
          *(undefined4 *)(iVar15 + 0x24) = *(undefined4 *)(iVar10 + 0x28);
          *(undefined4 *)(*param_1 + 0x14) = 0x60;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x61;
          *(int *)(*param_1 + 0x18) = iVar4;
        }
        (**(code **)(*param_1 + 4))(param_1,1);
        piVar3 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,iVar4,param_1[0x1e]);
        iVar15 = param_1[0x1e];
        if (0 < iVar15) {
          local_34 = 0;
          piVar14 = piVar3;
          iVar7 = iVar4;
          local_38 = iVar10;
          do {
            iVar13 = *(int *)(local_38 + 0x20);
            iVar6 = __divsi3(iVar7);
            if (0 < iVar13) {
              iVar15 = 0;
              iVar8 = 0;
              do {
                uVar2 = __divsi3((iVar13 + -1 >> 1) + iVar8,iVar13 + -1);
                if (iVar15 < iVar4) {
                  iVar16 = iVar7 + iVar15;
                  iVar11 = iVar15;
                  do {
                    iVar12 = 0;
                    if (0 < iVar6) {
                      do {
                        iVar9 = *piVar14 + iVar12;
                        iVar12 = iVar12 + 1;
                        *(undefined *)(iVar9 + iVar11) = uVar2;
                      } while (iVar12 != iVar6);
                    }
                    iVar16 = iVar16 + iVar7;
                    iVar11 = iVar7 + iVar11;
                  } while (iVar16 - iVar7 < iVar4);
                }
                iVar8 = iVar8 + 0xff;
                iVar15 = iVar15 + iVar6;
              } while (iVar8 != iVar13 * 0xff);
              iVar15 = param_1[0x1e];
            }
            piVar14 = piVar14 + 1;
            local_34 = local_34 + 1;
            local_38 = local_38 + 4;
            iVar7 = iVar6;
          } while (local_34 < iVar15);
        }
        *(int *)(iVar10 + 0x14) = iVar4;
        *(int **)(iVar10 + 0x10) = piVar3;
        FUN_001ad64c(param_1);
        if (param_1[0x16] == 2) {
          iVar6 = param_1[0x1c];
          iVar15 = param_1[0x78];
          for (iVar7 = 0; iVar7 < param_1[0x1e]; iVar7 = iVar7 + 1) {
            uVar5 = (**(code **)(param_1[1] + 4))(param_1,1,(iVar6 + 2) * 2);
            *(undefined4 *)(iVar15 + 0x44) = uVar5;
            iVar15 = iVar15 + 4;
          }
        }
        return;
      }
      bVar1 = false;
      iVar8 = 0;
    }
  } while( true );
}


