/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00180c34  Symbol: FUN_00180c34 */

int FUN_00180c34(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  FUN_0017ff44();
  iVar4 = *(int *)(param_1 + 0x24);
  pcVar5 = *(char **)(iVar4 + 0x10);
  iVar6 = DAT_00180df8 + 0x180c46;
  if (*pcVar5 != 'e') {
    return 0;
  }
  if (pcVar5[1] != 'n') {
    return 0;
  }
  if (pcVar5[2] != 'c') {
    return 0;
  }
  if (pcVar5[3] != 'o') {
    return 0;
  }
  if (pcVar5[4] != 'd') {
    return 0;
  }
  if (pcVar5[5] != 'i') {
    return 0;
  }
  if (pcVar5[6] != 'n') {
    return 0;
  }
  if (pcVar5[7] != 'g') {
    return 0;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 8;
  *(int *)(*(int *)(param_1 + 0x24) + 0x20) = *(int *)(*(int *)(param_1 + 0x24) + 0x20) + 8;
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '%') {
    FUN_0017dd5c(param_1);
  }
  if ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
     (iVar4 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar4 < 1)) {
    FUN_0017c6c4(param_1);
  }
  FUN_0017ff44(param_1);
  if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '=') {
    uVar3 = 0x4b;
LAB_00180d40:
    FUN_0017b7fc(param_1,uVar3,0);
    return 0;
  }
  FUN_0017a4a4(param_1);
  FUN_0017ff44(param_1);
  cVar1 = **(char **)(*(int *)(param_1 + 0x24) + 0x10);
  if (cVar1 == '\"') {
    FUN_0017a4a4(param_1);
    iVar4 = FUN_0017cc78(param_1);
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\"') {
LAB_00180d28:
      FUN_0017b7fc(param_1,0x22,0);
      goto LAB_00180d48;
    }
  }
  else {
    if (cVar1 != '\'') {
      uVar3 = 0x21;
      goto LAB_00180d40;
    }
    FUN_0017a4a4(param_1);
    iVar4 = FUN_0017cc78(param_1);
    if (**(char **)(*(int *)(param_1 + 0x24) + 0x10) != '\'') goto LAB_00180d28;
  }
  FUN_0017a4a4(param_1);
LAB_00180d48:
  if (iVar4 == 0) {
    return 0;
  }
  iVar2 = FUN_0019c398(iVar4,iVar6 + DAT_00180dfc);
  if ((iVar2 == 0) || (iVar2 = FUN_0019c398(iVar4,iVar6 + DAT_00180e00), iVar2 == 0)) {
    if ((*(int *)(param_1 + 0x18) == 0) &&
       ((**(int **)(param_1 + 0x24) != 0 && (*(int *)(**(int **)(param_1 + 0x24) + 0xc) == 0)))) {
      FUN_0017bae0(param_1,0x51,iVar6 + DAT_00180e04);
    }
  }
  else {
    iVar2 = FUN_0019c398(iVar4,iVar6 + DAT_00180e14);
    if ((iVar2 != 0) && (iVar2 = FUN_0019c398(iVar4,iVar6 + DAT_00180e08), iVar2 != 0)) {
      if (*(int *)(*(int *)(param_1 + 0x24) + 0x2c) != 0) {
        (***(code ***)(iVar6 + DAT_00180e0c))();
      }
      *(int *)(*(int *)(param_1 + 0x24) + 0x2c) = iVar4;
      iVar2 = FUN_001a4238(iVar4);
      if (iVar2 == 0) {
        FUN_0017b798(param_1,0x20,iVar6 + DAT_00180e10,iVar4);
        return 0;
      }
      FUN_00179f9c(param_1,iVar2);
      return iVar4;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (***(code ***)(iVar6 + DAT_00180e0c))();
  }
  *(int *)(param_1 + 0x18) = iVar4;
  return iVar4;
}


