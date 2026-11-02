/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4bf8  Symbol: FUN_001b4bf8 */

void FUN_001b4bf8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  short **ppsVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 0x1c0);
  iVar9 = DAT_001b4d28 + 0x1b4c12;
  if (*(int *)(iVar10 + 0x10) != 0) {
    if (((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xe0) != 0)) &&
       (*(int *)(param_1 + 0xa0) != 0)) {
      iVar2 = *(int *)(iVar10 + 0x70);
      if (iVar2 == 0) {
        iVar2 = (***(code ***)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) * 0x18);
        *(int *)(iVar10 + 0x70) = iVar2;
      }
      if ((((0 < *(int *)(param_1 + 0x24)) &&
           (psVar7 = *(short **)(*(int *)(param_1 + 0xd8) + 0x50), psVar7 != (short *)0x0)) &&
          ((*psVar7 != 0 && ((psVar7[1] != 0 && (psVar7[8] != 0)))))) &&
         ((psVar7[0x10] != 0 &&
          (((psVar7[9] != 0 && (psVar7[2] != 0)) &&
           (piVar8 = *(int **)(param_1 + 0xa0), -1 < *piVar8)))))) {
        piVar3 = (int *)(iVar2 + 4);
        ppsVar5 = (short **)(*(int *)(param_1 + 0xd8) + 0xa8);
        iVar2 = 0;
        bVar1 = false;
        while( true ) {
          iVar6 = 1;
          piVar4 = piVar3;
          do {
            piVar8 = piVar8 + 1;
            *piVar4 = *piVar8;
            if (*piVar8 != 0) {
              bVar1 = true;
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar6 != 6);
          iVar2 = iVar2 + 1;
          if (*(int *)(param_1 + 0x24) <= iVar2) break;
          psVar7 = *ppsVar5;
          if ((((psVar7 == (short *)0x0) || (*psVar7 == 0)) ||
              (((psVar7[1] == 0 || ((psVar7[8] == 0 || (psVar7[0x10] == 0)))) || (psVar7[9] == 0))))
             || (psVar7[2] == 0)) goto LAB_001b4c1a;
          piVar8 = (int *)(*(int *)(param_1 + 0xa0) + iVar2 * 0x100);
          piVar3 = piVar3 + 6;
          ppsVar5 = ppsVar5 + 0x16;
          if (*piVar8 < 0) goto LAB_001b4c1a;
        }
        if (bVar1) {
          *(int *)(iVar10 + 0xc) = iVar9 + DAT_001b4d30;
          goto LAB_001b4c20;
        }
      }
    }
LAB_001b4c1a:
    *(int *)(iVar10 + 0xc) = iVar9 + DAT_001b4d2c;
  }
LAB_001b4c20:
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}


