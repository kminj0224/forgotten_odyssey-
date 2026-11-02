/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00184954  Symbol: FUN_00184954 */

int FUN_00184954(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int local_48;
  undefined4 *local_34;
  int local_30;
  int local_1c [2];
  
  local_48 = param_1[0x4c];
  puVar13 = (undefined4 *)param_1[0x4b];
  iVar8 = param_1[9];
  iVar12 = DAT_00184c2c + 0x18496e;
  if (**(char **)(iVar8 + 0x10) == '<') {
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
    *(int *)(param_1[9] + 0x10) = *(int *)(param_1[9] + 0x10) + 1;
    param_1[0x32] = param_1[0x32] + 1;
    if (**(char **)(param_1[9] + 0x10) == '\0') {
      FUN_0017a2bc(param_1[9],0xfa);
    }
    iVar8 = FUN_0017f6b8(param_1);
    if (iVar8 != 0) {
      FUN_0017ff44(param_1);
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_0017c738(param_1);
      }
      iVar3 = DAT_00184c38;
      iVar15 = 0;
      iVar9 = iVar12 + DAT_00184c34;
      do {
        pbVar7 = *(byte **)(param_1[9] + 0x10);
        bVar2 = *pbVar7;
        if (((bVar2 == 0x3e) || ((bVar2 == 0x2f && (pbVar7[1] == 0x3e)))) ||
           ((1 < (byte)(bVar2 - 9) && ((bVar2 != 0xd && (bVar2 < 0x20)))))) goto LAB_00184bda;
        iVar4 = *(int *)(param_1[9] + 0x24);
        iVar5 = FUN_00184828(param_1,local_1c);
        if ((iVar5 == 0) || (local_1c[0] == 0)) {
LAB_00184ad8:
          if (local_1c[0] != 0) {
            pcVar11 = **(code ***)(iVar12 + iVar3);
LAB_00184ae4:
            (*pcVar11)(local_1c[0]);
          }
        }
        else {
          local_34 = puVar13;
          for (local_30 = 0; local_30 < iVar15; local_30 = local_30 + 2) {
            iVar10 = FUN_0019c30c(*local_34,iVar5);
            local_34 = local_34 + 2;
            if (iVar10 != 0) {
              FUN_0017bbac(param_1,0,iVar5);
              pcVar11 = **(code ***)(iVar12 + iVar3);
              goto LAB_00184ae4;
            }
          }
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)(***(code ***)(iVar12 + DAT_00184c3c))(0x58);
            if (puVar13 == (undefined4 *)0x0) {
              FUN_00179430(param_1,0);
              if (local_1c[0] == 0) {
                local_48 = 0x16;
              }
              else {
                (***(code ***)(iVar12 + iVar3))();
                local_48 = 0x16;
              }
              goto LAB_00184ae6;
            }
            param_1[0x4b] = (int)puVar13;
            param_1[0x4c] = 0x16;
            local_48 = 0x16;
            puVar6 = puVar13;
          }
          else {
            puVar6 = puVar13;
            if (local_48 <= iVar15 + 3) {
              iVar10 = local_48 << 1;
              puVar6 = (undefined4 *)(***(code ***)(iVar12 + DAT_00184c40))(puVar13,local_48 << 3);
              local_48 = iVar10;
              if (puVar6 == (undefined4 *)0x0) {
                FUN_00179430(param_1,0);
                goto LAB_00184ad8;
              }
              param_1[0x4b] = (int)puVar6;
              param_1[0x4c] = iVar10;
            }
          }
          puVar6[iVar15] = iVar5;
          puVar6[iVar15 + 1] = local_1c[0];
          puVar6[iVar15 + 2] = 0;
          puVar6[iVar15 + 3] = 0;
          puVar13 = puVar6;
          iVar15 = iVar15 + 2;
        }
LAB_00184ae6:
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        cVar1 = **(char **)(param_1[9] + 0x10);
        if ((cVar1 == '>') || ((cVar1 == '/' && ((*(char **)(param_1[9] + 0x10))[1] == '>'))))
        goto LAB_00184bda;
        if ((1 < (byte)(cVar1 - 9U)) && ((cVar1 != ' ' && (cVar1 != '\r')))) {
          FUN_0017bae0(param_1,0x41,iVar9);
        }
        FUN_0017ff44(param_1);
        iVar10 = param_1[9];
        if ((((iVar4 == *(int *)(iVar10 + 0x24)) && (iVar5 == 0)) &&
            (pbVar7 == *(byte **)(iVar10 + 0x10))) && (local_1c[0] == 0)) {
          FUN_0017bae0(param_1,1,iVar12 + DAT_00184c44);
LAB_00184bda:
          if (((*param_1 != 0) && (pcVar11 = *(code **)(*param_1 + 0x38), pcVar11 != (code *)0x0))
             && (param_1[0x35] == 0)) {
            puVar6 = puVar13;
            if (iVar15 == 0) {
              puVar6 = (undefined4 *)0x0;
            }
            (*pcVar11)(param_1[1],iVar8,puVar6);
          }
          iVar3 = DAT_00184c38;
          if (puVar13 != (undefined4 *)0x0) {
            piVar14 = puVar13 + 1;
            for (iVar9 = 1; iVar9 < iVar15; iVar9 = iVar9 + 2) {
              if (*piVar14 != 0) {
                (***(code ***)(iVar12 + iVar3))();
              }
              piVar14 = piVar14 + 2;
            }
            return iVar8;
          }
          return iVar8;
        }
        if (((param_1[0x49] == 0) && (500 < *(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc))) &&
           (*(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x10) <= DAT_00184c48)) {
          FUN_0017cc50(param_1);
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
      } while( true );
    }
    FUN_0017bae0(param_1,0x44,iVar12 + DAT_00184c30);
  }
  return 0;
}


