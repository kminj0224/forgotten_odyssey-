/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c96cc  Symbol: FUN_001c96cc */

void FUN_001c96cc(undefined4 *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_r8;
  bool bVar3;
  
  iVar1 = iRam001c9700;
  *param_1 = 0;
  iVar1 = strcmp(param_2,(char *)(iVar1 + 0x1c96ec));
  bVar3 = iVar1 == 0;
  if (!bVar3) {
    puVar2 = (undefined4 *)FUN_001c4648(iRam001c9704 + 0x1c9700);
    if (bVar3) {
      puVar2 = (undefined4 *)(unaff_r8 & unaff_r8 >> 2);
    }
    *puVar2 = 0;
    return;
  }
  return;
}


