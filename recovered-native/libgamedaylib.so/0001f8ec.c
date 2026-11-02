/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f8ec  Symbol: FUN_0001f8ec */

uint FUN_0001f8ec(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_0001f920;
  do {
    uVar3 = param_2 | *param_1;
    iVar2 = (*pcVar1)(*param_1,uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


