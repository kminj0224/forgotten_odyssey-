/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f9554  Symbol: FUN_001f9554 */

int ** FUN_001f9554(int **param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,uint *param_7,int **param_8,uint param_9,
                   int param_10,uint *param_11)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  undefined4 *puVar13;
  size_t *psVar14;
  undefined4 *puVar15;
  uint uStack_40;
  int **local_3c;
  int **local_38;
  int **local_34;
  int *local_30;
  undefined4 local_2c;
  
  ppiVar12 = param_8;
  local_34 = &local_30;
  local_3c = param_1;
  local_30 = param_3;
  local_2c = param_4;
  piVar2 = (int *)FUN_001f1db0(param_10 + 0x6c);
  iVar1 = -(param_9 * 8 + 8);
  iVar3 = FUN_001f67d0(&local_30);
  iVar4 = FUN_001f67d0(&param_5);
  if (iVar3 == iVar4) {
    puVar11 = (undefined4 *)0x0;
    puVar9 = puVar11;
    puVar13 = puVar11;
  }
  else {
    iVar4 = FUN_001ef914(&local_30);
    iVar3 = param_9 * 2;
    if (iVar3 == 0) {
      puVar11 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      puVar13 = (undefined4 *)0x0;
    }
    else {
      iVar5 = 0;
      local_38 = ppiVar12;
      puVar11 = (undefined4 *)0x0;
      do {
        while( true ) {
          if ((iVar4 == **ppiVar12) ||
             (iVar6 = (**(code **)(*piVar2 + 0x18))(piVar2,**ppiVar12), iVar4 == iVar6)) break;
          iVar5 = iVar5 + 1;
          ppiVar12 = ppiVar12 + 1;
          if (iVar5 == iVar3) goto LAB_001f97a8;
        }
        *(int *)((int)&uStack_40 + (int)puVar11 * 4 + iVar1) = iVar5;
        iVar5 = iVar5 + 1;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        ppiVar12 = ppiVar12 + 1;
      } while (iVar5 != iVar3);
LAB_001f97a8:
      ppiVar12 = local_38;
      if (puVar11 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
        puVar13 = (undefined4 *)0x0;
      }
      else {
        if (local_30 != (int *)0x0) {
          if ((uint)local_30[2] < (uint)local_30[3]) {
            local_30[2] = local_30[2] + 4;
          }
          else {
            (**(code **)(*local_30 + 0x28))();
          }
          local_2c = 0xffffffff;
        }
        iVar3 = -((int)puVar11 * 4 + 0xeU & 0xfffffff8);
        puVar9 = (undefined4 *)((int)&uStack_40 + iVar3 + iVar1);
        puVar13 = (undefined4 *)0x0;
        piVar2 = (int *)((int)&uStack_40 + iVar1);
        psVar14 = (size_t *)((int)&uStack_40 + iVar3 + iVar1);
        do {
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          sVar7 = wcslen(ppiVar12[*piVar2]);
          *psVar14 = sVar7;
          piVar2 = piVar2 + 1;
          psVar14 = psVar14 + 1;
        } while (puVar13 != puVar11);
        puVar13 = (undefined4 *)0x1;
      }
    }
  }
  iVar4 = FUN_001f67d0(&local_30);
  iVar3 = (int)puVar13 << 2;
  iVar5 = FUN_001f67d0(&param_5);
  if (iVar4 != iVar5) {
    do {
      iVar4 = FUN_001ef914(&local_30);
      if (puVar11 == (undefined4 *)0x0) goto LAB_001f96f0;
      puVar8 = (undefined4 *)0x0;
      puVar15 = (undefined4 *)0x0;
      do {
        if (puVar13 < (undefined4 *)puVar9[(int)puVar8]) {
          if (iVar4 == *(int *)((int)ppiVar12[*(int *)((int)&uStack_40 + (int)puVar8 * 4 + iVar1)] +
                               iVar3)) {
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          else {
            puVar11 = (undefined4 *)((int)puVar11 + -1);
            *(undefined4 *)((int)&uStack_40 + (int)puVar8 * 4 + iVar1) =
                 *(undefined4 *)((int)&uStack_40 + (int)puVar11 * 4 + iVar1);
            puVar9[(int)puVar8] = puVar9[(int)puVar11];
          }
        }
        else {
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      } while (puVar8 < puVar11);
      if (puVar11 == puVar15) break;
      if (local_30 != (int *)0x0) {
        if ((uint)local_30[2] < (uint)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x28))();
        }
        local_2c = 0xffffffff;
      }
      iVar4 = FUN_001f67d0(&local_30);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      iVar3 = iVar3 + 4;
      iVar5 = FUN_001f67d0(&param_5);
    } while (iVar4 != iVar5);
  }
  if (puVar11 == (undefined4 *)0x1) {
    puVar9 = (undefined4 *)*puVar9;
joined_r0x001f96ec:
    if (puVar9 != puVar13) {
LAB_001f96f0:
      *param_11 = *param_11 | 4;
      goto LAB_001f9700;
    }
  }
  else {
    if (puVar11 != (undefined4 *)0x2) goto LAB_001f96f0;
    if ((undefined4 *)*puVar9 != puVar13) {
      puVar9 = (undefined4 *)puVar9[1];
      goto joined_r0x001f96ec;
    }
  }
  uVar10 = *(uint *)((int)&uStack_40 + iVar1);
  if (param_9 <= uVar10) {
    uVar10 = uVar10 - param_9;
  }
  *param_7 = uVar10;
LAB_001f9700:
  piVar2 = local_34[1];
  *local_3c = *local_34;
  local_3c[1] = piVar2;
  return local_3c;
}


