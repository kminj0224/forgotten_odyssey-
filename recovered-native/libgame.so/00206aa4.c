/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206aa4  Symbol: FUN_00206aa4 */

undefined4 FUN_00206aa4(int param_1,byte param_2,wint_t param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 0x48f);
  iVar2 = 0;
  while( true ) {
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + 1;
    if (((param_2 & *pbVar3) != 0) &&
       (iVar1 = iswctype(param_3,*(wctype_t *)(param_1 + 0x4a0)), iVar1 != 0)) break;
    param_1 = param_1 + 4;
    if (iVar2 == 0x10) {
      return 0;
    }
  }
  return 1;
}


