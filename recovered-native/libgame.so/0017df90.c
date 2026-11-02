/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017df90  Symbol: FUN_0017df90 */

undefined4 FUN_0017df90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_28;
  int local_1c [2];
  
  iVar4 = DAT_0017e098 + 0x17df9c + DAT_0017e09c;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  if ((*(int *)(param_1 + 0x124) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) < 0xfa))
  {
    FUN_0017c738(param_1);
  }
  iVar4 = FUN_0017a70c(param_1,local_1c);
  if ((((iVar4 == 0x3e) || (iVar4 == 0x20)) || (iVar4 == 0x2f)) ||
     ((iVar1 = FUN_0017cf9c(param_1,iVar4), iVar1 == 0 || (iVar4 == 0x3a)))) {
    uVar3 = 0;
  }
  else {
    iVar1 = 0;
    local_28 = 0;
    while (((iVar4 != 0x3e && (iVar4 != 0x20)) &&
           ((iVar4 != 0x2f && ((iVar2 = FUN_0017d0fc(param_1,iVar4), iVar2 != 0 && (iVar4 != 0x3a)))
            )))) {
      if (iVar1 < 0x65) {
        iVar1 = iVar1 + 1;
      }
      else {
        if ((*(int *)(param_1 + 0x124) == 0) &&
           (*(int *)(*(int *)(param_1 + 0x24) + 0x14) - *(int *)(*(int *)(param_1 + 0x24) + 0x10) <
            0xfa)) {
          FUN_0017c738(param_1);
        }
        iVar1 = 0;
      }
      local_28 = local_28 + local_1c[0];
      iVar4 = *(int *)(param_1 + 0x24);
      if (**(char **)(iVar4 + 0x10) == '\n') {
        *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
        iVar4 = *(int *)(param_1 + 0x24);
        iVar2 = 1;
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x20) + 1;
      }
      *(int *)(iVar4 + 0x20) = iVar2;
      *(int *)(*(int *)(param_1 + 0x24) + 0x10) =
           *(int *)(*(int *)(param_1 + 0x24) + 0x10) + local_1c[0];
      if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
        FUN_0017dd5c(param_1);
      }
      iVar4 = FUN_0017a70c(param_1,local_1c);
    }
    uVar3 = FUN_0019d178(*(undefined4 *)(param_1 + 0x128),
                         *(int *)(*(int *)(param_1 + 0x24) + 0x10) - local_28,local_28);
  }
  return uVar3;
}


