/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195f94  Symbol: FUN_00195f94 */

void FUN_00195f94(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = DAT_001960b8 + 0x195fa0;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x24) + 0x2c) != 0) {
    return;
  }
  iVar1 = FUN_0019c444(param_2,iVar4 + DAT_001960bc);
  if (iVar1 == 0) {
    iVar1 = FUN_0019c444(param_2,iVar4 + DAT_001960c0);
    if (iVar1 == 0) {
      return;
    }
    pcVar5 = (char *)(iVar1 + 9);
  }
  else {
    pcVar5 = (char *)(iVar1 + 8);
  }
  if (pcVar5 == (char *)0x0) {
    return;
  }
  for (; (*pcVar5 == '\t' || (*pcVar5 == ' ')); pcVar5 = pcVar5 + 1) {
  }
  if (*(int *)(*(int *)(param_1 + 0x24) + 0x2c) != 0) {
    (***(code ***)(iVar4 + DAT_001960c4))();
  }
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = FUN_0019c904(pcVar5);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  iVar1 = FUN_001a3e20(pcVar5);
  if (iVar1 == -1) {
    iVar1 = FUN_001a4238(pcVar5,0xffffffff);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x20;
      goto LAB_00196060;
    }
    FUN_00179f9c(param_1,iVar1);
  }
  else if (((iVar1 - 2U < 4) && (**(int **)(param_1 + 0x24) != 0)) &&
          (*(int *)(**(int **)(param_1 + 0x24) + 0xc) == 0)) {
    FUN_00195ba4(param_1,0x51,iVar4 + DAT_001960c8,0,0);
  }
  else {
    FUN_00179fd4(param_1);
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
LAB_00196060:
  piVar3 = *(int **)(param_1 + 0x24);
  iVar1 = *piVar3;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) &&
     ((*(int *)(iVar1 + 0x14) != 0 && (*(int *)(iVar1 + 0x10) != 0)))) {
    FUN_0018a7b0(*(int *)(iVar1 + 0x10),piVar3[4] - piVar3[3]);
    iVar1 = **(int **)(param_1 + 0x24);
    iVar1 = FUN_001a3b7c(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0x14));
    if (iVar1 < 0) {
      FUN_00195ba4(param_1,0x51,iVar4 + DAT_001960cc,0,0);
    }
    piVar3 = *(int **)(param_1 + 0x24);
    iVar4 = **(int **)(*piVar3 + 0x10);
    piVar3[4] = iVar4;
    piVar3[3] = iVar4;
  }
  return;
}


