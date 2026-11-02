/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002115e8  Symbol: FUN_002115e8 */

int FUN_002115e8(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_0021161c;
  do {
    iVar3 = *param_1 + param_2;
    iVar2 = (*pcVar1)(*param_1,iVar3,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


