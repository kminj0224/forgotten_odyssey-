/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017101e  Symbol: FUN_0017101e */

void FUN_0017101e(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  byte *extraout_r1;
  uint uVar2;
  byte *pbVar3;
  uint unaff_r4;
  uint uVar4;
  int unaff_r5;
  uint uVar5;
  int unaff_r8;
  int unaff_r9;
  int param_11;
  int param_12;
  
  if (((param_12 == 0) || (param_11 == 0)) || (unaff_r8 == 0)) {
    if (unaff_r4 == 0) {
      switchD_00170a8c::caseD_0();
      param_2 = extraout_r1;
    }
    uVar1 = 0;
    pbVar3 = param_2;
    while( true ) {
      uVar2 = (uint)pbVar3[3];
      if (uVar2 == 0xff) {
        *param_2 = *pbVar3;
        param_2[1] = pbVar3[1];
        param_2[2] = pbVar3[2];
      }
      else if (uVar2 == 0) {
        *param_2 = (byte)*(undefined2 *)(unaff_r5 + 2);
        param_2[1] = (byte)*(undefined2 *)(unaff_r5 + 4);
        param_2[2] = (byte)*(undefined2 *)(unaff_r5 + 6);
      }
      else {
        uVar5 = 0xff - uVar2 & 0xffff;
        uVar4 = uVar5 * *(ushort *)(unaff_r5 + 2) + uVar2 * *pbVar3 + 0x80;
        *param_2 = (byte)((uVar4 & 0xffff) + (uVar4 * 0x10000 >> 0x18) >> 8);
        uVar4 = uVar5 * *(ushort *)(unaff_r5 + 4) + uVar2 * pbVar3[1] + 0x80;
        param_2[1] = (byte)((uVar4 & 0xffff) + (uVar4 * 0x10000 >> 0x18) >> 8);
        uVar2 = pbVar3[2] * uVar2 + 0x80 + *(ushort *)(unaff_r5 + 6) * uVar5;
        param_2[2] = (byte)((uVar2 * 0x10000 >> 0x18) + (uVar2 & 0xffff) >> 8);
      }
      uVar1 = uVar1 + 1;
      if (unaff_r4 <= uVar1) break;
      pbVar3 = pbVar3 + 4;
      param_2 = param_2 + 3;
    }
  }
  else {
    if (unaff_r4 == 0) {
      switchD_00170a8c::caseD_0();
      return;
    }
    uVar1 = 0;
    pbVar3 = param_2;
    while( true ) {
      uVar2 = (uint)pbVar3[3];
      if (uVar2 == 0xff) {
        *param_2 = *(byte *)(unaff_r8 + (uint)*pbVar3);
        param_2[1] = *(byte *)(unaff_r8 + (uint)pbVar3[1]);
        param_2[2] = *(byte *)(unaff_r8 + (uint)pbVar3[2]);
      }
      else if (uVar2 == 0) {
        *param_2 = (byte)*(undefined2 *)(unaff_r5 + 2);
        param_2[1] = (byte)*(undefined2 *)(unaff_r5 + 4);
        param_2[2] = (byte)*(undefined2 *)(unaff_r5 + 6);
      }
      else {
        uVar4 = 0xff - uVar2 & 0xffff;
        uVar5 = uVar2 * *(byte *)(param_12 + (uint)*pbVar3) +
                uVar4 * *(ushort *)(unaff_r9 + 2) + 0x80;
        *param_2 = *(byte *)(param_11 +
                            (((uVar5 * 0x10000 >> 0x18) + (uVar5 & 0xffff)) * 0x10000 >> 0x18));
        uVar5 = uVar2 * *(byte *)(param_12 + (uint)pbVar3[1]) +
                uVar4 * *(ushort *)(unaff_r9 + 4) + 0x80;
        param_2[1] = *(byte *)(param_11 +
                              (((uVar5 * 0x10000 >> 0x18) + (uVar5 & 0xffff)) * 0x10000 >> 0x18));
        uVar2 = uVar4 * *(ushort *)(unaff_r9 + 6) + 0x80 +
                uVar2 * *(byte *)(param_12 + (uint)pbVar3[2]);
        param_2[2] = *(byte *)(param_11 +
                              (((uVar2 * 0x10000 >> 0x18) + (uVar2 & 0xffff)) * 0x10000 >> 0x18));
      }
      uVar1 = uVar1 + 1;
      if (unaff_r4 <= uVar1) break;
      pbVar3 = pbVar3 + 4;
      param_2 = param_2 + 3;
    }
  }
  do {
    switchD_00170a8c::caseD_0();
  } while( true );
}


