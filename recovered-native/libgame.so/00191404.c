/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191404  Symbol: FUN_00191404 */

undefined4 * FUN_00191404(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *__dest;
  uint uVar8;
  
  sVar2 = strlen(param_1);
  iVar7 = DAT_001914bc + 0x19141c;
  if (*(int *)(iVar7 + DAT_001914c0 + 0xc) == 0) {
    FUN_00191114();
  }
  puVar3 = (undefined4 *)malloc(sVar2 + 0x19);
  uVar1 = DAT_001914c4;
  if (puVar3 == (undefined4 *)0x0) {
    __dest = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = sVar2 + 1;
    puVar3[1] = 3;
    puVar3[4] = param_2;
    *puVar3 = uVar1;
    iVar5 = DAT_001914c0;
    puVar3[5] = param_3;
    iVar5 = iVar7 + iVar5;
    FUN_0019c274(*(undefined4 *)(iVar5 + 0x10));
    iVar4 = *(int *)(iVar5 + 0x1c) + 1;
    *(int *)(iVar5 + 0x1c) = iVar4;
    puVar3[2] = iVar4;
    uVar8 = sVar2 + 1 + *(int *)(iVar5 + 4);
    *(uint *)(iVar5 + 4) = uVar8;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    if (*(uint *)(iVar5 + 0x18) < uVar8) {
      *(uint *)(iVar5 + 0x18) = uVar8;
    }
    piVar6 = (int *)(iVar7 + DAT_001914c0);
    FUN_0019c278(piVar6[4]);
    __dest = puVar3 + 6;
    if (*piVar6 == puVar3[2]) {
      FUN_00190f28();
    }
    if ((__dest != (undefined4 *)0x0) &&
       (strcpy((char *)__dest,param_1), *(undefined4 **)(iVar7 + DAT_001914c0 + 0x14) == __dest)) {
      (***(code ***)(iVar7 + DAT_001914c8))
                (**(undefined4 **)(iVar7 + DAT_001914cc),iVar7 + DAT_001914d0,__dest);
      FUN_00190f28();
    }
  }
  return __dest;
}


