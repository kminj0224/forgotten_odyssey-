/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169eec  Symbol: png_set_IHDR */

void png_set_IHDR(int param_1,uint *param_2,uint param_3,uint param_4,undefined param_5,
                 undefined param_6,undefined param_7,undefined param_8,undefined param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 != (uint *)0x0) && (param_1 != 0)) {
    param_2[1] = param_4;
    *param_2 = param_3;
    *(undefined *)(param_2 + 6) = param_5;
    *(undefined *)((int)param_2 + 0x19) = param_6;
    *(undefined *)((int)param_2 + 0x1a) = param_8;
    *(undefined *)((int)param_2 + 0x1b) = param_9;
    *(undefined *)(param_2 + 7) = param_7;
    png_check_IHDR(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
    if ((uVar3 == 3) || (-1 < (int)(uVar3 << 0x1e))) {
      iVar2 = 1;
      *(undefined *)((int)param_2 + 0x1d) = 1;
    }
    else {
      iVar2 = 3;
      *(undefined *)((int)param_2 + 0x1d) = 3;
    }
    uVar1 = DAT_00169fa8;
    if ((int)(uVar3 << 0x1d) < 0) {
      *(char *)((int)param_2 + 0x1d) = (char)(iVar2 + 1);
      uVar1 = DAT_00169fa8;
      uVar3 = (uint)*(byte *)(param_2 + 6) * (iVar2 + 1);
      *(char *)((int)param_2 + 0x1e) = (char)uVar3;
    }
    else {
      uVar3 = (uint)*(byte *)(param_2 + 6) * iVar2;
      *(char *)((int)param_2 + 0x1e) = (char)uVar3;
    }
    if (uVar1 < param_3) {
      param_2[3] = 0;
    }
    else if ((uVar3 & 0xff) < 8) {
      param_2[3] = (uVar3 & 0xff) * param_3 + 7 >> 3;
    }
    else {
      param_2[3] = (uVar3 * 0x1000000 >> 0x1b) * param_3;
    }
  }
  return;
}


