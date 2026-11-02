/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00107800  Symbol: Hero_stat */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00107810) */
/* WARNING: Removing unreachable block (ram,0x00107810) */
/* Hero_stat(void*, int) */

void Hero_stat(void *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = DAT_001079c0;
  iVar4 = *(int *)((int)param_1 + 4);
  switch(param_2) {
  case 1:
    GetHero_Attack(1);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    iVar4 = *(int *)((int)param_1 + 4);
    GetHero_HP(1);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x24) = uVar1;
    iVar4 = *(int *)((int)param_1 + 4);
    uVar1 = 0x40000000;
    goto LAB_001078c6;
  case 2:
    GetHero_Attack(2);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    iVar4 = *(int *)((int)param_1 + 4);
    GetHero_HP(2);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x24) = uVar1;
    break;
  case 3:
    GetHero_Attack(3);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    iVar2 = *(int *)((int)param_1 + 4);
    iVar4 = 3;
    goto LAB_0010787a;
  case 4:
    GetHero_Attack(4);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    iVar2 = *(int *)((int)param_1 + 4);
    iVar4 = 4;
LAB_0010787a:
    GetHero_HP(iVar4);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x14) = 0x40000000;
    iVar4 = *(int *)((int)param_1 + 4);
    uVar1 = DAT_001079b0;
    goto LAB_001078cc;
  case 5:
    GetHero_Attack(5);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    iVar4 = *(int *)((int)param_1 + 4);
    GetHero_HP(5);
    uVar1 = __floatsisf();
    *(undefined4 *)(iVar4 + 0x24) = uVar1;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x14) = DAT_001079b4;
    iVar4 = *(int *)((int)param_1 + 4);
    uVar1 = DAT_001079b8;
    goto LAB_001078cc;
  default:
    *(undefined4 *)(iVar4 + 0x38) = DAT_001079bc;
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x24) = uVar1;
  }
  iVar4 = *(int *)((int)param_1 + 4);
  uVar1 = DAT_001079c4;
LAB_001078c6:
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  iVar4 = *(int *)((int)param_1 + 4);
  uVar1 = DAT_001079c8;
LAB_001078cc:
  *(undefined4 *)(iVar4 + 0x58) = uVar1;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x28) =
       *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x24);
  iVar2 = *(int *)((int)param_1 + 4);
  uVar7 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x14));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar5 = **(int **)(DAT_001079cc + 0x1078e8);
  iVar6 = **(int **)(DAT_001079d0 + 0x1078f6);
  uVar8 = __floatsidf((int)*(short *)((*(char *)(iVar5 + param_2 * 0xc + iVar6 * 0x6c + DAT_001079d8
                                                ) + 0x42) * 2 + *(int *)(DAT_001079d4 + 0x107906)));
  uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_001079a8,DAT_001079ac);
  __muldf3((int)uVar7,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar1 = __truncdfsf2();
  iVar4 = DAT_001079dc;
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  iVar5 = iVar5 + *(char *)(iVar5 + iVar6 + iVar4 + 4) * 0x50 + iVar6 * 0x2d0;
  if (*(int *)(*(int *)(DAT_001079e0 + 0x107958) + *(int *)(iVar5 + DAT_001079e4) * 0x18 + 0x14) ==
      10) {
    iVar4 = *(int *)((int)param_1 + 4);
    uVar8 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x14));
    uVar9 = __floatsidf(*(undefined4 *)(iVar5 + DAT_001079e8 + 4));
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_001079a8,DAT_001079ac);
    uVar7 = __muldf3((int)uVar7,uVar3,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar1 = __truncdfsf2();
    *(undefined4 *)(iVar4 + 0x14) = uVar1;
  }
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x28) =
       *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x24);
  return;
}


