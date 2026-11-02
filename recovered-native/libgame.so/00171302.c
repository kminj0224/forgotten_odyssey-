/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00171302  Symbol: FUN_00171302 */

void FUN_00171302(undefined4 param_1,byte *param_2,int param_3)

{
  byte *extraout_r1;
  uint uVar1;
  uint unaff_r4;
  int unaff_r5;
  
  if (unaff_r4 == 0) {
    switchD_00170a8c::caseD_0();
    param_2 = extraout_r1;
  }
  uVar1 = 0;
  while( true ) {
    if (((*(short *)(param_3 + 2) == (ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1])) &&
        (*(short *)(param_3 + 4) == (ushort)((ushort)param_2[3] + (ushort)param_2[2] * 0x100))) &&
       (*(short *)(param_3 + 6) == (ushort)((ushort)param_2[5] + (ushort)param_2[4] * 0x100))) {
      *param_2 = (byte)((ushort)*(undefined2 *)(unaff_r5 + 2) >> 8);
      param_2[1] = (byte)*(undefined2 *)(unaff_r5 + 2);
      param_2[2] = (byte)((ushort)*(undefined2 *)(unaff_r5 + 4) >> 8);
      param_2[3] = (byte)*(undefined2 *)(unaff_r5 + 4);
      param_2[4] = (byte)((ushort)*(undefined2 *)(unaff_r5 + 6) >> 8);
      param_2[5] = (byte)*(undefined2 *)(unaff_r5 + 6);
    }
    uVar1 = uVar1 + 1;
    if (unaff_r4 <= uVar1) break;
    param_2 = param_2 + 6;
  }
  switchD_00170a8c::caseD_0();
  return;
}


