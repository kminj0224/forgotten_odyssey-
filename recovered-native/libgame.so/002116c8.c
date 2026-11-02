/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002116c8  Symbol: FUN_002116c8 */

uint FUN_002116c8(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_002116fc;
  do {
    uVar3 = param_2 ^ *param_1;
    iVar2 = (*pcVar1)(*param_1,uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


