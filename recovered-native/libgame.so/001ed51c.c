/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ed51c  Symbol: FUN_001ed51c */

void FUN_001ed51c(uint param_1,uint param_2)

{
  void *pvVar1;
  
  if (0x3ffffffc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ed59c + DAT_001ed59c);
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 << 1) {
      param_1 = param_2 << 1;
    }
    if ((param_2 < param_1 && 0x1000 < param_1 + 0x1d) &&
       (param_1 = (param_1 + 0x1000) - (param_1 + 0x1d & 0xfff), 0x3ffffffb < param_1)) {
      param_1 = 0x3ffffffc;
    }
  }
  pvVar1 = operator_new(param_1 + 0xd);
  *(uint *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  return;
}


