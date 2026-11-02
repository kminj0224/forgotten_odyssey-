/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002107d8  Symbol: __addsf3 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = param_1 << 1;
  bVar8 = uVar4 == 0;
  if (!bVar8) {
    param_4 = param_2 << 1;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar8) {
    bVar8 = iVar1 == -1;
  }
  if (!bVar8) {
    bVar8 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar8) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = param_2;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar4;
      }
      bVar8 = (uVar4 & 0x7fffff) == 0;
      if (bVar8) {
        bVar8 = (param_2 & 0x7fffff) == 0;
      }
      if (bVar8) {
        bVar8 = uVar4 == param_2;
      }
      if (!bVar8) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00210938:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar7 = param_4 - uVar4;
  bVar8 = uVar7 != 0;
  uVar6 = uVar4;
  if (bVar8 && uVar4 <= param_4) {
    uVar6 = uVar4 + uVar7;
  }
  if (bVar8 && uVar4 <= param_4) {
    param_2 = param_1 ^ param_2;
  }
  if (bVar8 && uVar4 <= param_4) {
    param_1 = param_2 ^ param_1;
  }
  if (bVar8 && uVar4 <= param_4) {
    param_2 = param_1 ^ param_2;
  }
  if (param_4 < uVar4) {
    uVar7 = -uVar7;
  }
  if (0x19 < uVar7) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar5 = param_2 & 0xffffff | 0x800000;
  if ((param_2 & 0x80000000) != 0) {
    uVar5 = -uVar5;
  }
  if (uVar6 == uVar7) {
    uVar5 = uVar5 ^ 0x800000;
    if (uVar6 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar6 = 1;
    }
    else {
      uVar7 = uVar7 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar5 >> (uVar7 & 0xff));
  uVar5 = uVar5 << (0x20 - uVar7 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar8 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar4 = -(uVar4 + bVar8);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar5 >> 0x1f;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar7 = uVar6 - 2;
    if ((uVar4 & 0x800000) == 0) {
      uVar6 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar6 & 0xff);
      if ((int)uVar7 < (int)uVar6) {
        uVar4 = uVar4 >> (-(uVar7 - uVar6) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar7 - uVar6) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar7 = uVar6 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
      uVar7 = uVar6;
      if (0xfd < uVar6) goto LAB_00210938;
    }
  }
  uVar4 = uVar4 + uVar7 * 0x800000 + (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}


