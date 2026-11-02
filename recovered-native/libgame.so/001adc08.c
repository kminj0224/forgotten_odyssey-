/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001adc08  Symbol: FUN_001adc08 */

void FUN_001adc08(int *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_38;
  
  iVar9 = param_1[0x78];
  iVar7 = DAT_001addec + 0x1adc26;
  param_1[0x22] = *(int *)(iVar9 + 0x10);
  param_1[0x21] = *(int *)(iVar9 + 0x14);
  iVar4 = param_1[0x16];
  if (iVar4 == 1) {
    if (param_1[0x1e] == 3) {
      *(int *)(iVar9 + 4) = iVar7 + DAT_001ade0c;
    }
    else {
      *(int *)(iVar9 + 4) = iVar7 + DAT_001addf4;
    }
    *(undefined4 *)(iVar9 + 0x30) = 0;
    if (*(int *)(iVar9 + 0x1c) == 0) {
      FUN_001ad64c(param_1);
    }
    iVar4 = DAT_001addfc;
    if ((*(int *)(iVar9 + 0x34) == 0) && (iVar9 = param_1[0x78], 0 < param_1[0x1e])) {
      iVar6 = 0;
      iVar7 = iVar7 + DAT_001addf8;
      iVar12 = iVar9;
      do {
        iVar11 = *(int *)(iVar12 + 0x20);
        if (iVar6 == 0) {
LAB_001adcd8:
          local_38 = (**(code **)param_1[1])(param_1,1,0x400);
          iVar13 = 0;
          iVar5 = local_38;
          do {
            pbVar10 = (byte *)(iVar13 * 0x10 + iVar7 + 0xc);
            iVar8 = 0;
            do {
              bVar2 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              uVar3 = __divsi3((uint)bVar2 * iVar4 + DAT_001ade00,(iVar11 + -1) * 0x200);
              *(undefined4 *)(iVar5 + iVar8) = uVar3;
              iVar8 = iVar8 + 4;
            } while (iVar8 != 0x40);
            iVar13 = iVar13 + 1;
            iVar5 = iVar5 + 0x40;
          } while (iVar13 != 0x10);
        }
        else {
          iVar5 = 0;
          if (iVar11 != *(int *)(iVar9 + 0x20)) {
            iVar5 = 0;
            iVar13 = iVar9;
            do {
              iVar5 = iVar5 + 1;
              if (iVar6 <= iVar5) goto LAB_001adcd8;
              piVar1 = (int *)(iVar13 + 0x24);
              iVar13 = iVar13 + 4;
            } while (iVar11 != *piVar1);
          }
          local_38 = *(int *)(iVar9 + (iVar5 + 0xc) * 4 + 4);
          if (local_38 == 0) goto LAB_001adcd8;
        }
        *(int *)(iVar12 + 0x34) = local_38;
        iVar6 = iVar6 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar6 < param_1[0x1e]);
    }
  }
  else if (iVar4 == 0) {
    if (param_1[0x1e] == 3) {
      *(int *)(iVar9 + 4) = iVar7 + DAT_001ade08;
    }
    else {
      *(int *)(iVar9 + 4) = iVar7 + DAT_001addf0;
    }
  }
  else if (iVar4 == 2) {
    iVar7 = iVar7 + DAT_001ade04;
    *(undefined4 *)(iVar9 + 0x54) = 0;
    *(int *)(iVar9 + 4) = iVar7;
    if (*(int *)(iVar9 + 0x44) == 0) {
      iVar7 = param_1[0x78];
      iVar4 = param_1[0x1c];
      if (param_1[0x1e] < 1) {
        return;
      }
      iVar12 = 0;
      do {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,(iVar4 + 2) * 2);
        *(undefined4 *)(iVar7 + 0x44) = uVar3;
        iVar6 = param_1[0x1e];
        iVar12 = iVar12 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar12 < iVar6);
    }
    else {
      iVar6 = param_1[0x1e];
    }
    iVar4 = param_1[0x1c];
    if (0 < iVar6) {
      iVar7 = 0;
      do {
        jzero_far(*(undefined4 *)(iVar9 + 0x44),(iVar4 + 2) * 2);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar7 < param_1[0x1e]);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    (**(code **)*param_1)();
  }
  return;
}


