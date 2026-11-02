/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001714d4  Symbol: png_set_rgb_to_gray_fixed */

void png_set_rgb_to_gray_fixed(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = DAT_001715a0 + 0x1714e0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 2) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x400000;
  }
  else {
    if (param_2 == 3) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x200000;
      cVar1 = *(char *)(param_1 + 0x1ea);
      goto joined_r0x00171504;
    }
    if (param_2 == 1) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x600000;
    }
  }
  cVar1 = *(char *)(param_1 + 0x1ea);
joined_r0x00171504:
  if (cVar1 == '\x03') {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x1000;
  }
  if ((param_4 < 0) || (param_3 < 0)) {
    sVar4 = (short)DAT_001715b8;
    sVar3 = (short)DAT_001715bc;
    sVar2 = (short)DAT_001715c0;
  }
  else if (DAT_001715a4 < param_4 + param_3) {
    png_warning(param_1,iVar5 + DAT_001715c4);
    sVar2 = (short)DAT_001715c0;
    sVar4 = (short)DAT_001715b8;
    sVar3 = (short)DAT_001715bc;
  }
  else {
    sVar2 = __udivsi3(param_3 << 0xf,DAT_001715a8);
    sVar3 = __udivsi3(param_4 << 0xf,DAT_001715a8);
    sVar4 = ((short)DAT_001715ac - sVar2) - sVar3;
  }
  *(short *)(param_1 + DAT_001715b0) = sVar2;
  *(short *)(param_1 + 0x2f0) = sVar3;
  *(short *)(param_1 + DAT_001715b4) = sVar4;
  return;
}


