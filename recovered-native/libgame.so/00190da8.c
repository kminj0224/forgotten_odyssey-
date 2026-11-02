/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190da8  Symbol: FUN_00190da8 */

undefined4 FUN_00190da8(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FILE *pFVar3;
  int iVar4;
  
  iVar4 = DAT_00190e00 + 0x190db0;
  if (param_1 == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pFVar3 = *(FILE **)(iVar4 + DAT_00190e04);
    if ((param_1 == (FILE *)((int)&pFVar3->_offset + 4)) ||
       (param_1 == (FILE *)&pFVar3[1]._IO_write_base)) {
      iVar1 = fflush(param_1);
      if (iVar1 < 0) {
        FUN_00190594(0,iVar4 + DAT_00190e08);
      }
    }
    else if ((param_1 != pFVar3) && (iVar1 = fclose(param_1), iVar1 == -1)) {
      FUN_00190594(0,iVar4 + DAT_00190e0c);
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  return uVar2;
}


