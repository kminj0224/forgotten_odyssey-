/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8a44  Symbol: Decrypt */

/* Decrypt(unsigned char*, unsigned char*, unsigned long) */

ulong Decrypt(uchar *param_1,uchar *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar2 = DAT_000c8a80;
  if ((param_2 == (uchar *)0x0) || (param_1 == (uchar *)0x0)) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    uVar4 = 0;
    iVar5 = DAT_000c8a7c;
    do {
      iVar3 = DAT_000c8a84;
      bVar1 = param_1[uVar4];
      param_2[uVar4] = (byte)((uint)iVar5 >> 8) ^ bVar1;
      uVar4 = uVar4 + 1;
      iVar5 = iVar2 * ((uint)bVar1 + iVar5) + iVar3;
    } while (uVar4 != param_3);
    param_3 = 1;
  }
  return param_3;
}


