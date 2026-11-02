/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee194  Symbol: FUN_001ee194 */

size_t * FUN_001ee194(size_t *param_1,undefined4 param_2,int param_3)

{
  size_t *psVar1;
  size_t sVar2;
  
  psVar1 = (size_t *)FUN_001ed51c(param_3 + *param_1,param_1[1],param_2);
  sVar2 = *param_1;
  if (sVar2 == 0) {
    sVar2 = 0;
  }
  else if (sVar2 == 1) {
    *(undefined *)(psVar1 + 3) = *(undefined *)(param_1 + 3);
    sVar2 = *param_1;
  }
  else {
    memcpy(psVar1 + 3,param_1 + 3,sVar2);
    sVar2 = *param_1;
  }
  if (psVar1 != (size_t *)(DAT_001ee224 + 0x1ee1d8)) {
    psVar1[2] = 0;
    *psVar1 = sVar2;
    *(undefined *)((int)psVar1 + sVar2 + 0xc) = 0;
  }
  return psVar1 + 3;
}


