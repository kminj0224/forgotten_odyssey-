/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e0c54  Symbol: FUN_001e0c54 */

int ** FUN_001e0c54(int **param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 param_5,
                   undefined4 param_6,int *param_7,byte **param_8,int param_9,int param_10,
                   uint *param_11)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte **ppbVar11;
  byte *__s;
  byte **local_40;
  int *local_3c;
  int **local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  
  ppbVar11 = param_8;
  local_38 = param_1;
  local_30 = param_3;
  local_2c = param_4;
  piVar2 = (int *)FUN_001da5b8(param_10 + 0x6c);
  iVar8 = param_9 * 4;
  iVar3 = FUN_001df02c(&local_30);
  iVar4 = FUN_001df02c(&param_5);
  if ((iVar3 != iVar4) && (uVar5 = FUN_001d8014(&local_30), iVar3 = param_9, param_9 != 0)) {
    iVar4 = 0;
    local_40 = ppbVar11;
    uVar9 = 0;
    local_3c = (int *)((int)&local_40 - (iVar8 + 0xeU & 0xfffffff8));
    do {
      while( true ) {
        if ((uVar5 == **ppbVar11) ||
           (uVar6 = (**(code **)(*piVar2 + 8))(piVar2,(uint)**ppbVar11), uVar5 == uVar6)) break;
        iVar4 = iVar4 + 1;
        ppbVar11 = ppbVar11 + 1;
        if (iVar4 == iVar3) goto LAB_001e0d60;
      }
      local_3c[uVar9] = iVar4;
      iVar4 = iVar4 + 1;
      uVar9 = uVar9 + 1;
      ppbVar11 = ppbVar11 + 1;
    } while (iVar4 != iVar3);
LAB_001e0d60:
    ppbVar11 = local_40;
    uVar5 = 0;
    piVar2 = local_3c;
    if (1 < uVar9) {
      local_34 = local_3c;
      uVar5 = 0;
      do {
        piVar2 = local_34;
        uVar10 = 1;
        uVar6 = strlen((char *)ppbVar11[*local_34]);
        do {
          piVar2 = piVar2 + 1;
          uVar10 = uVar10 + 1;
          sVar7 = strlen((char *)ppbVar11[*piVar2]);
          if (sVar7 <= uVar6) {
            uVar6 = sVar7;
          }
        } while (uVar10 < uVar9);
        if (local_30 != (int *)0x0) {
          if ((uint)local_30[2] < (uint)local_30[3]) {
            local_30[2] = local_30[2] + 1;
          }
          else {
            (**(code **)(*local_30 + 0x28))();
          }
          local_2c = (int *)0xffffffff;
        }
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) goto LAB_001e0cb4;
        iVar8 = FUN_001df02c(&local_30);
        iVar3 = FUN_001df02c(&param_5);
        if (iVar8 == iVar3) goto LAB_001e0cb4;
        uVar6 = 0;
        do {
          bVar1 = ppbVar11[local_34[uVar6]][uVar5];
          uVar10 = FUN_001d8014(&local_30);
          if (bVar1 == uVar10) {
            uVar6 = uVar6 + 1;
          }
          else {
            uVar9 = uVar9 - 1;
            local_34[uVar6] = local_34[uVar9];
          }
        } while (uVar6 < uVar9);
        piVar2 = local_34;
      } while (1 < uVar9);
    }
    if (uVar9 == 1) {
      if (local_30 != (int *)0x0) {
        if ((uint)local_30[2] < (uint)local_30[3]) {
          local_30[2] = local_30[2] + 1;
        }
        else {
          (**(code **)(*local_30 + 0x28))();
        }
        local_2c = (int *)0xffffffff;
      }
      __s = ppbVar11[*piVar2];
      sVar7 = strlen((char *)__s);
      while (uVar5 = uVar5 + 1, uVar5 < sVar7) {
        iVar8 = FUN_001df02c(&local_30);
        iVar3 = FUN_001df02c(&param_5);
        if ((iVar8 == iVar3) ||
           (bVar1 = __s[uVar5], uVar9 = FUN_001d8014(&local_30), bVar1 != uVar9)) break;
        if (local_30 != (int *)0x0) {
          if ((uint)local_30[2] < (uint)local_30[3]) {
            local_30[2] = local_30[2] + 1;
          }
          else {
            (**(code **)(*local_30 + 0x28))();
          }
          local_2c = (int *)0xffffffff;
        }
      }
      if (uVar5 == sVar7) {
        *param_7 = *piVar2;
        goto LAB_001e0cc4;
      }
    }
  }
LAB_001e0cb4:
  *param_11 = *param_11 | 4;
LAB_001e0cc4:
  *local_38 = local_30;
  local_38[1] = local_2c;
  return local_38;
}


