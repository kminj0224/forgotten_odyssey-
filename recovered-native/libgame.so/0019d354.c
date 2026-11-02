/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d354  Symbol: FUN_0019d354 */

int * FUN_0019d354(int param_1,char *param_2,char *param_3)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int **ppiVar9;
  int **ppiVar10;
  int *piVar11;
  int *local_34;
  int *local_30;
  uint local_2c;
  
  iVar6 = DAT_0019d5d8 + 0x19d360;
  if ((param_3 == (char *)0x0) || (param_1 == 0)) {
LAB_0019d5d0:
    piVar11 = (int *)0x0;
  }
  else {
    if (param_2 == (char *)0x0) {
      piVar1 = (int *)FUN_0019d178(param_1,param_3,0xffffffff);
      return piVar1;
    }
    sVar2 = strlen(param_3);
    sVar3 = strlen(param_2);
    piVar1 = (int *)(sVar2 + sVar3 + 1);
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0x80) {
      local_30 = (int *)FUN_0019cbf0(param_2,sVar3,param_3,sVar2);
    }
    else {
      uVar7 = 0;
      for (iVar5 = 0; iVar5 < (int)sVar3; iVar5 = iVar5 + 1) {
        uVar7 = (uVar7 + (byte)param_2[iVar5]) * 0x401;
        uVar7 = uVar7 ^ uVar7 >> 6;
      }
      uVar7 = (uVar7 + 0x3a) * 0x401;
      uVar7 = uVar7 ^ uVar7 >> 6;
      for (iVar5 = 0; iVar5 < (int)sVar2; iVar5 = iVar5 + 1) {
        uVar7 = (uVar7 + (byte)param_3[iVar5]) * 0x401;
        uVar7 = uVar7 ^ uVar7 >> 6;
      }
      local_30 = (int *)((uVar7 * 9 ^ uVar7 * 9 >> 0xb) * 0x8001);
    }
    __aeabi_uidivmod(local_30,iVar8);
    ppiVar9 = (int **)(*(int *)(param_1 + 4) + extraout_r1 * 0x14);
    if (((int *)ppiVar9)[3] == 0) {
      ppiVar9 = (int **)0x0;
      local_2c = 0;
    }
    else {
      local_2c = 0;
      for (; *ppiVar9 != (int *)0x0; ppiVar9 = (int **)*ppiVar9) {
        if (((ppiVar9[4] == local_30) && (ppiVar9[2] == piVar1)) &&
           (iVar8 = FUN_0019c334(param_2,param_3,ppiVar9[1]), iVar8 != 0)) goto LAB_0019d466;
        local_2c = local_2c + 1;
      }
      if (((ppiVar9[4] == local_30) && (ppiVar9[2] == piVar1)) &&
         (iVar8 = FUN_0019c334(param_2,param_3,ppiVar9[1]), iVar8 != 0)) {
LAB_0019d466:
        return ppiVar9[1];
      }
    }
    iVar8 = *(int *)(param_1 + 0x14);
    local_34 = (int *)extraout_r1;
    if (iVar8 != 0) {
      local_34 = local_30;
      if (*(int *)(param_1 + 8) == 0x80) {
        if (*(int *)(iVar8 + 8) != 0x80) {
LAB_0019d486:
          if (*(int *)(iVar8 + 8) == 0x80) {
            local_34 = (int *)FUN_0019cbf0(param_2,sVar3,param_3,sVar2);
          }
          else {
            uVar7 = 0;
            for (iVar5 = 0; iVar5 < (int)sVar3; iVar5 = iVar5 + 1) {
              uVar7 = (uVar7 + (byte)param_2[iVar5]) * 0x401;
              uVar7 = uVar7 ^ uVar7 >> 6;
            }
            uVar7 = (uVar7 + 0x3a) * 0x401;
            uVar7 = uVar7 ^ uVar7 >> 6;
            for (iVar5 = 0; iVar5 < (int)sVar2; iVar5 = iVar5 + 1) {
              uVar7 = (uVar7 + (byte)param_3[iVar5]) * 0x401;
              uVar7 = uVar7 ^ uVar7 >> 6;
            }
            local_34 = (int *)((uVar7 * 9 ^ uVar7 * 9 >> 0xb) * 0x8001);
          }
        }
      }
      else if (*(int *)(iVar8 + 8) == 0x80) goto LAB_0019d486;
      __aeabi_uidivmod(local_34,*(undefined4 *)(iVar8 + 8));
      ppiVar10 = (int **)(*(int *)(iVar8 + 4) + extraout_r1_00 * 0x14);
      if (ppiVar10[3] != (int *)0x0) {
        for (; *ppiVar10 != (int *)0x0; ppiVar10 = (int **)*ppiVar10) {
          if (((ppiVar10[4] == local_34) && (ppiVar10[2] == piVar1)) &&
             (iVar8 = FUN_0019c334(param_2,param_3,ppiVar10[1]), iVar8 != 0)) goto LAB_0019d550;
          local_2c = local_2c + 1;
        }
        if (((ppiVar10[4] == local_34) && (ppiVar10[2] == piVar1)) &&
           (iVar8 = FUN_0019c334(param_2,param_3,ppiVar10[1]), iVar8 != 0)) {
LAB_0019d550:
          return ppiVar10[1];
        }
      }
      __aeabi_uidivmod(local_30,*(undefined4 *)(param_1 + 8));
      local_34 = (int *)extraout_r1_01;
    }
    piVar11 = (int *)FUN_0019cd98(param_1,param_2,sVar3,param_3,sVar2);
    if (piVar11 == (int *)0x0) {
      return (int *)0x0;
    }
    if (ppiVar9 == (int **)0x0) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + (int)local_34 * 0x14);
    }
    else {
      puVar4 = (undefined4 *)(***(code ***)(iVar6 + DAT_0019d5dc))(0x14);
      if (puVar4 == (undefined4 *)0x0) goto LAB_0019d5d0;
    }
    puVar4[1] = piVar11;
    puVar4[2] = piVar1;
    *puVar4 = 0;
    puVar4[3] = 1;
    puVar4[4] = local_30;
    if (ppiVar9 != (int **)0x0) {
      *ppiVar9 = puVar4;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((3 < local_2c) && (*(int *)(param_1 + 8) <= DAT_0019d5e0)) {
      FUN_0019ce68(param_1,*(int *)(param_1 + 8) * 6);
    }
  }
  return piVar11;
}


