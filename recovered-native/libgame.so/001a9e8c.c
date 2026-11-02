/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9e8c  Symbol: jpeg_core_output_dimensions */

void jpeg_core_output_dimensions(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x34);
  uVar4 = *(int *)(param_1 + 0x1a8) * *(int *)(param_1 + 0x30);
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar1 = jdiv_round_up(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 1;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 1;
  }
  else if (uVar4 < uVar2 * 2 || uVar4 + uVar2 * -2 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) << 1);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) << 1,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 2;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 2;
  }
  else if (uVar4 < uVar2 * 3 || uVar4 + uVar2 * -3 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 3);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 3,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 3;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 3;
  }
  else if (uVar4 < uVar2 * 4 || uVar4 + uVar2 * -4 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) << 2);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) << 2,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 4;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 4;
  }
  else if (uVar4 < uVar2 * 5 || uVar4 + uVar2 * -5 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 5);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 5,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 5;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 5;
  }
  else if (uVar4 < uVar2 * 6 || uVar4 + uVar2 * -6 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 6);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 6,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 6;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 6;
  }
  else if (uVar4 < uVar2 * 7 || uVar4 + uVar2 * -7 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 7);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 7,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 7;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 7;
  }
  else if (uVar4 < uVar2 * 8 || uVar4 + uVar2 * -8 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) << 3);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) << 3,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 8;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 8;
  }
  else if (uVar4 < uVar2 * 9 || uVar4 + uVar2 * -9 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 9);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 9,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 9;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 9;
  }
  else if (uVar4 < uVar2 * 10 || uVar4 + uVar2 * -10 == 0) {
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) * 10);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) * 10,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x140) = 10;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x144) = 10;
  }
  else {
    if (uVar4 < uVar2 * 0xb || uVar4 + uVar2 * -0xb == 0) {
      iVar5 = 0xb;
    }
    else if (uVar4 < uVar2 * 0xc || uVar4 + uVar2 * -0xc == 0) {
      iVar5 = 0xc;
    }
    else {
      iVar5 = 0xd;
      if (((uVar2 * 0xd <= uVar4 && uVar4 + uVar2 * -0xd != 0) &&
          (iVar5 = 0xe, uVar2 * 0xe <= uVar4 && uVar4 + uVar2 * -0xe != 0)) &&
         (iVar5 = 0xf, uVar2 * 0xf <= uVar4 && uVar4 + uVar2 * -0xf != 0)) {
        uVar1 = jdiv_round_up(*(int *)(param_1 + 0x1c) << 4);
        *(undefined4 *)(param_1 + 0x70) = uVar1;
        uVar1 = jdiv_round_up(*(int *)(param_1 + 0x20) << 4,*(undefined4 *)(param_1 + 0x1a8));
        *(undefined4 *)(param_1 + 0x140) = 0x10;
        *(undefined4 *)(param_1 + 0x74) = uVar1;
        *(undefined4 *)(param_1 + 0x144) = 0x10;
        goto LAB_001a9f7a;
      }
    }
    uVar1 = jdiv_round_up(iVar5 * *(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = jdiv_round_up(iVar5 * *(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1a8));
    *(int *)(param_1 + 0x140) = iVar5;
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(int *)(param_1 + 0x144) = iVar5;
  }
LAB_001a9f7a:
  iVar5 = *(int *)(param_1 + 0xd8);
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_1 + 0x140);
      *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(param_1 + 0x144);
      iVar5 = iVar5 + 0x58;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}


