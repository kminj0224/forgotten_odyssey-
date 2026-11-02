/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ae0d4  Symbol: FUN_001ae0d4 */

void FUN_001ae0d4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_3c;
  int local_38;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1e0) + 0x18);
  iVar1 = *param_2;
  local_38 = param_2[1];
  iVar3 = param_2[2];
  iVar6 = param_2[3];
  iVar8 = param_2[4];
  iVar7 = param_2[5];
  local_3c = iVar1;
  if (iVar1 < local_38) {
    piVar11 = (int *)(iVar5 + iVar1 * 4);
    iVar13 = iVar3 * 0x20 + iVar8;
    iVar12 = iVar13;
    iVar9 = iVar3;
    iVar10 = iVar1;
    do {
      for (; local_3c = iVar10, iVar9 <= iVar6; iVar9 = iVar9 + 1) {
        if (iVar8 <= iVar7) {
          if (*(short *)(iVar12 * 2 + *piVar11) != 0) {
LAB_001ae328:
            *param_2 = local_3c;
            if (local_38 <= local_3c) goto LAB_001ae166;
            goto LAB_001ae336;
          }
          psVar4 = (short *)(*piVar11 + iVar12 * 2);
          iVar10 = iVar8;
          while( true ) {
            psVar4 = psVar4 + 1;
            iVar10 = iVar10 + 1;
            if (iVar7 < iVar10) break;
            if (*psVar4 != 0) goto LAB_001ae328;
          }
        }
        iVar12 = iVar12 + 0x20;
        iVar10 = local_3c;
      }
      iVar10 = local_3c + 1;
      piVar11 = piVar11 + 1;
      local_3c = iVar1;
      iVar12 = iVar13;
      iVar9 = iVar3;
    } while (iVar10 <= local_38);
LAB_001ae336:
    piVar11 = (int *)(iVar5 + local_38 * 4);
    iVar1 = iVar13;
    iVar12 = iVar3;
    iVar9 = local_38;
    do {
      for (; iVar12 <= iVar6; iVar12 = iVar12 + 1) {
        if (iVar8 <= iVar7) {
          if (*(short *)(iVar1 * 2 + *piVar11) != 0) {
LAB_001ae3c6:
            param_2[1] = iVar9;
            local_38 = iVar9;
            goto LAB_001ae166;
          }
          psVar4 = (short *)(*piVar11 + iVar1 * 2);
          iVar10 = iVar8;
          while( true ) {
            psVar4 = psVar4 + 1;
            iVar10 = iVar10 + 1;
            if (iVar7 < iVar10) break;
            if (*psVar4 != 0) goto LAB_001ae3c6;
          }
        }
        iVar1 = iVar1 + 0x20;
      }
      iVar9 = iVar9 + -1;
      piVar11 = piVar11 + -1;
      iVar1 = iVar13;
      iVar12 = iVar3;
    } while (local_3c <= iVar9);
  }
