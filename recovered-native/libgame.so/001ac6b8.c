/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ac6b8  Symbol: jinit_master_decompress */

void jinit_master_decompress(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0x1c,*(code **)param_1[1],param_4);
  iVar5 = DAT_001ac8f4 + 0x1ac6d0;
  iVar3 = iVar5 + DAT_001ac8f8;
  param_1[0x6e] = (int)piVar1;
  *piVar1 = iVar3;
  piVar1[1] = iVar5 + DAT_001ac8fc;
  piVar1[2] = 0;
  iVar5 = param_1[0x6e];
  jpeg_calc_output_dimensions(param_1);
  __s = (void *)(**(code **)param_1[1])(param_1,1,0x580);
  param_1[0x53] = (int)__s + 0x100;
  memset(__s,0,0x100);
  iVar3 = 0;
  do {
    *(char *)((int)__s + iVar3 + 0x100) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  puVar4 = (undefined *)((int)__s + 0x200);
  do {
    *puVar4 = 0xff;
    puVar4 = puVar4 + 1;
  } while (puVar4 != (undefined *)((int)__s + 0x380));
  memset((void *)((int)__s + 0x380),0,0x180);
  memcpy((void *)((int)__s + 0x500),(void *)param_1[0x53],0x80);
  *(undefined4 *)(iVar5 + 0xc) = 0;
  uVar2 = FUN_001ac2a8(param_1);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x10) = uVar2;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  if (param_1[0x15] == 0) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else {
    if (param_1[0x10] == 0) {
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
    }
    if (param_1[0x11] == 0) {
      if (param_1[0x1e] != 3) goto LAB_001ac790;
LAB_001ac8c8:
      if (param_1[0x22] == 0) {
        if (param_1[0x17] == 0) {
          param_1[0x19] = 1;
          goto LAB_001ac79e;
        }
        param_1[0x1b] = 1;
        iVar3 = param_1[0x19];
      }
      else {
        param_1[0x1a] = 1;
        iVar3 = param_1[0x19];
      }
      if (iVar3 != 0) goto LAB_001ac79e;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      if (param_1[0x1e] == 3) goto LAB_001ac8c8;
LAB_001ac790:
      param_1[0x19] = 1;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x22] = 0;
LAB_001ac79e:
      jinit_1pass_quantizer(param_1);
      *(int *)(iVar5 + 0x14) = param_1[0x78];
    }
    if ((param_1[0x1b] != 0) || (param_1[0x1a] != 0)) {
      jinit_2pass_quantizer(param_1);
      *(int *)(iVar5 + 0x18) = param_1[0x78];
      iVar3 = param_1[0x11];
      goto joined_r0x001ac7ca;
    }
  }
  iVar3 = param_1[0x11];
joined_r0x001ac7ca:
  if (iVar3 == 0) {
    if (*(int *)(iVar5 + 0x10) == 0) {
      jinit_color_deconverter(param_1);
      jinit_upsampler(param_1);
    }
    else {
      jinit_merged_upsampler(param_1);
    }
    jinit_d_post_controller(param_1,param_1[0x1b]);
    jinit_inverse_dct(param_1);
    iVar3 = param_1[0x39];
  }
  else {
    jinit_inverse_dct(param_1);
    iVar3 = param_1[0x39];
  }
  if (iVar3 == 0) {
    jinit_huff_decoder(param_1);
  }
  else {
    jinit_arith_decoder(param_1);
  }
  bVar6 = true;
  if (*(int *)(param_1[0x72] + 0x10) == 0) {
    bVar6 = param_1[0x10] != 0;
  }
  jinit_d_coef_controller(param_1,bVar6);
  if (param_1[0x11] == 0) {
    jinit_d_main_controller(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)(param_1[0x72] + 8))(param_1);
  if (((param_1[2] != 0) && (param_1[0x10] == 0)) && (*(int *)(param_1[0x72] + 0x10) != 0)) {
    if (param_1[0x38] == 0) {
      iVar3 = param_1[9];
    }
    else {
      iVar3 = param_1[9] * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 4) = 0;
    *(int *)(param_1[2] + 8) = iVar3 * param_1[0x52];
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(uint *)(param_1[2] + 0x10) = 3 - (uint)(param_1[0x1b] == 0);
    *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
  }
  return;
}


