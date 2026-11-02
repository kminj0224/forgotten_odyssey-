/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182b9c  Symbol: FUN_00182b9c */

void FUN_00182b9c(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar4 = param_1[9];
  local_24 = *(undefined4 *)(iVar4 + 0x1c);
  local_28 = *(undefined4 *)(iVar4 + 0x20);
  iVar7 = DAT_00182e44 + 0x182bb4;
  if (((param_1[0x49] == 0) && (500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc))) &&
     (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_00182e48)) {
    FUN_0017cc50(param_1);
  }
  if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
    FUN_0017c738(param_1);
  }
  if (param_2 == 0) {
    iVar7 = iVar7 + DAT_00182e4c;
    pbVar6 = *(byte **)(param_1[9] + 0x10);
    do {
      while( true ) {
        for (; bVar1 = *pbVar6, bVar1 == 0x20; pbVar6 = pbVar6 + 1) {
          *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
        }
        if (bVar1 != 10) break;
        do {
          pbVar6 = pbVar6 + 1;
          *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
          *(undefined4 *)(param_1[9] + 0x20) = 1;
        } while (*pbVar6 == 10);
      }
      if (bVar1 == 0x3c) {
        iVar7 = *(int *)(param_1[9] + 0x10);
        iVar4 = (int)pbVar6 - iVar7;
        if (iVar4 < 1) {
          return;
        }
        *(byte **)(param_1[9] + 0x10) = pbVar6;
        iVar3 = *param_1;
        if (iVar3 != 0) {
          pcVar5 = *(code **)(iVar3 + 0x48);
          if (pcVar5 != *(code **)(iVar3 + 0x44)) {
            iVar3 = FUN_0017dbe4(param_1,iVar7,iVar4,1);
            if (iVar3 == 0) {
              pcVar5 = *(code **)(*param_1 + 0x44);
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(param_1[1],iVar7,iVar4);
              }
              if (*(int *)param_1[0x3a] != -1) {
                return;
              }
              *(int *)param_1[0x3a] = -2;
              return;
            }
            pcVar5 = *(code **)(*param_1 + 0x48);
          }
          if (pcVar5 == (code *)0x0) {
            return;
          }
          (*pcVar5)(param_1[1],iVar7,iVar4);
          return;
        }
        return;
      }
      while( true ) {
        while( true ) {
          iVar4 = *(int *)(param_1[9] + 0x20);
          while (*(char *)(iVar7 + (uint)*pbVar6) != '\0') {
            pbVar6 = pbVar6 + 1;
            iVar4 = iVar4 + 1;
          }
          *(int *)(param_1[9] + 0x20) = iVar4;
          if (*pbVar6 != 10) break;
          do {
            pbVar6 = pbVar6 + 1;
            *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
            *(undefined4 *)(param_1[9] + 0x20) = 1;
          } while (*pbVar6 == 10);
        }
        if (*pbVar6 != 0x5d) break;
        if ((pbVar6[1] == 0x5d) && (pbVar6[2] == 0x3e)) {
          FUN_0017b7fc(param_1,0x3e,0);
          *(byte **)(param_1[9] + 0x10) = pbVar6;
          return;
        }
        *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 1;
        pbVar6 = pbVar6 + 1;
      }
      pcVar8 = *(char **)(param_1[9] + 0x10);
      iVar4 = (int)pbVar6 - (int)pcVar8;
      if (0 < iVar4) {
        iVar3 = *param_1;
        if (iVar3 != 0) {
          pcVar5 = *(code **)(iVar3 + 0x44);
          if ((*(code **)(iVar3 + 0x48) == pcVar5) ||
             (((cVar2 = *pcVar8, 1 < (byte)(cVar2 - 9U) && (cVar2 != ' ')) && (cVar2 != '\r')))) {
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(param_1[1],pcVar8,iVar4);
            }
            iVar4 = param_1[9];
            local_24 = *(undefined4 *)(iVar4 + 0x1c);
          }
          else {
            *(byte **)(param_1[9] + 0x10) = pbVar6;
            iVar3 = FUN_0017dbe4(param_1,pcVar8,iVar4,0);
            if (iVar3 == 0) {
              pcVar5 = *(code **)(*param_1 + 0x44);
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(param_1[1],pcVar8,iVar4);
              }
              if (*(int *)param_1[0x3a] == -1) {
                *(int *)param_1[0x3a] = -2;
              }
            }
            else {
              pcVar5 = *(code **)(*param_1 + 0x48);
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(param_1[1],pcVar8,iVar4);
              }
            }
            iVar4 = param_1[9];
            local_24 = *(undefined4 *)(iVar4 + 0x1c);
          }
          local_28 = *(undefined4 *)(iVar4 + 0x20);
        }
        if (param_1[0x2b] != 7) {
          return;
        }
      }
      *(byte **)(param_1[9] + 0x10) = pbVar6;
      bVar1 = *pbVar6;
      if (bVar1 == 0xd) {
        if (pbVar6[1] != 10) goto LAB_00182dcc;
        *(byte **)(param_1[9] + 0x10) = pbVar6 + 1;
        pbVar6 = pbVar6 + 2;
        *(int *)(param_1[9] + 0x1c) = *(int *)(param_1[9] + 0x1c) + 1;
        *(undefined4 *)(param_1[9] + 0x20) = 1;
      }
      else {
        if (bVar1 == 0x3c) {
          return;
        }
        if (bVar1 == 0x26) {
          return;
        }
LAB_00182dcc:
        if (param_1[0x49] == 0) {
          iVar4 = param_1[9];
          if ((500 < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) &&
             (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) <= DAT_00182e48)) {
            FUN_0017cc50(param_1);
          }
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        pbVar6 = *(byte **)(param_1[9] + 0x10);
      }
    } while (((byte)(*pbVar6 - 0x20) < 0x60) || (*pbVar6 == 9));
  }
  *(undefined4 *)(param_1[9] + 0x1c) = local_24;
  *(undefined4 *)(param_1[9] + 0x20) = local_28;
  FUN_00182890(param_1,param_2);
  return;
}


