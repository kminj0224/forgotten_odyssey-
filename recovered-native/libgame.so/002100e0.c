/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002100e0  Symbol: __muldf3 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r5;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  
  uVar13 = CONCAT44(param_2,param_1);
  uVar8 = 0x7ff;
  uVar5 = param_2 >> 0x14 & 0x7ff;
  bVar10 = uVar5 == 0;
  if (!bVar10) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar10 = unaff_r5 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar5 == 0x7ff;
  }
  if (!bVar10) {
    bVar10 = unaff_r5 == 0x7ff;
  }
  if (bVar10) {
    uVar13 = FUN_002102c0();
  }
  uVar4 = (uint)(uVar13 >> 0x20);
  iVar6 = uVar5 + unaff_r5;
  uVar5 = uVar4 ^ param_4;
  uVar4 = uVar4 & ~(uVar8 << 0x15);
  param_4 = param_4 & ~(uVar8 << 0x15);
  bVar10 = ((uint)uVar13 | uVar4 << 0xc) == 0;
  if (!bVar10) {
    bVar10 = (param_3 | param_4 << 0xc) == 0;
  }
  uVar4 = uVar4 | 0x100000;
  param_4 = param_4 | 0x100000;
  if (bVar10) {
    param_3 = (uint)uVar13 | param_3;
    param_4 = (uVar5 & 0x80000000 | uVar4) ^ param_4;
    uVar5 = uVar8 >> 1;
    bVar12 = SBORROW4(iVar6,uVar5);
    uVar7 = iVar6 - uVar5;
    bVar10 = uVar7 == 0;
    uVar4 = uVar7;
    if (!bVar10 && (int)uVar5 <= iVar6) {
      bVar12 = SBORROW4(uVar8,uVar7);
      uVar4 = uVar8 - uVar7;
      bVar10 = uVar8 == uVar7;
    }
    if (!bVar10 && (int)uVar4 < 0 == bVar12) {
      param_4 = param_4 | uVar7 * 0x100000;
    }
    if (!bVar10 && (int)uVar4 < 0 == bVar12) {
      return CONCAT44(param_4,param_3);
    }
    param_4 = param_4 | 0x100000;
    uVar5 = 0;
    bVar12 = SBORROW4(uVar7,1);
    uVar7 = uVar7 - 1;
    bVar10 = uVar7 == 0;
    uVar8 = uVar7;
  }
  else {
    uVar2 = (ulonglong)param_3 * (uVar13 & 0xffffffff);
    uVar13 = (ulonglong)param_4 * (uVar13 & 0xffffffff) +
             (ulonglong)param_3 * (ulonglong)uVar4 + (uVar2 >> 0x20);
    uVar9 = (uint)uVar13;
    lVar1 = (ulonglong)param_4 * (ulonglong)uVar4 + (uVar13 >> 0x20);
    uVar8 = (uint)lVar1;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      uVar9 = uVar9 | 1;
    }
    uVar7 = (iVar6 + -0xff) - ((uVar4 < 0x200) + 0x300);
    if (uVar4 < 0x200) {
      bVar3 = (byte)(uVar9 >> 0x1f);
      uVar9 = uVar9 << 1;
      lVar1 = CONCAT44(uVar4 * 2 + (uint)(CARRY4(uVar8,uVar8) || CARRY4(uVar8 * 2,(uint)bVar3)),
                       uVar8 * 2 + (uint)bVar3);
    }
    param_4 = uVar5 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
    param_3 = (uint)lVar1 << 0xb | uVar9 >> 0x15;
    uVar5 = uVar9 * 0x800;
    bVar11 = 0xfc < uVar7;
    bVar12 = SBORROW4(uVar7,0xfd);
    uVar4 = uVar7 - 0xfd;
    bVar10 = uVar4 == 0;
    uVar8 = uVar4;
    if (bVar11 && !bVar10) {
      bVar11 = 0x6ff < uVar4;
      bVar12 = SBORROW4(uVar4,0x700);
      uVar8 = uVar7 - 0x7fd;
      bVar10 = uVar4 == 0x700;
    }
    if (!bVar11 || bVar10) {
      bVar10 = 0x7fffffff < uVar5;
      if (uVar5 == 0x80000000) {
        bVar10 = (bool)((byte)(uVar9 >> 0x15) & 1);
      }
      return CONCAT44(param_4 + uVar7 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar10),
                      param_3 + bVar10);
    }
  }
  if (!bVar10 && (int)uVar8 < 0 == bVar12) {
    return (ulonglong)(param_4 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar11 = SCARRY4(uVar7,0x36);
  bVar10 = (int)(uVar7 + 0x36) < 0;
  bVar12 = uVar7 == 0xffffffca;
  if (bVar12 || bVar10 != bVar11) {
    param_3 = 0;
  }
  if (bVar12 || bVar10 != bVar11) {
    param_4 = param_4 & 0x80000000;
  }
  if (bVar12 || bVar10 != bVar11) {
    return CONCAT44(param_4,param_3);
  }
  uVar8 = -uVar7;
  uVar4 = uVar8 - 0x20;
  if (0x1f < (int)uVar8) {
    uVar7 = param_3 >> (uVar4 & 0xff) | param_4 << (0x20 - uVar4 & 0xff);
    uVar8 = (param_4 >> (uVar4 & 0xff) & ~((param_4 & 0x80000000) >> (uVar4 & 0xff))) -
            ((int)uVar7 >> 0x1f);
    if ((uVar5 | param_3 << (0x20 - uVar4 & 0xff) | uVar7 << 1) == 0) {
      uVar8 = uVar8 & ~(uVar7 >> 0x1f);
    }
    return CONCAT44(param_4,uVar8) & 0x80000000ffffffff;
  }
  iVar6 = uVar8 - 0x14;
  if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar4,0xc)) {
    uVar4 = param_3 << (uVar7 + 0x20 & 0xff);
    uVar7 = param_3 >> (uVar8 & 0xff) | param_4 << (uVar7 + 0x20 & 0xff);
    uVar9 = uVar7 + -((int)uVar4 >> 0x1f);
    if ((uVar5 | uVar4 << 1) == 0) {
      uVar9 = uVar9 & ~(uVar4 >> 0x1f);
    }
    return CONCAT44((param_4 & 0x80000000) + ((param_4 & 0x7fffffff) >> (uVar8 & 0xff)) +
                    (uint)CARRY4(uVar7,-((int)uVar4 >> 0x1f)),uVar9);
  }
  uVar4 = 0xc - iVar6;
  uVar8 = param_3 << (uVar4 & 0xff);
  uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | param_4 << (uVar4 & 0xff);
  uVar7 = uVar4 + -((int)uVar8 >> 0x1f);
  if ((uVar5 | uVar8 << 1) == 0) {
    uVar7 = uVar7 & ~(uVar8 >> 0x1f);
  }
  return CONCAT44((param_4 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar8 >> 0x1f)),uVar7);
}


