/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017096a  Symbol: caseD_0 */

void switchD_00170a8c::caseD_0(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r6;
  int unaff_r10;
  byte in_r12;
  
  if (unaff_r10 != 0) {
    *(byte *)(unaff_r6 + 8) = in_r12 & 0xfb;
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


