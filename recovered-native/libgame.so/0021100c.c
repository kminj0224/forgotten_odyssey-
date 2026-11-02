/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0021100c  Symbol: FUN_0021100c */

int FUN_0021100c(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00211040;
  do {
    iVar3 = *param_1;
    iVar2 = (*pcVar1)(iVar3,iVar3 + param_2,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


