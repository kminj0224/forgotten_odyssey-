/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0021034c  Symbol: __divdf3 */

ulonglong __divdf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  
  uVar17 = CONCAT44(param_2,param_1);
  uVar13 = 0x7ff;
  uVar8 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar8 == 0;
  if (!bVar14) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r5 == 0;
  }
  if (!bVar14) {
    bVar14 = uVar8 == 0x7ff;
  }
  if (!bVar14) {
    bVar14 = unaff_r5 == 0x7ff;
  }
  if (bVar14) {
    uVar17 = FUN_002104e0();
  }
  uVar10 = (uint)((ulonglong)uVar17 >> 0x20);
  uVar3 = (uint)uVar17;
  iVar9 = uVar8 - unaff_r5;
  if ((param_3 | param_4 << 0xc) == 0) {
    uVar8 = (uVar10 ^ param_4) & 0x80000000 | uVar10 & 0xfffff;
    bVar15 = SCARRY4(iVar9,uVar13 >> 1);
    uVar10 = iVar9 + (uVar13 >> 1);
    bVar14 = (int)uVar10 < 0;
    bVar16 = uVar10 == 0;
    if (!bVar16 && bVar14 == bVar15) {
      bVar15 = SBORROW4(uVar13,uVar10);
      bVar14 = (int)(uVar13 - uVar10) < 0;
      bVar16 = uVar13 == uVar10;
    }
    if (!bVar16 && bVar14 == bVar15) {
      uVar8 = uVar8 | uVar10 * 0x100000;
    }
    if (!bVar16 && bVar14 == bVar15) {
      return CONCAT44(uVar8,uVar3);
    }
    uVar8 = uVar8 | 0x100000;
    uVar5 = 0;
    bVar16 = SBORROW4(uVar10,1);
    uVar10 = uVar10 - 1;
    bVar14 = uVar10 == 0;
    uVar13 = uVar10;
  }
  else {
    uVar5 = (param_4 << 0xc) >> 4 | 0x10000000 | param_3 >> 0x18;
    uVar13 = param_3 << 8;
    uVar11 = (uVar10 << 0xc) >> 4 | 0x10000000 | uVar3 >> 0x18;
    uVar3 = uVar3 * 0x100;
    uVar8 = (uVar10 ^ param_4) & 0x80000000;
    bVar14 = uVar5 <= uVar11;
    if (uVar11 == uVar5) {
      bVar14 = uVar13 <= uVar3;
    }
    iVar9 = iVar9 + (uint)bVar14;
    uVar10 = iVar9 + 0x3fd;
    if (!bVar14) {
      uVar5 = uVar5 >> 1;
      uVar13 = (uint)((byte)(param_3 >> 0x18) & 1) << 0x1f | uVar13 >> 1;
    }
    uVar12 = uVar3 - uVar13;
    uVar11 = uVar11 - (uVar5 + (uVar3 < uVar13));
    uVar6 = uVar5 >> 1;
    uVar4 = (uint)((byte)uVar5 & 1) << 0x1f | uVar13 >> 1;
    uVar3 = 0x100000;
    uVar13 = 0x80000;
    while( true ) {
      bVar14 = uVar4 <= uVar12;
      if (uVar6 < uVar11 || uVar11 - uVar6 < (uint)bVar14) {
        uVar12 = uVar12 - uVar4;
        uVar3 = uVar3 | uVar13;
        uVar11 = uVar11 - (uVar6 + !bVar14);
      }
      uVar5 = uVar6 >> 1;
      uVar4 = (uint)((byte)uVar6 & 1) << 0x1f | uVar4 >> 1;
      bVar14 = uVar4 <= uVar12;
      if (uVar5 < uVar11 || uVar11 - uVar5 < (uint)bVar14) {
        uVar12 = uVar12 - uVar4;
        uVar3 = uVar3 | uVar13 >> 1;
        uVar11 = uVar11 - (uVar5 + !bVar14);
      }
      uVar1 = uVar6 >> 2;
      uVar2 = (uint)((byte)uVar5 & 1) << 0x1f | uVar4 >> 1;
      bVar14 = uVar2 <= uVar12;
      if (uVar1 < uVar11 || uVar11 - uVar1 < (uint)bVar14) {
        uVar12 = uVar12 - uVar2;
        uVar3 = uVar3 | uVar13 >> 2;
        uVar11 = uVar11 - (uVar1 + !bVar14);
      }
      uVar7 = uVar6 >> 3;
      uVar4 = (uint)((byte)uVar1 & 1) << 0x1f | uVar2 >> 1;
      bVar14 = uVar4 <= uVar12;
      if (uVar7 < uVar11 || uVar11 - uVar7 < (uint)bVar14) {
        uVar12 = uVar12 - uVar4;
        uVar3 = uVar3 | uVar13 >> 3;
        uVar11 = uVar11 - (uVar7 + !bVar14);
      }
      uVar5 = uVar11 | uVar12;
      if (uVar5 == 0) break;
      uVar11 = uVar11 << 4 | uVar12 >> 0x1c;
      uVar12 = uVar12 << 4;
      uVar6 = uVar6 & 0xfffffff8 | uVar4 >> 0x1d;
      uVar4 = (uVar2 >> 1) << 3;
      uVar13 = uVar13 >> 4;
      if (uVar13 == 0) {
        uVar7 = uVar6;
        if ((uVar8 & 0x100000) != 0) goto LAB_0021048c;
        uVar8 = uVar8 | uVar3;
        uVar3 = 0;
        uVar13 = 0x80000000;
      }
    }
    if ((uVar8 & 0x100000) == 0) {
      uVar8 = uVar8 | uVar3;
      uVar3 = 0;
    }
LAB_0021048c:
    bVar15 = 0xfc < uVar10;
    bVar16 = SBORROW4(uVar10,0xfd);
    uVar6 = iVar9 + 0x300;
    bVar14 = uVar6 == 0;
    uVar13 = uVar6;
    if (bVar15 && !bVar14) {
      bVar15 = 0x6ff < uVar6;
      bVar16 = SBORROW4(uVar6,0x700);
      uVar13 = iVar9 - 0x400;
      bVar14 = uVar6 == 0x700;
    }
    if (!bVar15 || bVar14) {
      bVar14 = uVar7 <= uVar11;
      if (uVar11 == uVar7) {
        bVar14 = uVar4 <= uVar12;
      }
      if (uVar11 == uVar7 && uVar12 == uVar4) {
        bVar14 = (bool)((byte)uVar3 & 1);
      }
      return CONCAT44(uVar8 + uVar10 * 0x100000 + (uint)CARRY4(uVar3,(uint)bVar14),uVar3 + bVar14);
    }
  }
  if (!bVar14 && (int)uVar13 < 0 == bVar16) {
    return (ulonglong)(uVar8 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  bVar15 = SCARRY4(uVar10,0x36);
  bVar14 = (int)(uVar10 + 0x36) < 0;
  bVar16 = uVar10 == 0xffffffca;
  if (bVar16 || bVar14 != bVar15) {
    uVar3 = 0;
  }
  if (bVar16 || bVar14 != bVar15) {
    uVar8 = uVar8 & 0x80000000;
  }
  if (bVar16 || bVar14 != bVar15) {
    return CONCAT44(uVar8,uVar3);
  }
  uVar13 = -uVar10;
  uVar11 = uVar13 - 0x20;
  if (0x1f < (int)uVar13) {
    uVar10 = uVar3 >> (uVar11 & 0xff) | uVar8 << (0x20 - uVar11 & 0xff);
    uVar13 = (uVar8 >> (uVar11 & 0xff) & ~((uVar8 & 0x80000000) >> (uVar11 & 0xff))) -
             ((int)uVar10 >> 0x1f);
    if ((uVar5 | uVar3 << (0x20 - uVar11 & 0xff) | uVar10 << 1) == 0) {
      uVar13 = uVar13 & ~(uVar10 >> 0x1f);
    }
    return CONCAT44(uVar8,uVar13) & 0x80000000ffffffff;
  }
  iVar9 = uVar13 - 0x14;
  if (iVar9 != 0 && iVar9 < 0 == SCARRY4(uVar11,0xc)) {
    uVar10 = 0xc - iVar9;
    uVar13 = uVar3 << (uVar10 & 0xff);
    uVar3 = uVar3 >> (0x20 - uVar10 & 0xff) | uVar8 << (uVar10 & 0xff);
    uVar10 = uVar3 + -((int)uVar13 >> 0x1f);
    if ((uVar5 | uVar13 << 1) == 0) {
      uVar10 = uVar10 & ~(uVar13 >> 0x1f);
    }
    return CONCAT44((uVar8 & 0x80000000) + (uint)CARRY4(uVar3,-((int)uVar13 >> 0x1f)),uVar10);
  }
  uVar11 = uVar3 << (uVar10 + 0x20 & 0xff);
  uVar3 = uVar3 >> (uVar13 & 0xff) | uVar8 << (uVar10 + 0x20 & 0xff);
  uVar10 = uVar3 + -((int)uVar11 >> 0x1f);
  if ((uVar5 | uVar11 << 1) == 0) {
    uVar10 = uVar10 & ~(uVar11 >> 0x1f);
  }
  return CONCAT44((uVar8 & 0x80000000) + ((uVar8 & 0x7fffffff) >> (uVar13 & 0xff)) +
                  (uint)CARRY4(uVar3,-((int)uVar11 >> 0x1f)),uVar10);
}


