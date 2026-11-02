/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001794d8  Symbol: FUN_001794d8 */

void FUN_001794d8(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_2c;
  int local_20;
  int local_1c;
  
  iVar7 = DAT_001795d0 + 0x1794e4;
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    uVar1 = FUN_00179254(param_1 + 0x48,*param_2);
    if ((uVar1 < *(uint *)(param_1 + 0x4c)) &&
       ((*(int *)(param_1 + 0x50) != 0 &&
        (piVar4 = (int *)(*(int *)(param_1 + 0x50) + uVar1 * 0x14), *piVar4 == *param_2)))) {
      iVar7 = param_2[1];
      iVar6 = param_2[2];
      *piVar4 = *param_2;
      piVar4[1] = iVar7;
      piVar4[2] = iVar6;
      iVar7 = param_2[4];
      piVar4[3] = param_2[3];
      piVar4[4] = iVar7;
    }
    else {
      if (*(uint *)(param_1 + 0x48) < *(uint *)(param_1 + 0x4c) + 1) {
        if (*(uint *)(param_1 + 0x48) == 0) {
          *(undefined4 *)(param_1 + 0x48) = 2;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          iVar6 = (***(code ***)(iVar7 + DAT_001795d4))(*(int *)(param_1 + 0x48) * 0x28);
        }
        else {
          iVar6 = (***(code ***)(iVar7 + DAT_001795d8))();
        }
        if (iVar6 == 0) {
          FUN_00179430(param_1,iVar7 + DAT_001795dc);
          return;
        }
        *(int *)(param_1 + 0x50) = iVar6;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) << 1;
      }
      local_2c = *(uint *)(param_1 + 0x4c);
      if (uVar1 != local_2c) {
        local_20 = local_2c * 0x14;
        local_1c = (local_2c - 1) * 0x14;
        for (; uVar1 < local_2c; local_2c = local_2c - 1) {
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0x50) + local_1c);
          puVar5 = (undefined4 *)(local_20 + *(int *)(param_1 + 0x50));
          uVar2 = puVar3[1];
          uVar8 = puVar3[2];
          *puVar5 = *puVar3;
          puVar5[1] = uVar2;
          puVar5[2] = uVar8;
          uVar2 = puVar3[4];
          puVar5[3] = puVar3[3];
          puVar5[4] = uVar2;
          local_20 = local_20 + -0x14;
          local_1c = local_1c + -0x14;
        }
      }
      piVar4 = (int *)(*(int *)(param_1 + 0x50) + uVar1 * 0x14);
      iVar7 = param_2[1];
      iVar6 = param_2[2];
      *piVar4 = *param_2;
      piVar4[1] = iVar7;
      piVar4[2] = iVar6;
      iVar7 = param_2[4];
      piVar4[3] = param_2[3];
      piVar4[4] = iVar7;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
  }
  return;
}


