/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b198c  Symbol: jinit_color_converter */

void jinit_color_converter(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)param_1[1])(param_1,1,0xc);
  iVar3 = DAT_001b1b1c;
  param_1[0x66] = (int)piVar1;
  iVar3 = iVar3 + 0x1b19a8;
  *piVar1 = iVar3 + DAT_001b1b20;
  if ((uint)param_1[10] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x001b19e2 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(iVar3 + DAT_001b1b28 + param_1[10] * 4) + iVar3 + DAT_001b1b28))();
    return;
  }
  if (param_1[9] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = param_1[0x14];
  if (5 < uVar2) {
    if ((uVar2 != param_1[10]) || (param_1[0x13] != param_1[9])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1c;
      (**(code **)*param_1)(param_1);
    }
    piVar1[1] = iVar3 + DAT_001b1b24;
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x001b19ee */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(iVar3 + DAT_001b1b2c + uVar2 * 4) + iVar3 + DAT_001b1b2c))();
  return;
}


