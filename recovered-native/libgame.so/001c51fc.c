/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c51fc  Symbol: FUN_001c51fc */

char FUN_001c51fc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auStack_24 [8];
  
  iVar3 = DAT_001c5420 + 0x1c5210;
  pcVar4 = *(char **)(iVar3 + DAT_001c5424);
  cVar1 = *pcVar4;
  if ((param_1 == 0) && (cVar1 != '\0')) {
    FUN_001c4bb4(auStack_24);
    iVar5 = DAT_001c5428;
    *pcVar4 = '\0';
    piVar2 = *(int **)(iVar3 + iVar5);
    iVar5 = *(int *)(iVar3 + DAT_001c542c) + 8;
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    piVar2 = *(int **)(iVar3 + DAT_001c5430);
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    piVar2 = *(int **)(iVar3 + DAT_001c5434);
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    piVar2 = *(int **)(iVar3 + DAT_001c5438);
    iVar5 = *(int *)(iVar3 + DAT_001c543c) + 8;
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    piVar2 = *(int **)(iVar3 + DAT_001c5440);
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    piVar2 = *(int **)(iVar3 + DAT_001c5444);
    *piVar2 = iVar5;
    FUN_001c5d8c(piVar2 + 7);
    uVar7 = *(undefined4 *)(iVar3 + DAT_001c5448);
    iVar5 = *(int *)(iVar3 + DAT_001c544c);
    FUN_001c9970(uVar7,iVar5 + 0x54,0x10,0x400);
    uVar8 = *(undefined4 *)(iVar3 + DAT_001c5450);
    FUN_001c9970(uVar8,iVar5,8,0x400);
    uVar6 = *(undefined4 *)(iVar3 + DAT_001c5454);
    FUN_001c9970(uVar6,iVar5 + 0xa8,0x10,0x400);
    FUN_001d0e08(*(int *)(iVar3 + DAT_001c5458) + 4,uVar7);
    FUN_001d0e08(*(int *)(iVar3 + DAT_001c545c) + 8,uVar8);
    FUN_001d0e08(*(int *)(iVar3 + DAT_001c5460) + 4,uVar6);
    FUN_001d0e08(*(int *)(iVar3 + DAT_001c5464) + 4,uVar6);
    uVar7 = *(undefined4 *)(iVar3 + DAT_001c5468);
    FUN_001c9b70(uVar7,iVar5 + 0x54,0x10,0x400);
    uVar8 = *(undefined4 *)(iVar3 + DAT_001c546c);
    FUN_001c9b70(uVar8,iVar5,8,0x400);
    uVar6 = *(undefined4 *)(iVar3 + DAT_001c5470);
    FUN_001c9b70(uVar6,iVar5 + 0xa8,0x10,0x400);
    FUN_001d14e0(*(int *)(iVar3 + DAT_001c5474) + 4,uVar7);
    FUN_001d14e0(*(int *)(iVar3 + DAT_001c5478) + 8,uVar8);
    FUN_001d14e0(*(int *)(iVar3 + DAT_001c547c) + 4,uVar6);
    FUN_001d14e0(*(int *)(iVar3 + DAT_001c5480) + 4,uVar6);
    FUN_001c514c(auStack_24);
  }
  return cVar1;
}


