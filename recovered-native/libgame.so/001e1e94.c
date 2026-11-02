/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e1e94  Symbol: FUN_001e1e94 */

int ** FUN_001e1e94(int **param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,uint *param_7,byte **param_8,uint param_9,
                   int param_10,uint *param_11)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte **ppbVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  size_t *psVar14;
  undefined4 *puVar15;
  uint uStack_40;
  byte **local_3c;
  int **local_38;
  int **local_34;
  int *local_30;
  undefined4 local_2c;
  
  ppbVar11 = param_8;
  local_34 = &local_30;
  local_38 = param_1;
  local_30 = param_3;
  local_2c = param_4;
  piVar2 = (int *)FUN_001da5b8(param_10 + 0x6c);
  iVar1 = -(param_9 * 8 + 8);
  iVar3 = FUN_001df02c(&local_30);
  iVar4 = FUN_001df02c(&param_5);
  if (iVar3 == iVar4) {
    puVar10 = (undefined4 *)0x0;
    puVar9 = puVar10;
    puVar12 = puVar10;
  }
  else {
    uVar5 = FUN_001d8014(&local_30);
    iVar3 = param_9 * 2;
    if (iVar3 == 0) {
      puVar10 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
    }
    else {
      iVar4 = 0;
      local_3c = ppbVar11;
      puVar10 = (undefined4 *)0x0;
      do {
        while( true ) {
          if ((uVar5 == **ppbVar11) ||
             (uVar6 = (**(code **)(*piVar2 + 8))(piVar2,(uint)**ppbVar11), uVar5 == uVar6)) break;
          iVar4 = iVar4 + 1;
          ppbVar11 = ppbVar11 + 1;
          if (iVar4 == iVar3) goto LAB_001e20dc;
        }
        *(int *)((int)&uStack_40 + (int)puVar10 * 4 + iVar1) = iVar4;
        iVar4 = iVar4 + 1;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        ppbVar11 = ppbVar11 + 1;
      } while (iVar4 != iVar3);
LAB_001e20dc:
      ppbVar11 = local_3c;
      if (puVar10 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        puVar12 = (undefined4 *)0x0;
      }
      else {
        if (local_30 != (int *)0x0) {
          if ((uint)local_30[2] < (uint)local_30[3]) {
            local_30[2] = local_30[2] + 1;
          }
          else {
            (**(code **)(*local_30 + 0x28))();
          }
          local_2c = 0xffffffff;
        }
        iVar3 = -((int)puVar10 * 4 + 0xeU & 0xfffffff8);
        puVar9 = (undefined4 *)((int)&uStack_40 + iVar3 + iVar1);
        puVar12 = (undefined4 *)0x0;
        piVar2 = (int *)((int)&uStack_40 + iVar1);
        psVar14 = (size_t *)((int)&uStack_40 + iVar3 + iVar1);
        do {
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          sVar7 = strlen((char *)ppbVar11[*piVar2]);
          *psVar14 = sVar7;
          piVar2 = piVar2 + 1;
          psVar14 = psVar14 + 1;
        } while (puVar12 != puVar10);
        puVar12 = (undefined4 *)0x1;
      }
    }
  }
  iVar3 = FUN_001df02c(&local_30);
  iVar4 = FUN_001df02c(&param_5);
  if (iVar3 != iVar4) {
    do {
      uVar5 = FUN_001d8014(&local_30);
      if (puVar10 == (undefined4 *)0x0) goto LAB_001e2024;
      puVar8 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      do {
        if ((undefined4 *)puVar9[(int)puVar8] <= puVar12) {
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        if ((undefined4 *)puVar9[(int)puVar8] <= puVar12) {
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        else if (ppbVar11[*(int *)((int)&uStack_40 + (int)puVar8 * 4 + iVar1)][(int)puVar12] ==
                 uVar5) {
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        else {
          puVar10 = (undefined4 *)((int)puVar10 + -1);
          uVar13 = puVar9[(int)puVar10];
          *(undefined4 *)((int)&uStack_40 + (int)puVar8 * 4 + iVar1) =
               *(undefined4 *)((int)&uStack_40 + (int)puVar10 * 4 + iVar1);
          puVar9[(int)puVar8] = uVar13;
        }
      } while (puVar8 < puVar10);
      if (puVar15 == puVar10) break;
      if (local_30 != (int *)0x0) {
        if ((uint)local_30[2] < (uint)local_30[3]) {
          local_30[2] = local_30[2] + 1;
        }
        else {
          (**(code **)(*local_30 + 0x28))();
        }
        local_2c = 0xffffffff;
      }
      iVar3 = FUN_001df02c(&local_30);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      iVar4 = FUN_001df02c(&param_5);
    } while (iVar3 != iVar4);
  }
  if (puVar10 == (undefined4 *)0x1) {
    puVar9 = (undefined4 *)*puVar9;
joined_r0x001e2020:
    if (puVar9 != puVar12) {
LAB_001e2024:
      *param_11 = *param_11 | 4;
      goto LAB_001e2034;
    }
  }
  else {
    if (puVar10 != (undefined4 *)0x2) goto LAB_001e2024;
    if ((undefined4 *)*puVar9 != puVar12) {
      puVar9 = (undefined4 *)puVar9[1];
      goto joined_r0x001e2020;
    }
  }
  uVar5 = *(uint *)((int)&uStack_40 + iVar1);
  if (param_9 <= uVar5) {
    uVar5 = uVar5 - param_9;
  }
  *param_7 = uVar5;
LAB_001e2034:
  piVar2 = local_34[1];
  *local_38 = *local_34;
  local_38[1] = piVar2;
  return local_38;
}


