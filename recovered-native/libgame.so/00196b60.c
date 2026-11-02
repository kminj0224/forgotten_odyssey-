/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196b60  Symbol: FUN_00196b60 */

int FUN_00196b60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00196b98 + 0x196b6c;
  puVar2 = (undefined4 *)(iVar3 + DAT_00196b9c + 0x68);
  iVar4 = 0;
  do {
    iVar1 = FUN_0019c398(param_1,*puVar2);
    if (iVar1 == 0) {
      return iVar3 + DAT_00196b9c + 0x68 + iVar4 * 0x24;
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 9;
  } while (iVar4 != 0x5c);
  return 0;
}


