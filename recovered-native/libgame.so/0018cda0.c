/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018cda0  Symbol: FUN_0018cda0 */

void FUN_0018cda0(undefined4 param_1,byte *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  undefined auStack_28 [12];
  int local_1c;
  
  iVar6 = DAT_0018d070;
  iVar11 = DAT_0018d068 + 0x18cdac;
  pbVar8 = param_2 + param_3;
  iVar14 = 0;
  local_1c = **(int **)(iVar11 + DAT_0018d06c);
  if (param_2 != (byte *)0x0) {
    iVar5 = 0;
    pbVar12 = param_2;
    iVar4 = 0;
LAB_0018cff8:
    do {
      while( true ) {
        iVar14 = iVar4;
        if ((pbVar8 <= param_2) || (*param_2 == 0)) goto LAB_0018d006;
        if (*param_2 == 0x26) break;
        param_2 = param_2 + 1;
      }
      iVar1 = iVar5;
      if (param_2 != pbVar12) {
        if ((iVar5 == 0) || (*(int *)(iVar5 + 4) != 3)) {
          iVar1 = FUN_0018b038(param_1,pbVar12,(int)param_2 - (int)pbVar12);
          if (iVar1 == 0) break;
          iVar14 = iVar1;
          if (iVar5 != 0) {
            *(int *)(iVar5 + 0x18) = iVar1;
            *(int *)(iVar1 + 0x1c) = iVar5;
            iVar14 = iVar4;
          }
        }
        else {
          FUN_0018c0d4(iVar5,pbVar12,(int)param_2 - (int)pbVar12);
        }
      }
      pbVar12 = param_2 + 2;
      iVar5 = iVar1;
      iVar4 = iVar14;
      if (((pbVar12 < pbVar8) && (param_2[1] == 0x23)) && (*pbVar12 == 0x78)) {
        pbVar12 = param_2 + 3;
        uVar10 = 0;
        if (pbVar12 < pbVar8) {
          uVar10 = (uint)param_2[3];
        }
        iVar7 = 0;
        while (uVar10 != 0x3b) {
          while( true ) {
            if ((uVar10 - 0x30 & 0xff) < 10) {
              iVar7 = iVar7 * 0x10 + uVar10 + -0x30;
            }
            else if ((uVar10 - 0x61 & 0xff) < 6) {
              iVar7 = iVar7 * 0x10 + uVar10 + -0x57;
            }
            else {
              uVar2 = DAT_0018d074;
              param_2 = pbVar12;
              if (5 < (uVar10 - 0x41 & 0xff)) goto LAB_0018cece;
              iVar7 = iVar7 * 0x10 + uVar10 + -0x37;
            }
            pbVar12 = pbVar12 + 1;
            if (pbVar12 < pbVar8) break;
            uVar10 = 0;
          }
          uVar10 = (uint)*pbVar12;
        }
      }
      else {
        pbVar9 = param_2 + 1;
        pbVar13 = pbVar9;
        if ((pbVar8 <= pbVar9) || (param_2[1] != 0x23)) {
          while( true ) {
            if (pbVar8 <= pbVar13) goto LAB_0018cf04;
            if ((*pbVar13 == 0) || (*pbVar13 == 0x3b)) break;
            pbVar13 = pbVar13 + 1;
          }
          if (*pbVar13 == 0) {
LAB_0018cf04:
            FUN_0018a658(DAT_0018d07c,param_1);
            break;
          }
          if (pbVar13 != pbVar9) {
            iVar7 = FUN_0019c88c(pbVar9,(int)pbVar13 - (int)pbVar9);
            iVar3 = FUN_001a2628(param_1,iVar7);
            if ((iVar3 == 0) || (*(int *)(iVar3 + 0x30) != 6)) {
              iVar5 = FUN_0018b04c(param_1,iVar7);
              if (iVar5 == 0) {
                if (iVar7 != 0) {
                  (***(code ***)(iVar11 + DAT_0018d070))();
                }
                break;
              }
              if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) == 0)) {
                iVar4 = FUN_0018c4e4(param_1,*(undefined4 *)(iVar5 + 0x28));
                *(int *)(iVar3 + 0xc) = iVar4;
                *(undefined4 *)(iVar3 + 0x44) = 1;
                for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
                  *(int *)(iVar4 + 0x14) = iVar3;
                  *(int *)(iVar3 + 0x10) = iVar4;
                }
              }
              iVar4 = iVar5;
              if (iVar1 != 0) goto LAB_0018cfb0;
            }
            else if (iVar1 == 0) {
              iVar5 = FUN_0018a0b0(param_1,*(undefined4 *)(iVar3 + 0x28));
              iVar4 = iVar5;
            }
            else if (*(int *)(iVar1 + 4) == 3) {
              FUN_0018c174(iVar1,*(undefined4 *)(iVar3 + 0x28));
            }
            else {
              iVar5 = FUN_0018a0b0(param_1);
LAB_0018cfb0:
              iVar5 = FUN_0018c414(iVar1,iVar5);
              iVar4 = iVar14;
            }
            (***(code ***)(iVar11 + iVar6))(iVar7);
          }
          param_2 = pbVar13 + 1;
          pbVar12 = param_2;
          goto LAB_0018cff8;
        }
        uVar10 = 0;
        if (pbVar12 < pbVar8) {
          uVar10 = (uint)*pbVar12;
        }
        iVar7 = 0;
        while (uVar10 != 0x3b) {
          while( true ) {
            uVar2 = DAT_0018d078;
            param_2 = pbVar12;
            if (9 < (uVar10 - 0x30 & 0xff)) goto LAB_0018cece;
            pbVar12 = pbVar12 + 1;
            iVar7 = iVar7 * 10 + uVar10 + -0x30;
            if (pbVar12 < pbVar8) break;
            uVar10 = 0;
          }
          uVar10 = (uint)*pbVar12;
        }
      }
      param_2 = pbVar12 + 1;
      pbVar12 = param_2;
      if (iVar7 != 0) {
        iVar7 = FUN_0017ab20(auStack_28);
        auStack_28[iVar7] = 0;
        iVar7 = FUN_0018a0b0(param_1,auStack_28);
        if ((iVar7 != 0) && (iVar5 = iVar7, iVar4 = iVar7, iVar1 != 0)) {
          iVar5 = FUN_0018c414(iVar1,iVar7);
          iVar4 = iVar14;
        }
      }
    } while( true );
  }
LAB_0018d042:
  if (local_1c == **(int **)(iVar11 + DAT_0018d06c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar14);
LAB_0018d006:
  if ((iVar4 == 0) || (param_2 != pbVar12)) {
    if ((iVar5 == 0) || (*(int *)(iVar5 + 4) != 3)) {
      iVar6 = FUN_0018b038(param_1,pbVar12,(int)param_2 - (int)pbVar12);
      if ((iVar6 != 0) && (iVar14 = iVar6, iVar5 != 0)) {
        FUN_0018c414(iVar5,iVar6);
        iVar14 = iVar4;
      }
    }
    else {
      FUN_0018c0d4(iVar5,pbVar12,(int)param_2 - (int)pbVar12);
    }
  }
  goto LAB_0018d042;
LAB_0018cece:
  FUN_0018a658(uVar2,param_1,0);
  pbVar12 = param_2;
  goto LAB_0018cff8;
}


