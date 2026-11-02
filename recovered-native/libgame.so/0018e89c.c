/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018e89c  Symbol: FUN_0018e89c */

undefined4
FUN_0018e89c(int param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 extraout_r1;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = (uint)*param_3 * 0x1e;
  }
  else {
    uVar2 = (uint)*param_2 * 0x1e;
    while( true ) {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 == 0) break;
      uVar2 = uVar2 ^ (uint)bVar1 + uVar2 * 0x20 + (uVar2 >> 3);
    }
    uVar2 = uVar2 ^ (uVar2 >> 3) + uVar2 * 0x20 + 0x3a;
  }
  if (param_3 == (byte *)0x0) {
    param_3 = (byte *)0x0;
  }
  else {
    while( true ) {
      bVar1 = *param_3;
      param_3 = param_3 + 1;
      if (bVar1 == 0) break;
      uVar2 = uVar2 ^ uVar2 * 0x20 + (uVar2 >> 3) + (uint)bVar1;
    }
  }
  if (param_4 != (byte *)0x0) {
    while( true ) {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      param_3 = (byte *)(uVar2 >> 3);
      if (bVar1 == 0) break;
      uVar2 = uVar2 ^ (uint)(param_3 + (uint)bVar1 + uVar2 * 0x20);
    }
    uVar2 = uVar2 ^ (uint)(param_3 + uVar2 * 0x20 + 0x3a);
  }
  if (param_5 != (byte *)0x0) {
    while( true ) {
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      if (bVar1 == 0) break;
      param_3 = (byte *)(uVar2 * 0x20 + (uVar2 >> 3));
      uVar2 = uVar2 ^ (uint)(param_3 + bVar1);
    }
  }
  if (param_6 != (byte *)0x0) {
    while( true ) {
      bVar1 = *param_6;
      param_6 = param_6 + 1;
      param_3 = (byte *)(uVar2 >> 3);
      if (bVar1 == 0) break;
      uVar2 = uVar2 ^ (uint)(param_3 + (uint)bVar1 + uVar2 * 0x20);
    }
    uVar2 = uVar2 ^ (uint)(param_3 + uVar2 * 0x20 + 0x3a);
  }
  if (param_7 != (byte *)0x0) {
    while( true ) {
      bVar1 = *param_7;
      param_7 = param_7 + 1;
      if (bVar1 == 0) break;
      param_3 = (byte *)(uVar2 * 0x20 + (uVar2 >> 3));
      uVar2 = uVar2 ^ (uint)(param_3 + bVar1);
    }
  }
  __aeabi_uidivmod(uVar2,*(undefined4 *)(param_1 + 4),param_3);
  return extraout_r1;
}


