/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a26d4  Symbol: FUN_001a26d4 */

int FUN_001a26d4(undefined *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *local_28;
  
  if (((param_2 == (int *)0x0) || (param_1 == (undefined *)0x0)) || (param_4 == (int *)0x0)) {
    iVar2 = 1;
LAB_001a27b4:
    iVar2 = -iVar2;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    iVar2 = 0;
    *param_4 = 0;
  }
  else {
    pbVar5 = param_3 + *param_4;
    iVar2 = *param_2;
    puVar4 = param_1;
    local_28 = param_3;
    while (local_28 < pbVar5) {
      uVar6 = (uint)*local_28;
      iVar7 = 0;
      if (uVar6 < 0x80) goto LAB_001a2742;
      if (uVar6 < 0xc0) {
LAB_001a278c:
        *param_2 = (int)puVar4 - (int)param_1;
LAB_001a2796:
        *param_4 = (int)local_28 - (int)param_3;
        iVar2 = 2;
        goto LAB_001a27b4;
      }
      if (0xdf < uVar6) {
        if (uVar6 < 0xf0) {
          uVar6 = uVar6 & 0xf;
          iVar7 = 2;
          goto LAB_001a2742;
        }
        if (uVar6 < 0xf8) {
          uVar6 = uVar6 & 7;
          iVar7 = 3;
          goto LAB_001a2742;
        }
        *param_2 = (int)puVar4 - (int)param_1;
        goto LAB_001a2796;
      }
      uVar6 = uVar6 & 0x1f;
      iVar7 = 1;
LAB_001a2742:
      pbVar3 = local_28 + 1;
      if ((int)pbVar5 - (int)pbVar3 < iVar7) break;
      while ((iVar7 != 0 && (pbVar3 < pbVar5))) {
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        if ((bVar1 & 0xc0) != 0x80) break;
        uVar6 = uVar6 << 6 | bVar1 & 0x3f;
        iVar7 = iVar7 + -1;
      }
      if (0x7f < uVar6) goto LAB_001a278c;
      if (param_1 + iVar2 <= puVar4) break;
      *puVar4 = (char)uVar6;
      puVar4 = puVar4 + 1;
      local_28 = pbVar3;
    }
    *param_2 = (int)puVar4 - (int)param_1;
    *param_4 = (int)local_28 - (int)param_3;
    iVar2 = *param_2;
  }
  return iVar2;
}


