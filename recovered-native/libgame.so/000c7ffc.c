/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7ffc  Symbol: GetHero_Attack */

/* GetHero_Attack(int) */

int GetHero_Attack(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_000c80d0 + 0xc8008;
  iVar7 = **(int **)(iVar5 + DAT_000c80d4);
  iVar6 = **(int **)(iVar5 + DAT_000c80dc);
  uVar1 = __floatsisf(*(undefined4 *)(iVar7 + (iVar6 * 9 + param_1 + DAT_000c80d8) * 4 + 4));
  uVar2 = __floatsisf(*(undefined4 *)(param_1 * 4 + *(int *)(iVar5 + DAT_000c80e0)));
  uVar3 = __mulsf3(uVar1,*(undefined4 *)(param_1 * 4 + *(int *)(iVar5 + DAT_000c80e4)));
  uVar1 = __mulsf3(uVar1,uVar3);
  uVar1 = __addsf3(uVar2,uVar1);
  iVar4 = iVar7 + param_1 * 0x50 + iVar6 * 0x2d0;
  uVar2 = __floatsisf(*(undefined4 *)(iVar4 + DAT_000c80e8 + 4));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)((*(char *)(iVar7 + param_1 * 0xc + iVar6 * 0x6c + DAT_000c80ec
                                                ) + 0x2c) * 2 + *(int *)(iVar5 + DAT_000c80f0)));
  __addsf3(uVar1,uVar2);
  iVar6 = __fixsfsi();
  if (*(int *)(*(int *)(iVar5 + DAT_000c80f4) + *(int *)(iVar4 + DAT_000c80f8) * 0x18 + 0x14) == 8)
  {
    iVar6 = iVar6 + *(int *)(iVar4 + DAT_000c80fc + 4);
  }
  return iVar6;
}


