/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9e3c  Symbol: jinit_input_controller */

void jinit_input_controller(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,0,0x1c);
  iVar2 = DAT_001a9e78;
  *(int **)(param_1 + 0x1c8) = piVar1;
  iVar2 = iVar2 + 0x1a9e58;
  *piVar1 = iVar2 + DAT_001a9e7c;
  piVar1[1] = iVar2 + DAT_001a9e80;
  piVar1[2] = iVar2 + DAT_001a9e84;
  iVar2 = iVar2 + DAT_001a9e88;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[3] = iVar2;
  piVar1[6] = 1;
  return;
}


