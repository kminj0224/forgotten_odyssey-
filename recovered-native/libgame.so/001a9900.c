/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9900  Symbol: jpeg_finish_output */

undefined4 jpeg_finish_output(int *param_1)

{
  int iVar1;
  
  if (param_1[5] - 0xcdU < 2) {
    if (param_1[0x10] != 0) {
      (**(code **)(param_1[0x6e] + 4))();
      param_1[5] = 0xd0;
      goto LAB_001a991a;
    }
  }
  else if (param_1[5] == 0xd0) goto LAB_001a991a;
  *(undefined4 *)(*param_1 + 0x14) = 0x15;
  *(int *)(*param_1 + 0x18) = param_1[5];
  (**(code **)*param_1)(param_1);
LAB_001a991a:
  while ((param_1[0x24] <= param_1[0x26] && (((code **)param_1[0x72])[5] == (code *)0x0))) {
    iVar1 = (**(code **)param_1[0x72])(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[5] = 0xcf;
  return 1;
}


