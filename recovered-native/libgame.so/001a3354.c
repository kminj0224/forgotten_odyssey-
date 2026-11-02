/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3354  Symbol: FUN_001a3354 */

int FUN_001a3354(byte *param_1,int *param_2,byte *param_3,byte **param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  if ((((param_2 == (int *)0x0) || (param_1 == (byte *)0x0)) || (param_5 == 0)) ||
     (param_4 == (byte **)0x0)) {
    iVar1 = 1;
LAB_001a349a:
    iVar1 = -iVar1;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    iVar1 = 0;
    *param_4 = (byte *)0x0;
  }
  else {
    pbVar3 = param_3 + (int)*param_4;
    pbVar5 = param_3;
    pbVar6 = param_1;
    while (pbVar5 < pbVar3) {
      uVar7 = (uint)*pbVar5;
      pbVar4 = pbVar5 + 1;
      if ((int)(uVar7 * 0x1000000) < 0) {
        if (uVar7 < 0xc0) {
LAB_001a3472:
          *param_2 = (int)pbVar6 - (int)param_1;
          *param_4 = pbVar4 + ~(uint)param_3;
        }
        else {
          if (uVar7 < 0xe0) {
            if (pbVar4 < pbVar3) {
              bVar2 = *pbVar4;
              pbVar4 = pbVar5 + 2;
              if (((bVar2 & 0xc0) != 0x80) ||
                 (bVar2 = *(byte *)(param_5 +
                                   (bVar2 & 0x3f) + 0x30 +
                                   (uint)*(byte *)(param_5 + (uVar7 & 0x1f)) * 0x40), bVar2 == 0))
              goto LAB_001a341e;
LAB_001a346e:
              *pbVar6 = bVar2;
              goto LAB_001a3482;
            }
            goto LAB_001a3472;
          }
          if ((0xef < uVar7) || (pbVar3 + -1 <= pbVar4)) goto LAB_001a3472;
          bVar2 = *pbVar4;
          if ((bVar2 & 0xc0) != 0x80) {
            *param_2 = (int)pbVar6 - (int)param_1;
            *param_4 = pbVar5 + -(int)param_3;
            return -2;
          }
          pbVar4 = pbVar5 + 3;
          if ((pbVar5[2] & 0xc0) != 0x80) {
LAB_001a341e:
            *param_2 = (int)pbVar6 - (int)param_1;
            *param_4 = pbVar4 + (-2 - (int)param_3);
            return -2;
          }
          bVar2 = *(byte *)(param_5 +
                           (pbVar5[2] & 0x3f) + 0x30 +
                           (uint)*(byte *)(param_5 + (uint)*(byte *)(param_5 + (uVar7 & 0xf) + 0x20)
                                                     * 0x40 + (bVar2 & 0x3f) + 0x30) * 0x40);
          if (bVar2 != 0) goto LAB_001a346e;
          *param_2 = (int)pbVar6 - (int)param_1;
          *param_4 = pbVar4 + (-3 - (int)param_3);
        }
        iVar1 = 2;
        goto LAB_001a349a;
      }
      *pbVar6 = *pbVar5;
LAB_001a3482:
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar4;
    }
    *param_2 = (int)pbVar6 - (int)param_1;
    *param_4 = pbVar5 + -(int)param_3;
    iVar1 = *param_2;
  }
  return iVar1;
}


