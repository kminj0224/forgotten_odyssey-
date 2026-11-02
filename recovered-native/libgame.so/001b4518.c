/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4518  Symbol: FUN_001b4518 */

undefined4 FUN_001b4518(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = param_1[0x74];
  if (param_1[0x46] != 0) {
    iVar6 = *(int *)(iVar5 + 0x34);
    if (iVar6 == 0) {
      FUN_001b3f2c(param_1);
      iVar6 = *(int *)(iVar5 + 0x34);
    }
    *(int *)(iVar5 + 0x34) = iVar6 + -1;
  }
  if (*(int *)(iVar5 + 0x10) != -1) {
    iVar7 = param_1[0x6b];
    iVar9 = *param_2;
    iVar6 = *(int *)(param_1[0x55] + 0x18);
    iVar10 = param_1[0x66];
    if (iVar10 <= param_1[0x67]) {
      iVar8 = (iVar6 + 0x1e) * 4;
      while( true ) {
        iVar11 = *(int *)(iVar8 + iVar5) + (iVar10 + -1) * 3;
        iVar1 = FUN_001b39c8(param_1,iVar11);
        if (iVar1 != 0) break;
        while (iVar1 = FUN_001b39c8(param_1,iVar11 + 1), iVar1 == 0) {
          iVar10 = iVar10 + 1;
          if (param_1[0x67] < iVar10) {
            *(undefined4 *)(*param_1 + 0x14) = 0x75;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
            return 1;
          }
          iVar11 = iVar11 + 3;
        }
        iVar1 = FUN_001b39c8(param_1,iVar5 + 0xb8);
        iVar11 = iVar11 + 2;
        uVar2 = FUN_001b39c8(param_1,iVar11);
        if ((uVar2 != 0) && (iVar3 = FUN_001b39c8(param_1,iVar11), iVar3 != 0)) {
          uVar2 = uVar2 * 2;
          iVar11 = 0xbd;
          if ((int)(uint)*(byte *)((int)param_1 + iVar6 + 0x108) < iVar10) {
            iVar11 = 0xd9;
          }
          iVar11 = *(int *)(iVar8 + iVar5) + iVar11;
          while (iVar3 = FUN_001b39c8(param_1,iVar11), iVar3 != 0) {
            uVar2 = uVar2 * 2;
            if (uVar2 == 0x8000) {
              *(undefined4 *)(*param_1 + 0x14) = 0x75;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
              *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
              return 1;
            }
            iVar11 = iVar11 + 1;
          }
        }
        uVar4 = uVar2;
        while (uVar2 = (int)uVar2 >> 1, uVar2 != 0) {
          while (iVar3 = FUN_001b39c8(param_1,iVar11 + 0xe), iVar3 != 0) {
            uVar4 = uVar4 | uVar2;
            uVar2 = (int)uVar2 >> 1;
            if (uVar2 == 0) goto LAB_001b462c;
          }
        }
LAB_001b462c:
        iVar11 = uVar4 + 1;
        if (iVar1 != 0) {
          iVar11 = -iVar11;
        }
        iVar1 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        *(short *)(*(int *)(iVar1 + iVar7) * 2 + iVar9) = (short)(iVar11 << (param_1[0x69] & 0xffU))
        ;
        if (param_1[0x67] < iVar10) {
          return 1;
        }
      }
    }
  }
  return 1;
}


