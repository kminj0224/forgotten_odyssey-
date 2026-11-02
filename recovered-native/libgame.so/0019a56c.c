/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019a56c  Symbol: FUN_0019a56c */

undefined4 FUN_0019a56c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  undefined local_11;
  
  iVar6 = DAT_0019a788 + 0x19a578;
  FUN_0017c498();
  FUN_0019db24();
  if ((param_1 == (int *)0x0) || (iVar1 = param_1[9], iVar1 == 0)) {
    FUN_00195ba4(param_1,1,iVar6 + DAT_0019a78c,0,0);
    return 1;
  }
  param_1[8] = 1;
  if ((param_1[0x49] == 0) && (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) < 0xfa)) {
    FUN_0017a2bc(iVar1,0xfa);
  }
  if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x2c), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1[1],*(undefined4 *)(iVar6 + DAT_0019a790));
  }
  if ((param_1[6] == 0) &&
     (puVar4 = *(undefined **)(param_1[9] + 0x10), 3 < *(int *)(param_1[9] + 0x14) - (int)puVar4)) {
    if (param_1[0x2c] == 0) {
      local_14 = *puVar4;
    }
    else {
      local_14 = 0xff;
    }
    iVar1 = param_1[9];
    local_13 = *(undefined *)(*(int *)(iVar1 + 0x10) + 1);
    local_12 = *(undefined *)(*(int *)(iVar1 + 0x10) + 2);
    local_11 = *(undefined *)(*(int *)(iVar1 + 0x10) + 3);
    iVar1 = FUN_001a2fd8(&local_14,4);
    if (iVar1 != 0) {
      FUN_00179fd4(param_1,iVar1);
    }
  }
  FUN_00196588(param_1);
  if (**(char **)(param_1[9] + 0x10) == '\0') {
    FUN_00195ba4(param_1,4,iVar6 + DAT_0019a794,0,0);
  }
  if (((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x30), pcVar3 != (code *)0x0)) &&
     (param_1[0x35] == 0)) {
    (*pcVar3)(param_1[1]);
  }
  while (pcVar5 = *(char **)(param_1[9] + 0x10), *pcVar5 == '<') {
    if (pcVar5[1] == '!') {
      if ((pcVar5[2] != '-') || (pcVar5[3] != '-')) goto LAB_0019a77e;
    }
    else if (pcVar5[1] != '?') {
LAB_0019a77e:
      if (((pcVar5[1] == '!') &&
          (iVar1 = **(int **)(iVar6 + DAT_0019a798),
          *(short *)(((byte)pcVar5[2] + 1) * 2 + iVar1) == 0x44)) &&
         ((*(short *)(((byte)pcVar5[3] + 1) * 2 + iVar1) == 0x4f &&
          ((((*(short *)(((byte)pcVar5[4] + 1) * 2 + iVar1) == 0x43 &&
             (*(short *)(((byte)pcVar5[5] + 1) * 2 + iVar1) == 0x54)) &&
            (*(short *)(((byte)pcVar5[6] + 1) * 2 + iVar1) == 0x59)) &&
           ((*(short *)(((byte)pcVar5[7] + 1) * 2 + iVar1) == 0x50 &&
            (*(short *)(((byte)pcVar5[8] + 1) * 2 + iVar1) == 0x45)))))))) {
        FUN_00198360(param_1);
      }
      break;
    }
    FUN_00197cb8(param_1);
    FUN_00198434(param_1);
    FUN_00196588(param_1);
  }
  do {
    FUN_00196588(param_1);
    pcVar5 = *(char **)(param_1[9] + 0x10);
    if (*pcVar5 != '<') {
LAB_0019a724:
      FUN_0019a0dc(param_1);
      if (**(char **)(param_1[9] + 0x10) == '\0') {
        FUN_0019594c(param_1);
      }
      if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x34), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1[1]);
      }
      if ((param_1[2] != 0) && (iVar1 = FUN_00189564(), iVar1 == 0)) {
        iVar1 = param_1[2];
        uVar2 = FUN_0018a2f4(iVar1,iVar6 + DAT_0019a79c,iVar6 + DAT_0019a7a0,iVar6 + DAT_0019a7a4);
        *(undefined4 *)(iVar1 + 0x2c) = uVar2;
      }
      if (param_1[3] != 0) {
        return 0;
      }
      return 0xffffffff;
    }
    if (pcVar5[1] == '!') {
      if ((pcVar5[2] != '-') || (pcVar5[3] != '-')) goto LAB_0019a724;
    }
    else if (pcVar5[1] != '?') goto LAB_0019a724;
    FUN_00197cb8(param_1);
    FUN_00198434(param_1);
  } while( true );
}


