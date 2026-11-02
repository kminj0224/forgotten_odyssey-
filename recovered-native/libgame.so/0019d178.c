/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d178  Symbol: FUN_0019d178 */

void * FUN_0019d178(int param_1,char *param_2,size_t param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar5;
  int extraout_r1_01;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_2c;
  uint local_24;
  
  iVar6 = DAT_0019d348 + 0x19d184;
  if (param_2 == (char *)0x0) {
    return (void *)0x0;
  }
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((int)param_3 < 0) {
    param_3 = strlen(param_2);
  }
  if (*(int *)(param_1 + 8) == 0x80) {
    iVar1 = FUN_0019cb90(param_2,param_3);
  }
  else {
    iVar1 = FUN_0019cb5c(param_2,param_3);
  }
  iVar4 = *(int *)(param_1 + 8);
  __aeabi_uidivmod(iVar1);
  puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + extraout_r1 * 0x14);
  local_24 = 0;
  if (puVar9[3] == 0) {
    puVar9 = (undefined4 *)0x0;
    local_24 = 0;
  }
  else {
    while( true ) {
      puVar3 = (undefined4 *)*puVar9;
      if (puVar3 == (undefined4 *)0x0) break;
      if ((puVar9[4] == iVar1) && (puVar9[2] == param_3)) {
        pvVar2 = (void *)puVar9[1];
        iVar7 = memcmp(pvVar2,param_2,param_3);
        if (iVar7 == 0) {
          return pvVar2;
        }
      }
      local_24 = local_24 + 1;
      puVar9 = puVar3;
    }
    if ((puVar9[4] == iVar1) && (puVar9[2] == param_3)) {
      pvVar2 = (void *)puVar9[1];
      iVar7 = memcmp(pvVar2,param_2,param_3);
      if (iVar7 == 0) {
        return pvVar2;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x14);
  local_2c = extraout_r1;
  if (iVar7 == 0) goto LAB_0019d2d4;
  local_2c = iVar1;
  if (iVar4 == 0x80) {
    if (*(int *)(iVar7 + 8) != 0x80) {
LAB_0019d244:
      if (*(int *)(iVar7 + 8) == 0x80) {
        local_2c = FUN_0019cb90(param_2,param_3);
      }
      else {
        local_2c = FUN_0019cb5c(param_2,param_3);
      }
    }
  }
  else if (*(int *)(iVar7 + 8) == 0x80) goto LAB_0019d244;
  iVar4 = *(int *)(param_1 + 0x14);
  __aeabi_uidivmod(local_2c,*(undefined4 *)(iVar4 + 8));
  piVar8 = (int *)(*(int *)(iVar4 + 4) + extraout_r1_00 * 0x14);
  if (piVar8[3] != 0) {
    while( true ) {
      piVar5 = (int *)*piVar8;
      if (piVar5 == (int *)0x0) break;
      if ((piVar8[4] == local_2c) && (piVar8[2] == param_3)) {
        pvVar2 = (void *)piVar8[1];
        iVar4 = memcmp(pvVar2,param_2,param_3);
        if (iVar4 == 0) {
          return pvVar2;
        }
      }
      local_24 = local_24 + 1;
      piVar8 = piVar5;
    }
    if ((piVar8[4] == local_2c) && (piVar8[2] == param_3)) {
      pvVar2 = (void *)piVar8[1];
      iVar4 = memcmp(pvVar2,param_2,param_3);
      if (iVar4 == 0) {
        return pvVar2;
      }
    }
  }
  __aeabi_uidivmod(iVar1,*(undefined4 *)(param_1 + 8));
  local_2c = extraout_r1_01;
LAB_0019d2d4:
  pvVar2 = (void *)FUN_0019cd00(param_1,param_2,param_3);
  if (pvVar2 == (void *)0x0) {
    return (void *)0x0;
  }
  if (puVar9 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + local_2c * 0x14);
  }
  else {
    puVar3 = (undefined4 *)(***(code ***)(iVar6 + DAT_0019d34c))(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
  }
  puVar3[1] = pvVar2;
  puVar3[2] = param_3;
  *puVar3 = 0;
  puVar3[3] = 1;
  puVar3[4] = iVar1;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = puVar3;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (local_24 < 4) {
    return pvVar2;
  }
  if (DAT_0019d350 < *(int *)(param_1 + 8)) {
    return pvVar2;
  }
  iVar6 = FUN_0019ce68(param_1,*(int *)(param_1 + 8) * 6);
  if (iVar6 != 0) {
    return (void *)0x0;
  }
  return pvVar2;
}


