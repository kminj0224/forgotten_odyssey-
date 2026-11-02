/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204bac  Symbol: FUN_00204bac */

bool FUN_00204bac(byte *param_1,int param_2,byte **param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar4 = *param_3;
  uVar3 = *(int *)(pbVar4 + -0xc) - 1;
  uVar2 = param_2 - 1U;
  if (uVar3 <= param_2 - 1U) {
    uVar2 = uVar3;
  }
  if (uVar2 == 0) {
    bVar7 = true;
  }
  else {
    uVar5 = uVar3 - uVar2;
    pbVar6 = param_1;
    do {
      pbVar1 = pbVar4 + uVar3;
      uVar3 = uVar3 - 1;
      bVar7 = *pbVar1 == *pbVar6;
      if (uVar3 == uVar5) break;
      pbVar6 = pbVar6 + 1;
    } while (bVar7);
  }
  uVar2 = (uint)param_1[uVar2];
  while ((uVar3 != 0 && (bVar7 != false))) {
    pbVar6 = pbVar4 + uVar3;
    uVar3 = uVar3 - 1;
    bVar7 = *pbVar6 == uVar2;
  }
  if ((uVar2 != 0 && -1 < (int)(uVar2 * 0x1000000)) && (uVar2 < *pbVar4)) {
    bVar7 = false;
  }
  return bVar7;
}


