/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d0fc  Symbol: FUN_0017d0fc */

bool FUN_0017d0fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0017d284 + 0x17d10a;
  if (*(int *)(param_1 + 0x168) << 0xe < 0) {
    if (param_2 < 0x100) {
      if (param_2 - 0x61U < 0x1a) {
        return true;
      }
      if (param_2 - 0x41U < 0x1a) {
        return true;
      }
      if (param_2 - 0xc0U < 0x17) {
        return true;
      }
      if (param_2 - 0xd8U < 0x1f) {
        return true;
      }
      if (0xf7 < param_2) {
        return true;
      }
      if (param_2 - 0x30U < 10) {
        return true;
      }
    }
    else {
      iVar1 = FUN_0019f630(param_2,*(undefined4 *)(iVar2 + DAT_0017d2c8));
      if (iVar1 != 0) {
        return true;
      }
      if ((uint)(param_2 + DAT_0017d2d8) <= DAT_0017d2dc) {
        return true;
      }
      if (param_2 == DAT_0017d2e0) {
        return true;
      }
      if ((uint)(param_2 + DAT_0017d2cc) < 9) {
        return true;
      }
      iVar1 = FUN_0019f630(param_2,*(undefined4 *)(iVar2 + DAT_0017d2d0));
      if (iVar1 != 0) {
        return true;
      }
    }
    if ((((param_2 != 0x2d) && (param_2 != 0x2e)) && (param_2 != 0x3a)) && (param_2 != 0x5f)) {
      if (param_2 < 0x100) {
        return param_2 == 0xb7;
      }
      iVar1 = FUN_0019f630(param_2,*(undefined4 *)(iVar2 + DAT_0017d2d4));
      if (iVar1 == 0) {
        iVar2 = FUN_0019f630(param_2,*(undefined4 *)(iVar2 + DAT_0017d2e4));
        return iVar2 != 0;
      }
    }
  }
  else {
    if (((param_2 == 0x3e) || (param_2 == 0x20)) || (param_2 == 0x2f)) {
      return false;
    }
    if (((((0x19 < param_2 - 0x41U) && (0x19 < param_2 - 0x61U)) &&
         ((9 < param_2 - 0x30U && (((param_2 != 0x5f && (param_2 != 0x2d)) && (param_2 != 0x3a))))))
        && (((param_2 != 0xb7 && (param_2 != 0x2e)) &&
            (((0x16 < param_2 - 0xc0U &&
              ((((0x1e < param_2 - 0xd8U && (DAT_0017d288 < param_2 - 0xf8U)) &&
                ((0x6f < (uint)(param_2 + DAT_0017d28c) &&
                 (((0xd < (uint)(param_2 + DAT_0017d28c + -0x70) &&
                   (0x1c80 < (uint)(param_2 + DAT_0017d290))) &&
                  (1 < (uint)(param_2 + DAT_0017d294))))))) &&
               ((1 < (uint)(param_2 + DAT_0017d294 + -0x33) &&
                (DAT_0017d29c < (uint)(param_2 + DAT_0017d298))))))) &&
             (DAT_0017d2a4 < (uint)(param_2 + DAT_0017d2a0))))))) &&
       (((DAT_0017d2ac < (uint)(param_2 + DAT_0017d2a8) &&
         (DAT_0017d2b4 < (uint)(param_2 + DAT_0017d2b0))) &&
        (DAT_0017d2bc < (uint)(param_2 + DAT_0017d2b8))))) {
      return (uint)(param_2 + DAT_0017d2c0) <= DAT_0017d2c4;
    }
  }
  return true;
}


