/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab388  Symbol: jinit_marker_reader */

void jinit_marker_reader(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar2 = (int *)(***(code ***)(param_1 + 4))(param_1,0,0xac);
  iVar5 = DAT_001ab3f8;
  *(int **)(param_1 + 0x1cc) = piVar2;
  iVar1 = DAT_001ab400;
  iVar5 = iVar5 + 0x1ab3a4;
  *piVar2 = iVar5 + DAT_001ab3fc;
  iVar3 = DAT_001ab404;
  piVar2[7] = iVar5 + iVar1;
  piVar2[1] = iVar5 + iVar3;
  iVar3 = 0;
  piVar2[2] = iVar5 + DAT_001ab408;
  piVar2[0x18] = 0;
  piVar4 = piVar2 + 8;
  do {
    iVar3 = iVar3 + 1;
    *piVar4 = iVar5 + iVar1;
    piVar4[0x11] = 0;
    piVar4 = piVar4 + 1;
  } while (iVar3 != 0x10);
  iVar5 = iVar5 + DAT_001ab40c;
  piVar2[8] = iVar5;
  piVar2[0x16] = iVar5;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar5 = *(int *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0xa4) = 0;
  return;
}


