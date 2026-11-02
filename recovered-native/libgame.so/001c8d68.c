/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c8d68  Symbol: FUN_001c8d68 */

void FUN_001c8d68(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  void *__src;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar7 = DAT_001c8ea0 + 0x1c8d84;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x70);
    iVar3 = DAT_001c8eb4;
    piVar2[1] = 0;
    iVar3 = *(int *)(iVar7 + iVar3);
    piVar2[2] = 0;
    *piVar2 = iVar3 + 8;
    piVar2[3] = 0;
    *(undefined *)(piVar2 + 4) = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    *(undefined *)(piVar2 + 0xe) = 0;
    *(undefined *)((int)piVar2 + 0x39) = 0;
    *(undefined *)((int)piVar2 + 0x3a) = 0;
    *(undefined *)((int)piVar2 + 0x3b) = 0;
    *(undefined *)(piVar2 + 0xf) = 0;
    *(undefined *)((int)piVar2 + 0x3d) = 0;
    *(undefined *)((int)piVar2 + 0x3e) = 0;
    *(undefined *)((int)piVar2 + 0x3f) = 0;
    *(undefined *)(piVar2 + 0x1b) = 0;
    *(int **)(param_1 + 8) = piVar2;
  }
  iVar3 = DAT_001c8ea8;
  iVar4 = DAT_001c8ea4 + 0x1c8d94;
  piVar2[7] = iVar4;
  piVar2[9] = iVar4;
  piVar2[0xb] = iVar4;
  iVar4 = DAT_001c8eac;
  iVar6 = 0;
  piVar2[5] = 0x2e;
  piVar2[6] = 0x2c;
  piVar2[2] = iVar3 + 0x1c8db4;
  piVar2[3] = 0;
  piVar2[8] = 0;
  piVar2[10] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  __src = *(void **)(iVar7 + iVar4);
  memcpy(piVar2 + 0xe,__src,4);
  memcpy((void *)(*(int *)(param_1 + 8) + 0x3c),__src,4);
  puVar5 = (uint *)(*(int *)(param_1 + 8) + 0x3c);
  iVar7 = **(int **)(iVar7 + DAT_001c8eb0);
  do {
    pbVar1 = (byte *)(iVar7 + iVar6);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = (uint)*pbVar1;
  } while (iVar6 != 0xb);
  return;
}


