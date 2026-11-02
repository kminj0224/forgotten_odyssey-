/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b4d34  Symbol: jinit_d_coef_controller */

void jinit_d_coef_controller(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = DAT_001b4e2c + 0x1b4d4a;
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x74);
  *(int **)(param_1 + 0x1c0) = piVar1;
  *piVar1 = iVar4 + DAT_001b4e30;
  piVar1[2] = iVar4 + DAT_001b4e34;
  piVar1[0x1c] = 0;
  if (param_2 == 0) {
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    iVar9 = iVar7 + 0x500;
    piVar6 = piVar1;
    do {
      piVar6[8] = iVar7;
      iVar7 = iVar7 + 0x80;
      piVar6 = piVar6 + 1;
    } while (iVar7 != iVar9);
    piVar1[1] = iVar4 + DAT_001b4e40;
    piVar1[3] = iVar4 + DAT_001b4e44;
    piVar1[4] = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xd8);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar9 = 0;
      piVar6 = piVar1 + 0x12;
      while( true ) {
        iVar8 = *(int *)(iVar7 + 0xc);
        if (*(int *)(param_1 + 0xe0) != 0) {
          iVar8 = iVar8 * 3;
        }
        pcVar5 = *(code **)(*(int *)(param_1 + 4) + 0x14);
        uVar2 = jround_up(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 8));
        uVar3 = jround_up(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0xc));
        iVar8 = (*pcVar5)(param_1,1,1,uVar2,uVar3,iVar8);
        *piVar6 = iVar8;
        piVar6 = piVar6 + 1;
        iVar9 = iVar9 + 1;
        if (*(int *)(param_1 + 0x24) <= iVar9) break;
        iVar7 = iVar7 + 0x58;
      }
    }
    piVar1[1] = iVar4 + DAT_001b4e38;
    piVar1[3] = iVar4 + DAT_001b4e3c;
    piVar1[4] = (int)(piVar1 + 0x12);
  }
  return;
}


