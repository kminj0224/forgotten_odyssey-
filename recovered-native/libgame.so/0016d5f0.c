/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016d5f0  Symbol: png_write_info_before_PLTE */

void png_write_info_before_PLTE(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = DAT_0016d7e4 + 0x16d606;
  if ((param_2 != (undefined4 *)0x0) && (param_1 != 0)) {
    if ((*(uint *)(param_1 + 300) & 0x400) == 0) {
      png_write_sig();
      if ((*(int *)(param_1 + 300) << 0x13 < 0) && (*(int *)(param_1 + 0x2f4) != 0)) {
        png_warning(param_1,iVar4 + DAT_0016d7ec);
        *(undefined4 *)(param_1 + 0x2f4) = 0;
      }
      png_write_IHDR(param_1,*param_2,param_2[1],*(undefined *)(param_2 + 6),
                     *(undefined *)((int)param_2 + 0x19),*(undefined *)((int)param_2 + 0x1a),
                     *(undefined *)((int)param_2 + 0x1b),*(undefined *)(param_2 + 7));
      iVar2 = param_2[2];
      if (iVar2 << 0x1f < 0) {
        uVar5 = __extendsfdf2(param_2[10]);
        uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
        png_write_gAMA(param_1,uVar1,(int)uVar5,uVar1);
        iVar2 = param_2[2];
      }
      if (iVar2 << 0x14 < 0) {
        png_write_sRGB(param_1,*(undefined *)(param_2 + 0xb));
        iVar2 = param_2[2];
      }
      if (iVar2 << 0x13 < 0) {
        png_write_iCCP(param_1,param_2[0x31],0,param_2[0x32],param_2[0x33]);
        iVar2 = param_2[2];
      }
      if (iVar2 << 0x1e < 0) {
        png_write_sBIT(param_1,param_2 + 0x11,*(undefined *)((int)param_2 + 0x19));
        iVar2 = param_2[2];
      }
      if (iVar2 << 0x1d < 0) {
        uVar5 = __extendsfdf2(param_2[0x20]);
        __extendsfdf2(param_2[0x21]);
        __extendsfdf2(param_2[0x22]);
        __extendsfdf2(param_2[0x23]);
        __extendsfdf2(param_2[0x24]);
        __extendsfdf2(param_2[0x25]);
        __extendsfdf2(param_2[0x26]);
        __extendsfdf2(param_2[0x27]);
        png_write_cHRM(param_1,extraout_r1,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      }
      if ((param_2[0x30] != 0) && (uVar3 = param_2[0x2f], uVar3 < uVar3 + param_2[0x30] * 0x14)) {
        iVar4 = iVar4 + DAT_0016d7e8;
        do {
          iVar2 = png_handle_as_unknown(param_1,uVar3);
          if ((((iVar2 != 1) && (*(byte *)(uVar3 + 0x10) != 0)) &&
              ((*(byte *)(uVar3 + 0x10) & 6) == 0)) &&
             (((iVar2 == 3 || ((*(byte *)(uVar3 + 3) & 0x20) != 0)) ||
              ((*(uint *)(param_1 + 0x130) & 0x10000) != 0)))) {
            iVar2 = *(int *)(uVar3 + 0xc);
            if (iVar2 == 0) {
              png_warning(param_1,iVar4);
              iVar2 = *(int *)(uVar3 + 0xc);
            }
            png_write_chunk(param_1,uVar3,*(undefined4 *)(uVar3 + 8),iVar2);
          }
          uVar3 = uVar3 + 0x14;
        } while (uVar3 < (uint)(param_2[0x2f] + param_2[0x30] * 0x14));
      }
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x400;
    }
  }
  return;
}


