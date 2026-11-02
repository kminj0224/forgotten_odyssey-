/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00210558  Symbol: __ledf2 */

uint __ledf2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = (int)(param_2 << 1) >> 0x15 == -1;
  if (!bVar2) {
    bVar2 = (int)(param_4 << 1) >> 0x15 == -1;
  }
  if ((bVar2) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && ((param_1 | param_2 << 0xc) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && ((param_3 | param_4 << 0xc) != 0)))))) {
    return 1;
  }
  bVar2 = (param_1 | param_2 << 1) == 0;
  if (bVar2) {
    bVar2 = (param_3 | param_4 << 1) == 0;
  }
  if (!bVar2) {
    bVar2 = param_2 == param_4;
  }
  if (bVar2) {
    bVar2 = param_1 == param_3;
  }
  if (bVar2) {
    return 0;
  }
  uVar1 = param_2 ^ param_4;
  bVar2 = uVar1 == 0;
  if (-1 < (int)uVar1) {
    bVar2 = param_2 == param_4;
  }
  bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
  if (bVar2) {
    bVar3 = param_3 <= param_1;
  }
  param_4 = (int)param_4 >> 0x1f;
  if (!bVar3) {
    param_4 = ~param_4;
  }
  return param_4 | 1;
}


