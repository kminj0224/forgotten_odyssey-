/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00182e50  Symbol: FUN_00182e50 */

undefined4 FUN_00182e50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  int local_1c [2];
  
  iVar6 = DAT_00183050 + 0x182e5c;
  if ((((param_2 == 0) || (param_1 == 0)) ||
      ((*(int *)(param_2 + 0x30) != 2 && (*(int *)(param_2 + 0x30) != 5)))) ||
     (*(int *)(param_2 + 0x28) != 0)) {
LAB_00182e9c:
    FUN_0017b7fc(param_1,1,iVar6 + DAT_00183064);
    return 0xffffffff;
  }
  if (**(int **)(iVar6 + DAT_00183054) != 0) {
    (***(code ***)(iVar6 + DAT_00183058))
              (**(undefined4 **)(iVar6 + DAT_0018305c),iVar6 + DAT_00183060,
               *(undefined4 *)(param_2 + 8));
  }
  puVar1 = (undefined4 *)FUN_00189cd8();
  if (puVar1 == (undefined4 *)0x0) goto LAB_00182e9c;
  iVar2 = FUN_001797c4(param_1,param_2);
  if (iVar2 == 0) {
    FUN_0017b7fc(param_1,1,iVar6 + DAT_00183068);
    goto LAB_00183026;
  }
  iVar3 = FUN_0017c760(param_1,iVar2);
  if (iVar3 < 0) goto LAB_00183026;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  uVar4 = FUN_0017a70c(param_1,local_1c);
  local_2c = 0;
  while (iVar3 = *(int *)(param_1 + 0x24), iVar3 == iVar2) {
    if (*(uint *)(iVar2 + 0x14) <= *(uint *)(iVar2 + 0x10)) {
LAB_00183046:
      if (*(uint *)(iVar3 + 0x14) <= *(uint *)(iVar3 + 0x10)) {
        FUN_0017c6c4(param_1);
        goto LAB_00183032;
      }
      break;
    }
    if ((int)uVar4 < 0x100) {
      if (((1 < uVar4 - 9) && (uVar4 != 0xd)) && ((int)uVar4 < 0x20)) goto LAB_00183046;
    }
    else if (((DAT_00183070 < DAT_0018306c + uVar4) && (DAT_00183074 < uVar4 - 0x100)) &&
            (DAT_0018307c < DAT_00183078 + uVar4)) goto LAB_00183046;
    FUN_0018aa58(puVar1,*(uint *)(iVar2 + 0x10),local_1c[0]);
    if (local_2c < 0x65) {
      local_2c = local_2c + 1;
    }
    else if ((*(int *)(param_1 + 0x124) == 0) &&
            (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
             0xfa)) {
      FUN_0017c738(param_1);
      local_2c = 0;
    }
    else {
      local_2c = 0;
    }
    iVar3 = *(int *)(param_1 + 0x24);
    if (**(char **)(iVar3 + 0x10) == '\n') {
      iVar5 = 1;
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar3 = *(int *)(param_1 + 0x24);
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x20) + 1;
    }
    *(int *)(iVar3 + 0x20) = iVar5;
    *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
         *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
      FUN_0017dd5c(param_1);
    }
    uVar4 = FUN_0017a70c(param_1,local_1c);
  }
  if ((int)uVar4 < 0x100) {
    if ((uVar4 - 9 < 2) || (uVar4 == 0xd)) {
LAB_00183002:
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(uVar4 < 0x20) - ((int)uVar4 >> 0x1f);
    }
  }
  else {
    if ((uVar4 + DAT_0018306c <= DAT_00183070) || (uVar4 - 0x100 <= DAT_00183074))
    goto LAB_00183002;
    uVar4 = (uint)(DAT_0018307c < uVar4 + DAT_00183078);
  }
  if ((uVar4 & 0xff) == 0) {
LAB_00183032:
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *puVar1 = 0;
    FUN_001896a4(puVar1);
    return 0;
  }
  FUN_0017bd20(param_1,9,iVar6 + DAT_00183080);
LAB_00183026:
  FUN_001896a4(puVar1);
  return 0xffffffff;
}


