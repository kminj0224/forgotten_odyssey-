/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a31ec  Symbol: FUN_001a31ec */

void FUN_001a31ec(void)

{
  int iVar1;
  int *piVar2;
  code **ppcVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_001a3258;
  iVar7 = DAT_001a3254;
  FUN_001a30d4();
  iVar1 = DAT_001a325c;
  iVar7 = iVar7 + 0x1a31fa;
  iVar6 = iVar7 + iVar6;
  if (*(int *)(iVar6 + 0xc) == 0) {
    return;
  }
  do {
    iVar5 = *(int *)(iVar6 + 0x10);
    ppiVar4 = (int **)(*(int *)(iVar6 + 0xc) + (iVar5 + -1) * 4);
    do {
      if (iVar5 < 1) {
        ppcVar3 = *(code ***)(iVar7 + DAT_001a325c);
        iVar7 = iVar7 + DAT_001a3258;
        *(int *)(iVar7 + 0x10) = iVar5;
        (**ppcVar3)();
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(undefined4 *)(iVar7 + 0x10) = 0;
        *(undefined4 *)(iVar7 + 0x14) = 0;
        return;
      }
      piVar2 = *ppiVar4;
      iVar5 = iVar5 + -1;
      ppiVar4 = ppiVar4 + -1;
    } while (piVar2 == (int *)0x0);
    *(int *)(iVar6 + 0x10) = iVar5;
    if (*piVar2 != 0) {
      (***(code ***)(iVar7 + iVar1))();
    }
    (***(code ***)(iVar7 + iVar1))
              (*(undefined4 *)(*(int *)(iVar6 + 0x10) * 4 + *(int *)(iVar6 + 0xc)));
  } while( true );
}


