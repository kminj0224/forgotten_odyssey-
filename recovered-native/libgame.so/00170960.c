/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00170960  Symbol: FUN_00170960 */

void FUN_00170960(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r6;
  
  if ((*(byte *)(unaff_r6 + 8) & 4) != 0) {
    *(byte *)(unaff_r6 + 8) = *(byte *)(unaff_r6 + 8) & 0xfb;
    uVar1 = *(byte *)(unaff_r6 + 10) - 1;
    *(char *)(unaff_r6 + 10) = (char)uVar1;
    uVar1 = (uint)*(byte *)(unaff_r6 + 9) * (uVar1 & 0xff);
    *(char *)(unaff_r6 + 0xb) = (char)uVar1;
    if ((uVar1 & 0xff) < 8) {
      *(uint *)(unaff_r6 + 4) = (uVar1 & 0xff) * unaff_r4 + 7 >> 3;
      FUN_00170998();
      return;
    }
    *(uint *)(unaff_r6 + 4) = (uVar1 * 0x1000000 >> 0x1b) * unaff_r4;
  }
  return;
}


