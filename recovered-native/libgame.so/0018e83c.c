/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018e83c  Symbol: FUN_0018e83c */

undefined4 FUN_0018e83c(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 extraout_r1;
  byte *pbVar3;
  
  uVar2 = 0;
  if (param_2 != (byte *)0x0) {
    uVar2 = (uint)*param_2 * 0x1e;
    while( true ) {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      if (bVar1 == 0) break;
      uVar2 = uVar2 ^ uVar2 * 0x20 + (uVar2 >> 3) + (uint)bVar1;
    }
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
  pbVar3 = param_4;
  if (param_4 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    while( true ) {
      param_3 = (byte *)(uint)*pbVar3;
      pbVar3 = pbVar3 + 1;
      if (param_3 == (byte *)0x0) break;
      uVar2 = uVar2 ^ (uint)(param_3 + uVar2 * 0x20 + (uVar2 >> 3));
    }
  }
  __aeabi_uidivmod(uVar2,*(undefined4 *)(param_1 + 4),param_3,pbVar3,param_4);
  return extraout_r1;
}


