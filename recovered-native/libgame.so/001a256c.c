/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a256c  Symbol: FUN_001a256c */

int FUN_001a256c(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_001a2604 + 0x1a2576;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    if (bVar1 == 0x67) {
      iVar2 = FUN_0019c30c(param_1,iVar3 + DAT_001a2610);
      if (iVar2 != 0) {
        return iVar3 + DAT_001a260c + 0x4c;
      }
    }
    else if (bVar1 < 0x68) {
      if (bVar1 == 0x61) {
        iVar2 = FUN_0019c30c(param_1,iVar3 + DAT_001a2614);
        if (iVar2 != 0) {
          return iVar3 + DAT_001a2618 + 0x18;
        }
        iVar2 = FUN_0019c30c(param_1,iVar3 + DAT_001a261c);
        if (iVar2 != 0) {
          return iVar3 + DAT_001a2618 + 100;
        }
      }
    }
    else if (bVar1 == 0x6c) {
      iVar2 = FUN_0019c30c(param_1,iVar3 + DAT_001a2608);
      if (iVar2 != 0) {
        return iVar3 + DAT_001a260c;
      }
    }
    else if ((bVar1 == 0x71) && (iVar2 = FUN_0019c30c(param_1,iVar3 + DAT_001a2620), iVar2 != 0)) {
      return iVar3 + DAT_001a2624 + 0x30;
    }
  }
  return 0;
}


