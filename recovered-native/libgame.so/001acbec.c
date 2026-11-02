/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001acbec  Symbol: jinit_merged_upsampler */

void jinit_merged_upsampler(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = (int *)(***(code ***)(param_1 + 4))(param_1,1,0x30,**(code ***)(param_1 + 4),param_4);
  iVar8 = DAT_001acccc;
  *(int **)(param_1 + 0x1d8) = piVar1;
  iVar8 = iVar8 + 0x1acc08;
  *piVar1 = iVar8 + DAT_001accd0;
  piVar1[2] = 0;
  piVar1[10] = *(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x70);
  iVar3 = DAT_001accd4;
  if (*(int *)(param_1 + 0x13c) == 2) {
    piVar1[1] = iVar8 + DAT_001accfc;
    piVar1[3] = iVar8 + DAT_001acd00;
    iVar8 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1);
    piVar1[8] = iVar8;
  }
  else {
    piVar1[8] = 0;
    piVar1[1] = iVar8 + iVar3;
    piVar1[3] = iVar8 + DAT_001accd8;
  }
  iVar6 = *(int *)(param_1 + 0x1d8);
  uVar2 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x10) = uVar2;
  uVar2 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x14) = uVar2;
  uVar2 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x18) = uVar2;
  uVar2 = (***(code ***)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar6 + 0x1c) = uVar2;
  iVar5 = 0;
  iVar8 = DAT_001acce0;
  iVar3 = DAT_001acce4;
  iVar4 = DAT_001acce8;
  iVar7 = DAT_001accdc;
  do {
    *(int *)(*(int *)(iVar6 + 0x10) + iVar5) = iVar4 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0x14) + iVar5) = iVar3 >> 0x10;
    *(int *)(*(int *)(iVar6 + 0x18) + iVar5) = iVar8;
    *(int *)(*(int *)(iVar6 + 0x1c) + iVar5) = iVar7;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + DAT_001accec;
    iVar3 = iVar3 + DAT_001accf0;
    iVar8 = iVar8 + DAT_001accf4;
    iVar7 = iVar7 + DAT_001accf8;
  } while (iVar5 != 0x400);
  return;
}


