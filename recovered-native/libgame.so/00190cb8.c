/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190cb8  Symbol: FUN_00190cb8 */

undefined4 FUN_00190cb8(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_00190ce4 + 0x190cc0;
  if (param_1 == (FILE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = fflush(param_1);
    uVar2 = 0;
    if (iVar1 == -1) {
      FUN_00190594(0,iVar3 + DAT_00190ce8);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


