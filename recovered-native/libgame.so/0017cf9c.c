/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017cf9c  Symbol: FUN_0017cf9c */

bool FUN_0017cf9c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x168) << 0xe < 0) {
    if (param_2 < 0x100) {
      if (((0x19 < param_2 - 0x61U) && (0x19 < param_2 - 0x41U)) &&
         ((0x16 < param_2 - 0xc0U && ((0x1e < param_2 - 0xd8U && (param_2 < 0xf8)))))) {
LAB_0017d08a:
        return param_2 == 0x3a || param_2 == 0x5f;
      }
    }
    else {
      iVar1 = FUN_0019f630(param_2,*(undefined4 *)(DAT_0017d0a4 + 0x17cfaa + DAT_0017d0e8));
      if ((((iVar1 == 0) && (DAT_0017d0f0 < (uint)(param_2 + DAT_0017d0ec))) &&
          (param_2 != DAT_0017d0f4)) && (8 < (uint)(param_2 + DAT_0017d0f8))) goto LAB_0017d08a;
    }
  }
  else {
    if (((param_2 == 0x3e) || (param_2 == 0x20)) || (param_2 == 0x2f)) {
      return false;
    }
    if ((((0x19 < param_2 - 0x41U) && (0x19 < param_2 - 0x61U)) &&
        ((((param_2 != 0x3a && ((param_2 != 0x5f && (0x16 < param_2 - 0xc0U)))) &&
          (0x1e < param_2 - 0xd8U)) &&
         ((((DAT_0017d0a8 < param_2 - 0xf8U && (0xd < (uint)(param_2 + DAT_0017d0ac))) &&
           (0x1c80 < (uint)(param_2 + DAT_0017d0b0))) &&
          (((1 < (uint)(param_2 + DAT_0017d0b4) && (DAT_0017d0bc < (uint)(param_2 + DAT_0017d0b8)))
           && ((DAT_0017d0c4 < (uint)(param_2 + DAT_0017d0c0) &&
               ((DAT_0017d0cc < (uint)(param_2 + DAT_0017d0c8) &&
                (DAT_0017d0d4 < (uint)(param_2 + DAT_0017d0d0))))))))))))) &&
       (DAT_0017d0dc < (uint)(param_2 + DAT_0017d0d8))) {
      return (uint)(param_2 + DAT_0017d0e0) <= DAT_0017d0e4;
    }
  }
  return true;
}


