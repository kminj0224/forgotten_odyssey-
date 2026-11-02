/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019679c  Symbol: FUN_0019679c */

void FUN_0019679c(undefined *param_1,int *param_2,byte *param_3,int *param_4,uint param_5)

{
  byte bVar1;
  size_t __n;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  char *local_48;
  byte *local_44;
  char acStack_2c [16];
  int local_1c;
  
  iVar7 = DAT_00196924 + 0x1967a8;
  local_1c = **(int **)(iVar7 + DAT_00196928);
  if ((((param_2 == (int *)0x0) || (param_1 == (undefined *)0x0)) || (param_4 == (int *)0x0)) ||
     (param_3 == (byte *)0x0)) {
    iVar2 = 1;
LAB_0019690c:
    iVar2 = -iVar2;
  }
  else {
    iVar2 = *param_2;
    iVar9 = *param_4;
    puVar4 = (uint *)(iVar7 + DAT_0019692c + 0x38);
    puVar8 = param_1;
    local_44 = param_3;
    while (local_44 < param_3 + iVar9) {
      uVar6 = (uint)*local_44;
      iVar5 = 0;
      if (0x7f < uVar6) {
        if (uVar6 < 0xc0) {
LAB_00196842:
          *param_2 = (int)puVar8 - (int)param_1;
LAB_0019684e:
          *param_4 = (int)local_44 - (int)param_3;
          iVar2 = 2;
          goto LAB_0019690c;
        }
        if (uVar6 < 0xe0) {
          uVar6 = uVar6 & 0x1f;
          iVar5 = 1;
        }
        else if (uVar6 < 0xf0) {
          uVar6 = uVar6 & 0xf;
          iVar5 = 2;
        }
        else {
          if (0xf7 < uVar6) {
            *param_2 = (int)puVar8 - (int)param_1;
            goto LAB_0019684e;
          }
          uVar6 = uVar6 & 7;
          iVar5 = 3;
        }
      }
      pbVar10 = local_44 + 1;
      if ((int)(param_3 + iVar9) - (int)pbVar10 < iVar5) break;
      while (iVar5 != 0) {
        bVar1 = *pbVar10;
        iVar5 = iVar5 + -1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_00196842;
        pbVar10 = pbVar10 + 1;
        uVar6 = uVar6 << 6 | bVar1 & 0x3f;
      }
      if (((uVar6 == param_5) || (0x7f < uVar6)) ||
         ((uVar6 == 0x3c || ((uVar6 == 0x26 || (uVar6 == 0x3e)))))) {
        iVar5 = 0;
        puVar3 = puVar4;
        do {
          if (uVar6 <= *puVar3) {
            if ((*puVar3 <= uVar6) && (puVar3 = puVar4 + iVar5 * 3, puVar3 != (uint *)0x0)) {
              local_48 = (char *)puVar3[1];
              goto LAB_001968c0;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          puVar3 = puVar3 + 3;
        } while (iVar5 != 0xfd);
        local_48 = acStack_2c;
        snprintf(local_48,0x10,(char *)(iVar7 + DAT_00196930));
LAB_001968c0:
        __n = strlen(local_48);
        if (param_1 + iVar2 < puVar8 + __n + 2) break;
        *puVar8 = 0x26;
        memcpy(puVar8 + 1,local_48,__n);
        uVar6 = 0x3b;
        puVar8 = puVar8 + 1 + __n;
      }
      else if (param_1 + iVar2 <= puVar8) break;
      *puVar8 = (char)uVar6;
      puVar8 = puVar8 + 1;
      local_44 = pbVar10;
    }
    *param_2 = (int)puVar8 - (int)param_1;
    iVar2 = 0;
    *param_4 = (int)local_44 - (int)param_3;
  }
  if (local_1c == **(int **)(iVar7 + DAT_00196928)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


