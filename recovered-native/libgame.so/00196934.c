/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196934  Symbol: FUN_00196934 */

void FUN_00196934(undefined *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint *puVar2;
  size_t __n;
  int iVar3;
  uint *puVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  char *local_4c;
  byte *local_44;
  char acStack_2c [16];
  int local_1c;
  
  iVar8 = DAT_00196ac0 + 0x196940;
  local_1c = **(int **)(iVar8 + DAT_00196ac4);
  if (((param_2 == (int *)0x0) || (param_1 == (undefined *)0x0)) || (param_4 == (int *)0x0)) {
    iVar3 = 1;
LAB_00196aa6:
    iVar3 = -iVar3;
  }
  else {
    if (param_3 == (byte *)0x0) {
      *param_2 = 0;
      *param_4 = 0;
    }
    else {
      pbVar6 = param_3 + *param_4;
      iVar3 = *param_2;
      puVar2 = (uint *)(iVar8 + DAT_00196ac8 + 0x38);
      puVar9 = param_1;
      local_44 = param_3;
      while (local_44 < pbVar6) {
        uVar7 = (uint)*local_44;
        iVar5 = 0;
        if (0x7f < uVar7) {
          if (uVar7 < 0xc0) {
            *param_2 = (int)puVar9 - (int)param_1;
LAB_001969d6:
            *param_4 = (int)local_44 - (int)param_3;
            iVar3 = 2;
            goto LAB_00196aa6;
          }
          if (uVar7 < 0xe0) {
            uVar7 = uVar7 & 0x1f;
            iVar5 = 1;
          }
          else if (uVar7 < 0xf0) {
            uVar7 = uVar7 & 0xf;
            iVar5 = 2;
          }
          else {
            if (0xf7 < uVar7) {
              *param_2 = (int)puVar9 - (int)param_1;
              goto LAB_001969d6;
            }
            uVar7 = uVar7 & 7;
            iVar5 = 3;
          }
        }
        pbVar10 = local_44 + 1;
        if ((int)pbVar6 - (int)pbVar10 < iVar5) break;
        while ((iVar5 != 0 && (pbVar10 < pbVar6))) {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if ((bVar1 & 0xc0) != 0x80) break;
          uVar7 = uVar7 << 6 | bVar1 & 0x3f;
          iVar5 = iVar5 + -1;
        }
        if (uVar7 < 0x80) {
          if (param_1 + iVar3 <= puVar9 + 1) break;
          *puVar9 = (char)uVar7;
          puVar9 = puVar9 + 1;
          local_44 = pbVar10;
        }
        else {
          iVar5 = 0;
          puVar4 = puVar2;
          do {
            if (uVar7 <= *puVar4) {
              if ((*puVar4 <= uVar7) && (puVar4 = puVar2 + iVar5 * 3, puVar4 != (uint *)0x0)) {
                local_4c = (char *)puVar4[1];
                goto LAB_00196a58;
              }
              break;
            }
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 3;
          } while (iVar5 != 0xfd);
          local_4c = acStack_2c;
          snprintf(local_4c,0x10,(char *)(iVar8 + DAT_00196acc));
LAB_00196a58:
          __n = strlen(local_4c);
          if (param_1 + iVar3 <= puVar9 + __n + 2) break;
          *puVar9 = 0x26;
          puVar9 = puVar9 + 1;
          memcpy(puVar9,local_4c,__n);
          puVar9[__n] = 0x3b;
          puVar9 = puVar9 + __n + 1;
          local_44 = pbVar10;
        }
      }
      *param_2 = (int)puVar9 - (int)param_1;
      *param_4 = (int)local_44 - (int)param_3;
    }
    iVar3 = 0;
  }
  if (local_1c == **(int **)(iVar8 + DAT_00196ac4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


