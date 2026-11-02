/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b23d4  Symbol: FUN_001b23d4 */

void FUN_001b23d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x80) >> 1;
  iVar6 = 0;
  iVar1 = 0;
  if (iVar3 != 0) {
    do {
      iVar3 = iVar3 >> 1;
      iVar6 = iVar6 + 1;
    } while (iVar3 != 0);
    iVar1 = iVar6 * 0x10;
    if (0xe < iVar6) {
      *(undefined4 *)(**(int **)(param_1 + 0x78) + 0x14) = 0x29;
      (**(code **)**(undefined4 **)(param_1 + 0x78))();
      iVar4 = *(int *)(param_1 + 0x6c);
      iVar1 = iVar6 * 0x10;
      iVar3 = *(int *)(param_1 + 0x7c);
      goto joined_r0x001b23fe;
    }
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar3 = *(int *)(param_1 + 0x7c);
joined_r0x001b23fe:
  if (iVar4 == 0) {
    iVar3 = *(int *)(param_1 + (iVar3 + 0xe) * 4 + 4);
    puVar5 = (undefined *)(iVar3 + iVar1 + 0x400);
    FUN_001b2318(param_1,*(undefined4 *)(iVar1 * 4 + iVar3),*puVar5,puVar5,param_4);
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + (iVar3 + 0x16) * 4 + 4) + iVar1 * 4);
    *piVar2 = *piVar2 + 1;
  }
  if (iVar6 != 0) {
    FUN_001b2318(param_1,*(undefined4 *)(param_1 + 0x80),iVar6,0x80,param_4);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  iVar6 = *(int *)(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x84);
  if ((*(int *)(param_1 + 0x6c) == 0) && (iVar1 != 0)) {
    iVar3 = 0;
    do {
      puVar5 = (undefined *)(iVar6 + iVar3);
      iVar3 = iVar3 + 1;
      FUN_001b2318(param_1,*puVar5,1);
    } while (iVar1 != iVar3);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


