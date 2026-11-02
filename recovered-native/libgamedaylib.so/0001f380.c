/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f380  Symbol: FUN_0001f380 */

uint FUN_0001f380(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_0001f3b4;
  do {
    uVar3 = *param_1;
    iVar2 = (*pcVar1)(uVar3,param_2 ^ uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


