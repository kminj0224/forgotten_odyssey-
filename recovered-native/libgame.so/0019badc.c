/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019badc  Symbol: FUN_0019badc */

undefined4 FUN_0019badc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_0019baf8 + 0x19bae8 + DAT_0019bafc;
  uVar1 = *(undefined4 *)(iVar2 + 4);
  puVar3 = *(undefined4 **)(DAT_0019baf8 + 0x19bae8 + DAT_0019bb00);
  *(undefined4 *)(iVar2 + 4) = param_1;
  *puVar3 = 1;
  return uVar1;
}


