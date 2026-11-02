/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4024  Symbol: FUN_001b4024 */

undefined4 FUN_001b4024(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_48;
  int local_30;
  
  iVar14 = param_1[0x74];
  if (param_1[0x46] != 0) {
    iVar7 = *(int *)(iVar14 + 0x34);
    if (iVar7 == 0) {
      FUN_001b3f2c();
      iVar7 = *(int *)(iVar14 + 0x34);
    }
    *(int *)(iVar14 + 0x34) = iVar7 + -1;
  }
  if ((*(int *)(iVar14 + 0x10) != -1) && (iVar7 = param_1[0x6b], 0 < param_1[0x5b])) {
    local_48 = 0;
    local_30 = 0;
    do {
      puVar4 = *(undefined2 **)(param_2 + local_48);
      iVar8 = *(int *)((int)param_1 + local_48 + 0x170);
      iVar9 = param_1[iVar8 + 0x55];
      iVar1 = iVar8 + 8;
      iVar10 = *(int *)(iVar9 + 0x14);
      iVar11 = (iVar10 + 0xe) * 4;
      iVar12 = iVar1 * 4 + iVar14;
      iVar13 = *(int *)(iVar11 + iVar14) + *(int *)(iVar12 + 4);
      iVar2 = FUN_001b39c8(param_1,iVar13);
      if (iVar2 == 0) {
        iVar1 = *(int *)((iVar8 + 4) * 4 + iVar14 + 4);
        *(undefined4 *)(iVar12 + 4) = 0;
      }
      else {
        iVar2 = FUN_001b39c8(param_1,iVar13 + 1);
        iVar12 = iVar13 + 2 + iVar2;
        uVar3 = FUN_001b39c8(param_1,iVar12);
        if (uVar3 != 0) {
          iVar12 = *(int *)(iVar11 + iVar14) + 0x14;
          while (iVar11 = FUN_001b39c8(param_1,iVar12), iVar11 != 0) {
            uVar3 = uVar3 * 2;
            if (uVar3 == 0x8000) {
LAB_001b4128:
              *(undefined4 *)(*param_1 + 0x14) = 0x75;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
              *(undefined4 *)(iVar14 + 0x10) = 0xffffffff;
              return 1;
            }
            iVar12 = iVar12 + 1;
          }
        }
        if ((int)uVar3 < (1 << *(sbyte *)((int)param_1 + iVar10 + 0xe8)) >> 1) {
          *(undefined4 *)(iVar1 * 4 + iVar14 + 4) = 0;
        }
        else if ((1 << *(sbyte *)((int)param_1 + iVar10 + 0xf8)) >> 1 < (int)uVar3) {
          *(int *)(iVar1 * 4 + iVar14 + 4) = (iVar2 + 3) * 4;
        }
        else {
          *(int *)(iVar1 * 4 + iVar14 + 4) = (iVar2 + 1) * 4;
        }
        uVar5 = uVar3;
        while (uVar3 = (int)uVar3 >> 1, uVar3 != 0) {
          while (iVar1 = FUN_001b39c8(param_1,iVar12 + 0xe), iVar1 != 0) {
            uVar5 = uVar5 | uVar3;
            uVar3 = (int)uVar3 >> 1;
            if (uVar3 == 0) goto LAB_001b41ac;
          }
        }
LAB_001b41ac:
        iVar1 = uVar5 + 1;
        if (iVar2 != 0) {
          iVar1 = -iVar1;
        }
        iVar2 = (iVar8 + 4) * 4 + iVar14;
        iVar1 = iVar1 + *(int *)(iVar2 + 4);
        *(int *)(iVar2 + 4) = iVar1;
      }
      *puVar4 = (short)iVar1;
      iVar1 = *(int *)(iVar9 + 0x18);
      if (0 < param_1[0x6c]) {
        iVar2 = (iVar1 + 0x1e) * 4;
        iVar8 = 1;
LAB_001b40f6:
        iVar10 = *(int *)(iVar2 + iVar14) + (iVar8 + -1) * 3;
        iVar9 = FUN_001b39c8(param_1,iVar10);
        if (iVar9 == 0) {
          while (iVar9 = FUN_001b39c8(param_1,iVar10 + 1), iVar9 == 0) {
            iVar8 = iVar8 + 1;
            if (param_1[0x6c] < iVar8) goto LAB_001b4128;
            iVar10 = iVar10 + 3;
          }
          iVar9 = FUN_001b39c8(param_1,iVar14 + 0xb8);
          iVar10 = iVar10 + 2;
          uVar3 = FUN_001b39c8(param_1,iVar10);
          if ((uVar3 != 0) && (iVar11 = FUN_001b39c8(param_1,iVar10), iVar11 != 0)) {
            uVar3 = uVar3 * 2;
            iVar10 = 0xbd;
            if ((int)(uint)*(byte *)((int)param_1 + iVar1 + 0x108) < iVar8) {
              iVar10 = 0xd9;
            }
            iVar10 = *(int *)(iVar2 + iVar14) + iVar10;
            while (iVar11 = FUN_001b39c8(param_1,iVar10), iVar11 != 0) {
              uVar3 = uVar3 * 2;
              if (uVar3 == 0x8000) goto LAB_001b4128;
              iVar10 = iVar10 + 1;
            }
          }
          uVar5 = uVar3;
          do {
            sVar6 = (short)uVar5;
            while( true ) {
              uVar3 = (int)uVar3 >> 1;
              if (uVar3 == 0) {
                sVar6 = sVar6 + 1;
                if (iVar9 != 0) {
                  sVar6 = -sVar6;
                }
                iVar9 = iVar8 * 4;
                iVar8 = iVar8 + 1;
                puVar4[*(int *)(iVar9 + iVar7)] = sVar6;
                if (iVar8 <= param_1[0x6c]) goto LAB_001b40f6;
                goto LAB_001b4228;
              }
              iVar11 = FUN_001b39c8(param_1,iVar10 + 0xe);
              if (iVar11 == 0) break;
              uVar5 = uVar5 | uVar3;
              sVar6 = (short)uVar5;
            }
          } while( true );
        }
      }
LAB_001b4228:
      local_30 = local_30 + 1;
      local_48 = local_48 + 4;
    } while (local_30 < param_1[0x5b]);
  }
  return 1;
}


