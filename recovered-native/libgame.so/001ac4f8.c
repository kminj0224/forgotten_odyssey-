/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac4f8  Symbol: jpeg_calc_output_dimensions */

void jpeg_calc_output_dimensions(int *param_1)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  
  iVar2 = DAT_001ac6b0 + 0x1ac50e;
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  jpeg_core_output_dimensions(param_1);
  iVar8 = param_1[0x36];
  iVar3 = param_1[9];
  if (0 < iVar3) {
    local_34 = 0;
    do {
      iVar3 = param_1[0x13];
      iVar7 = 1;
      iVar9 = param_1[0x50];
      while( true ) {
        iVar4 = iVar7 * iVar9;
        iVar5 = 8;
        if (iVar3 == 0) {
          iVar5 = 4;
        }
        if ((iVar5 < iVar4) ||
           (__aeabi_idivmod(param_1[0x4e],iVar7 * *(int *)(iVar8 + 8) * 2), extraout_r1 != 0))
        break;
        iVar7 = iVar7 << 1;
      }
      *(int *)(iVar8 + 0x24) = iVar4;
      iVar3 = param_1[0x51];
      iVar9 = 1;
      iVar7 = param_1[0x13];
      while( true ) {
        iVar5 = iVar9 * iVar3;
        iVar6 = 8;
        if (iVar7 == 0) {
          iVar6 = 4;
        }
        if ((iVar6 < iVar5) ||
           (__aeabi_idivmod(param_1[0x4f],iVar9 * *(int *)(iVar8 + 0xc) * 2), extraout_r1_00 != 0))
        break;
        iVar9 = iVar9 << 1;
      }
      *(int *)(iVar8 + 0x28) = iVar5;
      if (iVar5 * 2 < iVar4) {
        *(int *)(iVar8 + 0x24) = iVar5 * 2;
LAB_001ac5d8:
        iVar3 = param_1[9];
        if (iVar3 <= local_34 + 1) goto LAB_001ac5fe;
      }
      else {
        if (iVar5 <= iVar4 * 2) goto LAB_001ac5d8;
        *(int *)(iVar8 + 0x28) = iVar4 * 2;
        iVar3 = param_1[9];
        if (iVar3 <= local_34 + 1) goto LAB_001ac5fe;
      }
      local_34 = local_34 + 1;
      iVar8 = iVar8 + 0x58;
    } while( true );
  }
LAB_001ac652:
  if ((uint)param_1[0xb] < 6) {
    iVar2 = iVar2 + DAT_001ac6b4;
                    /* WARNING: Could not emulate address calculation at 0x001ac68c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar2 + param_1[0xb] * 4) + iVar2))();
    return;
  }
  param_1[0x1e] = iVar3;
  iVar2 = 1;
  if (param_1[0x15] == 0) {
    iVar2 = param_1[0x1e];
  }
  param_1[0x1f] = iVar2;
  iVar2 = FUN_001ac2a8(param_1);
  if (iVar2 == 0) {
    param_1[0x20] = 1;
  }
  else {
    param_1[0x20] = param_1[0x4f];
  }
  return;
LAB_001ac5fe:
  iVar8 = param_1[0x36];
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      uVar1 = jdiv_round_up(param_1[7] * *(int *)(iVar8 + 0x24) * *(int *)(iVar8 + 8),
                            param_1[0x6a] * param_1[0x4e]);
      *(undefined4 *)(iVar8 + 0x2c) = uVar1;
      uVar1 = jdiv_round_up(param_1[8] * *(int *)(iVar8 + 0x28) * *(int *)(iVar8 + 0xc),
                            param_1[0x6a] * param_1[0x4f]);
      *(undefined4 *)(iVar8 + 0x30) = uVar1;
      iVar3 = param_1[9];
      iVar8 = iVar8 + 0x58;
    } while (iVar7 < iVar3);
  }
  goto LAB_001ac652;
}


