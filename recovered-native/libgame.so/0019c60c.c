/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c60c  Symbol: FUN_0019c60c */

undefined4 FUN_0019c60c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
LAB_0019c688:
    uVar1 = 0;
  }
  else {
    iVar4 = 0;
    while (uVar3 = (uint)*(byte *)(param_1 + iVar4), uVar3 != 0) {
      if ((int)(uVar3 * 0x1000000) < 0) {
        if ((uVar3 & 0xe0) == 0xc0) {
          if ((*(byte *)(param_1 + iVar4 + 1) & 0xc0) != 0x80) goto LAB_0019c688;
          iVar4 = iVar4 + 2;
        }
        else if ((uVar3 & 0xf0) == 0xe0) {
          if (((*(byte *)(param_1 + iVar4 + 1) & 0xc0) != 0x80) ||
             ((*(byte *)(param_1 + iVar4 + 2) & 0xc0) != 0x80)) goto LAB_0019c688;
          iVar4 = iVar4 + 3;
        }
        else {
          if (((((uVar3 & 0xf8) != 0xf0) ||
               (iVar2 = param_1 + iVar4, (*(byte *)(iVar2 + 1) & 0xc0) != 0x80)) ||
              ((*(byte *)(iVar2 + 2) & 0xc0) != 0x80)) || ((*(byte *)(iVar2 + 3) & 0xc0) != 0x80))
          goto LAB_0019c688;
          iVar4 = iVar4 + 4;
        }
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


