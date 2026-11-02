/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a70c  Symbol: FUN_0017a70c */

void FUN_0017a70c(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  char acStack_b4 [152];
  int local_1c;
  
  iVar6 = DAT_0017a93c + 0x17a718;
  local_1c = **(int **)(iVar6 + DAT_0017a940);
  if ((((param_2 == (undefined4 *)0x0) || (param_1 == 0)) ||
      (iVar1 = *(int *)(param_1 + 0x24), iVar1 == 0)) || (*(int *)(param_1 + 0xac) == -1)) {
LAB_0017a922:
    uVar2 = 0;
    goto LAB_0017a928;
  }
  pbVar5 = *(byte **)(iVar1 + 0x10);
  uVar2 = (uint)*pbVar5;
  if ((uVar2 - 0x20 & 0xff) < 0x60) {
LAB_0017a916:
    *param_2 = 1;
    uVar2 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  }
  else {
    if (*(int *)(param_1 + 0x100) == 1) {
      if ((int)(uVar2 * 0x1000000) < 0) {
        if (((int)(uVar2 << 0x19) < 0) && (uVar2 != 0xc0)) {
          if (pbVar5[1] == 0) {
            FUN_0017a2bc(iVar1,0xfa);
          }
          if ((pbVar5[1] & 0xc0) == 0x80) {
            if ((uVar2 & 0xe0) == 0xe0) {
              if (pbVar5[2] == 0) {
                FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
              }
              if ((pbVar5[2] & 0xc0) == 0x80) {
                if ((uVar2 & 0xf0) == 0xf0) {
                  if (pbVar5[3] == 0) {
                    FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
                  }
                  if (((uVar2 & 0xf8) != 0xf0) || ((pbVar5[3] & 0xc0) != 0x80)) goto LAB_0017a8ce;
                  *param_2 = 4;
                  uVar2 = pbVar5[3] & 0x3f | (*pbVar5 & 7) << 0x12 | (pbVar5[1] & 0x3f) << 0xc |
                          (pbVar5[2] & 0x3f) << 6;
                  uVar3 = DAT_0017a944;
                }
                else {
                  *param_2 = 3;
                  uVar2 = (uint)*pbVar5 << 0xc & DAT_0017a944 | pbVar5[2] & 0x3f |
                          (pbVar5[1] & 0x3f) << 6;
                  uVar3 = DAT_0017a948;
                }
                if (uVar3 < uVar2) goto LAB_0017a84c;
              }
            }
            else {
              *param_2 = 2;
              uVar2 = pbVar5[1] & 0x3f | (*pbVar5 & 0x1f) << 6;
              if (0x7f < uVar2) {
                if (uVar2 < 0x100) goto LAB_0017a928;
LAB_0017a84c:
                if (((DAT_0017a950 < uVar2 + DAT_0017a94c) && (DAT_0017a954 < uVar2 - 0x100)) &&
                   (DAT_0017a95c < uVar2 + DAT_0017a958)) {
                  FUN_0017a43c(param_1,iVar6 + DAT_0017a960,uVar2);
                }
                goto LAB_0017a928;
              }
            }
          }
        }
LAB_0017a8ce:
        pbVar5 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
        if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pbVar5 < 4) {
          *param_2 = 0;
          goto LAB_0017a922;
        }
        snprintf(acStack_b4,0x95,(char *)(iVar6 + DAT_0017a968),(uint)*pbVar5,(uint)pbVar5[1],
                 (uint)pbVar5[2],(uint)pbVar5[3]);
        FUN_001793c8(param_1,9,iVar6 + DAT_0017a96c,acStack_b4,0);
        *(undefined4 *)(param_1 + 0x100) = 10;
        goto LAB_0017a916;
      }
      *param_2 = 1;
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') {
        FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa);
      }
      pcVar4 = *(char **)(*(int *)(param_1 + 0x24) + 0x10);
      if ((*pcVar4 == '\0') && (pcVar4 < *(char **)(*(int *)(param_1 + 0x24) + 0x14))) {
        FUN_0017a43c(param_1,iVar6 + DAT_0017a964,0);
      }
    }
    else {
      *param_2 = 1;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = (uint)**(byte **)(iVar1 + 0x10);
    if (uVar2 == 0xd) {
      if ((*(byte **)(iVar1 + 0x10))[1] == 10) {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      }
      uVar2 = 10;
    }
  }
LAB_0017a928:
  if (local_1c == **(int **)(iVar6 + DAT_0017a940)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


