/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206918  Symbol: FUN_00206918 */

undefined4 FUN_00206918(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 8) {
    iVar2 = (int)&DAT_00206a08 + DAT_00206a30;
  }
  else if (param_2 < 9) {
    if (param_2 == 3) {
      iVar2 = DAT_00206a2c + 0x2069fc;
    }
    else if (param_2 < 4) {
      if (param_2 == 1) {
        iVar2 = DAT_00206a18 + 0x2069c0;
      }
      else {
        if (param_2 != 2) {
          return 0;
        }
        iVar2 = DAT_00206a10 + 0x2069a8;
      }
    }
    else if (param_2 == 4) {
      iVar2 = DAT_00206a24 + 0x2069e4;
    }
    else {
      if (param_2 != 7) {
        return 0;
      }
      iVar2 = DAT_00206a08 + 0x206970;
    }
  }
  else if (param_2 == 0x20) {
    iVar2 = DAT_00206a28 + 0x2069f0;
  }
  else if (param_2 < 0x21) {
    if (param_2 == 0x10) {
      iVar2 = DAT_00206a20 + 0x2069d8;
    }
    else {
      if (param_2 != 0x17) {
        return 0;
      }
      iVar2 = DAT_00206a1c + 0x2069cc;
    }
  }
  else if (param_2 == 0x44) {
    iVar2 = DAT_00206a14 + 0x2069b4;
  }
  else {
    if (param_2 != 0x97) {
      return 0;
    }
    iVar2 = DAT_00206a0c + 0x20698c;
  }
  uVar1 = (*(code *)PTR_wctype_00269fbc)(iVar2);
  return uVar1;
}


