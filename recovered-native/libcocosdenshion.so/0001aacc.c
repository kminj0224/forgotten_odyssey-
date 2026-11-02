/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001aacc  Symbol: FUN_0001aacc */

undefined4 FUN_0001aacc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  
  pcVar6 = *(char **)(param_1 + 0xc);
  cVar5 = *pcVar6;
  if (cVar5 == '_') {
    pcVar4 = pcVar6 + 1;
    *(char **)(param_1 + 0xc) = pcVar4;
    cVar5 = pcVar6[1];
  }
  else {
    pcVar4 = pcVar6;
    if (param_2 != 0) {
      return 0;
    }
  }
  if (cVar5 != 'Z') {
    return 0;
  }
  *(char **)(param_1 + 0xc) = pcVar4 + 1;
  uVar1 = FUN_0001a3c8(param_1,param_2);
  if (param_2 == 0) {
    return uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return uVar1;
  }
  do {
    pbVar3 = *(byte **)(param_1 + 0xc);
    if (*pbVar3 != 0x2e) {
      return uVar1;
    }
    uVar7 = (uint)pbVar3[1];
    bVar9 = 0x5e < uVar7;
    if (uVar7 != 0x5f) {
      bVar9 = 0x18 < uVar7 - 0x61;
    }
    if (!bVar9 || (uVar7 == 0x5f || uVar7 - 0x61 == 0x19)) {
      uVar7 = (uint)pbVar3[2];
      pbVar8 = pbVar3 + 2;
      bVar9 = 0x5e < uVar7;
      if (uVar7 != 0x5f) {
        bVar9 = 0x18 < uVar7 - 0x61;
      }
      if (!bVar9 || (uVar7 == 0x5f || uVar7 - 0x61 == 0x19)) {
        do {
          pbVar8 = pbVar8 + 1;
          uVar7 = (uint)*pbVar8;
          bVar9 = 0x5e < uVar7;
          if (uVar7 != 0x5f) {
            bVar9 = 0x18 < uVar7 - 0x61;
          }
        } while (!bVar9 || (uVar7 == 0x5f || uVar7 - 0x61 == 0x19));
      }
    }
    else {
      if (9 < uVar7 - 0x30) {
        return uVar1;
      }
      uVar7 = (uint)*pbVar3;
      pbVar8 = pbVar3;
    }
    while (uVar7 == 0x2e) {
      while( true ) {
        if (9 < pbVar8[1] - 0x30) goto LAB_0001abb8;
        uVar7 = (uint)pbVar8[2];
        pbVar8 = pbVar8 + 2;
        if (9 < uVar7 - 0x30) break;
        do {
          pbVar8 = pbVar8 + 1;
        } while (*pbVar8 - 0x30 < 10);
        if (*pbVar8 != 0x2e) goto LAB_0001abb8;
      }
    }
LAB_0001abb8:
    *(byte **)(param_1 + 0xc) = pbVar8;
    uVar2 = FUN_000188ac(param_1,pbVar3,(int)pbVar8 - (int)pbVar3);
    uVar1 = FUN_00018710(param_1,0x42,uVar1,uVar2);
  } while( true );
}


