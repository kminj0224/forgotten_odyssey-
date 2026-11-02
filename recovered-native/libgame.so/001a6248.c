/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a6248  Symbol: jinit_compress_master */

void jinit_compress_master(int param_1)

{
  bool bVar1;
  
  jinit_c_master_control(param_1,0);
  if (*(int *)(param_1 + 0xd0) == 0) {
    jinit_color_converter(param_1);
    jinit_downsampler(param_1);
    jinit_c_prep_controller(param_1,0);
  }
  jinit_forward_dct(param_1);
  if (*(int *)(param_1 + 0xd4) == 0) {
    jinit_huff_encoder(param_1);
  }
  else {
    jinit_arith_encoder(param_1);
  }
  bVar1 = true;
  if (*(int *)(param_1 + 200) < 2) {
    bVar1 = *(int *)(param_1 + 0xd8) != 0;
  }
  jinit_c_coef_controller(param_1,bVar1);
  jinit_c_main_controller(param_1,0);
  jinit_marker_writer(param_1);
  (**(code **)(*(int *)(param_1 + 4) + 0x18))(param_1);
  (***(code ***)(param_1 + 0x194))(param_1);
  return;
}


