/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002137b0  Symbol: __divdi3 */

undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_2c;
  
  if ((int)param_2 < 0) {
    bVar11 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar11);
    local_2c = 0xffffffff;
  }
  else {
    local_2c = 0;
  }
  if ((int)param_4 < 0) {
    local_2c = ~local_2c;
    bVar11 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar11);
  }
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = __udivsi3(1,0);
      }
      iVar4 = LZCOUNT(param_3);
      if (iVar4 == 0) {
        iVar4 = param_2 - param_3;
        uVar6 = 1;
      }
      else {
        param_3 = param_3 << iVar4;
        uVar5 = param_2 >> (0x20U - iVar4 & 0xff);
        uVar2 = param_3 >> 0x10;
        uVar6 = param_1 >> (0x20U - iVar4 & 0xff) | param_2 << iVar4;
        param_1 = param_1 << iVar4;
        __aeabi_uidivmod(uVar5,uVar2);
        iVar4 = __udivsi3(uVar5,uVar2);
        uVar7 = uVar6 >> 0x10 | extraout_r1_01 << 0x10;
        uVar5 = (param_3 & 0xffff) * iVar4;
        iVar1 = iVar4;
        if (uVar7 < uVar5) {
          bVar11 = CARRY4(uVar7,param_3);
          uVar7 = uVar7 + param_3;
          iVar1 = iVar4 + -1;
          if ((!bVar11) && (uVar7 < uVar5)) {
            uVar7 = uVar7 + param_3;
            iVar1 = iVar4 + -2;
          }
        }
        __aeabi_uidivmod(uVar7 - uVar5,uVar2);
        uVar2 = __udivsi3(uVar7 - uVar5,uVar2);
        uVar7 = uVar6 & 0xffff | extraout_r1_02 << 0x10;
        uVar5 = (param_3 & 0xffff) * uVar2;
        uVar6 = uVar2;
        if (uVar7 < uVar5) {
          bVar11 = CARRY4(uVar7,param_3);
          uVar7 = uVar7 + param_3;
          uVar6 = uVar2 - 1;
          if ((!bVar11) && (uVar7 < uVar5)) {
            uVar7 = uVar7 + param_3;
            uVar6 = uVar2 - 2;
          }
        }
        iVar4 = uVar7 - uVar5;
        uVar6 = uVar6 | iVar1 << 0x10;
      }
      uVar2 = param_3 >> 0x10;
      __aeabi_uidivmod(iVar4,uVar2);
      iVar1 = __udivsi3(iVar4,uVar2);
      uVar7 = param_1 >> 0x10 | extraout_r1_03 << 0x10;
      uVar5 = (param_3 & 0xffff) * iVar1;
      iVar4 = iVar1;
      if (uVar7 < uVar5) {
        bVar11 = CARRY4(uVar7,param_3);
        uVar7 = uVar7 + param_3;
        iVar4 = iVar1 + -1;
        if ((!bVar11) && (uVar7 < uVar5)) {
          uVar7 = uVar7 + param_3;
          iVar4 = iVar1 + -2;
        }
      }
      __aeabi_uidivmod(uVar7 - uVar5,uVar2);
      uVar2 = __udivsi3(uVar7 - uVar5,uVar2);
      uVar8 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar7 = uVar2 * (param_3 & 0xffff);
      uVar5 = uVar2;
      if (uVar8 < uVar7) {
        uVar5 = uVar2 - 1;
        if ((!CARRY4(uVar8,param_3)) && (uVar8 + param_3 < uVar7)) {
          uVar5 = uVar2 - 2;
        }
      }
      uVar5 = uVar5 | iVar4 << 0x10;
      goto LAB_00213c10;
    }
    iVar4 = LZCOUNT(param_3);
    if (iVar4 != 0) {
      param_3 = param_3 << iVar4;
      param_2 = param_1 >> (0x20U - iVar4 & 0xff) | param_2 << iVar4;
      param_1 = param_1 << iVar4;
    }
    uVar2 = param_3 >> 0x10;
    __aeabi_uidivmod(param_2,uVar2);
    iVar1 = __udivsi3(param_2,uVar2);
    uVar6 = param_1 >> 0x10 | extraout_r1 << 0x10;
    uVar5 = (param_3 & 0xffff) * iVar1;
    iVar4 = iVar1;
    if (uVar6 < uVar5) {
      bVar11 = CARRY4(uVar6,param_3);
      uVar6 = uVar6 + param_3;
      iVar4 = iVar1 + -1;
      if ((!bVar11) && (uVar6 < uVar5)) {
        uVar6 = uVar6 + param_3;
        iVar4 = iVar1 + -2;
      }
    }
    __aeabi_uidivmod(uVar6 - uVar5,uVar2);
    uVar2 = __udivsi3(uVar6 - uVar5,uVar2);
    uVar6 = param_1 & 0xffff | extraout_r1_00 << 0x10;
    uVar7 = uVar2 * (param_3 & 0xffff);
    uVar5 = uVar2;
    if (uVar6 < uVar7) {
      uVar5 = uVar2 - 1;
      if ((!CARRY4(uVar6,param_3)) && (uVar6 + param_3 < uVar7)) {
        uVar5 = uVar2 - 2;
      }
    }
    uVar5 = uVar5 | iVar4 << 0x10;
