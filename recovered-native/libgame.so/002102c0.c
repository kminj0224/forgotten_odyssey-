/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002102c0  Symbol: FUN_002102c0 */

ulonglong FUN_002102c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  bool bVar6;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 == in_r12 || uVar4 == in_r12) {
    bVar6 = (param_1 | param_2 << 1) == 0;
    uVar5 = param_3;
    uVar1 = param_4;
    if (!bVar6) {
      bVar6 = (param_3 | param_4 << 1) == 0;
      uVar5 = param_1;
      uVar1 = param_2;
    }
    uVar3 = uVar1;
    if (((!bVar6) && ((unaff_r4 != in_r12 || ((uVar5 | uVar1 << 0xc) == 0)))) &&
       ((uVar4 != in_r12 || (uVar5 = param_3, uVar3 = param_4, (param_3 | param_4 << 0xc) == 0)))) {
      return (ulonglong)((uVar1 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
    }
    return CONCAT44(uVar3,uVar5) | 0x7ff8000000000000;
  }
  bVar6 = (param_1 | param_2 << 1) == 0;
  if (!bVar6) {
    bVar6 = (param_3 | param_4 << 1) == 0;
  }
  if (bVar6) {
    return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
  }
  if (unaff_r4 == 0) {
    uVar5 = param_2 & 0x80000000;
    do {
      iVar2 = (int)param_1 >> 0x1f;
      param_1 = param_1 << 1;
      param_2 = param_2 * 2 - iVar2;
    } while ((param_2 & 0x100000) == 0);
    param_2 = param_2 | uVar5;
    if (uVar4 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  do {
    iVar2 = (int)param_3 >> 0x1f;
    param_3 = param_3 << 1;
    param_4 = param_4 * 2 - iVar2;
  } while ((param_4 & 0x100000) == 0);
  return CONCAT44(param_2,param_1);
}


