/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ad014  Symbol: jinit_d_post_controller */

void jinit_d_post_controller(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x1c);
  iVar4 = DAT_001ad08c;
  *(int **)(param_1 + 0x1c4) = piVar1;
  *piVar1 = iVar4 + 0x1ad034 + DAT_001ad090;
  piVar1[2] = 0;
  piVar1[3] = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar4 = *(int *)(param_1 + 0x13c);
    piVar1[4] = iVar4;
    if (param_2 == 0) {
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                        (param_1,1,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x78));
      piVar1[3] = iVar4;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x70);
      pcVar6 = *(code **)(*(int *)(param_1 + 4) + 0x10);
      iVar3 = *(int *)(param_1 + 0x78);
      uVar2 = jround_up(*(undefined4 *)(param_1 + 0x74),iVar4);
      iVar4 = (*pcVar6)(param_1,1,0,iVar3 * iVar5,uVar2,piVar1[4]);
      piVar1[2] = iVar4;
    }
  }
  return;
}


