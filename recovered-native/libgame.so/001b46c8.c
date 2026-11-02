/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b46c8  Symbol: FUN_001b46c8 */

undefined4 FUN_001b46c8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = param_1[0x74];
  if (param_1[0x46] != 0) {
    iVar4 = *(int *)(iVar12 + 0x34);
    if (iVar4 == 0) {
      FUN_001b3f2c();
      iVar4 = *(int *)(iVar12 + 0x34);
    }
    *(int *)(iVar12 + 0x34) = iVar4 + -1;
  }
  if ((*(int *)(iVar12 + 0x10) != -1) && (0 < param_1[0x5b])) {
    iVar4 = 0;
    iVar13 = 0;
    do {
      puVar3 = *(undefined2 **)(param_2 + iVar4);
      iVar5 = *(int *)((int)param_1 + iVar4 + 0x170);
      iVar6 = *(int *)(param_1[iVar5 + 0x55] + 0x14);
      iVar7 = (iVar6 + 0xe) * 4;
      iVar8 = iVar5 + 8;
      iVar9 = iVar12 + iVar8 * 4;
      iVar10 = *(int *)(iVar7 + iVar12) + *(int *)(iVar9 + 4);
      iVar1 = FUN_001b39c8(param_1,iVar10);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar12 + (iVar5 + 4) * 4 + 4);
        *(undefined4 *)(iVar9 + 4) = 0;
      }
      else {
        iVar9 = FUN_001b39c8(param_1,iVar10 + 1);
        iVar1 = iVar10 + 2 + iVar9;
        uVar2 = FUN_001b39c8(param_1,iVar1);
        if (uVar2 != 0) {
          iVar1 = *(int *)(iVar7 + iVar12) + 0x14;
          while (iVar7 = FUN_001b39c8(param_1,iVar1), iVar7 != 0) {
            uVar2 = uVar2 * 2;
            if (uVar2 == 0x8000) {
              *(undefined4 *)(*param_1 + 0x14) = 0x75;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
              *(undefined4 *)(iVar12 + 0x10) = 0xffffffff;
              return 1;
            }
            iVar1 = iVar1 + 1;
          }
        }
        if ((int)uVar2 < (1 << *(sbyte *)((int)param_1 + iVar6 + 0xe8)) >> 1) {
          *(undefined4 *)(iVar12 + iVar8 * 4 + 4) = 0;
        }
        else if ((1 << *(sbyte *)((int)param_1 + iVar6 + 0xf8)) >> 1 < (int)uVar2) {
          *(int *)(iVar12 + iVar8 * 4 + 4) = (iVar9 + 3) * 4;
        }
        else {
          *(int *)(iVar12 + iVar8 * 4 + 4) = (iVar9 + 1) * 4;
        }
        uVar11 = uVar2;
        while (uVar2 = (int)uVar2 >> 1, uVar2 != 0) {
          while (iVar6 = FUN_001b39c8(param_1,iVar1 + 0xe), iVar6 != 0) {
            uVar11 = uVar11 | uVar2;
            uVar2 = (int)uVar2 >> 1;
            if (uVar2 == 0) goto LAB_001b4800;
          }
        }
LAB_001b4800:
        iVar1 = uVar11 + 1;
        if (iVar9 != 0) {
          iVar1 = -iVar1;
        }
        iVar5 = iVar12 + (iVar5 + 4) * 4;
        iVar1 = iVar1 + *(int *)(iVar5 + 4);
        *(int *)(iVar5 + 4) = iVar1;
      }
      iVar4 = iVar4 + 4;
      *puVar3 = (short)(iVar1 << (param_1[0x69] & 0xffU));
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_1[0x5b]);
  }
  return 1;
}


