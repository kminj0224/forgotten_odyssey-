/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019ae7c  Symbol: FUN_0019ae7c */

void FUN_0019ae7c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *local_28;
  
  iVar5 = DAT_0019b154 + 0x19ae88;
  FUN_0017c498();
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_3 + 4);
  if (iVar3 == 0xe) {
    return;
  }
  if ((iVar3 == 9) || (iVar3 == 0xd)) {
    FUN_0019b2c8(param_1,param_3,param_4);
    return;
  }
  if (iVar3 == 2) {
    FUN_0019ad28(param_1,param_2,param_3,param_4);
    return;
  }
  if (iVar3 == 3) {
    if (*(int *)(param_3 + 0x28) == 0) {
      return;
    }
    if (((*(int *)(param_3 + 8) == *(int *)(iVar5 + DAT_0019b158)) ||
        (*(int *)(param_3 + 8) != *(int *)(iVar5 + DAT_0019b15c))) &&
       ((*(int *)(param_3 + 0x14) == 0 ||
        ((iVar3 = FUN_0019c398(*(undefined4 *)(*(int *)(param_3 + 0x14) + 8),iVar5 + DAT_0019b160),
         iVar3 != 0 &&
         (iVar3 = FUN_0019c398(*(undefined4 *)(*(int *)(param_3 + 0x14) + 8),iVar5 + DAT_0019b164),
         iVar3 != 0)))))) {
      iVar3 = FUN_001a1f80(param_2,*(undefined4 *)(param_3 + 0x28));
      if (iVar3 == 0) {
        return;
      }
      FUN_00190a68(param_1,iVar3);
      (***(code ***)(iVar5 + DAT_0019b168))(iVar3);
      return;
    }
    iVar5 = *(int *)(param_3 + 0x28);
    goto LAB_0019b246;
  }
  if (iVar3 == 8) {
    if (*(int *)(param_3 + 0x28) == 0) {
      return;
    }
    FUN_00190a68(param_1,iVar5 + DAT_0019b16c);
    FUN_00190a68(param_1,*(undefined4 *)(param_3 + 0x28));
    iVar3 = DAT_0019b170;
  }
  else if (iVar3 == 7) {
    if (*(int *)(param_3 + 8) == 0) {
      return;
    }
    FUN_00190a68(param_1,iVar5 + DAT_0019b174);
    FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
    iVar3 = DAT_0019b17c;
    if (*(int *)(param_3 + 0x28) != 0) {
      FUN_00190a68(param_1,iVar5 + DAT_0019b178);
      FUN_00190a68(param_1,*(undefined4 *)(param_3 + 0x28));
      iVar3 = DAT_0019b17c;
    }
  }
  else if (iVar3 == 5) {
    FUN_00190a68(param_1,iVar5 + DAT_0019b180);
    FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
    iVar3 = DAT_0019b184;
  }
  else {
    if (iVar3 == 4) {
      iVar5 = *(int *)(param_3 + 0x28);
      if (iVar5 == 0) {
        return;
      }
      goto LAB_0019b246;
    }
    if (*(int *)(param_3 + 0x24) == 0) {
      local_28 = (undefined4 *)FUN_00196b60(*(undefined4 *)(param_3 + 8));
    }
    else {
      local_28 = (undefined4 *)0x0;
    }
    FUN_00190a68(param_1,iVar5 + DAT_0019b188);
    if ((*(int *)(param_3 + 0x24) != 0) && (*(int *)(*(int *)(param_3 + 0x24) + 0xc) != 0)) {
      FUN_00190a68(param_1);
      FUN_00190a68(param_1,iVar5 + DAT_0019b18c);
    }
    FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
    if (*(int *)(param_3 + 0x30) != 0) {
      FUN_0019fea8(param_1);
    }
    for (iVar3 = *(int *)(param_3 + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      FUN_0019ad28(param_1,param_2,iVar3,param_4);
    }
    if ((local_28 == (undefined4 *)0x0) || (*(char *)((int)local_28 + 7) == '\0')) {
      if (((*(int *)(param_3 + 4) != 1) && (*(int *)(param_3 + 0x28) != 0)) ||
         (*(int *)(param_3 + 0xc) != 0)) {
        FUN_00190a68(param_1,iVar5 + DAT_0019b17c);
        if ((*(int *)(param_3 + 4) != 1) && (*(int *)(param_3 + 0x28) != 0)) {
          FUN_00190a68(param_1);
        }
        iVar3 = *(int *)(param_3 + 0xc);
        if (iVar3 != 0) {
          bVar2 = local_28 != (undefined4 *)0x0 && param_5 != 0;
          if (((((bVar2) && (*(char *)((int)local_28 + 10) == '\0')) && (*(int *)(iVar3 + 4) != 3))
              && ((*(int *)(iVar3 + 4) != 5 && (iVar3 != *(int *)(param_3 + 0x10))))) &&
             ((*(char **)(param_3 + 8) != (char *)0x0 && (**(char **)(param_3 + 8) != 'p')))) {
            FUN_00190a68(param_1,iVar5 + DAT_0019b19c);
          }
          for (iVar3 = *(int *)(param_3 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
            FUN_0019ae7c(param_1,param_2,iVar3,param_4,param_5);
          }
          if ((bVar2) && (*(char *)((int)local_28 + 10) == '\0')) {
            iVar3 = *(int *)(*(int *)(param_3 + 0x10) + 4);
            if (((iVar3 != 3) &&
                (((iVar3 != 5 && (*(int *)(param_3 + 0xc) != *(int *)(param_3 + 0x10))) &&
                 (*(char **)(param_3 + 8) != (char *)0x0)))) && (**(char **)(param_3 + 8) != 'p')) {
              FUN_00190a68(param_1,iVar5 + DAT_0019b250);
            }
          }
        }
        FUN_00190a68(param_1,iVar5 + DAT_0019b254);
        if ((*(int *)(param_3 + 0x24) != 0) && (*(int *)(*(int *)(param_3 + 0x24) + 0xc) != 0)) {
          FUN_00190a68(param_1);
          FUN_00190a68(param_1,iVar5 + DAT_0019b258);
        }
        iVar3 = DAT_0019b25c;
        FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
        FUN_00190a68(param_1,iVar5 + iVar3);
        if (local_28 == (undefined4 *)0x0) {
          return;
        }
        if (param_5 == 0) {
          return;
        }
        cVar1 = *(char *)((int)local_28 + 10);
        goto LAB_0019b21c;
      }
      if (((local_28 == (undefined4 *)0x0) || (*(char *)((int)local_28 + 6) == '\0')) ||
         ((iVar3 = FUN_0019c2dc(*local_28,iVar5 + DAT_0019b190), iVar3 == 0 ||
          (iVar3 = FUN_0019c2dc(*local_28,iVar5 + DAT_0019b194), iVar3 == 0)))) {
        FUN_00190a68(param_1,iVar5 + DAT_0019b198);
        if ((*(int *)(param_3 + 0x24) != 0) && (*(int *)(*(int *)(param_3 + 0x24) + 0xc) != 0)) {
          FUN_00190a68(param_1);
          FUN_00190a68(param_1,iVar5 + DAT_0019b18c);
        }
        FUN_00190a68(param_1,*(undefined4 *)(param_3 + 8));
      }
      FUN_00190a68(param_1,iVar5 + DAT_0019b17c);
      if (param_5 == 0) {
        return;
      }
      iVar3 = *(int *)(param_3 + 0x18);
      if (local_28 == (undefined4 *)0x0) {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)((int)local_28 + 10) != '\0') {
        return;
      }
    }
    else {
      FUN_00190a68(param_1,iVar5 + DAT_0019b17c);
      if (param_5 == 0) {
        return;
      }
      cVar1 = *(char *)((int)local_28 + 10);
LAB_0019b21c:
      if (cVar1 != '\0') {
        return;
      }
      iVar3 = *(int *)(param_3 + 0x18);
      if (iVar3 == 0) {
        return;
      }
    }
    if (*(int *)(iVar3 + 4) == 5) {
      return;
    }
    if (*(int *)(iVar3 + 4) == 3) {
      return;
    }
    if (*(int *)(param_3 + 0x14) == 0) {
      return;
    }
    pcVar4 = *(char **)(*(int *)(param_3 + 0x14) + 8);
    if (pcVar4 == (char *)0x0) {
      return;
    }
    iVar3 = DAT_0019b250;
    if (*pcVar4 == 'p') {
      return;
    }
  }
  iVar5 = iVar5 + iVar3;
LAB_0019b246:
  FUN_00190a68(param_1,iVar5);
  return;
}


