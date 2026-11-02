/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191314  Symbol: FUN_00191314 */

undefined4 * FUN_00191314(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = DAT_001913cc + 0x191320;
  if (*(int *)(iVar7 + DAT_001913d0 + 0xc) == 0) {
    FUN_00191114();
  }
  puVar2 = (undefined4 *)malloc(param_1 + 0x18);
  uVar1 = DAT_001913e0;
  if (puVar2 == (undefined4 *)0x0) {
    (***(code ***)(iVar7 + DAT_001913d4))
              (**(undefined4 **)(iVar7 + DAT_001913d8),iVar7 + DAT_001913dc);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    puVar2[4] = param_2;
    *puVar2 = uVar1;
    puVar2[3] = param_1;
    iVar5 = DAT_001913d0;
    puVar2[5] = param_3;
    iVar5 = iVar7 + iVar5;
    FUN_0019c274(*(undefined4 *)(iVar5 + 0x10));
    iVar3 = *(int *)(iVar5 + 0x1c) + 1;
    *(int *)(iVar5 + 0x1c) = iVar3;
    puVar2[2] = iVar3;
    uVar4 = param_1 + *(int *)(iVar5 + 4);
    *(uint *)(iVar5 + 4) = uVar4;
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    if (*(uint *)(iVar5 + 0x18) < uVar4) {
      *(uint *)(iVar5 + 0x18) = uVar4;
    }
    piVar6 = (int *)(iVar7 + DAT_001913d0);
    FUN_0019c278(piVar6[4]);
    if (*piVar6 == puVar2[2]) {
      FUN_00190f28();
    }
    puVar2 = puVar2 + 6;
    if (*(undefined4 **)(iVar7 + DAT_001913d0 + 0x14) == puVar2) {
      (***(code ***)(iVar7 + DAT_001913d4))
                (**(undefined4 **)(iVar7 + DAT_001913d8),iVar7 + DAT_001913e4,puVar2,param_1);
      FUN_00190f28();
    }
  }
  return puVar2;
}


