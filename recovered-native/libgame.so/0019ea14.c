/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ea14  Symbol: FUN_0019ea14 */

void FUN_0019ea14(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *local_74;
  undefined auStack_50 [52];
  int local_1c;
  
  iVar7 = DAT_0019ebfc + 0x19ea20;
  local_1c = **(int **)(iVar7 + DAT_0019ec00);
  iVar1 = FUN_0019400c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2c));
  bVar9 = iVar1 == 0;
  if (bVar9) {
    iVar1 = FUN_0019400c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x30),param_2,param_3);
  }
  bVar9 = !bVar9;
  iVar2 = iVar7 + DAT_0019ec04;
  while (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 0x2c);
    if (((*(int *)(*(int *)(param_1 + 8) + 0x28) == 1) &&
        (*(int *)(*(int *)(param_1 + 8) + 0x30) != 0)) && (*(int *)(param_1 + 0x68) != 0)) {
      for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x24)) {
        if (((*(int *)(iVar6 + 0x30) != 0) &&
            (iVar8 = FUN_00193f20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x30),
                                  *(undefined4 *)(iVar6 + 0x3c),*(undefined4 *)(iVar6 + 8),
                                  *(undefined4 *)(iVar6 + 0x38)), iVar8 == iVar6)) &&
           (iVar4 = FUN_00193f20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2c),
                                 *(undefined4 *)(iVar6 + 0x3c),*(undefined4 *)(iVar6 + 8),
                                 *(undefined4 *)(iVar6 + 0x38)), iVar4 == 0)) {
          if (*(int *)(iVar6 + 0x38) == 0) {
            uVar3 = FUN_0019c904(*(undefined4 *)(iVar6 + 8));
          }
          else {
            uVar3 = FUN_0019c904();
            uVar3 = FUN_0019c9a0(uVar3,iVar7 + DAT_0019ec08);
            uVar3 = FUN_0019c9a0(uVar3,*(undefined4 *)(iVar6 + 8));
          }
          if (param_4 != (int *)0x0) {
            iVar4 = *param_4;
            local_74 = param_4 + 2;
            while (iVar4 != 0) {
              iVar4 = FUN_0019c30c(iVar4,uVar3);
              if (iVar4 != 0) goto LAB_0019eafa;
              iVar4 = *local_74;
              local_74 = local_74 + 2;
            }
          }
          FUN_0019e068(param_1,DAT_0019ec0c,iVar2,uVar3,*(undefined4 *)(iVar8 + 0x3c));
        }
LAB_0019eafa:
      }
    }
    iVar6 = DAT_0019ec14;
    iVar8 = iVar7 + DAT_0019ec10;
    for (iVar1 = *(int *)(iVar1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      if ((*(int *)(iVar1 + 0x30) != 0) &&
         ((((*(int *)(iVar1 + 0x38) != 0 &&
            (iVar4 = FUN_0019c30c(*(int *)(iVar1 + 0x38),iVar8), iVar4 != 0)) ||
           (((*(int *)(iVar1 + 0x38) == 0 &&
             (iVar4 = FUN_0019c30c(*(undefined4 *)(iVar1 + 8),iVar8), iVar4 != 0)) ||
            (*(int *)(param_1 + 0x114) << 0x1d < 0)))) &&
          ((iVar4 = FUN_00193f20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2c),
                                 *(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 8),
                                 *(undefined4 *)(iVar1 + 0x38)), iVar4 == 0 || (iVar4 == iVar1))))))
      {
        puVar5 = (undefined *)
                 FUN_0018d3d8(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x38),auStack_50,
                              0x32);
        if (puVar5 == (undefined *)0x0) {
          FUN_0019d7d4(param_1,iVar7 + DAT_0019ec18);
          goto LAB_0019ebe8;
        }
        if (param_4 != (int *)0x0) {
          iVar4 = *param_4;
          local_74 = param_4 + 2;
          while (iVar4 != 0) {
            iVar4 = FUN_0019c30c(iVar4,puVar5);
            if (iVar4 != 0) goto LAB_0019ebb2;
            iVar4 = *local_74;
            local_74 = local_74 + 2;
          }
        }
        FUN_0019e5d4(param_1,puVar5,*(undefined4 *)(iVar1 + 0x30),param_3);
LAB_0019ebb2:
        if ((puVar5 != auStack_50) && (puVar5 != *(undefined **)(iVar1 + 8))) {
          (***(code ***)(iVar7 + iVar6))(puVar5);
        }
      }
    }
    if (!bVar9) break;
    iVar1 = FUN_0019400c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x30),param_2,param_3);
    bVar9 = false;
  }
LAB_0019ebe8:
  if (local_1c == **(int **)(iVar7 + DAT_0019ec00)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


