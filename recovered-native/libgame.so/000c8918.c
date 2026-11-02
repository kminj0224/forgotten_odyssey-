/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8918  Symbol: Encrypt */

/* Encrypt(unsigned char*, unsigned char*, unsigned long) */

ulong Encrypt(uchar *param_1,uchar *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_000c8958;
  if ((param_2 == (uchar *)0x0) || (param_1 == (uchar *)0x0)) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    uVar2 = 0;
    iVar4 = DAT_000c8954;
    do {
      uVar3 = (uint)param_1[uVar2] ^ iVar4 >> 8;
      param_2[uVar2] = (uchar)uVar3;
      uVar2 = uVar2 + 1;
      iVar4 = iVar1 * ((uVar3 & 0xff) + iVar4) + DAT_000c895c;
    } while (uVar2 != param_3);
    param_3 = 1;
  }
  return param_3;
}


