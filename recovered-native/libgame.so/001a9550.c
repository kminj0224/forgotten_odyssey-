/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9550  Symbol: jpeg_finish_decompress */

undefined4 jpeg_finish_decompress(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if (iVar1 - 0xcdU < 2) {
    if (param_1[0x10] == 0) {
      if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
        *(undefined4 *)(*param_1 + 0x14) = 0x45;
        (**(code **)*param_1)();
      }
      (**(code **)(param_1[0x6e] + 4))(param_1);
      param_1[5] = 0xd2;
      goto LAB_001a956a;
    }
  }
  else {
    if (iVar1 == 0xcf) {
      param_1[5] = 0xd2;
      goto LAB_001a956a;
    }
    if (iVar1 == 0xd2) goto LAB_001a956a;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x15;
  *(int *)(*param_1 + 0x18) = param_1[5];
  (**(code **)*param_1)(param_1);
LAB_001a956a:
  do {
    if (((code **)param_1[0x72])[5] != (code *)0x0) {
      (**(code **)(param_1[6] + 0x18))(param_1);
      jpeg_abort(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x72])(param_1);
  } while (iVar1 != 0);
  return 0;
}


