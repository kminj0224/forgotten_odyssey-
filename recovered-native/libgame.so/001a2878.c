/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a2878  Symbol: FUN_001a2878 */

int FUN_001a2878(undefined *param_1,int *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  uint uVar5;
  int local_2c;
  byte *local_28;
  
  if (((param_2 == (int *)0x0) || (param_1 == (undefined *)0x0)) || (param_4 == (int *)0x0)) {
    iVar1 = 1;
LAB_001a2968:
    iVar1 = -iVar1;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    iVar1 = 0;
    *param_4 = 0;
  }
  else {
    pbVar4 = param_3 + *param_4;
    iVar1 = *param_2;
    puVar3 = param_1;
    local_28 = param_3;
    while (local_28 < pbVar4) {
      uVar5 = (uint)*local_28;
      local_2c = 0;
      if (0x7f < uVar5) {
        if (0xbf < uVar5) {
          if (uVar5 < 0xe0) {
            uVar5 = uVar5 & 0x1f;
            local_2c = 1;
          }
          else if (uVar5 < 0xf0) {
            uVar5 = uVar5 & 0xf;
            local_2c = 2;
          }
          else {
            if (0xf7 < uVar5) {
              *param_2 = (int)puVar3 - (int)param_1;
              iVar1 = (int)local_28 - (int)param_3;
              goto LAB_001a294a;
            }
            uVar5 = uVar5 & 7;
            local_2c = 3;
          }
          goto LAB_001a28e6;
        }
LAB_001a2906:
        *param_2 = (int)puVar3 - (int)param_1;
        iVar1 = (int)local_28 - (int)param_3;
LAB_001a294a:
        *param_4 = iVar1;
        iVar1 = 2;
        goto LAB_001a2968;
      }
LAB_001a28e6:
      pbVar2 = local_28 + 1;
      if ((int)pbVar4 - (int)pbVar2 < local_2c) break;
      for (; (local_2c != 0 && (pbVar2 < pbVar4)); pbVar2 = pbVar2 + 1) {
        if ((*pbVar2 & 0xc0) != 0x80) goto LAB_001a2906;
        uVar5 = uVar5 << 6 | *pbVar2 & 0x3f;
        local_2c = local_2c + -1;
      }
      if (0xff < uVar5) {
        *param_2 = (int)puVar3 - (int)param_1;
        iVar1 = (int)local_28 - (int)param_3;
        goto LAB_001a294a;
      }
      if (param_1 + iVar1 <= puVar3) break;
      *puVar3 = (char)uVar5;
      puVar3 = puVar3 + 1;
      local_28 = pbVar2;
    }
    *param_2 = (int)puVar3 - (int)param_1;
    *param_4 = (int)local_28 - (int)param_3;
    iVar1 = *param_2;
  }
  return iVar1;
}


