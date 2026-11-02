/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ce07c  Symbol: FUN_001ce07c */

bool FUN_001ce07c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piStack_38;
  int aiStack_34 [2];
  int *piStack_2c;
  int local_28;
  int local_24;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x18))();
  if (iVar1 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x20))();
    piVar6 = *(int **)(param_1 + 0x58);
    iVar5 = *piVar6;
    iVar1 = -(iVar2 * param_3 + 0xeU & 0xfffffff8);
    iVar4 = (int)&local_28 + iVar1;
    *(int *)((int)&piStack_38 + iVar1 + 4) = iVar4;
    *(int *)((int)&piStack_38 + iVar1 + 8) = iVar4 + iVar2 * param_3;
    *(int **)((int)&piStack_38 + iVar1) = &local_24;
    *(int **)((int)&piStack_38 + iVar1 + 0xc) = &local_28;
    uVar3 = (**(code **)(iVar5 + 8))(piVar6,param_1 + 0x34,param_2,param_2 + param_3 * 4);
    if (uVar3 < 2) {
      param_3 = local_28 - iVar4;
      iVar2 = FUN_00207fbc(param_1 + 0x24,iVar4,param_3);
      if (param_3 == iVar2) {
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        piVar6 = *(int **)(param_1 + 0x58);
        iVar5 = *(int *)(param_1 + 0x14);
        iVar2 = *piVar6;
        *(int **)((int)&piStack_38 + iVar1) = &local_24;
        *(int *)((int)&piStack_38 + iVar1 + 4) = iVar4;
        *(int *)((int)&piStack_38 + iVar1 + 8) = iVar4 + param_3;
        *(int **)((int)&piStack_38 + iVar1 + 0xc) = &local_28;
        iVar1 = (**(code **)(iVar2 + 8))
                          (piVar6,param_1 + 0x34,local_24,
                           local_24 + (iVar5 - local_24 & 0xfffffffcU));
        if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4828((int)&DAT_001ce200 + DAT_001ce204);
        }
        param_3 = local_28 - iVar4;
        iVar2 = FUN_00207fbc(param_1 + 0x24,iVar4,param_3);
      }
      goto LAB_001ce138;
    }
    if (uVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4828(DAT_001ce200 + 0x1ce1f0);
    }
  }
  iVar2 = FUN_00207fbc(param_1 + 0x24,param_2,param_3);
LAB_001ce138:
  return iVar2 == param_3;
}


