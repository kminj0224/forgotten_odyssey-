/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00020440  Symbol: FUN_00020440 */

uint FUN_00020440(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_00020474;
  do {
    uVar3 = param_2 ^ *param_1;
    iVar2 = (*pcVar1)(*param_1,uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


