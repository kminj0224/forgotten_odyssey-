/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001cb2c0  Symbol: FUN_001cb2c0 */

bool FUN_001cb2c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStack_38 [3];
  int *piStack_2c;
  int local_28;
  undefined4 local_24;
  
  if (*(int **)(param_1 + 0x54) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4358();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x18))();
  if (iVar1 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
    piVar7 = *(int **)(param_1 + 0x54);
    iVar6 = *piVar7;
    iVar1 = -(iVar2 * param_3 + 0xeU & 0xfffffff8);
    iVar5 = (int)&local_28 + iVar1;
    *(int *)((int)aiStack_38 + iVar1 + 4) = iVar5;
    *(int *)((int)aiStack_38 + iVar1 + 8) = iVar5 + iVar2 * param_3;
    *(undefined4 **)((int)aiStack_38 + iVar1) = &local_24;
    *(int **)((int)aiStack_38 + iVar1 + 0xc) = &local_28;
    uVar3 = (**(code **)(iVar6 + 8))(piVar7,param_1 + 0x34,param_2,param_2 + param_3);
    if (uVar3 < 2) {
      param_3 = local_28 - iVar5;
      iVar2 = FUN_00207fbc(param_1 + 0x24,iVar5,param_3);
      if (param_3 == iVar2) {
        uVar3 = uVar3 & 1;
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        piVar7 = *(int **)(param_1 + 0x54);
        iVar2 = *piVar7;
        uVar4 = *(undefined4 *)(param_1 + 0x14);
        *(int **)((int)aiStack_38 + iVar1 + 0xc) = &local_28;
        *(undefined4 **)((int)aiStack_38 + iVar1) = &local_24;
        *(int *)((int)aiStack_38 + iVar1 + 4) = iVar5;
        *(int *)((int)aiStack_38 + iVar1 + 8) = iVar5 + param_3;
        iVar1 = (**(code **)(iVar2 + 8))(piVar7,param_1 + 0x34,local_24,uVar4);
        if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4828((int)&DAT_001cb438 + DAT_001cb43c);
        }
        param_3 = local_28 - iVar5;
        iVar2 = FUN_00207fbc(param_1 + 0x24,iVar5,param_3);
      }
      goto LAB_001cb37c;
    }
    if (uVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4828(DAT_001cb438 + 0x1cb428);
    }
  }
  iVar2 = FUN_00207fbc(param_1 + 0x24,param_2,param_3);
LAB_001cb37c:
  return iVar2 == param_3;
}


