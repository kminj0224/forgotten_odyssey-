/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f8470  Symbol: FUN_001f8470 */

int ** FUN_001f8470(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int *param_7,int **param_8,int param_9,int param_10,
                   uint *param_11)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  wchar_t wVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int **ppiVar13;
  wchar_t wVar14;
  wchar_t *pwVar15;
  int **local_40;
  int *local_3c;
  int **local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  ppiVar13 = param_8;
  local_38 = param_1;
  local_30 = param_3;
  local_2c = param_4;
  piVar1 = (int *)FUN_001f1db0(param_10 + 0x6c);
  iVar4 = param_9 * 4;
  iVar2 = FUN_001f67d0(&local_30);
  iVar3 = FUN_001f67d0(&param_5);
  if ((iVar2 != iVar3) && (iVar3 = FUN_001ef914(&local_30), iVar2 = param_9, param_9 != 0)) {
    iVar10 = 0;
    local_40 = ppiVar13;
    uVar9 = 0;
    local_3c = (int *)((int)&local_40 - (iVar4 + 0xeU & 0xfffffff8));
    do {
      while( true ) {
        if ((iVar3 == **ppiVar13) ||
           (iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,**ppiVar13), iVar3 == iVar4)) break;
        iVar10 = iVar10 + 1;
        ppiVar13 = ppiVar13 + 1;
        if (iVar10 == iVar2) goto LAB_001f857c;
      }
      local_3c[uVar9] = iVar10;
      iVar10 = iVar10 + 1;
      uVar9 = uVar9 + 1;
      ppiVar13 = ppiVar13 + 1;
    } while (iVar10 != iVar2);
LAB_001f857c:
    ppiVar13 = local_40;
    uVar11 = 0;
    piVar1 = local_3c;
    if (1 < uVar9) {
      local_34 = local_3c;
      uVar11 = 0;
      do {
        piVar1 = local_34;
        uVar12 = 1;
        uVar5 = wcslen(ppiVar13[*local_34]);
        do {
          piVar1 = piVar1 + 1;
          uVar12 = uVar12 + 1;
          sVar6 = wcslen(ppiVar13[*piVar1]);
          if (sVar6 <= uVar5) {
            uVar5 = sVar6;
          }
        } while (uVar12 < uVar9);
        if (local_30 != (int *)0x0) {
          if ((uint)local_30[2] < (uint)local_30[3]) {
            local_30[2] = local_30[2] + 4;
          }
          else {
            (**(code **)(*local_30 + 0x28))();
          }
          local_2c = (int *)0xffffffff;
        }
        uVar11 = uVar11 + 1;
        if (uVar5 <= uVar11) goto LAB_001f84d0;
        iVar4 = FUN_001f67d0(&local_30);
        iVar2 = FUN_001f67d0(&param_5);
        if (iVar4 == iVar2) goto LAB_001f84d0;
        uVar5 = 0;
        do {
          iVar2 = ppiVar13[local_34[uVar5]][uVar11];
          iVar4 = FUN_001ef914(&local_30);
          if (iVar2 == iVar4) {
            uVar5 = uVar5 + 1;
          }
          else {
            uVar9 = uVar9 - 1;
            local_34[uVar5] = local_34[uVar9];
          }
        } while (uVar5 < uVar9);
        piVar1 = local_34;
      } while (1 < uVar9);
    }
    if (uVar9 == 1) {
      if (local_30 != (int *)0x0) {
        if ((uint)local_30[2] < (uint)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x28))();
        }
        local_2c = (int *)0xffffffff;
      }
      sVar8 = uVar11 + 1;
      pwVar15 = ppiVar13[*piVar1];
      sVar6 = wcslen(pwVar15);
      if (sVar8 < sVar6) {
        pwVar15 = pwVar15 + uVar11;
        do {
          iVar4 = FUN_001f67d0(&local_30);
          iVar2 = FUN_001f67d0(&param_5);
          if (iVar4 == iVar2) break;
          pwVar15 = pwVar15 + 1;
          wVar14 = *pwVar15;
          wVar7 = FUN_001ef914(&local_30);
          if (wVar14 != wVar7) break;
          if (local_30 != (int *)0x0) {
            if ((uint)local_30[2] < (uint)local_30[3]) {
              local_30[2] = local_30[2] + 4;
            }
            else {
              (**(code **)(*local_30 + 0x28))();
            }
            local_2c = (int *)0xffffffff;
          }
          sVar8 = sVar8 + 1;
        } while (sVar8 < sVar6);
      }
      if (sVar8 == sVar6) {
        *param_7 = *piVar1;
        goto LAB_001f84e0;
      }
    }
  }
LAB_001f84d0:
  *param_11 = *param_11 | 4;
LAB_001f84e0:
  *local_38 = local_30;
  local_38[1] = local_2c;
  return local_38;
}


