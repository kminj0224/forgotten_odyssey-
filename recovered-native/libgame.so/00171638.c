/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00171638  Symbol: png_set_background */

void png_set_background(int param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_3 == 0) {
      png_warning(param_1,DAT_0017169c + 0x171648 + DAT_001716a0);
    }
    else {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x80;
      memcpy((void *)(param_1 + 0x1fc),param_2,10);
      uVar1 = __truncdfsf2(param_5,param_6);
      *(char *)(param_1 + 500) = (char)param_3;
      *(undefined4 *)(param_1 + 0x1f8) = uVar1;
      *(uint *)(param_1 + 0x134) = (uint)(param_4 != 0) * 0x100 | *(uint *)(param_1 + 0x134);
    }
  }
  return;
}


