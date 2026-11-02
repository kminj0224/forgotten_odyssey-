/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001993d0  Symbol: FUN_001993d0 */

void FUN_001993d0(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  byte local_24 [8];
  int local_1c [2];
  
  iVar8 = DAT_00199558 + 0x1993de;
  if (**(char **)(param_1[9] + 0x10) != '&') {
    return;
  }
  if ((*(char **)(param_1[9] + 0x10))[1] == '#') {
    uVar1 = FUN_001989e4(param_1);
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 < 0x80) {
      local_24[0] = (byte)uVar1;
      uVar6 = 0xfffffffa;
    }
    else if (DAT_0019955c < uVar1) {
      if (DAT_00199560 < uVar1) {
        local_24[0] = (byte)((uVar1 << 0xb) >> 0x1d) | 0xf0;
        uVar6 = 0xc;
      }
      else {
        local_24[0] = (byte)(uVar1 >> 8) >> 4 | 0xe0;
        uVar6 = 6;
      }
    }
    else {
      local_24[0] = (byte)((uVar1 << 0x15) >> 0x1b) | 0xc0;
      uVar6 = 0;
    }
    iVar9 = 1;
    for (; -1 < (int)uVar6; uVar6 = uVar6 - 6) {
      local_24[iVar9] = (byte)(uVar1 >> (uVar6 & 0xff)) & 0x3f | 0x80;
      iVar9 = iVar9 + 1;
    }
  }
  else {
    puVar2 = (uint *)FUN_001982ac(param_1,local_1c);
    if (local_1c[0] == 0) {
      FUN_00196374(param_1);
      if (*param_1 == 0) {
        return;
      }
      pcVar7 = *(code **)(*param_1 + 0x44);
      if (pcVar7 == (code *)0x0) {
        return;
      }
      iVar4 = param_1[1];
      iVar9 = 1;
      pbVar5 = (byte *)(iVar8 + DAT_00199564);
      goto LAB_00199552;
    }
    if ((puVar2 == (uint *)0x0) || (uVar1 = *puVar2, uVar1 == 0)) {
      FUN_00196374(param_1);
      if (*param_1 == 0) {
        return;
      }
      pcVar7 = *(code **)(*param_1 + 0x44);
      if (pcVar7 == (code *)0x0) {
        return;
      }
      (*pcVar7)(param_1[1],iVar8 + DAT_00199564,1);
      iVar8 = param_1[1];
      pcVar7 = *(code **)(*param_1 + 0x44);
      uVar3 = FUN_0019c49c(local_1c[0]);
      (*pcVar7)(iVar8,local_1c[0],uVar3);
      return;
    }
    if (uVar1 < 0x80) {
      local_24[0] = (byte)uVar1;
      uVar6 = 0xfffffffa;
    }
    else if (DAT_0019955c < uVar1) {
      if (DAT_00199560 < uVar1) {
        local_24[0] = (byte)((uVar1 << 0xb) >> 0x1d) | 0xf0;
        uVar6 = 0xc;
      }
      else {
        local_24[0] = (byte)(uVar1 >> 8) >> 4 | 0xe0;
        uVar6 = 6;
      }
    }
    else {
      local_24[0] = (byte)((uVar1 << 0x15) >> 0x1b) | 0xc0;
      uVar6 = 0;
    }
    iVar9 = 1;
    for (; -1 < (int)uVar6; uVar6 = uVar6 - 6) {
      local_24[iVar9] = (byte)(uVar1 >> (uVar6 & 0xff)) & 0x3f | 0x80;
      iVar9 = iVar9 + 1;
    }
  }
  pbVar5 = local_24;
  pbVar5[iVar9] = 0;
  FUN_00196374(param_1);
  if (*param_1 == 0) {
    return;
  }
  pcVar7 = *(code **)(*param_1 + 0x44);
  if (pcVar7 == (code *)0x0) {
    return;
  }
  iVar4 = param_1[1];
LAB_00199552:
  (*pcVar7)(iVar4,pbVar5,iVar9);
  return;
}


