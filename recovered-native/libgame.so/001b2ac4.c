/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2ac4  Symbol: FUN_001b2ac4 */

undefined4 FUN_001b2ac4(int *param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_44;
  int local_3c;
  
  iVar6 = param_1[0x69];
  if (param_1[0x3b] != 0) {
    iVar7 = *(int *)(iVar6 + 0x24);
    if (iVar7 == 0) {
      if (0 < param_1[0x48]) {
        iVar5 = 0;
        iVar7 = iVar6;
        do {
          *(undefined4 *)(iVar7 + 0x14) = 0;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar5 < param_1[0x48]);
      }
      iVar7 = param_1[0x3b];
      *(int *)(iVar6 + 0x24) = iVar7;
    }
    *(int *)(iVar6 + 0x24) = iVar7 + -1;
  }
  if (0 < param_1[0x4f]) {
    local_44 = 0;
    local_3c = 0;
    do {
      iVar7 = *(int *)((int)param_1 + local_44 + 0x140);
      psVar1 = *(short **)(param_2 + local_44);
      iVar9 = 0;
      iVar8 = iVar7 + 4;
      piVar2 = *(int **)(iVar6 + (*(int *)(param_1[iVar7 + 0x49] + 0x18) + 0x16) * 4 + 4);
      iVar11 = *(int *)(iVar6 + (*(int *)(param_1[iVar7 + 0x49] + 0x14) + 0x12) * 4 + 4);
      iVar7 = param_1[0x60];
      piVar12 = (int *)param_1[0x5f];
      iVar5 = (int)*psVar1 - *(int *)(iVar6 + iVar8 * 4 + 4);
      uVar3 = iVar5 >> 0x1f;
      uVar3 = iVar5 + uVar3 ^ uVar3;
      iVar5 = 0;
      if (uVar3 != 0) {
        do {
          uVar3 = (int)uVar3 >> 1;
          iVar9 = iVar9 + 1;
        } while (uVar3 != 0);
        iVar5 = iVar9 * 4;
        if (0xb < iVar9) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)();
          iVar5 = iVar9 * 4;
        }
      }
      piVar4 = (int *)(iVar11 + iVar5);
      *piVar4 = *piVar4 + 1;
      if (0 < iVar7) {
        iVar5 = 0;
        iVar9 = 1;
        do {
          piVar12 = piVar12 + 1;
          iVar11 = (int)psVar1[*piVar12];
          if (iVar11 == 0) {
            iVar5 = iVar5 + 1;
          }
          else {
            if (0xf < iVar5) {
              uVar3 = iVar5 - 0x10;
              iVar5 = uVar3 - (uVar3 & 0xfffffff0);
              piVar2[0xf0] = piVar2[0xf0] + 1 + (uVar3 >> 4);
            }
            iVar11 = (iVar11 + (iVar11 >> 0x1f) ^ iVar11 >> 0x1f) >> 1;
            iVar10 = 1;
            if (iVar11 != 0) {
              do {
                iVar11 = iVar11 >> 1;
                iVar10 = iVar10 + 1;
              } while (iVar11 != 0);
              if (10 < iVar10) {
                *(undefined4 *)(*param_1 + 0x14) = 6;
                (**(code **)*param_1)(param_1);
              }
            }
            iVar11 = iVar5 * 0x10;
            iVar5 = 0;
            piVar2[iVar10 + iVar11] = piVar2[iVar10 + iVar11] + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 <= iVar7);
        if (iVar5 != 0) {
          *piVar2 = *piVar2 + 1;
        }
      }
      *(int *)(iVar6 + iVar8 * 4 + 4) = (int)**(short **)(param_2 + local_44);
      local_3c = local_3c + 1;
      local_44 = local_44 + 4;
    } while (local_3c < param_1[0x4f]);
  }
  return 1;
}