LAB_00213c00:
    uVar6 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar4 = LZCOUNT(param_4);
      if (iVar4 != 0) {
        uVar6 = 0x20 - iVar4;
        uVar7 = param_3 >> (uVar6 & 0xff) | param_4 << iVar4;
        uVar5 = param_2 >> (uVar6 & 0xff);
        param_3 = param_3 << iVar4;
        uVar2 = uVar7 >> 0x10;
        uVar6 = param_1 >> (uVar6 & 0xff) | param_2 << iVar4;
        __aeabi_uidivmod(uVar5,uVar2);
        iVar3 = __udivsi3(uVar5,uVar2);
        uVar8 = uVar6 >> 0x10 | extraout_r1_05 << 0x10;
        uVar5 = (uVar7 & 0xffff) * iVar3;
        iVar1 = iVar3;
        if (uVar8 < uVar5) {
          bVar11 = CARRY4(uVar8,uVar7);
          uVar8 = uVar8 + uVar7;
          iVar1 = iVar3 + -1;
          if ((!bVar11) && (uVar8 < uVar5)) {
            uVar8 = uVar8 + uVar7;
            iVar1 = iVar3 + -2;
          }
        }
        __aeabi_uidivmod(uVar8 - uVar5,uVar2);
        uVar5 = __udivsi3(uVar8 - uVar5,uVar2);
        uVar6 = uVar6 & 0xffff | extraout_r1_06 << 0x10;
        uVar8 = uVar5 * (uVar7 & 0xffff);
        uVar2 = uVar5;
        if (uVar6 < uVar8) {
          bVar11 = CARRY4(uVar6,uVar7);
          uVar6 = uVar6 + uVar7;
          uVar2 = uVar5 - 1;
          if ((!bVar11) && (uVar6 < uVar8)) {
            uVar6 = uVar6 + uVar7;
            uVar2 = uVar5 - 2;
          }
        }
        uVar5 = uVar2 | iVar1 << 0x10;
        uVar9 = uVar5 & ~(uVar2 & 0xffff0000 | iVar1 << 0x10);
        uVar7 = param_3 & ~(param_3 & 0xffff0000);
        uVar2 = uVar9 * uVar7;
        uVar7 = (uVar5 >> 0x10) * uVar7;
        uVar9 = (param_3 >> 0x10) * uVar9;
        iVar1 = (uVar5 >> 0x10) * (param_3 >> 0x10);
        uVar10 = uVar7 + uVar9;
        if (CARRY4(uVar7,uVar9)) {
          iVar1 = iVar1 + 0x10000;
        }
        uVar7 = uVar10 * 0x10000;
        uVar9 = iVar1 + (uVar10 >> 0x10) + (uint)CARRY4(uVar2,uVar7);
        if (uVar9 <= uVar6 - uVar8) {
          uVar6 = (uint)(uVar9 == uVar6 - uVar8);
          if (uVar2 + uVar7 <= param_1 << iVar4) {
            uVar6 = 0;
          }
          if (uVar6 == 0) goto LAB_00213c10;
        }
        uVar5 = uVar5 - 1;
        goto LAB_00213c00;
      }
      bVar11 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar11 = param_3 <= param_1;
      }
      if (bVar11) {
        uVar5 = 1;
        uVar6 = 0;
        goto LAB_00213c10;
      }
    }
    uVar5 = 0;
    uVar6 = uVar5;
  }
LAB_00213c10:
  if (local_2c != 0) {
    bVar11 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar6 = -(uVar6 + bVar11);
  }
  return CONCAT44(uVar6,uVar5);
}


