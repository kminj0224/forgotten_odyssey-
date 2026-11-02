/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a27bc  Symbol: FUN_001a27bc */

int FUN_001a27bc(byte *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((((param_3 == (byte *)0x0) || (param_1 == (byte *)0x0)) || (param_4 == (int *)0x0)) ||
     (param_2 == (int *)0x0)) {
    iVar2 = -1;
  }
  else {
    pbVar6 = param_1 + *param_2;
    pbVar3 = param_3 + *param_4;
    pbVar4 = param_3;
    pbVar5 = param_1;
    pbVar7 = pbVar3;
    while ((pbVar4 < pbVar3 && (pbVar5 < pbVar6 + -1))) {
      if ((int)((uint)*pbVar4 * 0x1000000) < 0) {
        *pbVar5 = *pbVar4 >> 6 | 0xc0;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar5[1] = bVar1 & 0x3f | 0x80;
        pbVar5 = pbVar5 + 2;
      }
      if ((int)pbVar6 - (int)pbVar5 < (int)pbVar7 - (int)pbVar4) {
        pbVar7 = pbVar4 + ((int)pbVar6 - (int)pbVar5);
      }
      for (; (pbVar4 < pbVar7 && (-1 < (int)((uint)*pbVar4 * 0x1000000))); pbVar4 = pbVar4 + 1) {
        *pbVar5 = *pbVar4;
        pbVar5 = pbVar5 + 1;
      }
    }
    if (((pbVar5 < pbVar6) && (pbVar4 < pbVar3)) && (-1 < (int)((uint)*pbVar4 * 0x1000000))) {
      *pbVar5 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    *param_2 = (int)pbVar5 - (int)param_1;
    *param_4 = (int)pbVar4 - (int)param_3;
    iVar2 = *param_2;
  }
  return iVar2;
}


