/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f528  Symbol: FUN_0018f528 */

int FUN_0018f528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0018f560 + 0x18f532 + DAT_0018f564;
  iVar3 = *(int *)(iVar4 + 0x7c);
  if (iVar3 < 0xf) {
    iVar2 = DAT_0018f560 + 0x18f532 + DAT_0018f568;
    *(undefined4 *)(iVar3 * 0x10 + iVar2) = param_1;
    *(undefined4 *)(iVar2 + iVar3 * 0x10 + 4) = param_2;
    iVar1 = iVar3 * 0x10 + 8;
    *(undefined4 *)(iVar1 + iVar2) = param_3;
    *(undefined4 *)(iVar2 + iVar1 + 4) = param_4;
    *(undefined4 *)(iVar4 + 0x78) = 1;
    *(int *)(iVar4 + 0x7c) = iVar3 + 1;
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}


