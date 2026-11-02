/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6c74  Symbol: jinit_marker_writer */

void jinit_marker_writer(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x20);
  iVar2 = DAT_001a6cbc;
  *(int **)(param_1 + 0x194) = piVar1;
  iVar2 = iVar2 + 0x1a6c90;
  *piVar1 = iVar2 + DAT_001a6cc0;
  piVar1[1] = iVar2 + DAT_001a6cc4;
  piVar1[2] = iVar2 + DAT_001a6cc8;
  piVar1[3] = iVar2 + DAT_001a6ccc;
  piVar1[4] = iVar2 + DAT_001a6cd0;
  piVar1[5] = iVar2 + DAT_001a6cd4;
  piVar1[6] = iVar2 + DAT_001a6cd8;
  piVar1[7] = 0;
  return;
}


