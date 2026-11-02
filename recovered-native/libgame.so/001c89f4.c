/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c89f4  Symbol: FUN_001c89f4 */

void FUN_001c89f4(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__src;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar6 = DAT_001c8b2c + 0x1c8a10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x44);
    iVar4 = DAT_001c8b3c;
    piVar2[1] = 0;
    iVar4 = *(int *)(iVar6 + iVar4);
    piVar2[2] = 0;
    *piVar2 = iVar4 + 8;
    piVar2[3] = 0;
    *(undefined *)(piVar2 + 4) = 0;
    *(undefined *)((int)piVar2 + 0x11) = 0;
    *(undefined *)((int)piVar2 + 0x12) = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    *(undefined *)(piVar2 + 0xc) = 0;
    *(undefined *)((int)piVar2 + 0x31) = 0;
    *(undefined *)((int)piVar2 + 0x32) = 0;
    *(undefined *)((int)piVar2 + 0x33) = 0;
    *(undefined *)(piVar2 + 0xd) = 0;
    *(undefined *)((int)piVar2 + 0x35) = 0;
    *(undefined *)((int)piVar2 + 0x36) = 0;
    *(undefined *)((int)piVar2 + 0x37) = 0;
    *(undefined *)((int)piVar2 + 0x43) = 0;
    *(int **)(param_1 + 8) = piVar2;
  }
  *(undefined *)((int)piVar2 + 0x11) = 0x2e;
  iVar4 = DAT_001c8b30;
  *(undefined *)(*(int *)(param_1 + 8) + 0x12) = 0x2c;
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = iVar4 + 0x1c8a34;
  *(int *)(iVar3 + 8) = iVar4;
  *(int *)(iVar3 + 0x14) = iVar4;
  *(int *)(iVar3 + 0x1c) = iVar4;
  *(int *)(iVar3 + 0x24) = iVar4;
  iVar4 = DAT_001c8b34;
  iVar5 = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  __src = *(void **)(iVar6 + iVar4);
  memcpy((void *)(iVar3 + 0x30),__src,4);
  memcpy((void *)(*(int *)(param_1 + 8) + 0x34),__src,4);
  iVar6 = **(int **)(iVar6 + DAT_001c8b38);
  do {
    puVar1 = (undefined *)(iVar6 + iVar5);
    iVar4 = *(int *)(param_1 + 8) + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar4 + 0x38) = *puVar1;
  } while (iVar5 != 0xb);
  return;
}


