/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200188  Symbol: FUN_00200188 */

size_t * FUN_00200188(size_t *param_1,undefined4 param_2,int param_3)

{
  size_t *psVar1;
  size_t sVar2;
  
  psVar1 = (size_t *)FUN_001ff4e0(param_3 + *param_1,param_1[1],param_2);
  sVar2 = *param_1;
  if (sVar2 == 0) {
    sVar2 = 0;
  }
  else if (sVar2 == 1) {
    psVar1[3] = param_1[3];
    sVar2 = *param_1;
  }
  else {
    wmemcpy((wchar_t *)(psVar1 + 3),(wchar_t *)(param_1 + 3),sVar2);
    sVar2 = *param_1;
  }
  if (psVar1 != (size_t *)(DAT_00200218 + 0x2001cc)) {
    psVar1[2] = 0;
    *psVar1 = sVar2;
    psVar1[sVar2 + 3] = 0;
  }
  return psVar1 + 3;
}


