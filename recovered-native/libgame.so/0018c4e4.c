/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c4e4  Symbol: FUN_0018c4e4 */

void FUN_0018c4e4(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int local_3c;
  byte *local_34;
  undefined auStack_28 [12];
  int local_1c;
  
  iVar8 = DAT_0018c75c + 0x18c4f0;
  local_1c = **(int **)(iVar8 + DAT_0018c760);
  if (param_2 == (byte *)0x0) {
    local_3c = 0;
    iVar7 = local_3c;
LAB_0018c742:
    local_3c = iVar7;
    if (local_1c == **(int **)(iVar8 + DAT_0018c760)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_3c);
  }
  local_3c = 0;
  iVar6 = 0;
  pbVar9 = param_2;
  iVar7 = local_3c;
LAB_0018c6fc:
  while (local_3c = iVar7, iVar7 = local_3c, *param_2 != 0) {
    if (*param_2 == 0x26) {
      iVar2 = iVar6;
      if (param_2 != pbVar9) {
        if ((iVar6 == 0) || (*(int *)(iVar6 + 4) != 3)) {
          iVar2 = FUN_0018b038(param_1,pbVar9,(int)param_2 - (int)pbVar9);
          if (iVar2 == 0) goto LAB_0018c742;
          iVar7 = iVar2;
          if (iVar6 != 0) {
            *(int *)(iVar6 + 0x18) = iVar2;
            *(int *)(iVar2 + 0x1c) = iVar6;
            iVar7 = local_3c;
          }
        }
        else {
          FUN_0018c0d4(iVar6,pbVar9,(int)param_2 - (int)pbVar9);
        }
      }
      local_3c = iVar7;
      pbVar9 = param_2 + 1;
      local_34 = pbVar9;
      iVar6 = iVar2;
      if (param_2[1] == 0x23) {
        uVar10 = (uint)param_2[2];
        pbVar9 = param_2 + 2;
        iVar4 = 0;
        iVar7 = local_3c;
        if (uVar10 == 0x78) {
          pbVar9 = param_2 + 3;
          iVar4 = 0;
          bVar1 = param_2[3];
          while (uVar10 = (uint)bVar1, uVar10 != 0x3b) {
            if ((uVar10 - 0x30 & 0xff) < 10) {
              iVar4 = iVar4 * 0x10 + uVar10 + -0x30;
            }
            else if ((uVar10 - 0x61 & 0xff) < 6) {
              iVar4 = iVar4 * 0x10 + uVar10 + -0x57;
            }
            else {
              uVar3 = DAT_0018c764;
              param_2 = pbVar9;
              if (5 < (uVar10 - 0x41 & 0xff)) goto LAB_0018c5da;
              iVar4 = iVar4 * 0x10 + uVar10 + -0x37;
            }
            pbVar9 = pbVar9 + 1;
            bVar1 = *pbVar9;
          }
        }
        else {
          while (uVar10 != 0x3b) {
            uVar3 = DAT_0018c768;
            param_2 = pbVar9;
            if (9 < (uVar10 - 0x30 & 0xff)) goto LAB_0018c5da;
            pbVar9 = pbVar9 + 1;
            iVar4 = iVar4 * 10 + uVar10 + -0x30;
            uVar10 = (uint)*pbVar9;
          }
        }
        param_2 = pbVar9 + 1;
        pbVar9 = param_2;
        if (iVar4 != 0) {
          iVar4 = FUN_0017ab20(auStack_28);
          auStack_28[iVar4] = 0;
          iVar4 = FUN_0018a0b0(param_1,auStack_28);
          if ((iVar4 != 0) && (iVar6 = iVar4, iVar7 = iVar4, iVar2 != 0)) {
            iVar6 = FUN_0018c414(iVar2,iVar4);
            iVar7 = local_3c;
          }
        }
      }
      else {
        for (; iVar7 = local_3c, *local_34 != 0x3b; local_34 = local_34 + 1) {
          if (*local_34 == 0) {
            FUN_0018a658(DAT_0018c76c,param_1);
            goto LAB_0018c742;
          }
        }
        if (local_34 != pbVar9) {
          iVar4 = FUN_0019c88c(pbVar9,(int)local_34 - (int)pbVar9);
          iVar5 = FUN_001a2628(param_1,iVar4);
          if ((iVar5 == 0) || (*(int *)(iVar5 + 0x30) != 6)) {
            iVar6 = FUN_0018b04c(param_1,iVar4);
            if (iVar6 == 0) {
              if (iVar4 != 0) {
                (***(code ***)(iVar8 + DAT_0018c770))(iVar4);
              }
              goto LAB_0018c742;
            }
            if ((iVar5 != 0) && (*(int *)(iVar5 + 0xc) == 0)) {
              iVar7 = FUN_0018c4e4(param_1,*(undefined4 *)(iVar6 + 0x28));
              *(int *)(iVar5 + 0xc) = iVar7;
              *(undefined4 *)(iVar5 + 0x44) = 1;
              for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x18)) {
                *(int *)(iVar7 + 0x14) = iVar5;
              }
            }
            iVar7 = iVar6;
            if (iVar2 != 0) goto LAB_0018c6b2;
          }
          else if (iVar2 == 0) {
            iVar6 = FUN_0018a0b0(param_1,*(undefined4 *)(iVar5 + 0x28));
            iVar7 = iVar6;
          }
          else if (*(int *)(iVar2 + 4) == 3) {
            FUN_0018c174(iVar2,*(undefined4 *)(iVar5 + 0x28));
          }
          else {
            iVar6 = FUN_0018a0b0(param_1);
LAB_0018c6b2:
            iVar6 = FUN_0018c414(iVar2,iVar6);
            iVar7 = local_3c;
          }
          local_3c = iVar7;
          (***(code ***)(iVar8 + DAT_0018c770))(iVar4);
        }
        param_2 = local_34 + 1;
        pbVar9 = param_2;
        iVar7 = local_3c;
      }
    }
    else {
      param_2 = param_2 + 1;
    }
  }
  if ((local_3c == 0) || (param_2 != pbVar9)) {
    if ((iVar6 == 0) || (*(int *)(iVar6 + 4) != 3)) {
      iVar2 = FUN_0018b038(param_1,pbVar9,(int)param_2 - (int)pbVar9);
      if ((iVar2 != 0) && (iVar7 = iVar2, iVar6 != 0)) {
        FUN_0018c414(iVar6,iVar2);
        iVar7 = local_3c;
      }
    }
    else {
      FUN_0018c0d4(iVar6,pbVar9,(int)param_2 - (int)pbVar9);
    }
  }
  goto LAB_0018c742;
LAB_0018c5da:
  FUN_0018a658(uVar3,param_1,0);
  pbVar9 = param_2;
  goto LAB_0018c6fc;
}


