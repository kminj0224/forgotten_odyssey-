/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001630d4  Symbol: unpackPVRData */

/* cocos2d::CCTexturePVR::unpackPVRData(unsigned char*, unsigned int) */

undefined4 cocos2d::CCTexturePVR::unpackPVRData(uchar *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int local_2c;
  uint local_28;
  
  uVar1 = *(ushort *)(DAT_00163328 + 0x1630e0);
  uVar8 = *(uint *)(param_2 + 0x2c);
  if (uVar1 < 0x100) {
    uVar8 = (uVar8 & 0xff0000) >> 8 | uVar8 << 0x18 | uVar8 >> 0x18 | (uVar8 & 0xff00) << 8;
  }
  if ((uVar8 & 0xff) != 0x50) {
    return 0;
  }
  if ((uVar8 >> 8 & 0xff) != 0x56) {
    return 0;
  }
  if ((uVar8 >> 0x10 & 0xff) != 0x52) {
    return 0;
  }
  if (uVar8 >> 0x18 != 0x21) {
    return 0;
  }
  iVar2 = CCConfiguration::sharedConfiguration();
  uVar8 = *(uint *)(param_2 + 0x10);
  if (uVar1 < 0x100) {
    uVar8 = uVar8 >> 0x18;
  }
  uVar8 = uVar8 & 0xff;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    uVar4 = *(ulong *)(param_2 + 8);
    uVar12 = ccNextPOT(uVar4);
    if (uVar4 != uVar12) {
      return 0;
    }
    uVar12 = *(ulong *)(param_2 + 4);
    uVar4 = ccNextPOT(uVar12);
    if (uVar12 != uVar4) {
      return 0;
    }
  }
  uVar12 = *(ulong *)(param_2 + 8);
  uVar4 = ccNextPOT(uVar12);
  if (uVar12 != uVar4) {
    return 0;
  }
  uVar12 = *(ulong *)(param_2 + 4);
  uVar4 = ccNextPOT(uVar12);
  iVar2 = DAT_00163334;
  if (uVar12 != uVar4) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  while( true ) {
    uVar7 = *(uint *)(param_1 + 0x28);
    if (6 < uVar7) {
      return 0;
    }
    if (*(uint *)((int)&DAT_00163328 + iVar2 + uVar7 * 0x1c + 2) == uVar8) break;
    *(uint *)(param_1 + 0x28) = uVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar11 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x100) {
    uVar11 = (uVar11 & 0xff0000) >> 8 | uVar11 << 0x18 | uVar11 >> 0x18 | (uVar11 & 0xff00) << 8;
  }
  *(uint *)(param_1 + 0x18) = uVar11;
  uVar13 = *(uint *)(param_2 + 4);
  if (uVar1 < 0x100) {
    uVar13 = (uVar13 & 0xff0000) >> 8 | uVar13 << 0x18 | uVar13 >> 0x18 | (uVar13 & 0xff00) << 8;
  }
  *(uint *)(param_1 + 0x1c) = uVar13;
  uVar9 = *(uint *)(param_2 + 0x28);
  if (uVar1 < 0x100) {
    uVar9 = (uVar9 & 0xff0000) >> 8 | uVar9 << 0x18 | uVar9 >> 0x18 | (uVar9 & 0xff00) << 8;
  }
  param_1[0x24] = '\x01' - (uVar9 == 0);
  iVar2 = DAT_00163330;
  local_28 = *(uint *)(param_2 + 0x14);
  if (uVar1 < 0x100) {
    local_28 = local_28 >> 0x18 | local_28 << 0x18 | (local_28 & 0xff00) << 8 |
               (local_28 & 0xff0000) >> 8;
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(DAT_0016332c + uVar7 * 0x1c + 0x16326e);
  uVar7 = 0;
  do {
    if (local_28 <= uVar7) {
      return 1;
    }
    if (uVar8 == 0x19) {
      uVar9 = uVar11 >> 2;
      uVar10 = uVar13 >> 2;
      local_2c = 4;
      iVar3 = 0x10;
    }
    else {
      if (uVar8 == 0x1a) {
        iVar3 = CCConfiguration::sharedConfiguration();
        if (*(char *)(iVar3 + 0x1e) == '\0') {
          return 0;
        }
      }
      else if (uVar8 == 0x18) {
        local_2c = 2;
        iVar3 = 0x20;
        uVar9 = uVar11 >> 3;
        uVar10 = uVar13 >> 2;
        goto LAB_001632a4;
      }
      iVar3 = 1;
      local_2c = *(int *)(iVar2 + *(int *)(param_1 + 0x28) * 0x1c + 0x16326c);
      uVar9 = uVar11;
      uVar10 = uVar13;
    }
LAB_001632a4:
    if (uVar9 < 2) {
      uVar9 = 2;
    }
    if (uVar10 < 2) {
      uVar10 = 2;
    }
    uVar5 = local_28 - uVar7;
    uVar10 = ((uint)(local_2c * iVar3) >> 3) * uVar9 * uVar10;
    if (uVar5 <= uVar10 && uVar10 - uVar5 != 0) {
      uVar10 = uVar5;
    }
    iVar6 = *(int *)(param_1 + 0x2c);
    uVar11 = uVar11 >> 1;
    iVar3 = (iVar6 + 6) * 8;
    *(uint *)(param_1 + iVar3) = param_2 + 0x34 + uVar7;
    *(uint *)(param_1 + iVar3 + 4) = uVar10;
    uVar7 = uVar7 + uVar10;
    *(int *)(param_1 + 0x2c) = iVar6 + 1;
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    uVar13 = uVar13 >> 1;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
  } while( true );
}


