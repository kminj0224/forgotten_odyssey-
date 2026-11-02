/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afa8c  Symbol: FUN_001afa8c */

void FUN_001afa8c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 4);
  piVar5 = *(int **)(iVar8 + 0x44);
  if (piVar5 == (int *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
    do {
      while (*piVar5 != 0) {
        piVar5 = (int *)piVar5[0xb];
        if (piVar5 == (int *)0x0) goto LAB_001afac8;
      }
      piVar1 = piVar5 + 2;
      iVar6 = iVar6 + *piVar1 * piVar5[3];
      piVar2 = piVar5 + 1;
      piVar5 = (int *)piVar5[0xb];
      iVar7 = iVar7 + *piVar2 * *piVar1;
    } while (piVar5 != (int *)0x0);
  }
LAB_001afac8:
  for (piVar5 = *(int **)(iVar8 + 0x48); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xb]) {
    while (*piVar5 != 0) {
      piVar5 = (int *)piVar5[0xb];
      if (piVar5 == (int *)0x0) goto LAB_001afaf4;
    }
    iVar6 = iVar6 + piVar5[2] * piVar5[3] * 0x80;
    iVar7 = iVar7 + piVar5[1] * piVar5[2] * 0x80;
  }
LAB_001afaf4:
  if (0 < iVar6) {
    iVar3 = jpeg_mem_available(param_1,iVar6,iVar7,*(undefined4 *)(iVar8 + 0x4c));
    iVar4 = DAT_001afc0c;
    if ((iVar3 < iVar7) && (iVar4 = __divsi3(iVar3,iVar6), iVar4 < 1)) {
      iVar4 = 1;
    }
    for (piVar5 = *(int **)(iVar8 + 0x44); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xb]) {
      while (*piVar5 != 0) {
        piVar5 = (int *)piVar5[0xb];
        if (piVar5 == (int *)0x0) goto LAB_001afb64;
      }
      iVar7 = piVar5[3];
      iVar3 = piVar5[1];
      iVar6 = __udivsi3(iVar3 + -1,iVar7);
      if (iVar4 < iVar6 + 1) {
        piVar5[4] = iVar4 * iVar7;
        jpeg_open_backing_store(param_1,piVar5 + 0xc,iVar3 * piVar5[2]);
        piVar5[10] = 1;
        iVar3 = piVar5[4];
      }
      else {
        piVar5[4] = iVar3;
      }
      iVar6 = FUN_001af9fc(param_1,1,piVar5[2],iVar3);
      *piVar5 = iVar6;
      piVar5[5] = *(int *)(iVar8 + 0x50);
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[9] = 0;
    }
LAB_001afb64:
    for (piVar5 = *(int **)(iVar8 + 0x48); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[0xb]) {
      while (*piVar5 != 0) {
        piVar5 = (int *)piVar5[0xb];
        if (piVar5 == (int *)0x0) {
          return;
        }
      }
      iVar7 = piVar5[3];
      iVar3 = piVar5[1];
      iVar6 = __udivsi3(iVar3 + -1,iVar7);
      if (iVar4 < iVar6 + 1) {
        piVar5[4] = iVar4 * iVar7;
        jpeg_open_backing_store(param_1,piVar5 + 0xc,iVar3 * piVar5[2] * 0x80);
        piVar5[10] = 1;
        iVar3 = piVar5[4];
      }
      else {
        piVar5[4] = iVar3;
      }
      iVar6 = FUN_001af96c(param_1,1,piVar5[2],iVar3);
      *piVar5 = iVar6;
      piVar5[5] = *(int *)(iVar8 + 0x50);
      piVar5[6] = 0;
      piVar5[7] = 0;
      piVar5[9] = 0;
    }
  }
  return;
}


