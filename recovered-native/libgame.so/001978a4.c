/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001978a4  Symbol: FUN_001978a4 */

void FUN_001978a4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  char acStack_b4 [152];
  int local_1c;
  
  iVar5 = DAT_00197a94 + 0x1978b0;
  local_1c = **(int **)(iVar5 + DAT_00197a98);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xac) == -1) goto LAB_00197a80;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    *param_2 = 0;
    uVar2 = *(uint *)(param_1 + 0xb0);
    goto LAB_00197a80;
  }
  if (*(int *)(param_1 + 0x100) != 1) {
    *param_2 = 1;
    uVar2 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    if ((int)(uVar2 * 0x1000000) < 0) {
      FUN_00179fd4(param_1,10);
      *(undefined4 *)(param_1 + 0x100) = 1;
      uVar2 = FUN_0017a70c(param_1,param_2);
    }
    goto LAB_00197a80;
  }
  pbVar4 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
  uVar2 = (uint)*pbVar4;
  if ((int)(uVar2 * 0x1000000) < 0) {
    if (pbVar4[1] == 0) {
      FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa);
    }
    if ((pbVar4[1] & 0xc0) == 0x80) {
      if ((uVar2 & 0xe0) == 0xe0) {
        if (pbVar4[2] == 0) {
          FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
        }
        if ((pbVar4[2] & 0xc0) != 0x80) goto LAB_00197a2a;
        if ((uVar2 & 0xf0) == 0xf0) {
          if (pbVar4[3] == 0) {
            FUN_0017a2bc(*(undefined4 *)(param_1 + 0x24),0xfa);
          }
          if (((uVar2 & 0xf8) != 0xf0) || ((pbVar4[3] & 0xc0) != 0x80)) goto LAB_00197a2a;
          *param_2 = 4;
          uVar2 = pbVar4[3] & 0x3f | (*pbVar4 & 7) << 0x12 | (pbVar4[1] & 0x3f) << 0xc;
          bVar1 = pbVar4[2];
        }
        else {
          *param_2 = 3;
          bVar1 = pbVar4[1];
          uVar2 = (uint)*pbVar4 << 0xc & DAT_00197a9c | pbVar4[2] & 0x3f;
        }
        uVar3 = bVar1 & 0x3f;
      }
      else {
        *param_2 = 2;
        uVar3 = *pbVar4 & 0x1f;
        uVar2 = pbVar4[1] & 0x3f;
      }
      uVar2 = uVar2 | uVar3 << 6;
      if (uVar2 < 0x100) {
        if ((uVar2 - 9 < 2) || (uVar2 == 0xd)) {
          bVar6 = false;
        }
        else {
          bVar6 = uVar2 < 0x20;
        }
      }
      else if ((DAT_00197aa4 < uVar2 + DAT_00197aa0) && (DAT_00197aa8 < uVar2 - 0x100)) {
        bVar6 = DAT_00197ab0 < uVar2 + DAT_00197aac;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_0019784c(param_1,iVar5 + DAT_00197ab4,uVar2);
      }
      goto LAB_00197a80;
    }
LAB_00197a2a:
    pbVar4 = *(byte **)(*(int *)(param_1 + 0x24) + 0x10);
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - (int)pbVar4 < 4) {
      snprintf(acStack_b4,0x95,(char *)(iVar5 + DAT_00197abc),(uint)*pbVar4);
    }
    else {
      snprintf(acStack_b4,0x95,(char *)(iVar5 + DAT_00197ab8),(uint)*pbVar4,(uint)pbVar4[1],
               (uint)pbVar4[2],(uint)pbVar4[3]);
    }
    FUN_00195ba4(param_1,0x51,iVar5 + DAT_00197ac0,acStack_b4,0);
    *(undefined4 *)(param_1 + 0x100) = 10;
  }
  *param_2 = 1;
  uVar2 = (uint)**(byte **)(*(int *)(param_1 + 0x24) + 0x10);
LAB_00197a80:
  if (local_1c == **(int **)(iVar5 + DAT_00197a98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


