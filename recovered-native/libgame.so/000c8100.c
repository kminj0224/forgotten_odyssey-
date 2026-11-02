/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8100  Symbol: GetHero_HP */

/* GetHero_HP(int) */

int GetHero_HP(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_000c81d4 + 0xc810c;
  iVar7 = **(int **)(iVar5 + DAT_000c81d8);
  iVar6 = **(int **)(iVar5 + DAT_000c81e0);
  uVar1 = __floatsisf(*(undefined4 *)(iVar7 + (iVar6 * 9 + param_1 + DAT_000c81dc) * 4 + 4));
  uVar2 = __floatsisf(*(undefined4 *)(param_1 * 4 + *(int *)(iVar5 + DAT_000c81e4)));
  uVar3 = __mulsf3(uVar1,*(undefined4 *)(param_1 * 4 + *(int *)(iVar5 + DAT_000c81e8)));
  uVar1 = __mulsf3(uVar1,uVar3);
  uVar1 = __addsf3(uVar2,uVar1);
  iVar4 = iVar7 + param_1 * 0x50 + iVar6 * 0x2d0;
  uVar2 = __floatsisf(*(undefined4 *)(iVar4 + DAT_000c81ec + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)((*(char *)(iVar7 + param_1 * 0xc + iVar6 * 0x6c + DAT_000c81f0
                                                ) + 0x37) * 2 + *(int *)(iVar5 + DAT_000c81f4)));
  __addsf3(uVar1,uVar2);
  iVar6 = __fixsfsi();
  if (*(int *)(*(int *)(iVar5 + DAT_000c81f8) + *(int *)(iVar4 + DAT_000c81fc) * 0x18 + 0x14) == 9)
  {
    iVar6 = iVar6 + *(int *)(iVar4 + DAT_000c8200 + 4);
  }
  return iVar6;
}


