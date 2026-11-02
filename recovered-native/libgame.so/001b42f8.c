/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b42f8  Symbol: FUN_001b42f8 */

undefined4 FUN_001b42f8(int *param_1,int *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  short local_2c;
  
  iVar7 = param_1[0x74];
  if (param_1[0x46] != 0) {
    iVar8 = *(int *)(iVar7 + 0x34);
    if (iVar8 == 0) {
      FUN_001b3f2c();
      iVar8 = *(int *)(iVar7 + 0x34);
    }
    *(int *)(iVar7 + 0x34) = iVar8 + -1;
  }
  if (*(int *)(iVar7 + 0x10) != -1) {
    iVar9 = param_1[0x6b];
    iVar11 = *param_2;
    iVar5 = *(int *)(param_1[0x55] + 0x18);
    uVar6 = param_1[0x69];
    iVar3 = param_1[0x67];
    iVar8 = iVar3;
    if ((0 < iVar3) && (*(short *)(*(int *)(iVar3 * 4 + iVar9) * 2 + iVar11) == 0)) {
      piVar12 = (int *)(iVar9 + (iVar3 + -1) * 4);
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) break;
        iVar13 = *piVar12;
        piVar12 = piVar12 + -1;
      } while (*(short *)(iVar13 * 2 + iVar11) == 0);
    }
    iVar13 = param_1[0x66];
    if (iVar13 <= iVar3) {
      do {
        iVar3 = *(int *)((iVar5 + 0x1e) * 4 + iVar7) + (iVar13 + -1) * 3;
        if ((iVar8 < iVar13) && (iVar10 = FUN_001b39c8(param_1,iVar3), iVar10 != 0)) {
          return 1;
        }
        piVar12 = (int *)(iVar9 + iVar13 * 4);
        while( true ) {
          iVar10 = *piVar12 * 2;
          sVar2 = (short)(1 << (uVar6 & 0xff));
          local_2c = (short)(-1 << (uVar6 & 0xff));
          if (*(short *)(iVar10 + iVar11) != 0) break;
          iVar4 = FUN_001b39c8(param_1,iVar3 + 1);
          if (iVar4 != 0) {
            iVar3 = FUN_001b39c8(param_1,iVar7 + 0xb8);
            if (iVar3 == 0) {
              *(short *)(iVar10 + iVar11) = sVar2;
            }
            else {
              *(short *)(iVar10 + iVar11) = local_2c;
            }
            goto LAB_001b4462;
          }
          iVar13 = iVar13 + 1;
          piVar12 = piVar12 + 1;
          if (param_1[0x67] < iVar13) {
            *(undefined4 *)(*param_1 + 0x14) = 0x75;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
            return 1;
          }
          iVar3 = iVar3 + 3;
        }
        iVar3 = FUN_001b39c8(param_1,iVar3 + 2);
        if (iVar3 != 0) {
          uVar1 = *(ushort *)(iVar10 + iVar11);
          if ((int)((uint)uVar1 * 0x10000) < 0) {
            *(ushort *)(iVar10 + iVar11) = uVar1 + local_2c;
          }
          else {
            *(ushort *)(iVar10 + iVar11) = uVar1 + sVar2;
          }
        }
LAB_001b4462:
        iVar13 = iVar13 + 1;
      } while (iVar13 <= param_1[0x67]);
    }
  }
  return 1;
}


