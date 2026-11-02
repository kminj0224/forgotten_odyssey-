/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017c6c4  Symbol: FUN_0017c6c4 */

undefined FUN_0017c6c4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_0017c730;
  iVar1 = DAT_0017c72c;
  iVar6 = DAT_0017c724 + 0x17c6d0;
  if (param_1 == 0) {
LAB_0017c71e:
    uVar3 = 0;
  }
  else {
    iVar5 = iVar6 + DAT_0017c728;
    do {
      if (*(int *)(param_1 + 0x28) < 2) goto LAB_0017c71e;
      if (**(int **)(iVar6 + iVar1) != 0) {
        (***(code ***)(iVar6 + iVar2))(**(undefined4 **)(iVar6 + DAT_0017c734),iVar5);
      }
      FUN_0017ad38(param_1);
      FUN_00179898();
    } while ((**(char **)(*(int *)(param_1 + 0x24) + 0x10) == '\0') &&
            (iVar4 = FUN_0017a2bc(*(int *)(param_1 + 0x24),0xfa), iVar4 < 1));
    uVar3 = **(undefined **)(*(int *)(param_1 + 0x24) + 0x10);
  }
  return uVar3;
}


