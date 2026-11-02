/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016c20  Symbol: FUN_00016c20 */

byte * FUN_00016c20(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    pbVar2 = param_1 + 1;
    bVar1 = *param_1;
    uVar4 = uVar4 | (bVar1 & 0x7f) << (uVar3 & 0xff);
    uVar3 = uVar3 + 7;
    param_1 = pbVar2;
  } while ((bVar1 & 0x80) != 0);
  if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar4 = uVar4 | -1 << (uVar3 & 0xff);
  }
  *param_2 = uVar4;
  return pbVar2;
}


