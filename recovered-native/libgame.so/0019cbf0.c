/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cbf0  Symbol: FUN_0019cbf0 */

int FUN_0019cbf0(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = DAT_0019cca8;
  if (param_2 != 0) {
    iVar1 = (uint)*param_1 * 0x1e;
  }
  if (10 < param_4) {
    iVar1 = iVar1 + (uint)*(byte *)(param_3 + param_4 + (-2 - param_2));
    param_4 = 10;
    if (10 < param_2) {
      param_2 = 10;
      iVar1 = iVar1 + (uint)param_1[9] + (uint)param_1[8] + (uint)param_1[7] + (uint)param_1[6] +
              (uint)param_1[5] + (uint)param_1[4] + (uint)param_1[3] + (uint)param_1[2] +
              (uint)param_1[1] + (uint)*param_1;
      goto switchD_0019cc2e_caseD_a;
    }
    param_4 = 10;
  }
  if (param_2 - 1U < 10) {
    iVar1 = DAT_0019cca4 + 0x19cbf8 + DAT_0019ccac;
                    /* WARNING: Could not emulate address calculation at 0x0019cc2a */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(*(int *)(iVar1 + (param_2 - 1U) * 4) + iVar1))();
    return iVar1;
  }
switchD_0019cc2e_caseD_a:
  param_4 = param_4 - param_2;
  if (0 < param_4) {
    iVar1 = iVar1 + 0x3a;
    param_4 = param_4 + -1;
  }
  if (9 < param_4 - 1U) {
    return iVar1;
  }
  iVar1 = DAT_0019cca4 + 0x19cbf8 + DAT_0019ccb0;
                    /* WARNING: Could not emulate address calculation at 0x0019cc70 */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(*(int *)(iVar1 + (param_4 - 1U) * 4) + iVar1))();
  return iVar1;
}


