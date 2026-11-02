/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196400  Symbol: FUN_00196400 */

int FUN_00196400(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00196438 + 0x19640c;
  puVar2 = (undefined4 *)(iVar3 + DAT_0019643c + 0x3c);
  iVar4 = 0;
  do {
    iVar1 = FUN_0019c30c(param_1,*puVar2);
    if (iVar1 != 0) {
      return iVar3 + DAT_0019643c + 0x38 + iVar4 * 0xc;
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 3;
  } while (iVar4 != 0xfd);
  return 0;
}


