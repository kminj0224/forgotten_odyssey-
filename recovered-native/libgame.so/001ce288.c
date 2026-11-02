/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce288  Symbol: FUN_001ce288 */

int FUN_001ce288(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_ac;
  undefined auStack_a8 [128];
  undefined auStack_28 [4];
  
  if ((uint)param_1[4] < (uint)param_1[5]) {
    iVar4 = (**(code **)(*param_1 + 0x34))(param_1,0xffffffff);
    iVar4 = iVar4 + 1;
    if (iVar4 != 0) {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  if (*(char *)((int)param_1 + 0x46) != '\0') {
    if ((int *)param_1[0x16] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4358();
    }
    iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
    if ((iVar1 == 0) && (iVar4 != 0)) {
      iVar1 = 0;
      do {
        uVar2 = (**(code **)(*(int *)param_1[0x16] + 0xc))
                          ((int *)param_1[0x16],param_1 + 0xd,auStack_a8,auStack_28,&local_ac);
        if (uVar2 == 2) {
          return 0;
        }
        if (uVar2 < 2) {
          iVar1 = local_ac - (int)auStack_a8;
          if (iVar1 < 1) goto LAB_001ce384;
          iVar3 = FUN_00207fbc(param_1 + 9,auStack_a8,iVar1);
          if (iVar1 != iVar3) {
            iVar4 = 0;
          }
        }
        if (uVar2 != 1 || iVar1 < 1) {
LAB_001ce384:
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = (**(code **)(*param_1 + 0x34))(param_1,0xffffffff);
          if (iVar4 == -1) {
            return 0;
          }
          return 1;
        }
      } while (iVar4 != 0);
    }
  }
  return iVar4;
}


