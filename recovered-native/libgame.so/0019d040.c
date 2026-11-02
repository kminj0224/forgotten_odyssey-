/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d040  Symbol: FUN_0019d040 */

void * FUN_0019d040(int param_1,char *param_2,size_t param_3)

{
  int iVar1;
  int extraout_r1;
  int *piVar2;
  int extraout_r1_00;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int local_24;
  
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
    local_24 = FUN_0019cb90(param_2,param_3);
  }
  else {
    local_24 = FUN_0019cb5c(param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 8);
  __aeabi_uidivmod(local_24);
  piVar2 = (int *)(*(int *)(param_1 + 4) + extraout_r1 * 0x14);
  if (piVar2[3] != 0) {
    while( true ) {
      piVar3 = piVar2;
      piVar2 = (int *)*piVar3;
      if (piVar2 == (int *)0x0) break;
      if ((piVar3[4] == local_24) && (piVar3[2] == param_3)) {
        pvVar5 = (void *)piVar3[1];
        iVar4 = memcmp(pvVar5,param_2,param_3);
        if (iVar4 == 0) {
          return pvVar5;
        }
      }
    }
    if ((piVar3[4] == local_24) && (piVar3[2] == param_3)) {
      pvVar5 = (void *)piVar3[1];
      iVar4 = memcmp(pvVar5,param_2,param_3);
      if (iVar4 == 0) {
        return pvVar5;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    return (void *)0x0;
  }
  if (iVar1 == 0x80) {
    if (*(int *)(iVar4 + 8) == 0x80) goto LAB_0019d110;
  }
  else if (*(int *)(iVar4 + 8) != 0x80) goto LAB_0019d110;
  if (*(int *)(iVar4 + 8) == 0x80) {
    local_24 = FUN_0019cb90(param_2,param_3);
  }
  else {
    local_24 = FUN_0019cb5c(param_2,param_3);
  }
LAB_0019d110:
  iVar1 = *(int *)(param_1 + 0x14);
  __aeabi_uidivmod(local_24,*(undefined4 *)(iVar1 + 8));
  piVar2 = (int *)(*(int *)(iVar1 + 4) + extraout_r1_00 * 0x14);
  if (piVar2[3] != 0) {
    while( true ) {
      piVar3 = piVar2;
      piVar2 = (int *)*piVar3;
      if (piVar2 == (int *)0x0) break;
      if ((piVar3[4] == local_24) && (piVar3[2] == param_3)) {
        pvVar5 = (void *)piVar3[1];
        iVar1 = memcmp(pvVar5,param_2,param_3);
        if (iVar1 == 0) {
          return pvVar5;
        }
      }
    }
    if ((piVar3[4] == local_24) && (piVar3[2] == param_3)) {
      pvVar5 = (void *)piVar3[1];
      iVar1 = memcmp(pvVar5,param_2,param_3);
      if (iVar1 == 0) {
        return pvVar5;
      }
    }
  }
  return (void *)0x0;
}


