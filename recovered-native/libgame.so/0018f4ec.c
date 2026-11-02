/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f4ec  Symbol: FUN_0018f4ec */

int FUN_0018f4ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(DAT_0018f520 + 0x18f4f6 + DAT_0018f524);
  iVar2 = puVar1[1];
  if (iVar2 < 0xf) {
    puVar1[iVar2 * 4 + 2] = param_1;
    puVar1[iVar2 * 4 + 3] = param_2;
    puVar1[iVar2 * 4 + 5] = param_4;
    puVar1[iVar2 * 4 + 4] = param_3;
    *puVar1 = 1;
    puVar1[1] = iVar2 + 1;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


