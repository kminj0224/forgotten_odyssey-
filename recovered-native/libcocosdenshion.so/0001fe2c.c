/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001fe2c  Symbol: FUN_0001fe2c */

uint FUN_0001fe2c(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_0001fe60;
  do {
    uVar3 = *param_1;
    iVar2 = (*pcVar1)(uVar3,param_2 & uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


