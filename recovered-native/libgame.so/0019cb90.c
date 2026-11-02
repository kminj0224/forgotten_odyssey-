/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019cb90  Symbol: FUN_0019cb90 */

int FUN_0019cb90(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != (byte *)0x0) {
    iVar1 = (uint)*param_1 * 0x20;
    if (param_2 < 0xb) {
      if (param_2 - 2U < 9) {
        iVar2 = DAT_0019cbe8 + 0x19cb9c + DAT_0019cbec;
                    /* WARNING: Could not emulate address calculation at 0x0019cbbc */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)(*(int *)(iVar2 + (param_2 - 2U) * 4) + iVar2))(iVar1);
        return iVar1;
      }
    }
    else {
      iVar1 = iVar1 + (uint)param_1[param_2 + -1] + (uint)param_1[9] + (uint)param_1[8] +
              (uint)param_1[7] + (uint)param_1[6] + (uint)param_1[5] + (uint)param_1[4] +
              (uint)param_1[3] + (uint)param_1[2] + (uint)param_1[1];
    }
  }
  return iVar1;
}