LAB_001ae166:
  if (iVar3 < iVar6) {
    piVar11 = (int *)(iVar5 + local_3c * 4);
    iVar12 = iVar3 * 0x20 + iVar8;
    iVar1 = iVar3;
    do {
      piVar2 = piVar11;
      for (iVar9 = local_3c; iVar9 <= local_38; iVar9 = iVar9 + 1) {
        if (iVar8 <= iVar7) {
          if (*(short *)(iVar12 * 2 + *piVar2) != 0) {
LAB_001ae376:
            param_2[2] = iVar1;
            iVar3 = iVar1;
            if (iVar6 <= iVar1) goto LAB_001ae1ca;
            goto LAB_001ae384;
          }
          psVar4 = (short *)(*piVar2 + iVar12 * 2);
          iVar10 = iVar8;
          while( true ) {
            psVar4 = psVar4 + 1;
            iVar10 = iVar10 + 1;
            if (iVar7 < iVar10) break;
            if (*psVar4 != 0) goto LAB_001ae376;
          }
        }
        piVar2 = piVar2 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar12 = iVar12 + 0x20;
    } while (iVar1 <= iVar6);
LAB_001ae384:
    iVar12 = iVar6 * 0x20 + iVar8;
    iVar1 = iVar6;
    do {
      piVar2 = piVar11;
      for (iVar9 = local_3c; iVar9 <= local_38; iVar9 = iVar9 + 1) {
        if (iVar8 <= iVar7) {
          if (*(short *)(iVar12 * 2 + *piVar2) != 0) {
LAB_001ae3d0:
            param_2[3] = iVar1;
            iVar6 = iVar1;
            goto LAB_001ae1ca;
          }
          psVar4 = (short *)(*piVar2 + iVar12 * 2);
          iVar10 = iVar8;
          while( true ) {
            psVar4 = psVar4 + 1;
            iVar10 = iVar10 + 1;
            if (iVar7 < iVar10) break;
            if (*psVar4 != 0) goto LAB_001ae3d0;
          }
        }
        piVar2 = piVar2 + 1;
      }
      iVar1 = iVar1 + -1;
      iVar12 = iVar12 + -0x20;
    } while (iVar3 <= iVar1);
  }
LAB_001ae1ca:
  iVar1 = iVar8;
  if (iVar8 < iVar7) {
    piVar11 = (int *)(iVar5 + local_3c * 4);
    iVar12 = iVar3 * 0x20 + iVar8;
    do {
      piVar2 = piVar11;
      for (iVar9 = local_3c; iVar9 <= local_38; iVar9 = iVar9 + 1) {
        if (iVar3 <= iVar6) {
          if (*(short *)(iVar12 * 2 + *piVar2) != 0) {
LAB_001ae2ca:
            param_2[4] = iVar1;
            iVar8 = iVar1;
            if (iVar7 <= iVar1) goto LAB_001ae230;
            goto LAB_001ae2da;
          }
          psVar4 = (short *)(*piVar2 + iVar12 * 2);
          iVar10 = iVar3;
          while (iVar10 = iVar10 + 1, iVar10 <= iVar6) {
            psVar4 = psVar4 + 0x20;
            if (*psVar4 != 0) goto LAB_001ae2ca;
          }
        }
        piVar2 = piVar2 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar12 = iVar12 + 1;
    } while (iVar1 <= iVar7);
LAB_001ae2da:
    iVar1 = iVar8;
    iVar12 = iVar3 * 0x20 + iVar7;
    iVar8 = iVar7;
    do {
      piVar2 = piVar11;
      for (iVar9 = local_3c; iVar9 <= local_38; iVar9 = iVar9 + 1) {
        if (iVar3 <= iVar6) {
          if (*(short *)(iVar12 * 2 + *piVar2) != 0) {
LAB_001ae31c:
            param_2[5] = iVar8;
            iVar7 = iVar8;
            goto LAB_001ae230;
          }
          psVar4 = (short *)(*piVar2 + iVar12 * 2);
          iVar10 = iVar3;
          while (iVar10 = iVar10 + 1, iVar10 <= iVar6) {
            psVar4 = psVar4 + 0x20;
            if (*psVar4 != 0) goto LAB_001ae31c;
          }
        }
        piVar2 = piVar2 + 1;
      }
      iVar8 = iVar8 + -1;
      iVar12 = iVar12 + -1;
    } while (iVar1 <= iVar8);
  }
LAB_001ae230:
  iVar8 = (iVar6 - iVar3) * 0xc;
  iVar9 = (local_38 - local_3c) * 0x10;
  iVar10 = (iVar7 - iVar1) * 8;
  iVar12 = 0;
  param_2[6] = iVar8 * iVar8 + iVar9 * iVar9 + iVar10 * iVar10;
  if (local_3c <= local_38) {
    piVar11 = (int *)(iVar5 + local_3c * 4);
    do {
      if (iVar3 <= iVar6) {
        iVar8 = iVar3;
        iVar5 = iVar3 * 0x20 + iVar1;
        do {
          if (iVar1 <= iVar7) {
            psVar4 = (short *)(iVar5 * 2 + *piVar11);
            iVar9 = iVar1;
            while( true ) {
              iVar9 = iVar9 + 1;
              iVar12 = iVar12 + (uint)(*psVar4 != 0);
              if (iVar7 < iVar9) break;
              psVar4 = psVar4 + 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 0x20;
        } while (iVar8 <= iVar6);
      }
      local_3c = local_3c + 1;
      piVar11 = piVar11 + 1;
    } while (local_3c <= local_38);
  }
  param_2[7] = iVar12;
  return;
}


