/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017afd0  Symbol: FUN_0017afd0 */

int FUN_0017afd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if ((param_2 < 1) || (param_1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)(param_1 + iVar1);
      if ((int)(uVar2 * 0x1000000) < 0) {
        if ((uVar2 & 0xe0) == 0xc0) {
          if (param_2 <= iVar1 + 1) {
            return iVar1;
          }
          uVar3 = (uint)*(byte *)(param_1 + iVar1 + 1);
          if ((uVar3 & 0xc0) != 0x80) {
LAB_0017b1a2:
            return -iVar1;
          }
          uVar2 = uVar3 & 0x3f | (uVar2 & 0x1f) << 6;
          if (uVar2 < 0x100) {
            if ((uVar2 - 9 < 2) || (uVar2 == 0xd)) {
              bVar6 = false;
            }
            else {
              bVar6 = uVar2 < 0x20;
            }
          }
          else if ((DAT_0017b1b4 < uVar2 + DAT_0017b1b0) && (DAT_0017b1b8 < uVar2 - 0x100)) {
            bVar6 = DAT_0017b1c0 < uVar2 + DAT_0017b1bc;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) goto LAB_0017b1a2;
          iVar1 = iVar1 + 2;
        }
        else if ((uVar2 & 0xf0) == 0xe0) {
          if (param_2 <= iVar1 + 2) {
            return iVar1;
          }
          uVar3 = (uint)*(byte *)(param_1 + iVar1 + 1);
          if (((uVar3 & 0xc0) != 0x80) ||
             (uVar5 = (uint)*(byte *)(param_1 + iVar1 + 2), (uVar5 & 0xc0) != 0x80))
          goto LAB_0017b1a2;
          uVar2 = uVar2 << 0xc & DAT_0017b1c4 | uVar5 & 0x3f | (uVar3 & 0x3f) << 6;
          if (uVar2 < 0x100) {
            if ((uVar2 - 9 < 2) || (uVar2 == 0xd)) {
              bVar6 = false;
            }
            else {
              bVar6 = uVar2 < 0x20;
            }
          }
          else if ((DAT_0017b1b4 < uVar2 + DAT_0017b1b0) && (DAT_0017b1b8 < uVar2 - 0x100)) {
            bVar6 = DAT_0017b1c0 < uVar2 + DAT_0017b1bc;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) goto LAB_0017b1a2;
          iVar1 = iVar1 + 3;
        }
        else {
          if ((uVar2 & 0xf8) != 0xf0) goto LAB_0017b1a2;
          if (param_2 <= iVar1 + 3) {
            return iVar1;
          }
          iVar4 = param_1 + iVar1;
          if ((((*(byte *)(iVar4 + 1) & 0xc0) != 0x80) || ((*(byte *)(iVar4 + 2) & 0xc0) != 0x80))
             || ((*(byte *)(iVar4 + 3) & 0xc0) != 0x80)) goto LAB_0017b1a2;
          uVar2 = (*(byte *)(iVar4 + 1) & 0x3f) << 0xc |
                  *(byte *)(iVar4 + 3) & 0x3f | (uVar2 & 7) << 0x12 |
                  (*(byte *)(iVar4 + 2) & 0x3f) << 6;
          if (uVar2 < 0x100) {
            if ((uVar2 - 9 < 2) || (uVar2 == 0xd)) {
              bVar6 = false;
            }
            else {
              bVar6 = uVar2 < 0x20;
            }
          }
          else if ((DAT_0017b1b4 < uVar2 + DAT_0017b1b0) && (DAT_0017b1b8 < uVar2 - 0x100)) {
            bVar6 = DAT_0017b1c0 < uVar2 + DAT_0017b1bc;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) goto LAB_0017b1a2;
          iVar1 = iVar1 + 4;
        }
      }
      else {
        if ((((uVar2 < 0x20) && (uVar2 != 0xd)) && (uVar2 != 10)) && (uVar2 != 9))
        goto LAB_0017b1a2;
        iVar1 = iVar1 + 1;
      }
    } while (iVar1 < param_2);
  }
  return iVar1;
}


