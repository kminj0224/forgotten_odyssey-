/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017a4a4  Symbol: FUN_0017a4a4 */

void FUN_0017a4a4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *__s;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  char acStack_b4 [152];
  int local_1c;
  
  iVar6 = DAT_0017a6e0 + 0x17a4b0;
  local_1c = **(int **)(iVar6 + DAT_0017a6e4);
  if (((param_1 == 0) || (*(int *)(param_1 + 0xac) == -1)) ||
     (iVar3 = *(int *)(param_1 + 0x24), iVar3 == 0)) goto LAB_0017a6cc;
  if (*(int *)(param_1 + 0x100) == 1) {
    if (((**(char **)(iVar3 + 0x10) != '\0') || (iVar3 = FUN_0017a2bc(iVar3,0xfa), 0 < iVar3)) ||
       (*(int *)(param_1 + 0xac) == 5)) {
      iVar3 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar3 + 0x10) == '\n') {
        iVar4 = 1;
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
        iVar3 = *(int *)(param_1 + 0x24);
      }
      else {
        iVar4 = *(int *)(iVar3 + 0x20) + 1;
      }
      *(int *)(iVar3 + 0x20) = iVar4;
      iVar3 = *(int *)(param_1 + 0x24);
      pbVar5 = *(byte **)(iVar3 + 0x10);
      uVar7 = (uint)*pbVar5;
      if ((int)(uVar7 * 0x1000000) < 0) {
        if (uVar7 != 0xc0) {
          if (pbVar5[1] == 0) {
            FUN_0017a2bc(iVar3,0xfa);
          }
          if ((pbVar5[1] & 0xc0) == 0x80) {
            if ((uVar7 & 0xe0) != 0xe0) {
              iVar4 = *(int *)(param_1 + 0x24);
              iVar3 = *(int *)(iVar4 + 0x10) + 2;
              goto LAB_0017a622;
            }
            if (pbVar5[2] == 0) {
              FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
            }
            uVar2 = DAT_0017a6e8;
            if ((pbVar5[2] & 0xc0) == 0x80) {
              if ((uVar7 & 0xf0) == 0xf0) {
                if (pbVar5[3] == 0) {
                  FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
                }
                if (((uVar7 & 0xf8) != 0xf0) || ((pbVar5[3] & 0xc0) != 0x80)) goto LAB_0017a670;
                *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
                     *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 4;
                uVar7 = pbVar5[3] & 0x3f | (*pbVar5 & 7) << 0x12 | (pbVar5[1] & 0x3f) << 0xc;
                bVar1 = pbVar5[2];
              }
              else {
                *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
                     *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 3;
                bVar1 = pbVar5[1];
                uVar7 = (uint)*pbVar5 << 0xc & uVar2 | pbVar5[2] & 0x3f;
              }
              uVar7 = uVar7 | (bVar1 & 0x3f) << 6;
              if (((uVar7 + DAT_0017a6ec < 2) || (uVar7 + DAT_0017a6f0 <= DAT_0017a6f4)) ||
                 (DAT_0017a6f8 < uVar7)) {
                FUN_0017a43c(param_1,iVar6 + DAT_0017a6fc);
              }
              goto LAB_0017a624;
            }
          }
        }
LAB_0017a670:
        iVar3 = *(int *)(param_1 + 0x24);
        if ((iVar3 == 0) ||
           (pbVar5 = *(byte **)(iVar3 + 0x10), *(int *)(iVar3 + 0x14) - (int)pbVar5 < 4)) {
          __s = (char *)0x0;
          iVar3 = DAT_0017a700;
        }
        else {
          __s = acStack_b4;
          snprintf(__s,0x95,(char *)(iVar6 + DAT_0017a704),(uint)*pbVar5,(uint)pbVar5[1],
                   (uint)pbVar5[2],(uint)pbVar5[3]);
          iVar3 = DAT_0017a708;
        }
        FUN_001793c8(param_1,9,iVar6 + iVar3,__s,0);
        *(undefined4 *)(param_1 + 0x100) = 10;
        *(int *)(*(int *)(param_1 + 0x24) + 0x10) = *(int *)(*(int *)(param_1 + 0x24) + 0x10) + 1;
        goto LAB_0017a6cc;
      }
      *(byte **)(iVar3 + 0x10) = pbVar5 + 1;
      goto LAB_0017a624;
    }
    FUN_0017c6c4(param_1);
  }
  else {
    if (**(char **)(iVar3 + 0x10) == '\n') {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = 1;
    }
    else {
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
    }
    iVar4 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(iVar4 + 0x10) + 1;
LAB_0017a622:
    *(int *)(iVar4 + 0x10) = iVar3;
LAB_0017a624:
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') {
      FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa);
    }
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') && (*(int *)(param_1 + 0x20) == 0)) {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
     (iVar3 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar3 < 1)) {
    FUN_0017c6c4(param_1);
  }
LAB_0017a6cc:
  if (local_1c == **(int **)(iVar6 + DAT_0017a6e4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


