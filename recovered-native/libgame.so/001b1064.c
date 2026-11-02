/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b1064  Symbol: jinit_c_coef_controller */

void jinit_c_coef_controller(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x68);
  iVar7 = DAT_001b1104;
  *(int **)(param_1 + 400) = piVar1;
  *piVar1 = iVar7 + 0x1b108a + DAT_001b1108;
  if (param_2 == 0) {
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    iVar8 = iVar7 + 0x500;
    piVar6 = piVar1;
    do {
      piVar6[6] = iVar7;
      iVar7 = iVar7 + 0x80;
      piVar6 = piVar6 + 1;
    } while (iVar7 != iVar8);
    piVar1[0x10] = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x54);
    if (0 < *(int *)(param_1 + 0x4c)) {
      iVar8 = 0;
      do {
        pcVar5 = *(code **)(*(int *)(param_1 + 4) + 0x14);
        iVar8 = iVar8 + 1;
        uVar2 = jround_up(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 8));
        uVar3 = jround_up(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0xc));
        iVar4 = (*pcVar5)(param_1,1,0,uVar2,uVar3,*(undefined4 *)(iVar7 + 0xc));
        piVar1[0x10] = iVar4;
        iVar7 = iVar7 + 0x58;
        piVar1 = piVar1 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x4c));
    }
  }
  return;
}


