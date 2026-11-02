/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00186694  Symbol: FUN_00186694 */

void FUN_00186694(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *local_20;
  int local_1c [2];
  
  iVar12 = param_1[9];
  pcVar7 = *(char **)(iVar12 + 0x10);
  iVar11 = DAT_00186964 + 0x1866a2;
  if ((((((*pcVar7 == '<') && (pcVar7[1] == '!')) && (pcVar7[2] == 'A')) &&
       ((pcVar7[3] == 'T' && (pcVar7[4] == 'T')))) && (pcVar7[5] == 'L')) &&
     (((pcVar7[6] == 'I' && (pcVar7[7] == 'S')) && (pcVar7[8] == 'T')))) {
    param_1[0x32] = param_1[0x32] + 9;
    *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 9;
    *(int *)(param_1[9] + 0x20) = *(int *)(param_1[9] + 0x20) + 9;
    if (**(char **)(param_1[9] + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    if ((**(char **)(param_1[9] + 0x10) == '\0') &&
       (iVar2 = FUN_0017a2bc(param_1[9],0xfa), iVar2 < 1)) {
      FUN_0017c6c4(param_1);
    }
    cVar1 = **(char **)(param_1[9] + 0x10);
    if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
      FUN_0017bae0(param_1,0x41,iVar11 + DAT_00186968);
    }
    FUN_0017ff44(param_1);
    iVar2 = FUN_0017f6b8(param_1);
    if (iVar2 == 0) {
      FUN_0017bae0(param_1,0x44,iVar11 + DAT_0018696c);
    }
    else {
      FUN_0017ff44(param_1);
      if ((param_1[0x49] == 0) && (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)
         ) {
        FUN_0017c738(param_1);
      }
      while( true ) {
        iVar10 = param_1[9];
        pcVar7 = *(char **)(iVar10 + 0x10);
        if (*pcVar7 == '>') break;
        local_20 = (char *)0x0;
        if ((param_1[0x49] == 0) && (*(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        local_1c[0] = 0;
        iVar10 = FUN_0017f6b8(param_1);
        if (iVar10 == 0) {
          uVar5 = 0x44;
          iVar2 = DAT_00186970;
LAB_00186808:
          FUN_0017bae0(param_1,uVar5,iVar11 + iVar2);
          break;
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        cVar1 = **(char **)(param_1[9] + 0x10);
        if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
          uVar5 = 0x41;
          iVar2 = DAT_00186974;
          goto LAB_00186808;
        }
        FUN_0017ff44(param_1);
        iVar3 = FUN_00182500(param_1,local_1c);
        if (iVar3 < 1) break;
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        cVar1 = **(char **)(param_1[9] + 0x10);
        if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
          FUN_0017bae0(param_1,0x41,iVar11 + DAT_00186978);
LAB_00186928:
          if (local_1c[0] != 0) {
            FUN_00193e3c();
          }
          break;
        }
        FUN_0017ff44(param_1);
        iVar4 = FUN_001864bc(param_1,&local_20);
        if (iVar4 < 1) {
LAB_0018691a:
          if (local_20 != (char *)0x0) {
            (***(code ***)(iVar11 + DAT_00186984))();
          }
          goto LAB_00186928;
        }
        if ((iVar3 != 1) && (pcVar6 = local_20, local_20 != (char *)0x0)) {
          for (; pcVar8 = local_20, *pcVar6 == ' '; pcVar6 = pcVar6 + 1) {
          }
          while (cVar1 = *pcVar6, cVar1 != '\0') {
            if (cVar1 == ' ') {
              for (; *pcVar6 == ' '; pcVar6 = pcVar6 + 1) {
              }
              if (*pcVar6 != '\0') {
                *pcVar8 = ' ';
                pcVar8 = pcVar8 + 1;
              }
            }
            else {
              *pcVar8 = cVar1;
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
            }
          }
          *pcVar8 = '\0';
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
        cVar1 = **(char **)(param_1[9] + 0x10);
        if (cVar1 != '>') {
          if (((1 < (byte)(cVar1 - 9U)) && (cVar1 != ' ')) && (cVar1 != '\r')) {
            FUN_0017bae0(param_1,0x41,iVar11 + DAT_0018697c);
            goto LAB_0018691a;
          }
          FUN_0017ff44(param_1);
        }
        if (pcVar7 == *(char **)(param_1[9] + 0x10)) {
          FUN_0017b7fc(param_1,1,iVar11 + DAT_00186980);
          goto LAB_0018691a;
        }
        if (((*param_1 == 0) || (param_1[0x35] != 0)) ||
           (pcVar9 = *(code **)(*param_1 + 0x20), pcVar9 == (code *)0x0)) {
          if (local_1c[0] != 0) {
            FUN_00193e3c();
          }
        }
        else {
          (*pcVar9)(param_1[1],iVar2,iVar10,iVar3,iVar4,local_20,local_1c[0]);
        }
        if (((param_1[0x51] != 0) && (iVar4 != 3)) && ((local_20 != (char *)0x0 && (iVar4 != 2)))) {
          FUN_0017d9d0(param_1,iVar2,iVar10);
        }
        if (param_1[0x51] != 0) {
          FUN_0017db94(param_1,iVar2,iVar10,iVar3);
        }
        if (local_20 != (char *)0x0) {
          (***(code ***)(iVar11 + DAT_00186a28))();
        }
        if ((param_1[0x49] == 0) &&
           (*(int *)(param_1[9] + 0x14) - *(int *)(param_1[9] + 0x10) < 0xfa)) {
          FUN_0017c738(param_1);
        }
      }
      if (**(char **)(param_1[9] + 0x10) == '>') {
        if (iVar12 != param_1[9]) {
          FUN_0017bb40(param_1,0x5a,iVar11 + DAT_00186a2c,0,0);
        }
        FUN_0017a4a4(param_1);
      }
    }
  }
  return;
}


