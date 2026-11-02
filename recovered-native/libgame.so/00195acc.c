/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00195acc  Symbol: FUN_00195acc */

uint FUN_00195acc(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00195b90 + 0x195ad4;
  if (param_1 == (int *)0x0) {
    param_2 = 0xffffffff;
  }
  else {
    if ((param_2 & 0x40) != 0) {
      param_2 = param_2 - 0x40;
      *(undefined4 *)(*param_1 + 0x54) = 0;
      param_1[0x1d] = 0;
      param_1[0x5a] = param_1[0x5a] | 0x40;
    }
    if ((param_2 & 0x20) != 0) {
      param_2 = param_2 - 0x20;
      *(undefined4 *)(*param_1 + 0x58) = 0;
      param_1[0x1c] = 0;
      *(undefined4 *)(*param_1 + 0x5c) = 0;
      param_1[0x5a] = param_1[0x5a] | 0x20;
    }
    if ((param_2 & 0x80) == 0) {
      param_1[0x43] = 0;
    }
    else {
      param_1[0x43] = 1;
      param_2 = param_2 - 0x80;
      param_1[0x5a] = param_1[0x5a] | 0x80;
    }
    if ((param_2 & 0x100) == 0) {
      param_1[0x34] = 1;
    }
    else {
      param_1[0x34] = 0;
      param_2 = param_2 - 0x100;
      *(undefined4 *)(*param_1 + 0x48) = *(undefined4 *)(iVar1 + DAT_00195b94);
      param_1[0x5a] = param_1[0x5a] | 0x100;
    }
    if ((param_2 & 1) == 0) {
      param_1[0x48] = 0;
    }
    else {
      param_1[0x48] = 1;
      param_2 = param_2 - 1;
    }
    iVar1 = DAT_00195b98;
    if ((param_2 & 0x10000) != 0) {
      param_1[0x5a] = param_1[0x5a] | 0x10000;
      param_2 = param_2 + iVar1;
    }
    param_1[0x5b] = 0;
  }
  return param_2;
}


