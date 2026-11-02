/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a9358  Symbol: jpeg_consume_input */

undefined4 jpeg_consume_input(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (10 < param_1[5] - 200U) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
    return 0;
  }
  iVar2 = DAT_001a94f8 + 0x1a9366 + DAT_001a94fc;
                    /* WARNING: Could not emulate address calculation at 0x001a9388 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(*(int *)(iVar2 + (param_1[5] - 200U) * 4) + iVar2))();
  return uVar1;
}


