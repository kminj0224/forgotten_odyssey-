/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a266c  Symbol: FUN_001a266c */

int FUN_001a266c(byte *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_2;
  iVar3 = *param_4;
  iVar5 = 0;
  pbVar4 = param_3;
  for (pbVar2 = param_1;
      ((pbVar4 < param_3 + iVar3 && (iVar5 + 5 < *param_2)) &&
      (bVar1 = *pbVar4, pbVar2 < param_1 + iVar6)); pbVar2 = pbVar2 + 1) {
    if (0x7f < bVar1) {
      *param_2 = iVar5;
      *param_4 = (int)pbVar4 - (int)param_3;
      return -1;
    }
    pbVar4 = pbVar4 + 1;
    *pbVar2 = bVar1;
    iVar5 = iVar5 + 1;
  }
  *param_2 = (int)pbVar2 - (int)param_1;
  *param_4 = (int)pbVar4 - (int)param_3;
  return *param_2;
}


